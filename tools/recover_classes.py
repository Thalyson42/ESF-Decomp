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
    # base = classe (com vtable) dona de métodos herdados na vtable de c; a de vtable mais longa
    own = {owner(x) for x in e} - {c, None}
    cand = [d for d in own if d in VT and len(VT[d]) <= len(e) and not re.match(r'bad_|type_info|exception|__', d)]
    # só ancestrais: d tem de ter a vtable de c como compatível nos slots em que c não sobrescreve
    ok = [d for d in cand if all(e[i] == VT[d][i] or owner(e[i]) == c or owner(VT[d][i]) == d for i in range(len(VT[d])))]
    base[c] = max(ok or cand, key=lambda d: len(VT[d])) if (ok or cand) else None
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
SAVE = {}
try:
    SAVE = json.load(open(os.environ.get('SAVEFIELDS', 'symbols/save_fields.json')))
except Exception: pass
CT = {'FIELD_FLOAT':'float','FIELD_TIME':'float','FIELD_INTEGER':'int','FIELD_BOOLEAN':'BOOL','FIELD_SHORT':'short','FIELD_CHARACTER':'char','FIELD_STRING':'string_t','FIELD_MODELNAME':'string_t','FIELD_SOUNDNAME':'string_t','FIELD_VECTOR':'Vector','FIELD_POSITION_VECTOR':'Vector','FIELD_EHANDLE':'EHANDLE','FIELD_CLASSPTR':'CBaseEntity*','FIELD_ENTITY':'EOFFSET','FIELD_EVARS':'entvars_t*','FIELD_EDICT':'edict_t*','FIELD_POINTER':'void*','FIELD_FUNCTION':'void*'}
def chain(c):
    o = []
    while c and c not in o: o.append(c); c = base.get(c)
    return o
info = {}
for c in sorted(set(os.listdir(raw)) | set(VT)):
    if c.startswith('_') and c != '_funcoes_livres': continue
    cd = os.path.join(raw, c)
    fl = fields(cd) if os.path.isdir(cd) else {}
    info[c] = dict(base=base.get(c), base_origem=ORIGEM.get(c), virtuals=VT.get(c, []), fields=fl, methods=sorted(os.listdir(cd)) if os.path.isdir(cd) else [])
json.dump(info, open(os.path.join(out, 'classes.json'), 'w'), indent=1)
for c, d in info.items():
    if c == '_funcoes_livres' or re.match(r'bad_|type_info|exception$|__|_funcoes', c): continue
    b = d['base']; nb = len(VT.get(b, [])) if b else 0
    L = [f'// {c}.h -- reconstruído automaticamente (vtable + offsets). REVISAR.', f'#pragma once', '']
    L.append(f'class {c}' + (f' : public {b}' if b else '') + ' {' + (f'  // base: {ORIGEM.get(c)}' if b else '') + '\npublic:')
    for i, v in enumerate(d['virtuals']):
        if i < nb and b and VT[b][i] == v: continue
        L.append(f'    virtual void {meth(v)}();  // vtable[{i}] {v}')
    inh = set()
    L.append('    // campos observados (offset em bytes a partir de `this`; inclui os herdados)')
    named = {}
    for k in chain(c):
        for e in SAVE.get(k, []): named.setdefault(e['offset'], e)
    seen = set()
    for o in sorted(set(d['fields']) | {e['offset'] for e in SAVE.get(c, [])}):
        if o in named:
            e = named[o]; cnt = f'[{e["count"]}]' if e['count'] > 1 else ''
            L.append(f'    {CT.get(e["type"], "int")} {e["name"]}{cnt};  // +0x{o:x} ({o}) {e["type"]}  [save-table]')
        else: L.append(f'    {d["fields"][o]} f_{o:03x};  // +0x{o:x} ({o})')
    L.append('};')
    open(os.path.join(out, c + '.h'), 'w').write('\n'.join(L) + '\n')
print(len(info), 'classes;', sum(1 for d in info.values() if d['base']), 'com base inferida;', sum(1 for d in info.values() if d['virtuals']), 'com vtable')
