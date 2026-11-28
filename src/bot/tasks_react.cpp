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
