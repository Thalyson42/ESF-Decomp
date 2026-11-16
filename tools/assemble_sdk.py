#!/usr/bin/env python3
"""Monta src/server/sdk/<arquivo>.cpp a partir das funções marcadas 'provavel-igual' em docs/sdk_match.csv.
Cada função é extraída do HL SDK (HLSDK=<pasta>, padrão /home/claude/hlsdk/dlls) com o corpo original.
Uso: HLSDK=/home/claude/hlsdk python3 tools/assemble_sdk.py"""
import csv, os, re, sys, collections

SDK = os.environ.get('HLSDK', '/home/claude/hlsdk')
OUT = 'src/server/sdk'
os.makedirs(OUT, exist_ok=True)

def strip_noise(s):
    """devolve s com comentários/strings/chars trocados por espaços (mesmo tamanho) para casar chaves."""
    out = list(s); i = 0; n = len(s)
    while i < n:
        c = s[i]
        if s.startswith('//', i):
            j = s.find('\n', i); j = n if j < 0 else j
            for k in range(i, j): out[k] = ' '
            i = j
        elif s.startswith('/*', i):
            j = s.find('*/', i); j = n if j < 0 else j + 2
            for k in range(i, j):
                if s[k] != '\n': out[k] = ' '
            i = j
        elif c in '"\'':
            j = i + 1
            while j < n and s[j] != c:
                j += 2 if s[j] == '\\' else 1
            for k in range(i + 1, min(j, n)):
                out[k] = ' '
            i = j + 1
        else:
            i += 1
    return ''.join(out)

def find_funcs(text, cls, meth):
    clean = strip_noise(text)
    res = []
    pat = re.compile(r'^[ \t]*(?:[\w:<>\*&~ \t,]+?[ \t\*&]+)?' + re.escape(cls) + r'[ \t]*::[ \t]*' + re.escape(meth) + r'[ \t]*\(', re.M)
    for m in pat.finditer(clean):
        # fecha parênteses dos parâmetros
        i = m.end(); depth = 1
        while i < len(clean) and depth:
            depth += (clean[i] == '(') - (clean[i] == ')'); i += 1
        # entre ')' e '{' só pode haver espaço / const / inicializadores (: a(b), c(d))
        j = i
        while j < len(clean) and clean[j] != '{' and clean[j] != ';':
            j += 1
        if j >= len(clean) or clean[j] == ';':
            continue                                  # declaração, não definição
        depth = 0; k = j
        while k < len(clean):
            depth += (clean[k] == '{') - (clean[k] == '}')
            k += 1
            if depth == 0: break
        start = text.rfind('\n', 0, m.start()) + 1
        # tipo de retorno sozinho na linha anterior (estilo "void\nCFoo::Bar(")
        if text[start:m.start()].strip() == '' or re.match(r'^\s*' + re.escape(cls), clean[start:]):
            pstart = text.rfind('\n', 0, start - 1) + 1
            prev = clean[pstart:start - 1].strip()
            if prev and not re.search(r'[;{}#)]$', prev) and not prev.startswith('#'):
                start = pstart
        res.append(text[start:k])
    return res

def sdk_path(name):
    for root, _, files in os.walk(SDK):
        if '/dmc' in root or '/ricochet' in root or '/cl_dll' in root: continue
        if name in files: return os.path.join(root, name)
    return None

rows = [r for r in csv.DictReader(open('docs/sdk_match.csv')) if r['veredito'] == 'provavel-igual']
byfile = collections.defaultdict(list)
for r in rows: byfile[r['arquivo_sdk']].append(r)

tot = miss = 0
report = []
for fn, lst in sorted(byfile.items()):
    p = sdk_path(fn)
    if not p:
        report.append(f'{fn}: arquivo não encontrado'); miss += len(lst); continue
    text = open(p, encoding='latin-1').read()
    # includes do arquivo original
    incs = [l for l in text.split('\n') if l.startswith('#include')]
    # ordem do SDK
    pos = {}
    chunks = {}
    for r in lst:
        fs = find_funcs(text, r['classe'], r['metodo'])
        if not fs:
            miss += 1; report.append(f'{fn}: {r["classe"]}::{r["metodo"]} não achada'); continue
        for f in fs:
            chunks[(r['classe'], r['metodo'], f)] = (text.find(f), r['score'])
    body = []
    for (c, m, f), (ps, sc) in sorted(chunks.items(), key=lambda kv: kv[1][0]):
        body.append(f'// [SDK score {sc}] {c}::{m}\n{f}\n')
        tot += 1
    if not body: continue
    out = (f'// sdk/{fn} -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).\n'
           f'// Gerado por tools/assemble_sdk.py a partir de {p.replace(SDK, "<hlsdk>")}. Conferir contra decomp_raw ao compilar.\n'
           + '\n'.join(incs) + '\n\n' + '\n'.join(body))
    open(os.path.join(OUT, fn), 'w', encoding='utf-8').write(out)
print(f'funções montadas: {tot}; não achadas: {miss}')
open('docs/sdk_assemble_report.txt', 'w').write('\n'.join(report) + '\n')
