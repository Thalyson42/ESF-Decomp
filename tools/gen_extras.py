#!/usr/bin/env python3
"""Lê erros 'não declarado' da checagem de sintaxe e gera include/esf_extras.h (campos f_xxx, externs gmsg*/g_*).
Uso: gen_extras.py arquivo.cpp [...]   (acumula em include/esf_extras.h; revisar tipos [?])"""
import re, subprocess, sys, os
path = 'include/esf_extras.h'
fields, globs = {}, {}
if os.path.exists(path):
    for l in open(path):
        m = re.match(r'\s*(\w+(?: \*)?)\s+(f_[0-9a-f]+);', l)
        if m: fields[m.group(2)] = m.group(1)
        m = re.match(r'extern (\w+(?: \*)?) (\w+);', l)
        if m: globs[m.group(2)] = m.group(1)
for f in sys.argv[1:]:
    out = subprocess.run(['tools/syntax_check.sh', f], capture_output=True, text=True, env=dict(os.environ, LC_ALL='C')).stdout
    for n in set(re.findall(r"'(\w+)' was not declared", out)) | set(re.findall(r"no member named '(f_[0-9a-f]+)'", out)):
        if re.fullmatch(r'f_[0-9a-f]+', n): fields.setdefault(n, 'int')
        elif n.startswith('gmsg'): globs.setdefault(n, 'int')
        elif n.startswith('melee_') or n=='nomeleehittime': globs.setdefault(n, 'cvar_t *')
        elif n.startswith('g_fl'): globs.setdefault(n, 'float')
        elif n.startswith('g_'): globs.setdefault(n, 'int')
L = ['// Gerado por tools/gen_extras.py: campos ainda sem nome ([?] tipo int por padrão) e globais usados pelo código recuperado.', '#pragma once']
L += ['extern %s %s;' % (t, n) for n, t in sorted(globs.items())]
L += ['#define ESF_PLAYER_UNNAMED \\'] + ['    %s %s; \\' % (t, n) for n, t in sorted(fields.items())] + ['']
open(path, 'w').write('\n'.join(L) + '\n')
print(len(fields), 'campos,', len(globs), 'globais')
