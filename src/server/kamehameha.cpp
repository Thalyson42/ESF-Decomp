// kamehameha.cpp -- RECUPERADO À MÃO (ESF 1.2.3, de hl_i386.so). Fonte: decomp_raw/CKamehameha/*.c
// Estado por função: [OK] verificada contra o decompilado; [?] campo/constante sem nome confirmado.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "weapons.h"
#include "effects.h"
#include "kamehameha.h"

// [?] valores de Spawn: os campos +0xdc..+0xfe pertencem à base (CGallitGun::Spawn grava os
//     mesmos campos com outros valores: id=5, 24, 1200, "gallitgun") -> são "parâmetros de arma".
void CKamehameha::Spawn(void)
{
    Precache();                         // [OK] vtable slot 1
    f_0c4 = 0;  f_0d8 = 0;  f_0c8 = 0;  // [?]
    m_iId = 6;                          // [OK] +0x88 (também gravado em GetItemInfo)
    f_0c0 = 0;
    f_0b0 = -1;
    f_0dc = 36;                         // [?]
    f_0e0 = 1150;                       // [?]
    f_0e4 = 20;
    f_0e8 = 4;
    f_0ec = 4;
    f_0f0 = 0.5f;
    strcpy(m_szWeaponName, "kamehameha");  // [OK] +0xf4 (char[], gravado como "kame"+"hame"+"ha\0")
    f_1f4 = 0.1f;
    f_1fc = 0;
    f_1f8 = 1;
    FallInit();                         // [OK] CBasePlayerItem::FallInit
}

void CKamehameha::Precache(void)
{
    // [OK] índices dos sprites (cada PRECACHE_MODEL guarda em campo unsigned short)
    m_usKameSpriteA      = PRECACHE_MODEL("sprites/kamehamehaa.spr");
    m_usKameSpriteB      = PRECACHE_MODEL("sprites/kamehamehab.spr");
    m_usKameSpriteAStart = PRECACHE_MODEL("sprites/kamehamehaastart.spr");
    m_usKameSpriteBStart = PRECACHE_MODEL("sprites/kamehamehabstart.spr");
    PRECACHE_MODEL("sprites/kamecharge.spr");

    // sons de voz de cada personagem
    PRECACHE_SOUND("goku/kamehame.wav");    PRECACHE_SOUND("goku/ha.wav");
    PRECACHE_SOUND("krillin/kamehame.wav"); PRECACHE_SOUND("krillin/ha.wav");
    PRECACHE_SOUND("gohan/kamehame.wav");   PRECACHE_SOUND("gohan/ha.wav");
    PRECACHE_SOUND("cell/kamehame.wav");    PRECACHE_SOUND("cell/ha.wav");
    PRECACHE_SOUND("cell2/kamehame.wav");   PRECACHE_SOUND("cell2/ha.wav");
    PRECACHE_SOUND("weapons/kame_charge.wav");
    PRECACHE_SOUND("weapons/kamehameha_fire.wav");

    m_usTrailSprite = PRECACHE_MODEL("sprites/kamehamehatrail.spr");
    CControlledBeam::Precache();            // [OK] (sub_488bb0 = CControlledBeam::Precache: beamhead.wav / beamfire.wav)
}

int CKamehameha::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);  // [OK] *(pev)+gpGlobals->pStringBase
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 3;
    p->iPosition = 1;
    m_iId = p->iId = 6;
    p->iWeight   = 15;
    p->iFlags    = 0;
    return 1;
}

void CKamehameha::InitChargeSprite(void)
{
    // [OK] offsets de entvars_t conferidos em tools/data/entvars_offsets.txt
    CSprite *s = CSprite::SpriteCreate("sprites/kamecharge.spr", m_pPlayer->pev->origin, TRUE);
    m_pChargeSprite = s;
    if (m_pPlayer->pev->pContainingEntity)            // +0x208
        s->SetAttachment(m_pPlayer->pev->pContainingEntity, 1);
        // = skin=ENTINDEX(e); body=1; aiment=e; movetype=MOVETYPE_FOLLOW (12) -- bate com o decompilado

    m_pChargeSprite->pev->rendermode  = kRenderTransAdd;       // +0x148 = 5
    m_pChargeSprite->pev->rendercolor = Vector(255, 255, 255);  // +0x150..0x158
    m_pChargeSprite->pev->renderamt   = 254;                    // +0x14c
    m_pChargeSprite->pev->renderfx    = kRenderFxNoDissipation; // +0x15c = 19
    m_pChargeSprite->pev->scale       = 0.1f;                   // +0x144
    m_pChargeSprite->pev->framerate   = 10.0f;                  // +0x138
    m_pChargeSprite->TurnOff();                                 // [OK] CSprite::TurnOff
}

void CKamehameha::GrowChargeSprite(void)
{
    m_pChargeSprite->pev->scale = m_flCharge * 0.015f;          // [OK] +0xd8 * 0.015
}

void CKamehameha::EnableChargeSprite(void)  { m_pChargeSprite->TurnOn(); }   // [OK]
void CKamehameha::DisableChargeSprite(void) { m_pChargeSprite->TurnOff(); }  // [OK]
void CKamehameha::RemoveChargeSprite(void)  { UTIL_Remove(m_pChargeSprite); } // [OK]

void CKamehameha::EmitChargeSound(void)
{
    m_pPlayer->EmitClassSound("kamehame.wav");   // [OK] voz por personagem: goku/, krillin/, gohan/, cell/, cell2/ + nome
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev->pContainingEntity), CHAN_WEAPON,
                   "weapons/kame_charge.wav", 1.0, 0.8, 0, 100);
}

void CKamehameha::EmitShootSound(void)
{
    m_pPlayer->EmitClassSound("ha.wav");         // [OK]
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev->pContainingEntity), CHAN_WEAPON,
                   "weapons/kamehameha_fire.wav", 1.0, 0.8, 0, 100);
}
