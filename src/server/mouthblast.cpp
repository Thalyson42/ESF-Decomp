// mouthblast.cpp -- RECUPERADO (gerado por tools/gen_beam_weapon.py a partir de decomp_raw/CMouthblast; molde = kamehameha.cpp)
// [OK] valores lidos do decompilado; [?] nomes de campos herdados de CControlledBeam.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "explodingattack.h"
#include "effects.h"
#include "mouthblast.h"

void CMouthblast::Spawn(void)
{
    Precache();                         // [OK] vtable slot 1
    m_iAttackState = 0;  m_iCharge = 0;  m_pBeam = NULL;  // [?]
    m_iId = 23;                          // [OK] +0x88
    m_iDefaultAmmo = 0;                 // [OK] +0xc0
    m_iClip = -1;                       // [OK] +0xb0
    f_0ec = 5;
    m_iMaxCharge = 30;
    m_iBeamSpeed = 1200;
    m_iKiCost = 20;
    m_iDmgPerCharge = 4;
    m_flChargeSpeedMult = 0.5f;
    strcpy(m_szWeaponName, "mouthblast");  // [OK] +0xf4
    f_1f4 = 0.2f;
    f_1fc = 3;
    f_1f8 = 3;
    FallInit();
}

void CMouthblast::Precache(void)
{
    m_usSpriteA = PRECACHE_MODEL("sprites/mouthblasta.spr");
    m_usSpriteB = PRECACHE_MODEL("sprites/mouthblastb.spr");
    m_usSpriteAStart = PRECACHE_MODEL("sprites/mouthblastastart.spr");
    m_usSpriteBStart = PRECACHE_MODEL("sprites/mouthblastbstart.spr");
    m_usTrailSprite = PRECACHE_MODEL("sprites/mouthblasttrail.spr");
    PRECACHE_MODEL("sprites/mouthblastcharge.spr");
    PRECACHE_SOUND("buu/mouthbeam.wav");
    PRECACHE_SOUND("fatbuu/mouthbeam.wav");
    PRECACHE_SOUND("buu/mouthbeam_charge.wav");
    PRECACHE_SOUND("fatbuu/mouthbeam_charge.wav");
    CControlledBeam::Precache();            // [OK]
}

int CMouthblast::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);  // [OK]
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 3;
    p->iPosition = 5;
    m_iId = p->iId = 23;
    p->iWeight   = 15;
    p->iFlags    = 0;
    return 1;
}

void CMouthblast::InitChargeSprite(void)
{
    CSprite *s = CSprite::SpriteCreate("sprites/mouthblastcharge.spr", m_pPlayer->pev->origin, TRUE);
    m_pChargeSprite = s;
    if (m_pPlayer->pev->pContainingEntity)
        s->SetAttachment(m_pPlayer->pev->pContainingEntity, f_1f8);
    m_pChargeSprite->pev->rendermode  = kRenderTransAdd;
    m_pChargeSprite->pev->rendercolor = Vector(255, 255, 255);
    m_pChargeSprite->pev->renderamt   = 254;
    m_pChargeSprite->pev->renderfx    = kRenderFxNoDissipation;
    m_pChargeSprite->pev->scale       = 0.1f;
    m_pChargeSprite->pev->framerate   = 10.0f;
    m_pChargeSprite->TurnOff();
}

void CMouthblast::GrowChargeSprite(void)           { m_pChargeSprite->pev->scale = m_iCharge * 0.015f; }   // [OK]
void CMouthblast::EnableChargeSprite(void)         { m_pChargeSprite->TurnOn(); }                          // [OK]
void CMouthblast::DisableChargeSprite(void)        { m_pChargeSprite->TurnOff(); }                         // [OK]
void CMouthblast::RemoveChargeSprite(void)         { UTIL_Remove(m_pChargeSprite); }                       // [OK]

void CMouthblast::EmitChargeSound(void)
{
    m_pPlayer->EmitClassSound("mouthbeam_charge.wav");   // [OK]
}

void CMouthblast::EmitShootSound(void)
{
    m_pPlayer->EmitClassSound("mouthbeam.wav");   // [OK]
}
