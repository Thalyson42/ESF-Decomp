#!/usr/bin/env python3
"""Troca sub_XXXXXX / g_XXXXXX nos decompilados por nomes reais do .so.
 - sub_48c080  -> Classe::Metodo  /  funcao      (base angr 0x400000)
 - g_6167c4    -> g_engfuncs.pfnXxx (nomes de enginefuncs_t do SDK) ou nome do dado global
Uso: symbolize.py <so> <decomp_raw> <hlsdk>   (idempotente; sobrescreve os .c)"""
import sys, os, re, subprocess, bisect
so, raw, sdk = sys.argv[1:4]
BASE = 0x400000
syms = []
for l in subprocess.run(['nm', '-S', so], capture_output=True, text=True).stdout.splitlines():
    p = l.split()
    if len(p) == 4: syms.append((int(p[0], 16), int(p[1], 16), p[2], p[3]))
syms.sort(); addrs = [s[0] for s in syms]
def look(va, kinds):
    i = bisect.bisect_right(addrs, va) - 1
    while i >= 0:
        a, sz, t, n = syms[i]
        if va - a > 0x10000: return None
        if t in kinds and (a == va or va < a + max(sz, 1)): return n, va - a
        if a < va - 0x100000: return None
        i -= 1
        if va - a > 0x4000: return None
    return None
def pretty(n):
    if n.startswith('_$_'):
        m = re.match(r'_\$_(\d+)(\w+)', n); return '~' + m.group(2)[:int(m.group(1))] if m else n
    for m in re.finditer(r'__', n):
        if m.start() == 0: continue
        r = n[m.end():]
        if r.startswith('C') and re.match(r'C\d', r): r = r[1:]
        mm = re.match(r'(\d+)', r)
        if mm:
            L = int(mm.group(1)); c = r[len(mm.group(1)):][:L]
            if len(c) == L and re.fullmatch(r'[A-Za-z_]\w*', c): return f'{c}::{n[:m.start()]}'
        if r.startswith('F'): return n[:m.start()]
    return n
# PLT: chamadas a funções do próprio .so passam pela PLT (preempção de símbolos)
PLT = {}
sec = subprocess.run(['readelf', '-SW', so], capture_output=True, text=True).stdout
mp = re.search(r'\.plt\s+PROGBITS\s+([0-9a-f]+)', sec)
if mp:
    pbase = int(mp.group(1), 16); i = 0
    for l in subprocess.run(['readelf', '-rW', so], capture_output=True, text=True).stdout.splitlines():
        p = l.split()
        if len(p) >= 5 and p[2] == 'R_386_JUMP_SLOT':
            PLT[pbase + 16 * (i + 1)] = p[4]; i += 1
# enginefuncs_t do SDK
ef = []
t = open(os.path.join(sdk, 'engine', 'eiface.h'), errors='ignore').read()
b = re.search(r'typedef struct enginefuncs_s\s*\{(.*?)\}\s*enginefuncs_t;', t, re.S).group(1)
for l in b.splitlines():
    m = re.search(r'\(\*(\w+)\)', re.sub(r'//.*', '', l))
    if m: ef.append(m.group(1))
tot = 0
for root, _, fs in os.walk(raw):
    for f in fs:
        if not f.endswith('.c'): continue
        p = os.path.join(root, f); s = open(p, errors='ignore').read(); o = s
        def sub(m):
            va = int(m.group(1), 16) - BASE
            if va in PLT: return pretty(PLT[va])
            r = look(va, 'TtWw')
            return pretty(r[0]) if r and r[1] == 0 else m.group(0)
        s = re.sub(r'\bsub_([0-9a-f]{5,6})\b', sub, s)
        def g(m):
            r = look(int(m.group(1), 16) - BASE, 'BbDdVvRrGgSs')
            if not r: return m.group(0)
            n, off = r
            if n == 'g_engfuncs' and off % 4 == 0 and off // 4 < len(ef): return f'g_engfuncs.{ef[off//4]}'
            return n if off == 0 else f'{n}+{off}'
        s = re.sub(r'\bg_([0-9a-f]{5,6})\b', g, s)
        if s != o: open(p, 'w').write(s); tot += 1
print(tot, 'arquivos alterados')
