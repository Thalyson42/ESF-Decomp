// basetask.cpp -- CBaseTask (6 funcoes). RECUPERADO de decomp_raw/CBaseTask.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "bot.h"

CBaseTask::CBaseTask(CBot *pBot)
{
    m_pBot = pBot;                             // [OK] +8
    m_pEdict = pBot->pev->pContainingEntity;   // [OK] +0xc
    m_pEnemy = BOT_ENEMY(pBot);                // [OK] +0x10
    m_iState = 1;                              // [OK] +4
    SetGeneralDelay();                         // [OK]
}

void CBaseTask::MakeCombo(EComboType type)
{
    m_iState = 2;                              // [OK]
    BOT_TASKMODE(m_pBot) = 12;                 // [OK] +0x1068
    BOT_COMBO(m_pBot) = new CBotCombo(m_pBot, type);   // [OK] __builtin_new(24)
}

void CBaseTask::ManageEnemies(void)
{
    CBasePlayer *pOld = BOT_ENEMY(m_pBot);
    CBasePlayer *pNew = m_pBot->GetBestEnemyFromList();   // [OK]
    m_pEnemy = pNew;
    BOT_ENEMY(m_pBot) = pNew;
    if (BOT_ENEMY(m_pBot))
        return;
    if (!UTIL_IsValidPlayer((CBaseEntity *)pOld, 0, 1))   // [?] assinatura (ptr, short, short)
        return;
    // perdeu o inimigo valido: espera um tempo antes de reavaliar
    BOT_ENEMY_DELAY(m_pBot) = RANDOM_FLOAT(BOT_SKILL(m_pBot)[12], BOT_SKILL(m_pBot)[13]) + gpGlobals->time;   // [OK] +0x30/+0x34
}

void CBaseTask::SetGeneralDelay(void)
{
    if (BOT_FASTMODE(m_pBot) > 0)              // [OK] +0xba4
        m_flDelay = gpGlobals->time;
    else
        m_flDelay = RANDOM_FLOAT(BOT_SKILL(m_pBot)[0], BOT_SKILL(m_pBot)[1]) + gpGlobals->time;   // [OK]
}
