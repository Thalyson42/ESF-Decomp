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

// ---- CShootLaser1Task / CPowerStruggleTask / CNormalJumpTask ----
#define PEV_BYTE1A5(p) (*((unsigned char *)(p) + 0x1a5))   // [?] byte de flags do entvars do alvo (bit 0x10 = marcado)

void CShootLaser1Task::TaskThink(void)
{
    CBasePlayer *pEnemy = TASKF(CBasePlayer *, 0x10);                  // [OK]
    if (pEnemy && TASKF(float, 0x18) >= gpGlobals->time               // [OK] fim da tarefa
        && (double)BOTF(m_pBot, int, 0x24c) > *(float *)((char *)m_pPev + 0x1e0)   // [OK]
        && 150.0 <= *(float *)((char *)m_pPev + 0x2e0))                // [OK]
    {
        if (!m_pBot->CanAttackPlayer(pEnemy))
            PEV_BYTE1A5(pEnemy->pev) &= 239;                           // [OK] desmarca o alvo
        else
        {
            m_pBot->ResetMoveSpeed();
            PEV_BYTE1A5(pEnemy->pev) |= 16;                            // [OK] marca o alvo
            m_pBot->ShootHealthBeam(pEnemy);
            if (BOTF(m_pBot, float, 0xbb4) <= gpGlobals->time)         // [OK]
                BOTF(m_pBot, float, 0xbb4) = gpGlobals->time + 0.1;
            return;
        }
    }
    TASK_DONE();
}

void CPowerStruggleTask::TaskThink(void)
{
    if (!BOTF(m_pBot, int, 0x354) && !BOTF(m_pBot, int, 0x35c))        // [OK] m_fInPowerStruggle / m_fInBlockStruggle
    {
        TASK_DONE();
        return;
    }
    *(int *)((char *)m_pPev + 0x200) |= 1;                             // [?] IN_ATTACK (pressiona para vencer o struggle)
    if (!*((char *)BOTF(m_pBot, void *, 0xa00) + 0x3e))                // [OK] habilidade: usa turbo no struggle?
        return;
    if ((int)m_pBot->pev->fuser4 <= 20)
        return;
    m_pBot->ToggleTurbo(1);                                            // [OK]
    BOTF(m_pBot, float, 0xab4) = gpGlobals->time + 1.5;                // [OK]
}

void CNormalJumpTask::TaskThink(void)
{
    *(int *)((char *)m_pPev + 0x200) |= 2;                             // [?] IN_JUMP
    if (TASKF(float, 0x18) <= gpGlobals->time)                         // [OK] acabou o tempo de salto
    {
        TASK_DONE();
        return;
    }
    if (0.0 > *(float *)((char *)m_pPev + 0xa8))                       // [?] pev+0xa8 < 0: ja descendo
    {
        TASK_DONE();
        return;
    }
    if (0.1 > *(float *)((char *)m_pPev + 0x19c))                      // [?]
    {
        if (*((unsigned char *)m_pPev + 0x225) & 2)
            m_pBot->StopFly();
        else
        {
            TASK_DONE();
            return;
        }
    }
    m_pBot->SetMoveDir(BOTF(m_pBot, char, 0xaf8));                     // [OK]
    if (TASKF(float, 0x1c) >= gpGlobals->time)
        return;
    TASKF(float, 0x1c) = gpGlobals->time + RANDOM_FLOAT(0.25, 0.4);    // [OK]
    if (RANDOM_LONG(1, 100) <= *(short *)((char *)BOTF(m_pBot, void *, 0xa04) + 0x26))
        m_pBot->Teleport();
}

// ---- CShootNonChargebleTask ----
void CShootNonChargebleTask::TaskThink(void)
{
    CBasePlayer *pEnemy = TASKF(CBasePlayer *, 0x10);                  // [OK]
    if (!pEnemy)
    {
        if (gpGlobals->time - 2.0 <= BOTF(m_pBot, float, 0xb40))       // [OK] perdeu o alvo ha menos de 2 s
            m_pBot->GoToAnPreviousLocation();
        else
            TASK_DONE();
        return;
    }
    m_pBot->BotCombatMovement();                                       // [OK]
    BOOL fReady = BOTF(m_pBot, float, 0xb78) <= gpGlobals->time;       // [OK] atraso entre tiros acabou
    BOOL fCanAttack = TRUE;
    if ((int)m_pBot->pev->fuser4 > 14)                                 // [OK] ki minimo
    {
        if (!m_pBot->CanAttackPlayer(pEnemy))
            fCanAttack = FALSE;
        if (!fReady)
        {
            if (fCanAttack)
                *(int *)((char *)m_pPev + 0x200) |= BOTF(m_pBot, int, 0xb7c);   // [OK] botao do ataque escolhido
            return;
        }
    }
    m_pBot->AddShootDelay();                                           // [OK]
    TASK_DONE();
}
