import re,sys,collections
def split(n):
    # returns (method, class, rest) for gcc2 member mangling, else None
    for m in re.finditer(r'__',n):
        i=m.start()
        if i==0: continue
        rest=n[i+2:]
        c=''
        if rest.startswith('C'): c='C'; rest=rest[1:]
        mm=re.match(r'(\d+)',rest)
        if mm:
            L=int(mm.group(1)); k=len(mm.group(1))
            cls=rest[k:k+L]
            if len(cls)==L and re.fullmatch(r'[A-Za-z_]\w*',cls):
                return n[:i],cls+(' const' if c else ''),rest[k+L:]
        mq=re.match(r'Q(\d)_',rest)
        if mq:
            return n[:i],'Q'+rest[1:],''
    return None
cls=collections.defaultdict(list); free=[]
for line in open('syms_raw.txt'):
    p=line.split()
    if len(p)!=4 or p[2] not in 'TtWw': continue
    addr,size,t,n=p
    if n.startswith('_$_'):
        m=re.match(r'_\$_(\d+)(\w+)',n); 
        if m: cls[m.group(2)[:int(m.group(1))]].append(('~'+m.group(2)[:int(m.group(1))],addr,int(size,16),n)); continue
    r=split(n)
    if r and not n.startswith('__'):
        cls[r[1].replace(' const','')].append((r[0],addr,int(size,16),n))
    else: free.append((n,addr,int(size,16)))
out=open('classes_methods.txt','w')
for c in sorted(cls):
    out.write(f"{c}  [{len(cls[c])} methods, {sum(m[2] for m in cls[c])} bytes]\n")
    for m in sorted(cls[c],key=lambda x:x[1]): out.write(f"   {m[1]} {m[2]:5d} {m[0]}   ({m[3]})\n")
print(len(cls),'classes;',sum(len(v) for v in cls.values()),'methods;',len(free),'free fns')
print(' '.join(f"{c}({len(v)})" for c,v in sorted(cls.items(),key=lambda kv:-len(kv[1]))[:120]))
open('free_fns.txt','w').write('\n'.join(f"{a} {s:5d} {n}" for n,a,s in sorted(free,key=lambda x:x[1])))
