#!/usr/bin/env python3
"""Heurística: compara strings e constantes numéricas do decompilado com o corpo do SDK.
Imprime 'IGUAL' (conjuntos compatíveis) ou 'DIFERE' com o que sobra. Uso: diff_consts.py"""
import csv, os, re, sys, glob
ns = {}
exec(open('tools/assemble_sdk.py').read().split("reviewed = set()")[0], ns)
reviewed = {l.split('#')[0].strip() for l in open('docs/sdk_reviewed.txt') if l.strip() and not l.startswith('#')}
num = re.compile(r'(?<![\w.])(-?\d+\.\d+|-?0x[0-9a-fA-F]+|-?\d+)(?![\w.])')
def nums(t):
    out = set()
    for m in num.findall(t):
        try: v = float(int(m, 16)) if m.lower().lstrip('-').startswith('0x') else float(m)
        except: continue
        if v in (0, 1, -1, 2): continue
        out.add(round(v, 3))
    return out
def strs(t): return set(re.findall(r'"((?:[^"\\]|\\.)*)"', t))
res = []
for r in csv.DictReader(open('docs/sdk_match.csv')):
    k = f"{r['classe']}::{r['metodo']}"
    if r['veredito'] not in ('parcial', 'modificada-ESF') or k in reviewed or not r['arquivo_sdk']: continue
    fs = glob.glob(f"decomp_raw/{r['classe']}/{r['metodo']}__*.c")
    if not fs: continue
    d = open(fs[0]).read()
    d = d.split('{', 1)[1] if '{' in d else d
    p = ns['sdk_path'](r['arquivo_sdk']); t = open(p, encoding='latin-1').read()
    sdk = '\n'.join(ns['find_funcs'](t, r['classe'], r['metodo']))
    dn, sn = nums(d), nums(sdk); ds, ss = strs(d), strs(sdk)
    dn = {x for x in dn if x != int(x) or (x >= 100 and x % 4 and x < 100000)}   # só floats e inteiros 'de valor'
    sn_f = {x for x in sn} ; sn_all = sn | {round(x / 100, 3) for x in sn} | {round(x * 100, 3) for x in sn}
    noise = {'targetname', 'classname', 'target', 'model', 'message', 'netname', '333?', '333@', '33s?', '../game_shared/bitvec.h',
             'i >= 0 && i < GetNumBits()', 'class CBitVecAccessor CBitVec<32>::operator [](int)'}
    ds -= noise; ss -= noise
    extra_d = {x for x in dn if x not in sn_all}
    extra_s = {x for x in sn if x != int(x) and x not in nums(d)}
    sd = {x for x in (ds ^ ss) if not x.startswith('ASSERT')}
    ok = not extra_d and not extra_s and not sd
    res.append((k, ok, extra_d, extra_s, sd))
for k, ok, a, b, c in res:
    print(('IGUAL ' if ok else 'DIFERE'), k, '' if ok else f'| só decomp:{sorted(a)[:6]} só sdk:{sorted(b)[:6]} str:{sorted(c)[:3]}')
