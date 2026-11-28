#!/usr/bin/env python3
"""Gera src/bot/weapon_info_table.cpp lendo BotWeaponInfoTable do .data de original/linuxdlls/hl_i386.so
(nm: BotWeaponInfoTable = 0x1cb720, 0xad4 bytes = 33 entradas de 84 bytes; a ultima, id 0, termina a tabela)."""
import struct, subprocess
SO='original/linuxdlls/hl_i386.so'; ADDR=0x1cb720; SIZE=0xad4
d=subprocess.run(['objdump','-s','--start-address=0x%x'%ADDR,'--stop-address=0x%x'%(ADDR+SIZE),SO],capture_output=True,text=True).stdout
b=bytearray()
for l in d.splitlines():
    p=l.split()
    if len(p)>=2 and len(p[0])<=7 and all(c in '0123456789abcdef' for c in p[0]):
        for w in p[1:5]:
            if len(w)==8 and all(c in '0123456789abcdef' for c in w): b+=bytes.fromhex(w)
assert len(b)==SIZE, len(b)
out=['// weapon_info_table.cpp -- BotWeaponInfoTable (CBot): GERADO por tools/gen_weapon_info.py a partir do .data do hl_i386.so.',
     '// [OK] 33 entradas de 84 bytes (nm -S: 0xad4); id 0 termina a tabela. Campos: id, arma, secundario, combo, beamjump, beam, carga, dist.min, dist.max.',
     '#include "extdll.h"','#include "util.h"','#include "cbase.h"','#include "player.h"','#include "bot.h"','',
     'bot_weapon_info_s BotWeaponInfoTable[33] =','{']
for i in range(33):
    e=b[i*84:(i+1)*84]
    iid=struct.unpack('<i',e[:4])[0]
    name=e[4:68].split(b'\0')[0].decode()
    sec,combo,bj,beam=e[68],e[69],e[70],e[71]
    fl=struct.unpack('<3f',e[72:84])
    f=lambda v:('%r'%round(v,4)).rstrip('0').rstrip('.')+'f' if v!=int(v) else '%d.0f'%int(v)
    out.append('    { %d, "%s", %d, %d, %d, %d, %s, %s, %s },'%(iid,name,sec,combo,bj,beam,f(fl[0]),f(fl[1]),f(fl[2])))
out.append('};')
open('src/bot/weapon_info_table.cpp','w').write('\n'.join(out)+'\n')
print('ok')
