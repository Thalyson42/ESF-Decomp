// tasks_simple.cpp -- TaskThink das tarefas curtas do bot. RECUPERADO de decomp_raw/C*Task. m_iState = 2 => tarefa concluida.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "tasks.h"

#define TASK_DONE() (m_iState = 2)

void CAscendTask::TaskThink(void)
{
    if (BOT_P770(m_pBot))                  // [OK] +0x770: ainda subindo
        m_pBot->ResetMoveSpeed();
    else
        TASK_DONE();
}

void CRecoverMeleeTask::TaskThink(void)
{
    if (BOT_P37C(m_pBot) && (BOTF(m_pBot, int, 0x49c) == 6 || BOT_P3E4(m_pBot)))   // [OK]
        *(int *)((char *)m_pPev + 0x200) |= 3;      // [?] botoes ATTACK|JUMP
    else
        TASK_DONE();
}

void CTeleportTask::TaskThink(void)
{
    BOTF(m_pBot, float, 0xc10) = 0;         // [OK]
    m_pBot->ResetMoveSpeed();
    m_pBot->SetMoveDir(BOTF(m_pBot, int, 0xb0c));       // [OK] direcao escolhida em GetRandomTeleDir
    if (BOTF(m_pBot, float, 0xb08) <= gpGlobals->time)  // [OK] instante marcado para teleportar
    {
        m_pBot->Teleport();                // [OK]
        TASK_DONE();
    }
}

void CWallJumpTask::TaskThink(void)
{
    if (!BOTF(m_pBot, int, 0x6c8) && (!BOT_P37C(m_pBot) || BOT_P3E4(m_pBot) != 3))   // [OK]
    {
        TASK_DONE();
        return;
    }
    m_pBot->ResetMoveSpeed();
    *(int *)((char *)m_pPev + 0x200) |= 2;  // [?] IN_JUMP
}

void CJumpOffGroundTask::TaskThink(void)
{
    *(int *)((char *)m_pPev + 0x200) |= 2;  // [?] IN_JUMP
    m_pBot->ResetMoveSpeed();
    m_pBot->SetMoveDir(*(int *)((char *)this + 0x18));  // [OK] task+0x18 = direcao
    if (BOT_P3E4(m_pBot) == 5 && BOT_P37C(m_pBot))      // [OK] ainda no impulso
        return;
    TASK_DONE();
}

void CPowerUpTask::TaskThink(void)
{
    if ((int)m_pBot->pev->fuser4 > 989)     // [OK] +0x260 = ki; >= 990 = cheio
    {
        TASK_DONE();
        return;
    }
    m_pBot->ResetMoveSpeed();
    if (BOTF(m_pBot, int, 0x330))           // [OK] ja esta carregando
        return;
    m_pBot->StartPowerUp();                 // [OK]
}

void CComboTask::TaskThink(void)
{
    if (BOT_COMBO(m_pBot))
    {
        if (!BOT_COMBO(m_pBot)->m_iStatus)  // [OK]
            BOT_COMBO(m_pBot)->Activate();
        BOT_COMBO(m_pBot)->ExcuteCombo();
        if (BOT_COMBO(m_pBot)->m_iStatus != 2)
            return;
        BOT_TASKMODE(m_pBot) = BOT_COMBO(m_pBot)->m_iSavedMode;   // [OK]
        m_pBot->DeleteCombos();
    }
    TASK_DONE();
}
