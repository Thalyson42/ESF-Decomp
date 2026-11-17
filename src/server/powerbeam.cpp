// powerbeam.cpp -- RECUPERADO (gerado por tools/gen_beam_weapon.py a partir de decomp_raw/CPowerBeam; molde = kamehameha.cpp)
// [OK] valores lidos do decompilado; [?] nomes de campos herdados de CControlledBeam.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "explodingattack.h"
#include "effects.h"
#include "powerbeam.h"

void CPowerBeam::Spawn(void)
{
    Precache();                         // [OK] vtable slot 1
    m_iAttackState = 0;  m_iCharge = 0;  m_pBeam = NULL;  // [?]
    m_iId = 22;                          // [OK] +0x88
    m_iDefaultAmmo = 0;                 // [OK] +0xc0
    m_iClip = -1;                       // [OK] +0xb0
    f_0ec = 4;
    m_iMaxCharge = 20;
    m_iBeamSpeed = 1100;
    m_iKiCost = 20;
    m_iDmgPerCharge = 4;
    strcpy(m_szWeaponName, "powerbeam");  // [OK] +0xf4
    f_1f4 = 0.12f;
    f_1fc = 4;
    f_1f8 = 1;
    FallInit();
}

void CPowerBeam::Precache(void)
{
    m_usSpriteA = PRECACHE_MODEL("sprites/masenkoa.spr");
    m_usSpriteB = PRECACHE_MODEL("sprites/masenkob.spr");
    m_usSpriteAStart = PRECACHE_MODEL("sprites/masenkoastart.spr");
    m_usSpriteBStart = PRECACHE_MODEL("sprites/masenkobstart.spr");
    PRECACHE_MODEL("sprites/masenkocharge.spr");
    PRECACHE_SOUND("gohan/powerbeam.wav");
    PRECACHE_SOUND("gohan/powerbeamha.wav");
    PRECACHE_SOUND("weapons/mase_charge.wav");
    m_usTrailSprite = PRECACHE_MODEL("sprites/masenkotrail.spr");
    CControlledBeam::Precache();            // [OK]
}

int CPowerBeam::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);  // [OK]
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 5;
    p->iPosition = 4;
    m_iId = p->iId = 22;
    p->iWeight   = 5;
    p->iFlags    = 0;
    return 1;
}

void CPowerBeam::InitChargeSprite(void)
{
    CSprite *s = CSprite::SpriteCreate("sprites/masenkocharge.spr", m_pPlayer->pev->origin, TRUE);
    m_pChargeSprite = s;
    if (m_pPlayer->pev->pContainingEntity)
        s->SetAttachment(m_pPlayer->pev->pContainingEntity, 1);
    m_pChargeSprite->pev->rendermode  = kRenderTransAdd;
    m_pChargeSprite->pev->rendercolor = Vector(255, 255, 255);
    m_pChargeSprite->pev->renderamt   = 254;
    m_pChargeSprite->pev->renderfx    = kRenderFxNoDissipation;
    m_pChargeSprite->pev->scale       = 0.1f;
    m_pChargeSprite->pev->framerate   = 10.0f;
    m_pChargeSprite->TurnOff();
}

void CPowerBeam::GrowChargeSprite(void)           { m_pChargeSprite->pev->scale = m_iCharge * 0.015f; }   // [OK]
void CPowerBeam::EnableChargeSprite(void)         { m_pChargeSprite->TurnOn(); }                          // [OK]
void CPowerBeam::DisableChargeSprite(void)        { m_pChargeSprite->TurnOff(); }                         // [OK]
void CPowerBeam::RemoveChargeSprite(void)         { UTIL_Remove(m_pChargeSprite); }                       // [OK]

void CPowerBeam::EmitChargeSound(void)
{
    m_pPlayer->EmitClassSound("powerbeam.wav");   // [OK]
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev->pContainingEntity), CHAN_WEAPON,
                   "weapons/mase_charge.wav", 1.0, 0.8, 0, 100);
}

void CPowerBeam::EmitShootSound(void)
{
    m_pPlayer->EmitClassSound("powerbeamha.wav");   // [OK]
}
