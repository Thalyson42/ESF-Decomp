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


def top_level_functions(text):
    """[(ini, fim)] dos corpos de funções definidas no nível 0 (ini = começo da assinatura). Ignora comentários/strings."""
    spans, depth, i, n = [], 0, 0, len(text)
    last = 0            # fim da última declaração de nível 0 (';' ou '}' ou linha #)
    while i < n:
        c = text[i]
        if text.startswith('//', i):
            i = text.find('\n', i); i = n if i < 0 else i; continue
        if text.startswith('/*', i):
            i = text.find('*/', i); i = n if i < 0 else i + 2; continue
        if c in '"\'':
            j = i + 1
            while j < n and text[j] != c:
                j += 2 if text[j] == '\\' else 1
            i = j + 1; continue
        if c == '#' and depth == 0 and (i == 0 or text[i-1] == '\n'):
            while True:                                   # diretiva (com continuação)
                j = text.find('\n', i); j = n if j < 0 else j
                if j > 0 and text[j-1] == '\\' and j < n: i = j + 1; continue
                i = j; break
            last = i; continue
        if c == '{':
            if depth == 0:
                head = text[last:i]
                import re as _re
                h = _re.sub(r'//[^\n]*|/\*.*?\*/', '', head, flags=_re.S).strip()
                is_fn = ('(' in h and h.rstrip().endswith((')', 'const')) and
                         not _re.search(r'\b(class|struct|enum|namespace|union)\b|=|\b(if|while|for|switch)\s*\(', h.split('(')[0]) and
                         not h.startswith(('TYPEDESCRIPTION', 'static const')))
                if is_fn:
                    d = 1; j = i + 1
                    while j < n and d:
                        if text.startswith('//', j): j = text.find('\n', j); continue
                        if text.startswith('/*', j): j = text.find('*/', j) + 2; continue
                        if text[j] in '"\'':
                            q = text[j]; j += 1
                            while j < n and text[j] != q: j += 2 if text[j] == '\\' else 1
                        elif text[j] == '{': d += 1
                        elif text[j] == '}': d -= 1
                        j += 1
                    start = last + (len(head) - len(head.lstrip()))
                    spans.append((start, j)); i = j; last = j; continue
            depth += 1
        elif c == '}':
            depth -= 1
            if depth == 0: last = i + 1
        elif c == ';' and depth == 0:
            last = i + 1
        i += 1
    return spans

def sdk_path(name):
    for root, _, files in os.walk(SDK):
        if '/dmc' in root or '/ricochet' in root or '/cl_dll' in root: continue
        if name in files: return os.path.join(root, name)
    return None

reviewed = set()
if os.path.exists('docs/sdk_reviewed.txt'):          # funções 'parcial' conferidas à mão: iguais ao SDK
    reviewed = {l.split('#')[0].strip() for l in open('docs/sdk_reviewed.txt') if l.strip() and not l.startswith('#')}
def _lst(fn):
    return {l.split('#')[0].strip() for l in open(fn) if l.strip() and not l.startswith('#')} if os.path.exists(fn) else set()
heur = _lst('docs/sdk_heuristic.txt')       # constantes/strings batem com o SDK (não lidas linha a linha)
pend = _lst('docs/sdk_pending.txt')         # ainda a conferir: corpo do SDK usado como base provisória
excluded = _lst('docs/sdk_excluded.txt')     # escritas à mão em outro arquivo (não gerar aqui: símbolo duplicado)
rows = [r for r in csv.DictReader(open('docs/sdk_match.csv'))
        if (r['veredito'] == 'provavel-igual' or f"{r['classe']}::{r['metodo']}" in reviewed | heur | pend)
        and f"{r['classe']}::{r['metodo']}" not in excluded]
tag = lambda k, sc: (f'[SDK score {sc}]' if k not in heur and k not in pend else ('[SDK heurística]' if k in heur else '[SDK NÃO CONFERIDA]'))
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
    keep = {}                      # posição inicial do trecho -> (texto aprovado, tag)
    for (c, m, f), (ps, sc) in chunks.items():
        keep[ps] = (f, f'// {tag(c + "::" + m, sc)} {c}::{m}\n')
        tot += 1
    if not keep: continue
    spans = top_level_functions(text)
    out_parts, cur = [], 0
    for (a0, b0) in spans:
        out_parts.append(text[cur:a0])
        hit = [k for k in keep if a0 <= k < b0 or k == a0]
        if hit:
            out_parts.append(keep[hit[0]][1] + text[a0:b0])
        elif (lambda h: (re.search(r'(\w+)\s*\(', h) or [None, ''])[1] in excluded and '::' not in h)(text[a0:b0].split('{')[0]):
            out_parts.append('// [fora desta etapa: escrita à mão em outro arquivo] ' + ' '.join(text[a0:b0].split('{')[0].split())[:90])
        elif '::' not in text[a0:b0].split('{')[0]:     # função livre (fora das classes): mantida, não faz parte do sdk_match.csv
            out_parts.append('// [SDK NÃO CONFERIDA: função livre] \n' + text[a0:b0])
        else:
            sig = ' '.join(text[a0:b0].split('{')[0].split())[:90]
            out_parts.append('// [fora desta etapa: diferente do SDK ou definida em outro arquivo] ' + sig)
        cur = b0
    out_parts.append(text[cur:])
    out = (f'// sdk/{fn} -- arquivo do HL SDK com SÓ as funções que o hl_i386.so do ESF reproduz (score >= 0.86 em docs/sdk_match.csv).\n'
           f'// Gerado por tools/assemble_sdk.py a partir de {p.replace(SDK, "<hlsdk>")}. As demais funções do arquivo foram removidas.\n'
           + ''.join(out_parts))
    open(os.path.join(OUT, fn), 'w', encoding='utf-8').write(out)
print(f'funções montadas: {tot}; não achadas: {miss}')
open('docs/sdk_assemble_report.txt', 'w').write('\n'.join(report) + '\n')
