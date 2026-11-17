#!/usr/bin/env python3
"""Gera src/server/<c>.cpp e include/<c>.h de uma arma de feixe controlado (molde do CKamehameha) lendo os valores do decomp_raw.
Uso: gen_beam_weapon.py CMasenko masenko     [funciona p/ classes com Init/Grow/Enable/... iguais ao molde]"""
import re, sys, glob, struct
cls, base = sys.argv[1], sys.argv[2]
def rd(fn):
    f = glob.glob(f'decomp_raw/{cls}/{fn}__*.c')
    return open(f[0]).read() if f else ''
def words(v):  # int -> 4 chars (little endian)
    return struct.pack('<I', v & 0xffffffff).decode('latin-1').rstrip('\0')
# ---- Spawn ----
sp = rd('Spawn'); vals = {}
for m in re.finditer(r'\+ (0x[0-9a-f]+|\d+)\) = (0x[0-9a-f]+|[-\d.]+f?);', sp):
    off = int(m.group(1), 0); v = m.group(2)
    vals[off] = int(v, 0) if v.startswith('0x') or re.fullmatch(r'-?\d+', v) else float(v.rstrip('f'))
name = words(vals.get(244, 0)) + words(vals.get(248, 0)) + words(vals.get(252, 0))
fld = {236: 'f_0ec', 220: 'm_iMaxCharge', 224: 'm_iBeamSpeed', 228: 'm_iKiCost', 232: 'm_iDmgPerCharge'}
spawn = ['    Precache();                         // [OK] vtable slot 1',
         '    m_iAttackState = 0;  m_iCharge = 0;  m_pBeam = NULL;  // [?]',
         f'    m_iId = {vals.get(0x88)};                          // [OK] +0x88',
         '    m_iDefaultAmmo = 0;                 // [OK] +0xc0', '    m_iClip = -1;                       // [OK] +0xb0']
for off, nm in fld.items():
    if off in vals: spawn.append(f'    {nm} = {vals[off]};')
if 240 in vals: spawn.append(f'    m_flChargeSpeedMult = {vals[240]}f;')
spawn.append(f'    strcpy(m_szWeaponName, "{name}");  // [OK] +0xf4')
if 500 in vals: spawn += [f'    f_1f4 = {vals[500]:.1f}f;', f'    f_1fc = {vals[508]};', f'    f_1f8 = {vals[504]};']
spawn.append('    FallInit();')
# ---- Precache ----
pc = rd('Precache'); pre = []
fld_names = {103: 'm_usSpriteA', 104: 'm_usSpriteB', 105: 'm_usSpriteAStart', 106: 'm_usSpriteBStart', 102: 'm_usTrailSprite', 0x66: 'm_usTrailSprite'}
for l in pc.split('\n'):
    m = re.search(r'a0\[(0x[0-9a-f]+|\d+)\] = g_engfuncs\("([^"]+)"\)', l)
    if m: pre.append(f'    {fld_names.get(int(m.group(1), 0), "m_usUnknown_%s" % m.group(1))} = PRECACHE_MODEL("{m.group(2)}");'); continue
    m = re.search(r'g_engfuncs\("([^"]+)"\);', l)
    if m: pre.append(f'    PRECACHE_MODEL("{m.group(1)}");'); continue
    m = re.search(r'pfnPrecacheSound\("([^"]+)"\)', l)
    if m: pre.append(f'    PRECACHE_SOUND("{m.group(1)}");')
pre.append('    CControlledBeam::Precache();            // [OK]')
# ---- GetItemInfo ----
gi = rd('GetItemInfo'); a = {}
for m in re.finditer(r'a1\[(\d+)\] = (0x[0-9a-f]+|-?\d+|"[^"]*");|\*a1 = (\d+);', gi):
    if m.group(3): a[0] = int(m.group(3))
    else:
        v = m.group(2); a[int(m.group(1))] = v if v.startswith('"') else (int(v, 0) if int(v, 0) < 0x80000000 else int(v, 0) - (1 << 32))
ammo = a.get(2, 'NULL')
slot_fn = re.search(r'return (\d+);', rd('iItemSlot')); slot = int(slot_fn.group(1)) if slot_fn else 0
info = [f'    p->pszName   = STRING(pev->classname);  // [OK]', f'    p->pszAmmo1  = {ammo};', f'    p->iMaxAmmo1 = {a.get(3, -1)};',
        f'    p->pszAmmo2  = NULL;', f'    p->iMaxAmmo2 = {a.get(5, -1)};', f'    p->iMaxClip  = {a.get(7, -1)};',
        f'    p->iSlot     = {a.get(0)};', f'    p->iPosition = {a.get(1)};', f'    m_iId = p->iId = {a.get(8)};', f'    p->iWeight   = {a.get(10)};',
        f'    p->iFlags    = {a.get(9)};', '    return 1;']
