#!/usr/bin/env python3
"""Gera as declarações de métodos de uma classe a partir dos nomes GCC 2.95 (símbolos do .so).
uso: gen_class_header.py CPlayerMelee  -> imprime declarações em stdout"""
import re, sys
cls = sys.argv[1]
names = []
for l in open('symbols/classes_methods.txt'):
    m = re.search(r'\((\w+__%d%s)([^)]*)\)' % (len(cls), cls), l)
    if m: names.append(m.group(1) + m.group(2))
PRIM = {'i':'int','f':'float','b':'bool','c':'char','s':'short','v':'void','l':'long','d':'double','e':'...','Ui':'unsigned int'}
def parse(s):
    params=[]; i=0
    while i < len(s):
        c=s[i]
        if c=='T':
            j=int(s[i+1]); params.append(params[j-1]); i+=2; continue
        mod=''; t=None
        while s[i] in 'PRCU':
            mod+=s[i]; i+=1
        if s[i]=='G': mod+='G'; i+=1
        if s[i].isdigit():
            j=i
            while s[j].isdigit(): j+=1
            n=int(s[i:j]); t=s[j:j+n]; i=j+n
        elif s[i]=='F':   # ponteiro de função: PF...._v
            k=s.index('_',i); t='void*'; i=k+2
        else:
            t=PRIM.get(s[i],'int'); i+=1
        out=t
        if t=='char' and mod.endswith('P'): pass
        for m_ in reversed(mod):
            if m_=='P': out+='*'
            elif m_=='R': out+='&'
            elif m_=='C': out='const '+out
            elif m_=='U': out='unsigned '+out
        params.append(out)
    return [p for p in params if p!='void']
seen=set()
for n in sorted(names):
    meth, rest = n.split('__%d%s' % (len(cls), cls), 1)
    args = parse(rest) if rest else []
    sig = '%s(%s)' % (meth, ', '.join(args))
    if sig in seen: continue
    seen.add(sig)
    print('    int %s;' % sig)
