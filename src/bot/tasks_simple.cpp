// tasks_simple.cpp -- TaskThink das tarefas curtas do bot. RECUPERADO de decomp_raw/C*Task. m_iState = 2 => tarefa concluida.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
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

// ---- CIdleTask / CRecoverHPTask / CBlindedTask ----
extern char *g_pBotManager;   // [?] &BotManager; byte +0xd4b (3403) = bots congelados/parados

void CIdleTask::TaskThink(void)
{
    BOOL fStay = (g_pBotManager && g_pBotManager[0xd4b]) || BOTF(m_pBot, int, 0x364);   // [OK]
    if (!fStay)
    {
        unsigned int uMode = BOTF(m_pBot, int, 0x49c) - 9;                 // [OK] 9 ou 10
        if (uMode <= 1 || (BOT_P3E4(m_pBot) == 4 && BOT_P37C(m_pBot)))
            fStay = TRUE;
        if (!fStay)
        {
            TASK_DONE();
            return;
        }
    }
    m_pBot->ResetMoveSpeed();
}

void CRecoverHPTask::TaskThink(void)
{
    if ((int)m_pBot->pev->fuser4 > 199 || (int)*(float *)((char *)m_pBot->pev + 0x160) <= 20)   // [OK] +0x260 ki; [?] +0x160
    {
        if ((int)m_pBot->pev->fuser4 > 24)
        {
            CBasePlayerItem *pItem = BOTF(m_pBot, CBasePlayerItem *, 0x968);   // [OK] item ativo
            if (pItem && pItem->m_iId != 29)                                   // [OK] 29 = regeneration
                m_pBot->SelectItem("weapon_regeneration");
            *(int *)((char *)m_pPev + 0x200) |= 1;                             // [?] IN_ATTACK
            m_pBot->ResetMoveSpeed();
            return;
        }
    }
    TASK_DONE();
}

void CBlindedTask::TaskThink(void)
{
    if (!BOTF(m_pBot, int, 0x344))          // [OK] nao esta mais cego
    {
        TASK_DONE();
        return;
    }
    m_pBot->SetMoveDir(8);                  // [OK]
    switch (RANDOM_LONG(0, 2))
    {
    case 0: m_pBot->SetMoveDir(2); break;   // [OK]
    case 1: m_pBot->SetMoveDir(4); break;
    default: break;
    }
    if (RANDOM_LONG(1, 1000) > 39)          // [OK] 0x27
        return;
    if (BOTF(m_pBot, char, 0x9fc) <= 2)
    {
        if (RANDOM_LONG(1, 100) < *(short *)((char *)BOTF(m_pBot, void *, 0xa04) + 0x26))   // [?] chance de teleporte da habilidade
            m_pBot->Teleport();
    }
}
