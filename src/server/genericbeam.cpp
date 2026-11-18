// genericbeam.cpp -- RECUPERADO de decomp_raw/CGenericBeam (feixe basico, 5 cores de aura). [OK] valores do decompilado; [?] nomes.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "esf_classes.h"
#include "genericbeam.h"

extern const char *g_pAuraColorString[5];   // [OK] "blue","green","purple","red","yellow" [?] valores

void CGenericBeam::Spawn(void)
{
    Precache();                         // [OK] vtable slot 1
    m_iAttackState = 0;  m_iCharge = 0;  m_pBeam = NULL;
    m_iId = 4;                          // [OK] +0x88
    m_iDefaultAmmo = 0;                 // [OK] +0xc0
    m_iClip = -1;                       // [OK] +0xb0
    m_iMaxCharge = 9;
    m_iBeamSpeed = 1700;
    m_iKiCost = 10;
    m_iDmgPerCharge = 4;
    f_0ec = 5;
    m_flChargeSpeedMult = 0.75f;
    strcpy(m_szWeaponName, "genericbeam");   // [OK] +0xf4
    f_1f4 = 0.25f;
    f_1f8 = 1;
    FallInit();
}

void CGenericBeam::Precache(void)
{
    m_usColor[1][0] = PRECACHE_MODEL("sprites/blueattacka.spr");
    m_usColor[1][1] = PRECACHE_MODEL("sprites/greenattacka.spr");
    m_usColor[1][2] = PRECACHE_MODEL("sprites/purpleattacka.spr");
    m_usColor[1][3] = PRECACHE_MODEL("sprites/redattacka.spr");
    m_usColor[1][4] = PRECACHE_MODEL("sprites/yellowattacka.spr");
    m_usColor[2][0] = PRECACHE_MODEL("sprites/blueattackb.spr");
    m_usColor[2][1] = PRECACHE_MODEL("sprites/greenattackb.spr");
    m_usColor[2][2] = PRECACHE_MODEL("sprites/purpleattackb.spr");
    m_usColor[2][3] = PRECACHE_MODEL("sprites/redattackb.spr");
    m_usColor[2][4] = PRECACHE_MODEL("sprites/yellowattackb.spr");
    m_usColor[3][0] = PRECACHE_MODEL("sprites/blueattackastart.spr");
    m_usColor[3][1] = PRECACHE_MODEL("sprites/greenattackastart.spr");
    m_usColor[3][2] = PRECACHE_MODEL("sprites/purpleattackastart.spr");
    m_usColor[3][3] = PRECACHE_MODEL("sprites/redattackastart.spr");
    m_usColor[3][4] = PRECACHE_MODEL("sprites/yellowattackastart.spr");
    m_usColor[4][0] = PRECACHE_MODEL("sprites/blueattackbstart.spr");
    m_usColor[4][1] = PRECACHE_MODEL("sprites/greenattackbstart.spr");
    m_usColor[4][2] = PRECACHE_MODEL("sprites/purpleattackbstart.spr");
    m_usColor[4][3] = PRECACHE_MODEL("sprites/redattackbstart.spr");
    m_usColor[4][4] = PRECACHE_MODEL("sprites/yellowattackbstart.spr");
    m_usColor[0][0] = PRECACHE_MODEL("sprites/bluetrail.spr");
    m_usColor[0][1] = PRECACHE_MODEL("sprites/greentrail.spr");
    m_usColor[0][2] = PRECACHE_MODEL("sprites/purpletrail.spr");
    m_usColor[0][3] = PRECACHE_MODEL("sprites/redtrail.spr");
    m_usColor[0][4] = PRECACHE_MODEL("sprites/yellowtrail.spr");
    PRECACHE_MODEL("sprites/bluecharge.spr");
    PRECACHE_MODEL("sprites/greencharge.spr");
    PRECACHE_MODEL("sprites/purplecharge.spr");
    PRECACHE_MODEL("sprites/redcharge.spr");
    PRECACHE_MODEL("sprites/yellowcharge.spr");
    PRECACHE_SOUND("weapons/basicbeam_charge.wav");
    PRECACHE_SOUND("weapons/basicbeam_fire.wav");
    CControlledBeam::Precache();        // [OK]
}

int CGenericBeam::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 2;
    p->iPosition = 0;
    m_iId = p->iId = 4;
    p->iWeight   = 20;
    p->iFlags    = 0;
    return 1;
}

