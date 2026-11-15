#!/usr/bin/env python3
"""Reconstrói esqueletos de classes (.h) a partir do hl_i386.so + decomp_raw/.
 - vtable (__vt_<len>Nome) -> métodos virtuais em ordem + classe-base inferida (prefixo comum de vtable)
 - campos: offsets acessados em `this` nas funções decompiladas
Uso: recover_classes.py <so> <decomp_raw> <saida_headers> """
import sys, os, re, subprocess, collections, json, struct
so, raw, out = sys.argv[1:4]
os.makedirs(out, exist_ok=True)
data = open(so, 'rb').read()
# --- seções para mapear endereço virtual -> offset no arquivo
import io
def sections():
    r = subprocess.run(['readelf', '-SW', so], capture_output=True, text=True).stdout
    s = []
    for l in r.splitlines():
        m = re.match(r'\s*\[\s*\d+\]\s+(\S+)\s+\S+\s+([0-9a-f]+)\s+([0-9a-f]+)\s+([0-9a-f]+)', l)
        if m: s.append((int(m.group(2), 16), int(m.group(3), 16), int(m.group(4), 16)))
    return s
SEC = sections()
def rd(va):
    for a, o, sz in SEC:
        if a <= va < a + sz and a:
            return struct.unpack_from('<I', data, o + va - a)[0]
    return None
# --- símbolos
func_at = {}; vts = {}
for l in subprocess.run(['nm', '-S', so], capture_output=True, text=True).stdout.splitlines():
    p = l.split()
    if len(p) != 4: continue
    a, s, t, n = int(p[0], 16), int(p[1], 16), p[2], p[3]
    if t in 'TtWw': func_at.setdefault(a, n)
    if n.startswith('__vt_') and t in 'VvDdRr': vts[n] = (a, s)
def clsname(n):
    m = re.match(r'__vt_(\d+)(\w+)', n)
    return m.group(2)[:int(m.group(1))] if m else None
def meth(n):
    n2 = re.sub(r'^_\$_', '~', n) if n.startswith('_$_') else n
    return n2.split('__')[0] if not n.startswith('_$_') else '~' + re.sub(r'^_\$_\d+', '', n)
RELOC = {}
for l in subprocess.run(['readelf', '-rW', so], capture_output=True, text=True).stdout.splitlines():
    p = l.split()
    if len(p) >= 5 and p[2] == 'R_386_32': RELOC[int(p[0], 16)] = p[4]
    elif len(p) >= 3 and p[2] == 'R_386_RELATIVE': RELOC[int(p[0], 16)] = func_at.get(rd(int(p[0], 16)), '0')
