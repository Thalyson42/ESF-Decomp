#!/usr/bin/env python3
"""Decompila em lote funções do hl_i386.so por classe/arquivo com angr.
Uso: batch_decompile.py <so> <saida_dir> <regex_nome_mangled> [workers]
Cada função vira <saida>/<mangled>.c (pseudo-C bruto, ainda com offsets)."""
import sys, os, re, time, signal, logging, multiprocessing as mp
logging.disable(logging.CRITICAL)
so, out, rx = sys.argv[1], sys.argv[2], re.compile(sys.argv[3])
nw = int(sys.argv[4]) if len(sys.argv) > 4 else 4
os.makedirs(out, exist_ok=True)

class Hang(BaseException):
    pass

def targets():
    import subprocess
    r = []
    for l in subprocess.run(['nm', '-S', so], capture_output=True, text=True).stdout.splitlines():
        p = l.split()
        if len(p) == 4 and p[2] in 'Tt' and rx.search(p[3]):
            r.append((int(p[0], 16), int(p[1], 16), p[3]))
    return sorted(r, key=lambda x: x[1])

def work(chunk):
    import angr
    p = angr.Project(so, auto_load_libs=False)
    res = []
    base = p.loader.main_object.mapped_base
    for addr, size, name in chunk:
        va = addr + base
        f_out = os.path.join(out, name + '.c')
        if os.path.exists(f_out): continue
        t = time.time()
        signal.signal(signal.SIGALRM, lambda *a: (_ for _ in ()).throw(Hang()))
        signal.alarm(30)
        try:
            cfg = p.analyses.CFGFast(regions=[(va, va + size)], function_starts=[va], normalize=True)
            fn = cfg.kb.functions[va]
            d = p.analyses.Decompiler(fn, cfg=cfg.model)
            txt = d.codegen.text if d.codegen else '// FALHOU: sem codegen'
        except Hang:
            txt = '// FALHOU: timeout 30s (função grande, decompilar manualmente)'
        except Exception as e:
            txt = f'// FALHOU: {type(e).__name__}: {e}'
        signal.alarm(0)
        open(f_out, 'w').write(f'// {name} @0x{addr:x} size={size}\n{txt}\n')
        res.append((name, round(time.time() - t, 1), txt.startswith('// FALHOU')))
    return res

if __name__ == '__main__':
    t = targets(); print(len(t), 'funções', flush=True)
    chunks = [t[i::nw] for i in range(nw)]
    t0 = time.time()
    with mp.Pool(nw) as pool:
        allr = [x for r in pool.map(work, chunks) for x in r]
    print(f'{len(allr)} feitas, {sum(x[2] for x in allr)} falhas, {time.time()-t0:.0f}s')