BOOL CGenericBeam::Deploy(void)
{
    InitChargeSprite();                                  // [OK] +0x16c
    m_fBallCharging = 0;                                 // [OK] +0x210
    int c = m_pPlayer->m_pClass->GetAuraSkin();          // [OK] cor da aura (vtable +0x38)
    m_usTrailSprite  = m_usColor[0][c];                  // [OK] +0xcc  (trail)
    m_usSpriteA      = m_usColor[1][c];                  // +0xce
    m_usSpriteB      = m_usColor[2][c];                  // +0xd0
    m_usSpriteAStart = m_usColor[3][c];                  // +0xd2
    m_usSpriteBStart = m_usColor[4][c];                  // +0xd4
    // [?] ha uma jump table por cor; o ramo visivel (c>4) faz o mesmo que se supoe para 0..4
    sprintf(m_szWeaponName, "%sattack", g_pAuraColorString[c]);   // [OK] +0xf4
    m_iAttackState = 0;
    return DefaultDeploy("genericbeam", "", 0, "");      // [?] so o 1o argumento aparece
}

void CGenericBeam::PrimaryAttack(void)
{
    m_fBallCharging = 0;                                 // [OK]
    CControlledBeam::PrimaryAttack();
}

void CGenericBeam::SecondaryAttack(void)
{
    if (m_iAttackState == 2)
    {
        CControlledBeam::SecondaryAttack();
        return;
    }
    m_fBallCharging = 1;                                 // [OK] carrega a bola (botao secundario)
    Charge();
    m_flNextPrimaryAttack = m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + 0.2;   // [OK]
}

void CGenericBeam::Shoot(void)
{
    if (!m_fBallCharging)
    {
        CControlledBeam::Shoot();
        return;
    }
    m_fBallCharging = 0;
    m_pPlayer->DrawChargeBar(0);
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "common/null.wav", 1.0, 0.8, 0, 100);   // [OK]
    m_pPlayer->f_334 = 0;
    m_iAttackState = 0;
    if (m_iCharge >= m_iMaxCharge / 3)
    {
        m_pPlayer->SetAnimation((PLAYER_ANIM)5);
        DisableChargeSprite();                           // [OK] +0x174
        EmitShootSound();                                // +0x168
        UTIL_MakeVectors(m_pPlayer->pev->v_angle);
        Vector gun = m_pPlayer->GetGunPosition();
        Vector start = gun + gpGlobals->v_forward * 10;                          // [OK] 10.0
        Vector vel   = gpGlobals->v_forward * (float)m_iBeamSpeed;               // [OK] +0xe0
        float ratio  = GetPowerRatio();
        // [?] argumentos extras (sprites +0xcc..+0xd4, f_1f8, m_iCharge/m_iMaxCharge) nao conferidos
        CGenericBall::ShootGenericBall(m_pPlayer, &start, &vel, (int)(ratio * (m_iCharge * 3)));
    }
    else
    {
        m_pPlayer->m_flSpeedMult = 1.0f;                 // [OK] +0x754
        EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_VOICE, "common/null.wav", 1.0, 0.8, 0, 100);
    }
}

void CGenericBeam::InitChargeSprite(void)
{
    char color[32], path[64];
    strcpy(color, g_pAuraColorString[m_pPlayer->m_pClass->GetAuraSkin()]);   // [OK]
    sprintf(path, "sprites/%scharge.spr", color);                              // [OK]
    CSprite *s = CSprite::SpriteCreate(path, m_pPlayer->pev->origin, TRUE);
    m_pChargeSprite = s;
    edict_t *pe = m_pPlayer->pev->pContainingEntity;
    if (pe)
    {
        s->pev->skin = ENTINDEX(pe);                     // [OK] +0x110
        s->pev->body = 1;                                // [OK] +0x114
        s->pev->aiment = pe;                             // [OK] +0x194
        s->pev->movetype = 12;                           // [OK] +0x108
    }
    s->pev->rendermode  = kRenderTransAdd;               // [OK] +0x148 = 5
    s->pev->rendercolor = Vector(255, 255, 255);
    s->pev->renderamt   = 254;
    s->pev->renderfx    = 19;                            // [OK] +0x15c
    s->pev->scale       = 0.1f;                          // [OK] +0x144
    s->pev->framerate   = 10.0f;                         // [OK] +0x138
    s->TurnOff();
}

void CGenericBeam::EnableChargeSprite(void)   { m_pChargeSprite->TurnOn(); }                          // [OK]
void CGenericBeam::DisableChargeSprite(void)  { m_pChargeSprite->TurnOff(); }                         // [OK]
void CGenericBeam::GrowChargeSprite(void)     { m_pChargeSprite->pev->scale = m_iCharge * 0.015; }    // [OK]
void CGenericBeam::RemoveChargeSprite(void)   { UTIL_Remove(m_pChargeSprite); }                       // [OK]

void CGenericBeam::EmitChargeSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/basicbeam_charge.wav", 1.0, 0.8, 0, 100);   // [OK]
}

void CGenericBeam::EmitShootSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/basicbeam_fire.wav", 1.0, 0.8, 0, 100);     // [OK]
}
