// tasks_react.cpp -- ReactOnDanger (e ManageEnemies) das tarefas do bot que sobrescrevem o padrao (retorna 1) da CBaseTask.
// RECUPERADO do assembly do hl_i386.so (tools/annotate_asm.py). [OK] = conferido; [?] = adivinhado.
// danger_info_s.m_iDanger e um short em +0x18; > 59 = ataque, > 99 = ataque forte, > 159 = ataque muito forte.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "esf_classes.h"
#include "tasks.h"
#include "esf_util.h"

#define TASK_DONE() (m_iState = 2)

BOOL CKickEnemyTask::ReactOnDanger(danger_info_s *pDanger)
{
    return pDanger->m_iDanger > 59;                  // [OK] cmp WORD [danger+0x18], 0x3b ; setg
}

BOOL CShootLaser1Task::ReactOnDanger(danger_info_s *pDanger)
{
    return pDanger->m_iDanger > 59;                  // [OK] identica a CKickEnemyTask
}

BOOL CWallJumpTask::ReactOnDanger(danger_info_s *pDanger)
{
    if (pDanger->m_iDanger <= 159)                   // [OK] 0x9f
        return FALSE;
    if (BOTF(m_pBot, int, 0xa1c) == 3 || BOTF(m_pBot, int, 0xa1c) == 5)   // [OK] campo do bot em +0xa1c
        return FALSE;
    if (BOTF(m_pBot, int, 0x6c8) != 0)                                    // [OK]
        return FALSE;
    return BOTF(m_pBot, int, 0x3e4) != 3;            // [OK] BOT_P3E4: 3 = defendendo
}

BOOL CPowerUpTask::ReactOnDanger(danger_info_s *pDanger)
{
    if (pDanger->m_iDanger <= 59)                    // [OK]
        return FALSE;
    short sMinKi = (pDanger->m_iDanger > 99) ? 20 : 100;   // [OK] perigo forte: basta ter 20 de ki; perigo medio: 100
    if ((int)m_pBot->pev->fuser4 < sMinKi)           // [OK] pev+0x260 = ki (fistp truncando)
        return FALSE;
    TASK_DONE();                                     // [OK] this+4 = 2
    return TRUE;
}

BOOL CTeleportTask::ReactOnDanger(danger_info_s *pDanger)
{
    if (pDanger->m_iDanger > 159)                    // [OK] 0x9f: perigo muito forte
    {
        BOTF(m_pBot, float, 0xb08) = 0;              // [?] instante em que o bot pode reagir/teleportar de novo
    }
    else if (pDanger->m_iDanger > 99)                // [OK] 0x63
    {
        float flDiff = BOTF(m_pBot, float, 0xb08) - gpGlobals->time;
        if (0.1 < flDiff)                            // [OK] constante double 0.1 (fcom)
            BOTF(m_pBot, float, 0xb08) = gpGlobals->time + 0.1;   // [OK] limita a espera a 0.1s
    }
    return FALSE;                                    // [OK] sempre 0
}

BOOL CRecoverHPTask::ReactOnDanger(danger_info_s *pDanger)
{
    int iBase = 120;                                 // [OK] 0x78
    if (pDanger->m_iDanger > 59)                     // [OK] 0x3b
    {
        iBase = 0;
        if (pDanger->m_iDanger <= 99)                // [OK] 0x63
            iBase = 30;
    }
    int iLimit = iBase + 100 * ((int)m_pBot->pev->fuser4 / 1000) - 100;   // [OK] ki/1000 (imul 0x10624dd3 = divisao por 1000)
    return (float)iLimit <= m_pEdict->v.health;      // [OK] fcomp com edict+0x1e0 (health); resultado 1 se limite <= vida
}

