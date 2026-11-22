#!/usr/bin/env python3
"""Desmonta uma funcao do hl_i386.so e anota os operandos [ebx-X] com a constante (float/double/int) em GOT-X.
uso: tools/annotate_asm.py <inicio_hex> <fim_hex> [GOT=0x213adc]   (saida: objdump -M intel com comentarios ; = valor)"""
import re, subprocess, struct as S, sys
so = 'original/linuxdlls/hl_i386.so'
a, b = sys.argv[1], sys.argv[2]
GOT = int(sys.argv[3], 16) if len(sys.argv) > 3 else 0x213adc
data = open(so, 'rb').read()
phoff = S.unpack_from('<I', data, 28)[0]
phes, phn = S.unpack_from('<HH', data, 42)
segs = [S.unpack_from('<8I', data, phoff + i * phes) for i in range(phn)]
segs = [(s[2], s[1], s[4]) for s in segs if s[0] == 1]
def rd(va, n):
    for v, o, fs in segs:
        if v <= va < v + fs:
            return data[o + va - v:o + va - v + n]
out = subprocess.run(['objdump', '-d', '-M', 'intel', f'--start-address=0x{a}', f'--stop-address=0x{b}', so],
                     capture_output=True, text=True).stdout
for l in out.splitlines():
    m = re.search(r'(DWORD|QWORD) PTR \[ebx([-+])0x([0-9a-f]+)\]', l)
    note = ''
    if m:
        off = int(m.group(3), 16) * (1 if m.group(2) == '+' else -1)
        va = GOT + off
        if m.group(1) == 'DWORD':
            r = rd(va, 4)
            if r:
                f = S.unpack('<f', r)[0]; i = S.unpack('<i', r)[0]
                note = f'  ; f={f:.6g} i={i}'
        else:
            r = rd(va, 8)
            if r: note = f'  ; d={S.unpack("<d", r)[0]:.8g}'
    print(l + note)
