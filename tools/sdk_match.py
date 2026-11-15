#!/usr/bin/env python3
"""Compara cada função decompilada (decomp_raw/) com a função de mesmo nome no HL SDK.
Gera docs/sdk_match.csv com: classe, metodo, arquivo_sdk, score, veredito.
Score = fração de 'fichas' (strings, nomes de funções chamadas, constantes) do decompilado que aparecem no corpo do SDK."""
import os, re, sys, csv, collections
sdk, raw, out = sys.argv[1], sys.argv[2], sys.argv[3]

def bodies():
    d = collections.defaultdict(list)
    for root in ('dlls', 'pm_shared', 'game_shared'):
        p = os.path.join(sdk, root)
        if not os.path.isdir(p): continue
        for f in os.listdir(p):
            if not f.endswith(('.cpp', '.c')): continue
            t = open(os.path.join(p, f), errors='ignore').read()
            for m in re.finditer(r'(?m)^[\w\s\*&:<>,]*?\b(\w+)\s*::\s*(~?\w+)\s*\([^;{]*\)\s*(?:const)?\s*\n?\s*\{', t):
                i = m.end(); depth = 1
                while i < len(t) and depth:
                    depth += (t[i] == '{') - (t[i] == '}'); i += 1
                d[(m.group(1), m.group(2).lstrip('~') if m.group(2).startswith('~') else m.group(2))].append((f, t[m.start():i]))
    return d

def tokens_sdk(b):
    return set(re.findall(r'"[^"]*"', b)) | set(re.findall(r'\b\w+\b', b)) | {x.rstrip('f') for x in re.findall(r'\b\d+\.\d+f?\b', b)}

def tokens_dec(txt):
    strs = set(re.findall(r'"[^"]*"', txt))
    calls = set()
    for m in re.finditer(r'\b([A-Za-z_]\w*?)__\d+C\w+\(|\b([A-Z]\w+)\(', txt):
        n = (m.group(1) or m.group(2))
        if n and not n.startswith('sub_') and not n.startswith('st_') and not n.startswith('g_'): calls.add(n)
    nums = {re.sub(r'f$', '', x) for x in re.findall(r'(?<![\w.])\d+\.\d+(?![\w.])', txt)} - {'0.0', '1.0'}
    return strs, calls, nums

def main():
    B = bodies(); rows = []
    for cdir in sorted(os.listdir(raw)):
        cp = os.path.join(raw, cdir)
        if not os.path.isdir(cp): continue
        for f in sorted(os.listdir(cp)):
            if not f.endswith('.c'): continue
            name = f[:-2]; meth = name.split('__')[0]
            cands = B.get((cdir, meth)) or []
            txt = open(os.path.join(cp, f), errors='ignore').read()
            lines = txt.count('\n')
            if not cands:
                rows.append((cdir, meth, '', '', 'sem-equivalente-no-sdk', lines)); continue
            s, c, n = tokens_dec(txt); toks = s | c | n
            best = (0, cands[0][0])
            for fn, b in cands:
                st = tokens_sdk(b)
                sc = (len(toks & st) / len(toks)) if toks else -1
                if sc > best[0] or best[0] == 0 and sc == -1: best = (sc, fn)
            sc, fn = best
            v = 'trivial(sem fichas)' if sc == -1 else ('provavel-igual' if sc >= .85 else ('parcial' if sc >= .5 else 'modificada-ESF'))
            rows.append((cdir, meth, fn, round(sc, 2), v, lines))
    with open(out, 'w', newline='') as fh:
        w = csv.writer(fh); w.writerow(['classe', 'metodo', 'arquivo_sdk', 'score', 'veredito', 'linhas_decomp']); w.writerows(rows)
    print(collections.Counter(r[4] for r in rows))
main()