# ---- sprites e sons ----
ic = rd('InitChargeSprite'); att = 'f_1f8' if 'field_1f8' in ic else '1'; sprite = re.search(r'SpriteCreate\("([^"]+)"', ic).group(1)
cs = rd('EmitChargeSound'); ss = rd('EmitShootSound')
cls_snd_c = re.search(r'EmitClassSound\([^,]+, "([^"]+)"\)', cs).group(1)
cls_snd_s = re.search(r'EmitClassSound\([^,]+, "([^"]+)"\)', ss)
ex_c = re.search(r'EMIT_SOUND_DYN\([^"]*"([^"]+)"', cs)
ex_s = re.search(r'EMIT_SOUND_DYN\([^"]*"([^"]+)"', ss)
def emit(cl, ex):
    out = []
    if cl: out.append(f'    m_pPlayer->EmitClassSound("{cl if isinstance(cl, str) else cl.group(1)}");   // [OK]')
    if ex: out += ['    EMIT_SOUND_DYN(ENT(m_pPlayer->pev->pContainingEntity), CHAN_WEAPON,', f'                   "{ex.group(1)}", 1.0, 0.8, 0, 100);']
    return '\n'.join(out)
cpp = f'''// {base}.cpp -- RECUPERADO (gerado por tools/gen_beam_weapon.py a partir de decomp_raw/{cls}; molde = kamehameha.cpp)
// [OK] valores lidos do decompilado; [?] nomes de campos herdados de CControlledBeam.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "explodingattack.h"
#include "effects.h"
#include "{base}.h"

void {cls}::Spawn(void)
{{
''' + '\n'.join(spawn) + f'''
}}

void {cls}::Precache(void)
{{
''' + '\n'.join(pre) + f'''
}}

int {cls}::GetItemInfo(ItemInfo *p)
{{
''' + '\n'.join(info) + f'''
}}

void {cls}::InitChargeSprite(void)
{{
    CSprite *s = CSprite::SpriteCreate("{sprite}", m_pPlayer->pev->origin, TRUE);
    m_pChargeSprite = s;
    if (m_pPlayer->pev->pContainingEntity)
        s->SetAttachment(m_pPlayer->pev->pContainingEntity, {att});
    m_pChargeSprite->pev->rendermode  = kRenderTransAdd;
    m_pChargeSprite->pev->rendercolor = Vector(255, 255, 255);
    m_pChargeSprite->pev->renderamt   = 254;
    m_pChargeSprite->pev->renderfx    = kRenderFxNoDissipation;
    m_pChargeSprite->pev->scale       = 0.1f;
    m_pChargeSprite->pev->framerate   = 10.0f;
    m_pChargeSprite->TurnOff();
}}

void {cls}::GrowChargeSprite(void)           {{ m_pChargeSprite->pev->scale = m_iCharge * 0.015f; }}   // [OK]
void {cls}::EnableChargeSprite(void)         {{ m_pChargeSprite->TurnOn(); }}                          // [OK]
void {cls}::DisableChargeSprite(void)        {{ m_pChargeSprite->TurnOff(); }}                         // [OK]
void {cls}::RemoveChargeSprite(void)         {{ UTIL_Remove(m_pChargeSprite); }}                       // [OK]

void {cls}::EmitChargeSound(void)
{{
{emit(cls_snd_c, ex_c)}
}}

void {cls}::EmitShootSound(void)
{{
{emit(cls_snd_s, ex_s)}
}}
'''
hdr = f'''// {base}.h -- gerado por tools/gen_beam_weapon.py a partir de decomp_raw/{cls}
#pragma once
#include "controlledweapon.h"
class {cls} : public CControlledBeam
{{
public:
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) {{ return {slot}; }}
    void InitChargeSprite(void);
    void GrowChargeSprite(void);
    void EnableChargeSprite(void);
    void DisableChargeSprite(void);
    void RemoveChargeSprite(void);
    void EmitChargeSound(void);
    void EmitShootSound(void);
}};
'''
open(f'src/server/{base}.cpp', 'w').write(cpp); open(f'include/{base}.h', 'w').write(hdr)
print(cls, 'ok; nome da arma =', name, '; slot', slot)
