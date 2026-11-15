#!/usr/bin/env python3
"""Infere nomes de campos (offset -> m_xxx) de uma classe alinhando, em cada função 'igual ao SDK',
a ordem de 1º uso dos offsets no decompilado com a ordem de 1º uso dos membros m_* no código do SDK.
Votação entre funções. Uso: name_fields.py <Classe> <hlsdk> <decomp_raw> <sdk_match.csv>"""
import sys, os, re, csv, collections
cls, sdk, raw, csvp = sys.argv[1:5]
members = set()
for f in ('player.h', 'cbase.h', 'monsters.h', 'basemonster.h'):
    pth = os.path.join(sdk, 'dlls', f)
    if os.path.exists(pth): members |= set(re.findall(r'\b(m_\w+)\b', open(pth, errors='ignore').read()))
sdkbody = {}
for fn in os.listdir(os.path.join(sdk, 'dlls')):
    if fn.endswith('.cpp'):
        t = open(os.path.join(sdk, 'dlls', fn), errors='ignore').read()
        for m in re.finditer(r'(?m)^[\w\s\*&:<>,]*?\b%s\s*::\s*(~?\w+)\s*\([^;{]*\)\s*\n?\s*\{' % cls, t):
            i = m.end(); d = 1
            while i < len(t) and d: d += (t[i] == '{') - (t[i] == '}'); i += 1
            sdkbody.setdefault(m.group(1), []).append(t[m.start():i])
votes = collections.defaultdict(collections.Counter)
used = 0
for row in csv.DictReader(open(csvp)):
    if row['classe'] != cls or row['veredito'] != 'provavel-igual': continue
    bodies = sdkbody.get(row['metodo'])
    if not bodies: continue
    for fl in os.listdir(os.path.join(raw, cls)):
        if not fl.startswith(row['metodo'] + '__'): continue
        txt = open(os.path.join(raw, cls, fl), errors='ignore').read()
        sig = re.search(r'(?m)^\w[\w\s\*]*?\b\w+\(([^,)]*)', txt)
        pm = re.search(r'(\w+)\s*$', sig.group(1)) if sig else None
        if not pm: continue
        p = re.escape(pm.group(1)); offs = []
        for m in re.finditer(r'\b%s->field_([0-9a-f]+)\b|\*\(\w+(?: \w+)? \*\)\(\*\(unsigned int \*\)&%s \+ (0x[0-9a-f]+|\d+)\)' % (p, p), txt):
            o = int(m.group(1), 16) if m.group(1) else int(m.group(2), 0)
            if o >= 0x60 and o not in offs: offs.append(o)     # 0..0x5f = CBaseEntity base (pev, think...)
        best = None
        for b in bodies:
            names = []
            for n in re.findall(r'\b(m_\w+)\b', b):
                if n in members and n not in names: names.append(n)
            if best is None or abs(len(names) - len(offs)) < abs(len(best) - len(offs)): best = names
        if best and len(best) == len(offs):          # só alinha quando as contagens batem (alta confiança)
            used += 1
            for o, n in zip(offs, best): votes[o][n] += 1
print(f'{used} funções alinhadas', file=sys.stderr)
rows = []
for o, c in sorted(votes.items()):
    n, v = c.most_common(1)[0]; tot = sum(c.values())
    rows.append((o, n, v, tot))
for o, n, v, tot in rows:
    print(f'0x{o:x}\t{o}\t{n}\t{v}/{tot}')
