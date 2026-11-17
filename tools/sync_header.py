#!/usr/bin/env python3
"""Reescreve as declarações de métodos num header gerado automaticamente (tipos int/void) para
casar com as assinaturas reais escritas nos .cpp. Uso: sync_header.py include/x.h Classe src/server/x.cpp"""
import re, sys
hdr, cls, cpp = sys.argv[1:4]
defs = {}
for l in open(cpp):
    m = re.match(r'^(?!\s)([\w:\*&<> ]+?[\s\*&])%s::(~?\w+)\((.*?)\)\s*(const)?\s*(\{.*|//.*|$)' % re.escape(cls), l)
    if m:
        ret, name, args, const = m.group(1).strip(), m.group(2), m.group(3).strip(), m.group(4)
        n = 0 if args in ('', 'void') else args.count(',') + 1
        defs.setdefault((name, n), []).append((ret, args if args else 'void', const or ''))
out, fixed = [], 0
used = {}   # (name,n) -> quantas decl já consumidas (overloads atribuídos em ordem)
for l in open(hdr):
    m = re.match(r'^(\s*)(virtual\s+)?([\w:\*&<> ]+?[\s\*&])(\w+)\(([^)]*)\)\s*(const)?;(.*)$', l)
    if m:
        ind, virt, ret, name, args, const, rest = m.groups()
        n = 0 if args.strip() in ('', 'void') else args.count(',') + 1
        d = defs.get((name, n))
        if d:
            k = used.get((name, n), 0); used[(name, n)] = k + 1
            r, a, c = d[min(k, len(d) - 1)]
            l = '%s%s%s %s(%s)%s;%s\n' % (ind, virt or '', r, name, a, (' ' + c) if c else '', rest)
            fixed += 1
    out.append(l)
open(hdr, 'w').writelines(out)
print('declarações ajustadas:', fixed)
