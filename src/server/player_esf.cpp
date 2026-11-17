// player_esf.cpp -- funções do ESF em CBasePlayer (sem equivalente no SDK). RECUPERADO À MÃO.
// Fonte: decomp_raw/CBasePlayer/*.c. Campos: include/player_esf.h. [OK] conferido; [?] incerto.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "gamerules.h"

#define MAX_PL_NORMAL   799999999   // 0x2faf07ff
#define MAX_PL_POWERED  999999999   // 0x3b9ac9ff

BOOL CBasePlayer::IsPlayer(void)           { return TRUE; }    // [OK]
BOOL CBasePlayer::IsNetClient(void)        { return TRUE; }    // [OK]
BOOL CBasePlayer::ShouldFadeOnDeath(void)  { return FALSE; }   // [OK]
BOOL CBasePlayer::IsSpectator(void)        { return pev->iuser1; }   // [OK] +0x244
BOOL CBasePlayer::IsAlive(void)            { return pev->deadflag == DEAD_NO && pev->health > 0; }  // [OK]
BOOL CBasePlayer::IsSneaking(void)         { return m_tSneaking <= gpGlobals->time; }   // [OK] +0x920 (save-table)
void CBasePlayer::StartSneaking(void)      { m_tSneaking = gpGlobals->time - 1.0f; }    // [OK]
void CBasePlayer::StopSneaking(void)       { m_tSneaking = gpGlobals->time + 30.0f; }   // [OK]
void CBasePlayer::StopSwoop(void)          { m_Swoop.StopSwoop(); }   // [OK] objeto CSwoop embutido em +0x504 (1284)

// ---- Power level ----
void CBasePlayer::SetPowerLevel(int iPL)
{
    int max = m_fPoweredUp ? MAX_PL_POWERED : MAX_PL_NORMAL;
    m_iPowerLevel = iPL;
    if (iPL > max) m_iPowerLevel = max;
    if (m_iPowerLevel < 0)
    {
        ALERT(at_console, "negative PowerLevel\n");
        m_iPowerLevel = 0;
    }
}

void CBasePlayer::SetMaxPowerLevel(int iPL)
{
    int max = m_fPoweredUp ? MAX_PL_POWERED : MAX_PL_NORMAL;
    m_iMaxPowerLevel = iPL;
    if (iPL > max) m_iMaxPowerLevel = max;
    if (m_iMaxPowerLevel < 0)
    {
        ALERT(at_console, "negative MaxPowerLevel\n");
        m_iMaxPowerLevel = 0;
    }
    g_pGameRules->UpdatePowerLevels();      // [?] virtual do gamerules (+0xf0 da vtable) -- nome não confirmado
}

int CBasePlayer::GetPowerLevel(void)
{
    float pl = (float)m_iPowerLevel;
    if (m_fPoweredUp) pl *= 1.25f;           // [OK]
    return (int)pl;
}

float CBasePlayer::GetPowerRatio(void)
{
    if (!g_pGameRules->m_iHighestPL)          // [?] *(int*)g_pGameRules = 1º campo do gamerules
        return 0.0f;
    float r = (float)GetPowerLevel() / (float)g_pGameRules->m_iHighestPL;
    return r < 100.0f ? r : 100.0f;           // [OK] teto 100
}

void CBasePlayer::IncreasePL(int iAmount)
{
    SetPowerLevel(m_iPowerLevel + iAmount);          // [OK] +0x744
    SetMaxPowerLevel(m_iMaxPowerLevel + iAmount);    // [OK] +0x748
}

void CBasePlayer::IncreaseStrength(CBasePlayer *pOther, int iFactor)
{
    if (pOther == this) return;
    float r = (float)pOther->m_iMaxPowerLevel / (float)m_iMaxPowerLevel;   // [OK] razão entre os PL máximos
    if (1.0f > r) r *= r;                                                   // [OK] se o outro é mais fraco, ao quadrado
    IncreasePL((int)(r * (float)(iFactor * 600)));                          // [OK]
}

// ---- Ki e velocidade ----
BOOL CBasePlayer::UseKi(int iCost)
{
    float mult = m_pClass->GetKiCostMult();          // [?] virtual da classe (+0x40 na vtable) devolve double
    float cost = (float)(int)(mult * (float)iCost);
    if (cost > pev->fuser4) return FALSE;             // [OK] ki = pev->fuser4
    pev->fuser4 -= cost;
    return TRUE;
}

int CBasePlayer::GetMaxSpeed(void)
{
    if (pev->movetype == 15 && m_fBlocking)           // [OK] +0x32c; movetype 15 é do ESF
        return m_iBaseSpeed;
    if (m_fTurbo)                                     // +0x508 [?]
        return m_iBaseSpeed * 5;
    float base = m_fPoweredUp ? (float)(m_iBaseSpeed * 2) : (float)m_iBaseSpeed;
    return (int)(m_flSpeedMult * base);               // [OK]
}

// ---- HUD ----
void CBasePlayer::DrawChargeBar(int iPercent)
{
    m_iChargeBar = iPercent;                           // [OK]
    MESSAGE_BEGIN(MSG_ONE, gmsgCharge, NULL, pev->pContainingEntity);
        WRITE_BYTE(iPercent);
    MESSAGE_END();
}

void CBasePlayer::SetMaxHealth(int iMax)
{
    MESSAGE_BEGIN(MSG_ONE, gmsgMaxHealth, NULL, pev->pContainingEntity);   // [OK]
        WRITE_BYTE(iMax);
    MESSAGE_END();
}

// ---- Voz por personagem: "<pasta_da_classe>/<arquivo>" no canal de voz ----
void CBasePlayer::EmitClassSound(const char *pszSound)
{
    const char *path = UTIL_VarArgs("%s/%s", m_pClass->GetSoundDir(), pszSound);   // [OK] ex.: "goku/ha.wav"
    EMIT_SOUND_DYN(pev->pContainingEntity, CHAN_VOICE, path, 1.0, 0.8, 0, 100);    // [OK] canal 2
}

// ---- Voo ----
void CBasePlayer::StartFly(void)
{
    if (pev->flags & 0x400) return;                    // [?] bit do flags (0x400)
    if (m_fFlying) return;
    if (!CanFly()) return;                             // virtual +0x8c*... [?] slot 33 (+0x8c)
    if (m_f328 || (m_f37c && !m_f478) || m_f33c || m_f358 /* ... */) return;
    // condições do decompilado (campos ainda sem nome): +0x328, +0x37c, +0x33c, +0x35c
    if (m_fBlocking) StopBlock();                      // [OK]
    m_fFlying = 1;
    pev->gravity = 1.0e-7f;                            // [OK] ~sem gravidade (pev+0x11c)
    pev->movetype = 14;                                // [OK] MOVETYPE do ESF para voo [?]
}

void CBasePlayer::StopFly(void)
{
    if (m_f364 || !m_fFlying || m_f330) return;        // [OK] condições de saída (campos sem nome)
    if (m_f37c && !m_f478) return;
    if (m_f33c || m_f770 || m_f358 || m_f6bc) return;
    if (m_fBlocking) StopBlock();                      // [OK]
    m_fFlying = 0;
    pev->gravity = 1.0f;                               // [OK]
    pev->movetype = MOVETYPE_WALK;                     // [OK] pev+264 = 3
}
