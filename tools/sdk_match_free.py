#!/usr/bin/env python3
"""Como sdk_match.py, mas para FUNCOES LIVRES (sem Classe::). Compara decomp_raw/_funcoes_livres/*.c com as funcoes de nivel
superior do HL SDK (dlls/, pm_shared/, game_shared/) de mesmo nome. Gera docs/sdk_match_free.csv: metodo,arquivo_sdk,score,veredito,linhas.
uso: python3 tools/sdk_match_free.py <pasta_hlsdk> decomp_raw docs/sdk_match_free.csv"""
import os, re, sys, csv, collections
sdk, raw, out = sys.argv[1], sys.argv[2], sys.argv[3]
sys.path.insert(0, os.path.dirname(__file__))

def strip_noise(s):
    o = list(s); i = 0; n = len(s)
    while i < n:
        if s.startswith('//', i):
            j = s.find('\n', i); j = n if j < 0 else j
            for k in range(i, j): o[k] = ' '
            i = j
        elif s.startswith('/*', i):
            j = s.find('*/', i); j = n if j < 0 else j + 2
            for k in range(i, j):
                if s[k] != '\n': o[k] = ' '
            i = j
        elif s[i] in '"\'':
            c = s[i]; j = i + 1
            while j < n and s[j] != c: j += 2 if s[j] == '\\' else 1
            for k in range(i + 1, min(j, n)): o[k] = ' '
            i = j + 1
        else: i += 1
    return ''.join(o)

HDR = re.compile(r'(?m)^(?!\s)(?:static\s+|inline\s+|extern\s+)*[\w:\*&<> ,]+?[\s\*&]([A-Za-z_]\w*)\s*\(([^;{}()]*(?:\([^)]*\)[^;{}()]*)*)\)\s*(?:const)?\s*\n?\s*\{')

def bodies():
    d = collections.defaultdict(list)
    for root in ('dlls', 'pm_shared', 'game_shared'):
        p = os.path.join(sdk, root)
        if not os.path.isdir(p): continue
        for f in sorted(os.listdir(p)):
            if not f.endswith(('.cpp', '.c')): continue
            t = open(os.path.join(p, f), errors='ignore').read(); ts = strip_noise(t)
            for m in HDR.finditer(ts):
                nm = m.group(1)
                if nm in ('if', 'while', 'for', 'switch', 'return', 'sizeof', 'else'): continue
                if '::' in ts[m.start():m.start(1)]: continue
                i = m.end(); depth = 1
                while i < len(ts) and depth:
                    depth += (ts[i] == '{') - (ts[i] == '}'); i += 1
                d[nm].append((f, t[m.start():i]))
    return d

def tokens_sdk(b):
    return set(re.findall(r'"[^"]*"', b)) | set(re.findall(r'\b\w+\b', b)) | {x.rstrip('f') for x in re.findall(r'\b\d+\.\d+f?\b', b)}

def tokens_dec(txt):
    strs = set(re.findall(r'"[^"]*"', txt)); calls = set()
    for m in re.finditer(r'\b([A-Za-z_]\w*?)__\d+C\w+\(|\b([A-Z]\w+)\(', txt):
        n = m.group(1) or m.group(2)
        if n and not n.startswith(('sub_', 'st_', 'g_')): calls.add(n)
    nums = {re.sub(r'f$', '', x) for x in re.findall(r'(?<![\w.])\d+\.\d+(?![\w.])', txt)} - {'0.0', '1.0'}
    return strs, calls, nums

B = bodies(); rows = []
cp = os.path.join(raw, '_funcoes_livres')
for f in sorted(os.listdir(cp)):
    if not f.endswith('.c'): continue
    name = f[:-2]; meth = name.split('__')[0]
    txt = open(os.path.join(cp, f), errors='ignore').read(); lines = txt.count('\n')
    cands = B.get(meth) or []
    if not cands: rows.append((name, '', '', 'sem-equivalente-no-sdk', lines)); continue
    s, c, n = tokens_dec(txt); toks = s | c | n
    best = (-2, cands[0][0])
    for fn, b in cands:
        st = tokens_sdk(b); sc = (len(toks & st) / len(toks)) if toks else -1
        if sc > best[0]: best = (sc, fn)
    sc, fn = best
    v = 'trivial(sem fichas)' if sc == -1 else ('provavel-igual' if sc >= .85 else ('parcial' if sc >= .5 else 'modificada-ESF'))
    rows.append((name, fn, round(sc, 2), v, lines))
with open(out, 'w', newline='') as fh:
    w = csv.writer(fh); w.writerow(['funcao', 'arquivo_sdk', 'score', 'veredito', 'linhas_decomp']); w.writerows(rows)
print(collections.Counter(r[3] for r in rows))
