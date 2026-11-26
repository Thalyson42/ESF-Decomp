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

// ---- Transformação (Ascend / Descend) ----
// vtable de CBaseClass (GCC 2.95: slot i em +8+4*i): +0xc speed, +0x10 health, +0x20 CanDescend, +0x24 GetDescendedClass,
// +0x28/+0x40(Ascend) GetTransFormPowerLevel, +0x2c multiplicador de PL, +0x30 AddAllAttacks, +0x38 GetAuraSkin.
// Efeito do cliente: mensagem gmsgTransform (MSG_ONE): byte 0, long = PL de transformação.
extern int gmsgTransform;
void UTIL_Model_FixAngles(...);

void CBasePlayer::Ascend(void)
{
    StopAscending();
    delete m_pClass;                                  // [OK] __builtin_delete da forma antiga
    m_pClass = (CBaseClass *)(size_t)f_768;           // [OK] +0x768 = forma ascendida (escolhida em StartAscend)
    pev->fuser4 -= 100.0f;                            // [OK] custo de ki
    if (pev->fuser4 < 0) pev->fuser4 = 0;
    if (f_33c) f_378 = 1;                             // [?] pede para refazer os ataques depois
    else { RemoveAllWeapons(0); m_pClass->AddAllAttacks(); }

    float mult = m_pClass->GetTransFromPLMultiplier();
    f_370 *= mult;                                    // [?] +0x370 (float)
    int iMax = (int)(mult * m_iMaxPowerLevel);
    SetMaxPowerLevel(iMax);
    SetPowerLevel(iMax);

    float ratio = pev->health / (float)f_24c;
    f_24c = m_pClass->GetStartHealth();
    SetMaxHealth(f_24c);
    int h = (int)((float)f_24c * ratio);
    pev->health = (h <= 0) ? 1.0f : (float)h;
    f_74c = m_pClass->GetStartSpeed();

    MESSAGE_BEGIN(MSG_ONE, gmsgTransform, NULL, pev->pContainingEntity);
        WRITE_BYTE(0);
        WRITE_LONG(m_pClass->GetTransFormPowerLevel());
    MESSAGE_END();
    m_pClass->SetModel();
    if (f_76c) ((CAura *)(size_t)f_76c)->SetColor();
    if (f_6cc == 1) f_6cc = 2;                        // [?]
    f_3a4 = (int)gpGlobals->time;                     // [?] +0x3a4 tipo float no binário
}

void CBasePlayer::Descend(int iFlag)
{
    if (f_770) {                                      // ainda subindo: só cancela
        StopAscending();
        if (f_6cc == 1) f_6cc = 0;
        return;
    }
    CBaseClass *pNew = m_pClass->GetDescendedClass();
    if (!pNew) return;
    if (!m_pClass->CanDescend() && !f_770) return;
    CBaseClass *pOld = m_pClass;
    m_pClass = pNew;
    if (iFlag) {
        if (f_33c) f_378 = 1;
        else { RemoveAllWeapons(0); m_pClass->AddAllAttacks(); SelectLastItem(); }
    }
    m_pClass->SetModel();
    float mult = pOld->GetTransFromPLMultiplier();
    int iMax = (int)((float)m_iMaxPowerLevel / mult);
    SetMaxPowerLevel(iMax);
    if (pev->health > 5.0f || m_iPowerLevel > iMax)           // [?] condição como no decompilado
        SetPowerLevel(iMax);
    f_370 /= pOld->GetTransFromPLMultiplier();

    float ratio = pev->health / (float)f_24c;
    f_24c = m_pClass->GetStartHealth();
    SetMaxHealth(f_24c);
    int h = (int)((float)f_24c * ratio);
    pev->health = (h <= 0) ? 1.0f : (float)h;
    f_74c = m_pClass->GetStartSpeed();
    // [?] chamada virtual em g_pGameRules (vfunc +0xf0, sem argumentos) omitida: ver docs/VERIFICAR.md

    MESSAGE_BEGIN(MSG_ONE, gmsgTransform, NULL, pev->pContainingEntity);
        WRITE_BYTE(0);
        WRITE_LONG(m_pClass->GetTransFormPowerLevel());
    MESSAGE_END();
    EMIT_SOUND_DYN(edict(), CHAN_WEAPON, "weapons/descend.wav", 1.0f, 0.8f, 0, 100);
    if (f_76c) ((CAura *)(size_t)f_76c)->SetColor();
    if (f_330) {                                      // powerup ligado: reenvia a cor da nova forma
        float *c = g_vecAuraColor[m_pClass->GetAuraSkin()];
        MESSAGE_BEGIN(MSG_PVS, gmsgPowerupFX, pev->origin);
            WRITE_BYTE(ENTINDEX(edict()));
            WRITE_BYTE((int)c[0]); WRITE_BYTE((int)c[1]); WRITE_BYTE((int)c[2]);
        MESSAGE_END();
    }
    delete pOld;
}