BOOL CShootNonChargebleTask::ReactOnDanger(danger_info_s *pDanger)
{
    if (pDanger->m_iDanger <= 59)                    // [OK]
        return FALSE;
    // [OK] bot+0xa04 aponta para uma estrutura de personalidade; +0x26 (short) = chance (%) de teleportar
    short sTeleChance = *(short *)(BOTF(m_pBot, char *, 0xa04) + 0x26);
    if (RANDOM_LONG(1, 100) <= sTeleChance)          // [OK]
    {
        m_pBot->Teleport();
        return FALSE;
    }
    if (pDanger->m_iDanger <= 99 && m_pBot->BotShouldFallDown())   // [OK]
    {
        if (BOTF(m_pBot, int, 0x320))                // [OK] m_fFlying
            m_pBot->StopFly();
        BOTF(m_pBot, char, 0xa10) = 0;               // [?]
        BOTF(m_pBot, float, 0xa14) = RANDOM_FLOAT(0.8, 1.2) + gpGlobals->time;   // [OK] o decompilado trocou por 0.8: o asm soma o retorno de RandomFloat
        return FALSE;
    }
    return TRUE;                                     // [OK]
}

void CShootLaser1Task::ManageEnemies(void)
{
    CBasePlayer *pOld = BOT_ENEMY(m_pBot);                // [OK] edi = bot+0xb6c
    CBasePlayer *pNew = m_pBot->GetBestEnemyFromList();   // [OK]
    m_pEnemy = pNew;                                      // [OK] this+0x10
    BOT_ENEMY(m_pBot) = pNew;
    if (!BOT_ENEMY(m_pBot))
    {
        if (!UTIL_IsValidPlayer((CBaseEntity *)pOld, 0, 1))   // [?] assinatura (ptr, bool, bool) = (pOld, false, true)
            return;
        BOT_ENEMY_DELAY(m_pBot) = RANDOM_FLOAT(BOT_SKILL(m_pBot)[12], BOT_SKILL(m_pBot)[13]) + gpGlobals->time;   // [OK] +0x30/+0x34
    }
    else if (BOT_ENEMY(m_pBot) != pOld)
    {
        // [OK] trocou de inimigo: tira uma marca do inimigo antigo (byte +0x1a5 do entvars, bit 0x10 = bit 12 de flags em +0x1a4)
        if (UTIL_IsValidPlayer((CBaseEntity *)pOld, 0, 0))    // [?] (pOld, false, false)
            *((byte *)pOld->pev + 0x1a5) &= 0xef;
    }
}

BOOL CAscendTask::ReactOnDanger(danger_info_s *pDanger)
{
    if (BOTF(m_pBot, int, 0xa1c) == 3)               // [OK] estado do bot em +0xa1c
        return FALSE;
    if (pDanger->m_iDanger <= 60)                    // [OK] 0x3c (aqui e 60, nao 59 como nas outras tarefas)
        return FALSE;

    // [OK] bot+0xa04 aponta para a estrutura de personalidade; +0x34 (int): 2 => x1.25, 0 => x0.75, outro => x1
    char *pPers = BOTF(m_pBot, char *, 0xa04);
    float flMult = 1.0f;
    if (*(int *)(pPers + 0x34) == 2)
        flMult = 1.25f;
    else if (*(int *)(pPers + 0x34) == 0)
        flMult = 0.75f;

    if (BOTF(m_pBot, int, 0xa1c) == 4)
    {
        float flNeed = (float)BOTF(m_pBot, int, 0xabc) * 2 * flMult;   // [OK] fild [bot+0xabc]; dobra; multiplica
        if (flNeed > m_pEdict->v.health)             // [OK] fcomp com edict+0x1e0 (health): precisa ter vida suficiente
            return FALSE;
    }

    float flLimit = 2.0f * flMult;                   // [OK] 2.0 x (1.25 | 0.75 | 1)  (via double no x87, truncado para float)
    if (BOTF(m_pBot, float, 0x774) - gpGlobals->time > flLimit)   // [OK] fcompp: (bot+0x774 - time) > limite
    {
        m_pBot->Descend(TRUE);                       // [OK] CBasePlayer::Descend(bool) com true
        BOTF(m_pBot, float, 0xb18) = RANDOM_FLOAT(10, 25) + gpGlobals->time;   // [OK] RandomFloat(10,25) + time
        return TRUE;
    }
    return FALSE;
}
