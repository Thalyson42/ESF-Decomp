#!/usr/bin/env python3
"""Extrai as tabelas TYPEDESCRIPTION (DEFINE_FIELD) do .so: nome, tipo, offset e tamanho de cada campo salvo.
Saída: symbols/save_fields.json  {Classe: [{offset,name,type,count}, ...]}  e symbols/save_fields.txt"""
import sys, re, subprocess, struct, json, os
so, sdk, outdir = sys.argv[1:4]
data = open(so, 'rb').read()
SEC = []
for l in subprocess.run(['readelf', '-SW', so], capture_output=True, text=True).stdout.splitlines():
    m = re.match(r'\s*\[\s*\d+\]\s+(\S+)\s+\S+\s+([0-9a-f]+)\s+([0-9a-f]+)\s+([0-9a-f]+)', l)
    if m: SEC.append((int(m.group(2), 16), int(m.group(3), 16), int(m.group(4), 16)))
def off(va):
    for a, o, sz in SEC:
        if a and a <= va < a + sz: return o + va - a
def u32(va): return struct.unpack_from('<I', data, off(va))[0]
def cstr(va):
    o = off(va); e = data.index(b'\0', o); return data[o:e].decode('latin1')
# enum FIELDTYPE do SDK
ft = ['FIELD_FLOAT','FIELD_STRING','FIELD_ENTITY','FIELD_CLASSPTR','FIELD_EHANDLE','FIELD_EVARS','FIELD_EDICT','FIELD_VECTOR','FIELD_POSITION_VECTOR','FIELD_POINTER','FIELD_INTEGER','FIELD_FUNCTION','FIELD_BOOLEAN','FIELD_SHORT','FIELD_CHARACTER','FIELD_TIME','FIELD_MODELNAME','FIELD_SOUNDNAME']  # ordem do enum FIELDTYPE do SDK
res = {}
for l in subprocess.run(['nm', '-S', so], capture_output=True, text=True).stdout.splitlines():
    p = l.split()
    if len(p) != 4 or not re.search(r'SaveData$', p[3]): continue
    m = re.match(r'_(\d+)(\w+)\.\w+$', p[3])
    if not m: continue
    cls = m.group(2)[:int(m.group(1))]; a = int(p[0], 16); sz = int(p[1], 16)
    for i in range(sz // 16):
        t, np_, fo, cnt, fl = struct.unpack_from('<IIIhh', data, off(a + 16 * i))
        # np_ é relocado: o valor no arquivo é o endereço do nome (REL)
        try: name = cstr(np_)
        except Exception: name = '?'
        res.setdefault(cls, []).append(dict(offset=fo, name=name, type=ft[t] if t < len(ft) else str(t), count=cnt, table=p[3]))
os.makedirs(outdir, exist_ok=True)
json.dump(res, open(os.path.join(outdir, 'save_fields.json'), 'w'), indent=1)
with open(os.path.join(outdir, 'save_fields.txt'), 'w') as f:
    for c in sorted(res):
        f.write(f'== {c}\n')
        for e in sorted(res[c], key=lambda x: x['offset']): f.write(f'  +0x{e["offset"]:03x} ({e["offset"]:4d})  {e["name"]:<28} {e["type"]} x{e["count"]}\n')
print(len(res), 'classes;', sum(len(v) for v in res.values()), 'campos')
