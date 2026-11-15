#!/usr/bin/env python3
"""Mostra decompilados sem typedefs/declarações. Uso: show.py <decomp_raw/Classe> [filtro_regex]"""
import sys, os, re
d = sys.argv[1]; rx = re.compile(sys.argv[2]) if len(sys.argv) > 2 else None
for f in sorted(os.listdir(d)):
    if rx and not rx.search(f): continue
    t = open(os.path.join(d, f)).read()
    t = re.sub(r'typedef struct.*?\} st_\w+;\n', '', t, flags=re.S)
    L = [l for l in t.splitlines() if l.strip() and not re.match(r'\s*(unsigned |struct |float |double |int |char |short |st_\w+ )[\w\s\*\[\]]*;\s*//', l)]
    print('\n'.join(L)); print()
