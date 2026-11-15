// gallitgun.cpp -- RECUPERADO À MÃO (ESF 1.2.3). Fonte: decomp_raw/CGallitGun/*.c
// Quase idêntico ao CKamehameha: só mudam sprites, sons e constantes. [OK] = conferido no decompilado.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "weapons.h"
#include "effects.h"
#include "gallitgun.h"

void CGallitGun::Spawn(void)
{
    Precache();
    f_0c4 = 0;  f_0d8 = 0;  f_0c8 = 0;
    m_iId = 5;
    f_0c0 = 0;
    f_0b0 = -1;
    f_0dc = 24;
    f_0e0 = 1200;
    f_0e4 = 20;
    f_0e8 = 4;
    f_0ec = 4;
    f_0f0 = 0.5f;
    strcpy(m_szWeaponName, "gallitgun");   // [OK] "gall"+"itgu"+"n\0"
    f_1f4 = 0.1f;
    f_1fc = 3;                              // (Kamehameha usa 0)
    f_1f8 = 1;
    FallInit();                             // [OK]
}

void CGallitGun::Precache(void)
{
    m_usSpriteA      = PRECACHE_MODEL("sprites/gallitguna.spr");
    m_usSpriteB      = PRECACHE_MODEL("sprites/gallitgunb.spr");
    m_usSpriteAStart = PRECACHE_MODEL("sprites/gallitgunastart.spr");
    m_usSpriteBStart = PRECACHE_MODEL("sprites/gallitgunbstart.spr");
    PRECACHE_MODEL("sprites/ggunaura.spr");
    PRECACHE_SOUND("cell/gallitgun.wav");   PRECACHE_SOUND("cell2/gallitgun.wav");
    PRECACHE_SOUND("vegeta/gallitgun.wav");
    PRECACHE_SOUND("cell/gallitgunfire.wav"); PRECACHE_SOUND("cell2/gallitgunfire.wav");
    PRECACHE_SOUND("vegeta/gallitgunfire.wav");
    m_usTrailSprite = PRECACHE_MODEL("sprites/gallitguntrail.spr");
    CControlledBeam::Precache();
}

int CGallitGun::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 3;
    p->iPosition = 0;                       // Kamehameha: 1
    m_iId = p->iId = 5;
    p->iWeight   = 15;
    p->iFlags    = 0;
    return 1;
}

void CGallitGun::InitChargeSprite(void)
{
    CSprite *s = CSprite::SpriteCreate("sprites/ggunaura.spr", m_pPlayer->pev->origin, TRUE);
    m_pChargeSprite = s;
    if (m_pPlayer->pev->pContainingEntity)
        s->SetAttachment(m_pPlayer->pev->pContainingEntity, 0);   // [OK] body=0 (Kamehameha: 1)
    m_pChargeSprite->pev->rendermode  = kRenderTransAdd;
    m_pChargeSprite->pev->rendercolor = Vector(255, 255, 255);
    m_pChargeSprite->pev->renderamt   = 254;
    m_pChargeSprite->pev->renderfx    = kRenderFxNoDissipation;
    m_pChargeSprite->pev->scale       = 0.22f;                    // [OK] 0.2199999988 (Kamehameha: 0.1)
    m_pChargeSprite->pev->framerate   = 10.0f;
    m_pChargeSprite->TurnOff();
}

void CGallitGun::EnableChargeSprite(void)  { m_pChargeSprite->TurnOn(); }
void CGallitGun::DisableChargeSprite(void) { m_pChargeSprite->TurnOff(); }
void CGallitGun::RemoveChargeSprite(void)  { UTIL_Remove(m_pChargeSprite); }
void CGallitGun::EmitChargeSound(void)     { m_pPlayer->EmitClassSound("gallitgun.wav"); }
void CGallitGun::EmitShootSound(void)      { m_pPlayer->EmitClassSound("gallitgunfire.wav"); }
