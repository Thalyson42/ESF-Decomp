#!/usr/bin/env python3
"""Decompila uma função do hl_i386.so (com símbolos) usando angr.
Uso: python3 decompile_fn.py <hl_i386.so> <nome_mangled_ou_0xENDERECO>
"""
import sys, angr, logging
logging.getLogger('angr').setLevel(logging.ERROR)
so, target = sys.argv[1], sys.argv[2]
p = angr.Project(so, auto_load_libs=False)
sym = p.loader.find_symbol(target) if not target.startswith('0x') else None
addr = sym.rebased_addr if sym else int(target, 16)
cfg = p.analyses.CFGFast(regions=[(addr, addr + 0x2000)], function_starts=[addr], normalize=True)
f = cfg.kb.functions[addr]
d = p.analyses.Decompiler(f, cfg=cfg.model)
print(d.codegen.text if d.codegen else "FALHOU: " + str(d))
