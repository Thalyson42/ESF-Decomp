import re,subprocess,sys
src=subprocess.run("cat $(find src include -name '*.cpp' -o -name '*.h')",shell=True,capture_output=True,text=True).stdout
cls=None;out=[]
for l in open('symbols/classes_methods.txt'):
    m=re.match(r'^(\w+)\s+\[',l)
    if m: cls=m.group(1);continue
    m=re.match(r'\s+[0-9a-f]+\s+(\d+)\s+(\S+)',l)
    if m and cls:
        n=m.group(2)
        if not re.search(r'\b'+cls+r'\s*::\s*'+re.escape(n)+r'\s*\(',src):
            out.append((cls,n,int(m.group(1))))
from collections import defaultdict
d=defaultdict(list)
for c,n,s in out:d[c].append((n,s))
for c in sorted(d,key=lambda c:-len(d[c])):
    print(c,len(d[c]),sum(s for _,s in d[c]))
open(sys.argv[1],'w').write('\n'.join(f"{c}::{n} {s}" for c,n,s in out))
