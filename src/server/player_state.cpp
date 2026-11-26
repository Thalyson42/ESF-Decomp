// player_state.cpp -- estados de ki do CBasePlayer: powerup, turbo, block, ascensão. RECUPERADO À MÃO.
// Fonte: decomp_raw/CBasePlayer/{StartBlock,StopBlock,StartPowerUp,StopPowerUp,StartTurbo,StopTurbo,StopAscending}*.c
// Campos: include/player_esf.h + esf_extras.h (f_xxxx = ainda sem nome). [OK] conferido; [?] incerto.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "esf_classes.h"
#include "aura.h"

extern int gmsgPowerupFX, gmsgStopPowerupFX, gmsgStopTransformFX;

#define FL_ESF_HIDDEN   0x4000000   // [OK] byte pev+0x1a7 & 4 (a mesma flag que AddToFullPack usa para ocultar)

// cor da aura por pele (GetAuraSkin 0..4); valores lidos do inicializador estático do binário (200.0f).
// A ordem de g_pAuraColorString é blue,green,purple,red,yellow; a tabela do binário é {200,200,200} {0,200,0} {200,0,200} {200,0,0} {200,200,0}.
float g_vecAuraColor[5][3] = {
    { 200.0f, 200.0f, 200.0f },   // [OK] valores; o 0 não bate com "blue" (RGB), reproduzido como no binário
    {   0.0f, 200.0f,   0.0f },
    { 200.0f,   0.0f, 200.0f },
    { 200.0f,   0.0f,   0.0f },
    { 200.0f, 200.0f,   0.0f },
};

// ---- Block ----
void CBasePlayer::StartBlock(void)
{
    if (pev->flags & FL_ESF_HIDDEN) return;                       // [OK]
    if (m_fBlocking || f_334 || f_33c || f_328) return;           // [OK] +0x32c,+0x334,+0x33c,+0x328
    if (!CanFly()) return;                                        // [?] vfunc +0x8c (mesma condição de StartFly)
    if (f_340 || f_770 || f_37c || f_478 || f_6bc) return;        // [OK]
    if (f_330) StopPowerUp();                                     // [OK] +0x330 = powerup ligado
    m_flSpeedMult = 0;                                            // [OK] +0x754
    m_fBlocking = 1;                                              // [OK] +0x32c
    *(float *)&f_734 = gpGlobals->time;                           // [OK] +0x734 (float) início do block
}

void CBasePlayer::StopBlock(void)
{
    if (!m_fBlocking) return;
    if (m_fBlockStruggling) {                                     // [OK] +0x358
        m_pBlockAttack = NULL;                                    // [OK] +0x780
        m_fBlockStruggling = 0;
        pev->movetype = m_fFlying ? 14 : MOVETYPE_WALK;               // [OK] +0x108; 14 = voo do ESF
    }
    f_784 = 0;                                                    // [OK]
    m_flSpeedMult = 1.0f;
    f_730 = 0;
    m_fBlocking = 0;
}

// ---- Powerup (carregar ki) ----
void CBasePlayer::StartPowerUp(void)
{
    if (pev->flags & FL_ESF_HIDDEN) return;
    if (f_364 || f_330 || f_334 || f_33c) return;                 // [OK] +0x364,+0x330,+0x334,+0x33c
    if (!CanFly()) return;
    if (f_328 || f_340 || f_770 || f_37c || f_478 || f_6bc) return;
    if (m_fBlocking) StopBlock();
    if (m_fPoweredUp) StopTurbo();                                // [OK] +0x324 é ligado por StartTurbo (nome do campo em player_esf.h é [?])
    if (!(pev->flags & FL_ONGROUND) && !m_fFlying) StartFly();        // [OK] pev+0x1a5 & 2 = 0x200 = FL_ONGROUND
    m_flSpeedMult = 0;
    f_330 = 1;

    int skin = m_pClass->GetAuraSkin();                           // [OK] vtable +56 de CBaseClass
    float *c = g_vecAuraColor[skin];
    MESSAGE_BEGIN(MSG_PVS, gmsgPowerupFX, pev->origin);           // [OK] tipo 2
        WRITE_BYTE(ENTINDEX(edict()));
        WRITE_BYTE((int)c[0]);
        WRITE_BYTE((int)c[1]);
        WRITE_BYTE((int)c[2]);
    MESSAGE_END();
}

void CBasePlayer::StopPowerUp(void)
{
    if (!f_330) return;
    m_flSpeedMult = 1.0f;
    f_330 = 0;
    MESSAGE_BEGIN(MSG_PVS, gmsgStopPowerupFX, pev->origin);
        WRITE_BYTE(ENTINDEX(edict()));
    MESSAGE_END();
}

// ---- Turbo (aura) ----
void CBasePlayer::StartTurbo(void)
{
    if (pev->flags & FL_ESF_HIDDEN) return;
    if (f_364 || m_fPoweredUp || f_328) return;                   // [OK] +0x364,+0x324,+0x328
    if (!CanFly()) return;
    if (f_334 || f_340 || f_770 || f_37c) return;
    m_fPoweredUp = 1;                                             // [OK] +0x324
    if (f_76c) return;                                            // já tem aura
    f_76c = (int)(size_t)CAura::Create(this);                     // [OK] +0x76c = CAura*
}

void CBasePlayer::StopTurbo(void)
{
    if (f_37c) return;
    if (!m_fPoweredUp) return;
    m_fPoweredUp = 0;
    if (!f_76c) return;
    ((CAura *)(size_t)f_76c)->Destroy();
    f_76c = 0;
}

// ---- Ascensão ----
void CBasePlayer::StopAscending(void)
{
    if (!f_770) return;                                           // [OK] +0x770 = subindo de forma
    f_770 = 0;
    if (!f_33c) m_flSpeedMult = 1.0f;
    MESSAGE_BEGIN(MSG_PVS, gmsgStopTransformFX, pev->origin);
        WRITE_BYTE(ENTINDEX(edict()));
    MESSAGE_END();
    UTIL_Model_RemoveAll(ENTINDEX(edict()));
}
