// specialbeamcannon.cpp -- RECUPERADO de decomp_raw/CSpecialBeamCannon. [OK] valores lidos do decompilado; [?] nomes de campos.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "specialbeamcannon.h"

void CSpecialBeamCannon::Spawn(void)
{
    Precache();                      // [OK] vtable slot 1
    m_iId = 11;                      // [OK] +0x88
    m_iDefaultAmmo = 0;              // [OK] +0xc0
    m_iClip = -1;                    // [OK] +0xb0
    m_iMaxCharge = 21;                      // [OK]
    m_iKiCost = 20;
    f_0cc = 0.5f;
    strncpy(m_szWeaponName, "specialbeamcannon", 16);  // [OK] +0xd4
    FallInit();
}

void CSpecialBeamCannon::Precache(void)
{
    PRECACHE_SOUND("piccolo/specialbeamcannon.wav");
    PRECACHE_SOUND("cell/specialbeamcannon.wav");
    PRECACHE_SOUND("cell2/specialbeamcannon.wav");
    PRECACHE_SOUND("weapons/sbc_fire.wav");
    PRECACHE_SOUND("weapons/sbc_charge.wav");
    PRECACHE_MODEL("sprites/sbccharge.spr");
    PRECACHE_MODEL("sprites/null.spr");
    m_usTrail      = PRECACHE_MODEL("sprites/sbctrail.spr");       // [OK] +0x1d8
    m_usOrbitTrail = PRECACHE_MODEL("sprites/sbcorbittrail.spr");  // +0x1da
    m_usSpriteA    = PRECACHE_MODEL("sprites/sbca.spr");           // +0x1dc
    m_usSpriteB    = PRECACHE_MODEL("sprites/sbcb.spr");           // +0x1de
    m_usOrbitA     = PRECACHE_MODEL("sprites/sbcorbita.spr");      // +0x1e0
    m_usOrbitB     = PRECACHE_MODEL("sprites/sbcorbitb.spr");      // +0x1e2
}

int CSpecialBeamCannon::GetItemInfo(ItemInfo *p)
{
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 3;
    p->iPosition = 2;
    m_iId = p->iId = 11;
    p->iWeight   = 15;
    p->iFlags    = 0;
    return 1;
}

void CSpecialBeamCannon::InitChargeSprite(void)
{
    CSprite *s = CSprite::SpriteCreate("sprites/sbccharge.spr", m_pPlayer->pev->origin, TRUE);
    f_1d4 = (int)s;                                    // [OK] +0x1d4
    edict_t *pe = m_pPlayer->pev->pContainingEntity;
    if (pe)
    {
        s->pev->skin = ENTINDEX(pe);                   // [OK] +0x110
        s->pev->body = 1;                              // [OK] +0x114
        s->pev->aiment = pe;                           // [OK] +0x194
        s->pev->movetype = 12;                         // [OK] +0x108 MOVETYPE_FOLLOW
    }
    s->pev->rendermode  = kRenderTransAdd;             // [OK] +0x148 = 5
    s->pev->rendercolor = Vector(255, 255, 255);
    s->pev->renderamt   = 254;
    s->pev->renderfx    = 19;                          // [OK] +0x15c
    s->pev->scale       = 0.2f;                        // [OK] +0x144
    s->pev->framerate   = 10.0f;                       // [OK] +0x138
    s->TurnOff();
}

void CSpecialBeamCannon::EnableChargeSprite(void)   { ((CSprite *)f_1d4)->TurnOn(); }          // [OK]
void CSpecialBeamCannon::DisableChargeSprite(void)  { ((CSprite *)f_1d4)->TurnOff(); }         // [OK]
void CSpecialBeamCannon::RemoveChargeSprite(void)   { UTIL_Remove((CBaseEntity *)f_1d4); }     // [OK]

void CSpecialBeamCannon::EmitChargeSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev->pContainingEntity), CHAN_WEAPON, "weapons/sbc_charge.wav", 1.0, 0.8, 0, 100);   // [OK]
}

void CSpecialBeamCannon::EmitShootSound(void)
{
    m_pPlayer->EmitClassSound("specialbeamcannon.wav");   // [OK]
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev->pContainingEntity), CHAN_WEAPON, "weapons/sbc_fire.wav", 1.0, 0.8, 0, 100);
}

void CSpecialBeamCannon::ShootAttack(void)
{
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);         // [OK]
    Vector gun = m_pPlayer->GetGunPosition();          // [OK] vfunc +0x1e0
    Vector start = gun + gpGlobals->v_forward * 10;    // [OK] 10.0
    Vector vel   = gpGlobals->v_forward * 1700;        // [OK] 1700.0
    float ratio  = GetPowerRatio();
    // [?] a ordem exata dos argumentos extras (4 e os 6 sprites) nao foi conferida
    CSpecialBeamCannonAttack::ShootSbc(m_pPlayer, &start, &vel, (int)(ratio * (m_iCharge * 6)),
        4, m_usOrbitB, m_usOrbitA, m_usOrbitTrail, m_usSpriteB, m_usSpriteA, m_usTrail);
}