VT = {}
for n, (a, s) in vts.items():
    c = clsname(n)
    if not c: continue
    ents = []
    for i in range(s // 4):
        ents.append(RELOC.get(a + 4 * i, '0'))
    VT[c] = ents[2:] if len(ents) > 2 else ents  # gcc2.95: [0]=delta, [1]=typeinfo
# --- base inferida
def prefix(a, b):
    k = 0
    while k < min(len(a), len(b)) and a[k] == b[k]: k += 1
    return k
def owner(n):
    m = re.search(r'__(?:C)?(\d+)(\w+)', n)
    if n.startswith('_$_'): m = re.match(r'_\$_(\d+)(\w+)', n)
    return m.group(2)[:int(m.group(1))] if m else None
base = {}
for c, e in VT.items():
    best = None
    for d, f in VT.items():
        if d == c or len(f) > len(e) or not f: continue
        if all(e[i] == f[i] or owner(e[i]) == c for i in range(len(f))):
            # tem que ser realmente um ancestral: algum slot herdado aponta para a própria classe d ou ancestral dela
            if best is None or len(f) > len(VT[best]): best = d
            elif len(f) == len(VT[best]) and sum(owner(x) == d for x in e) > sum(owner(x) == best for x in e): best = d
    base[c] = best
SDKBASE = {}
SDKDIR = os.environ.get('HLSDK')
if SDKDIR:
    for root, _, fs in os.walk(SDKDIR):
        for fn in fs:
            if fn.endswith(('.h', '.cpp')):
                for m in re.finditer(r'(?m)^class\s+(\w+)\s*:\s*public\s+(\w+)', open(os.path.join(root, fn), errors='ignore').read()):
                    SDKBASE.setdefault(m.group(1), m.group(2))
ORIGEM = {}
base['CBaseEntity'] = None
for c in list(base):
    if base[c] and (base[c] not in VT or re.match(r'bad_|type_info|exception|__', base[c])): base[c] = None
for c in list(base):
    if c in SDKBASE: base[c] = SDKBASE[c]; ORIGEM[c] = 'SDK'
    else: ORIGEM[c] = 'heuristica' if base[c] else None
ORIGEM['CBaseEntity'] = 'SDK (raiz)'
# --- campos
FT = {'unsigned int': 'int', 'int': 'int', 'float': 'float', 'char': 'char', 'unsigned short': 'short', 'short': 'short', 'unsigned char': 'char', 'double': 'double'}
def fields(cdir):
    f = collections.defaultdict(set)
    for fn in os.listdir(cdir):
        t = open(os.path.join(cdir, fn), errors='ignore').read()
        sig = re.search(r'(?m)^(?:\w[\w\s\*]*?)\s\**\w+\(([^,)]*)', t)
        if not sig: continue
        pm = re.search(r'(\w+)\s*$', sig.group(1))
        if not pm: continue
        p = pm.group(1)
        # pattern B: *(T *)(*(unsigned int *)&P + N)  e  *(T *)(P + N)
        for m in re.finditer(r'\*\(((?:unsigned )?\w+) \*\)\(\*\(unsigned int \*\)&%s \+ (0x[0-9a-f]+|\d+)\)' % re.escape(p), t):
            f[int(m.group(2), 0)].add(FT.get(m.group(1), 'int'))
        # pattern A: P->field_X com struct typedef
        tm = re.match(r'(?s).*?\b(st_\w+)\s*\*\s*%s\b' % re.escape(p), t)
        if tm:
            sm = re.search(r'typedef struct %s \{(.*?)\} %s;' % (tm.group(1), tm.group(1)), t, re.S)
            if sm:
                for fm in re.finditer(r'(?:struct \w+|unsigned \w+|\w+)\s*\*?\s*field_([0-9a-f]+)(?:\[\d+\])?;', sm.group(1)):
                    ty = re.match(r'\s*(unsigned int|unsigned short|unsigned char|float|double|int|char|short)\b', fm.group(0))
                    off = int(fm.group(1), 16)
                    if off > 0: f[off].add(FT.get(ty.group(1), 'int') if ty else 'void*')
    return {o: sorted(t)[0] for o, t in f.items()}
info = {}
for c in sorted(set(os.listdir(raw)) | set(VT)):
    if c.startswith('_') and c != '_funcoes_livres': continue
    cd = os.path.join(raw, c)
    fl = fields(cd) if os.path.isdir(cd) else {}
    info[c] = dict(base=base.get(c), base_origem=ORIGEM.get(c), virtuals=VT.get(c, []), fields=fl, methods=sorted(os.listdir(cd)) if os.path.isdir(cd) else [])
json.dump(info, open(os.path.join(out, 'classes.json'), 'w'), indent=1)
for c, d in info.items():
    if c == '_funcoes_livres': continue
    b = d['base']; nb = len(VT.get(b, [])) if b else 0
    L = [f'// {c}.h -- reconstruído automaticamente (vtable + offsets). REVISAR.', f'#pragma once', '']
    L.append(f'class {c}' + (f' : public {b}' if b else '') + ' {' + (f'  // base: {ORIGEM.get(c)}' if b else '') + '\npublic:')
    for i, v in enumerate(d['virtuals']):
        if i < nb and b and VT[b][i] == v: continue
        L.append(f'    virtual void {meth(v)}();  // vtable[{i}] {v}')
    inh = set()
    L.append('    // campos observados (offset em bytes a partir de `this`; inclui os herdados)')
    for o in sorted(d['fields']): L.append(f'    {d["fields"][o]} f_{o:03x};  // +0x{o:x} ({o})')
    L.append('};')
    open(os.path.join(out, c + '.h'), 'w').write('\n'.join(L) + '\n')
print(len(info), 'classes;', sum(1 for d in info.values() if d['base']), 'com base inferida;', sum(1 for d in info.values() if d['virtuals']), 'com vtable')
