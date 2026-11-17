// finalflash.cpp -- RECUPERADO (gerado por tools/gen_beam_weapon.py a partir de decomp_raw/CFinalFlash; molde = kamehameha.cpp)
// [OK] valores lidos do decompilado; [?] nomes de campos herdados de CControlledBeam.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "explodingattack.h"
#include "effects.h"
#include "finalflash.h"

void CFinalFlash::Spawn(void)
{
    Precache();                         // [OK] vtable slot 1
    m_iAttackState = 0;  m_iCharge = 0;  m_pBeam = NULL;  // [?]
    m_iId = 15;                          // [OK] +0x88
    m_iDefaultAmmo = 0;                 // [OK] +0xc0
    m_iClip = -1;                       // [OK] +0xb0
    f_0ec = 5;
    m_iMaxCharge = 42;
    m_iBeamSpeed = 1000;
    m_iKiCost = 30;
    m_iDmgPerCharge = 4;
    m_flChargeSpeedMult = 0.0f;
    strcpy(m_szWeaponName, "finalflash");  // [OK] +0xf4
    f_1f4 = 0.05f;
    f_1fc = 4;
    f_1f8 = 1;
    FallInit();
}

void CFinalFlash::Precache(void)
{
    m_usSpriteA = PRECACHE_MODEL("sprites/finalflasha.spr");
    m_usSpriteB = PRECACHE_MODEL("sprites/finalflashb.spr");
    m_usSpriteAStart = PRECACHE_MODEL("sprites/finalflashastart.spr");
    m_usSpriteBStart = PRECACHE_MODEL("sprites/finalflashbstart.spr");
    PRECACHE_MODEL("sprites/finalflashcharge.spr");
    PRECACHE_SOUND("vegeta/finalflash.wav");
    PRECACHE_SOUND("vegeta/finalflash_charge.wav");
    PRECACHE_SOUND("weapons/finalflash.wav");
    PRECACHE_SOUND("weapons/finalflash_charge.wav");
    m_usTrailSprite = PRECACHE_MODEL("sprites/finalflashtrail.spr");
    CControlledBeam::Precache();            // [OK]
}

int CFinalFlash::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);  // [OK]
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 5;
    p->iPosition = 1;
    m_iId = p->iId = 15;
    p->iWeight   = 5;
    p->iFlags    = 0;
    return 1;
}

void CFinalFlash::InitChargeSprite(void)
{
    CSprite *s = CSprite::SpriteCreate("sprites/finalflashcharge.spr", Vector(0, 0, 0), TRUE);   // [OK]
    m_pChargeSprite = s;
    if (m_pPlayer->pev->pContainingEntity)
        s->SetAttachment(m_pPlayer->pev->pContainingEntity, 1);
    m_pChargeSprite->pev->rendercolor = Vector(255, 255, 255);   // [OK] sem rendermode/body/movetype
    m_pChargeSprite->pev->renderamt   = 254;
    m_pChargeSprite->pev->scale       = 0.01f;
    m_pChargeSprite->pev->framerate   = 10.0f;
    m_pChargeSprite->TurnOff();
}

void CFinalFlash::GrowChargeSprite(void)
{
    m_pChargeSprite->pev->scale = m_iCharge / 42.0 * 0.5;       // [OK]
}

void CFinalFlash::EnableChargeSprite(void)
{
    if (!m_pPlayer->m_fPoweredUp)   // [OK] player+0x324
    {
        m_pPlayer->pev->renderamt   = 25.0f;                   // [OK]
        m_pPlayer->pev->rendercolor = Vector(255, 255, 0);     // [OK]
    }
    m_pChargeSprite->TurnOn();
}

void CFinalFlash::DisableChargeSprite(void)
{
    m_pChargeSprite->TurnOff();
    m_pPlayer->pev->renderfx  = 0;                              // [OK] +0x15c
    m_pPlayer->pev->renderamt = 254.0f;                         // [OK]
}

void CFinalFlash::RemoveChargeSprite(void)       { UTIL_Remove(m_pChargeSprite); }   // [OK]

void CFinalFlash::EmitChargeSound(void)
{
    m_pPlayer->EmitClassSound("finalflash_charge.wav");   // [OK]
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev->pContainingEntity), CHAN_WEAPON,
                   "weapons/finalflash_charge.wav", 1.0, 0.8, 0, 100);
}

void CFinalFlash::EmitShootSound(void)
{
    m_pPlayer->EmitClassSound("finalflash.wav");   // [OK]
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev->pContainingEntity), CHAN_WEAPON,
                   "weapons/finalflash.wav", 1.0, 0.8, 0, 100);
}
