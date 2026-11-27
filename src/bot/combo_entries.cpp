// combo_entries.cpp -- entradas dos combos dos bots (CAscend/CPowerup/CFallDown...ComboEntry). RECUPERADO de decomp_raw.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "gamerules.h"
#include "esf_classes.h"
#include "player_esf_manual.h"
#include "combo.h"

#define BPL(off)   BOTF(m_pBot, int, (off))      // campos do bot/jogador por offset
#define BPEV       (((CBasePlayer *)m_pBot)->pev)

// ---------------------------------------------------------------- CAscendComboEntry
CAscendComboEntry::CAscendComboEntry(CBot *pBot)        // 0x165c20 [OK]
{
    m_iStatus = 0;
    m_pBot = pBot;
    m_flDuration = 1.5f;
}
float CAscendComboEntry::GetDelay(void) { return 0.0f; }          // [OK]
void CAscendComboEntry::Activate(void)                              // 0x165c80 [OK]
{
    m_flActivateTime = gpGlobals->time;
    m_iStatus = 1;
    m_flDuration = m_flDuration + gpGlobals->time;                  // vira o instante limite
}
void CAscendComboEntry::Think(void)                                 // 0x15c530 [OK] sobe ate o limite se o bot puder
{
    if (BPL(0x324))                                                  // turbo ligado
        ((CBasePlayer *)m_pBot)->StopTurbo();
    if (!BPL(0x770) && m_flDuration >= gpGlobals->time) {
        if (m_pBot->BotCanAscend()) {
            ((CBasePlayer *)m_pBot)->StartAscend();
            return;
        }
    }
    m_iStatus = 2;
}

// ---------------------------------------------------------------- CPowerupComboEntry
CPowerupComboEntry::CPowerupComboEntry(CBot *pBot)      // 0x165b90 [OK]
{
    m_iStatus = 0;
    m_pBot = pBot;
}
float CPowerupComboEntry::GetDelay(void) { return 0.0f; }          // [OK]
void CPowerupComboEntry::Think(void)                                // 0x15c430 [OK] carrega ki (power up) ate o limite do nivel de agressividade
{
    if (m_pBot->BotCanPowerUp()) {
        if (!BPL(0x330) && RANDOM_LONG(0, 1))
            ((CBasePlayer *)m_pBot)->StartPowerUp();
        short sKiLimit = 990;
        if (BOT_ENEMY(m_pBot))
            m_pBot->AimAtEnemy(BOT_ENEMY(m_pBot));
        short sAggr = BOTF(m_pBot, short, 0xa18);                    // [?] agressividade
        if (sAggr > 59) {
            sKiLimit = 20;
            if (sAggr <= 99)
                sKiLimit = 100;
        }
        m_pBot->ResetMoveSpeed();
        if ((int)BPEV->fuser4 < sKiLimit)                            // pev+0x260 = ki
            return;                                                  // continua carregando
        ((CBasePlayer *)m_pBot)->StopPowerUp();
    }
    m_iStatus = 2;
}

// ---------------------------------------------------------------- CFallDownComboEntry
CFallDownComboEntry::CFallDownComboEntry(CBot *pBot)    // 0x165ab0 [OK]
{
    m_iStatus = 0;
    m_pBot = pBot;
    m_flDuration = 1.5f;
}
float CFallDownComboEntry::GetDelay(void) { return 0.0f; }         // [OK]
void CFallDownComboEntry::Activate(void)                            // 0x165b10 [OK]
{
    m_flActivateTime = gpGlobals->time;
    m_iStatus = 1;
    m_flDuration = m_flDuration + gpGlobals->time;
}
void CFallDownComboEntry::Think(void)                               // 0x15c3b0 [OK] desce ate tocar o chao (ou 1.5s)
{
    if (BPL(0x320))                                                  // voando
        ((CBasePlayer *)m_pBot)->StopFly();
    BOTF(m_pBot, char, 0xa10) = 0;
    BOTF(m_pBot, float, 0xa14) = 1.2f + gpGlobals->time;             // [?] proximo instante de reavaliar o voo
    if (m_flDuration >= gpGlobals->time && !(BPEV->flags & FL_ONGROUND))
        return;
    m_iStatus = 2;
}
