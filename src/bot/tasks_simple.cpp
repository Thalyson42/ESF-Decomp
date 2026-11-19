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
        m_pEdict->v.button |= 3;   // botoes ATTACK|JUMP
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
    m_pEdict->v.button |= 2;   // IN_JUMP
}

void CJumpOffGroundTask::TaskThink(void)
{
    m_pEdict->v.button |= 2;   // IN_JUMP
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
            m_pEdict->v.button |= 1;   // IN_ATTACK
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
        && (double)BOTF(m_pBot, int, 0x24c) > m_pEdict->v.health   // [OK]
        && 150.0 <= m_pEdict->v.fuser4)                // [OK]
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
    m_pEdict->v.button |= 1;   // IN_ATTACK (pressiona para vencer o struggle)
    if (!*((char *)BOTF(m_pBot, void *, 0xa00) + 0x3e))                // [OK] habilidade: usa turbo no struggle?
        return;
    if ((int)m_pBot->pev->fuser4 <= 20)
        return;
    m_pBot->ToggleTurbo(1);                                            // [OK]
    BOTF(m_pBot, float, 0xab4) = gpGlobals->time + 1.5;                // [OK]
}

void CNormalJumpTask::TaskThink(void)
{
    m_pEdict->v.button |= 2;   // IN_JUMP
    if (TASKF(float, 0x18) <= gpGlobals->time)                         // [OK] acabou o tempo de salto
    {
        TASK_DONE();
        return;
    }
    if (0.0 > m_pEdict->v.velocity.z)                       // [OK] edict+0xa8 = v.velocity.z < 0: ja descendo
    {
        TASK_DONE();
        return;
    }
    if (0.1 > *(float *)((char *)&m_pEdict->v + 0x11c))                      // [?]
    {
        if (*((unsigned char *)&m_pEdict->v + 0x1a5) & 2)
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
                m_pEdict->v.button |= BOTF(m_pBot, int, 0xb7c);   // [OK] botao do ataque escolhido
            return;
        }
    }
    m_pBot->AddShootDelay();                                           // [OK]
    TASK_DONE();
}

// ---- CKickEnemyTask ----
extern BOOL EntIsInFieldOfView(CBaseEntity *pViewer, CBaseEntity *pTarget);   // [?] funcao livre; assinatura a confirmar

void CKickEnemyTask::TaskThink(void)
{
    CBasePlayer *pEnemy = BOT_ENEMY(m_pBot);
    if (!pEnemy || m_pEnemy->pev->movetype == 11 || !m_pBot->CanAttackPlayer(pEnemy))   // [OK]
    {
        TASK_DONE();
        return;
    }
    if (m_pBot->CanMeleeKickPlayer(m_pEnemy))
        TASKF(float, 0x18) = gpGlobals->time;                          // [OK] ultima vez que podia chutar
    else if (gpGlobals->time - TASKF(float, 0x18) > 0.2f)
    {
        TASK_DONE();
        return;
    }
    float flDist = (pEnemy->pev->origin - m_pBot->pev->origin).Length();
    if (flDist < 30.0f)
        m_pBot->SetMoveDir(8);                                         // [OK] recua
    else if (flDist < 350.0f)
    {
        m_pBot->SetMoveDir(0x10);                                      // [OK] avanca
        if (flDist > 150.0f && !EntIsInFieldOfView(m_pBot, pEnemy) && !EntIsInFieldOfView(pEnemy, m_pBot))
            m_pBot->ResetMoveSpeed();                                  // [OK] ninguem se ve: para
    }
    else if (flDist < 750.0f)
    {
        if ((int)m_pBot->pev->fuser4 <= 450)                           // [OK] sem ki para teleportar
        {
            TASK_DONE();
            return;
        }
        if (RANDOM_LONG(1, 100) > *(short *)((char *)BOTF(m_pBot, void *, 0xa04) + 0x26))
        {
            TASK_DONE();
            return;
        }
        m_pBot->Teleport();
    }
    else
    {
        TASK_DONE();
        return;
    }
    CBasePlayerItem *pItem = BOTF(m_pBot, CBasePlayerItem *, 0x968);
    if (pItem && pItem->m_iId != 1 && pItem->m_iId != 2)               // [OK] nao esta com arma corpo a corpo
    {
        if (*(int *)((char *)&m_pEdict->v + 0x20c) == 7)                     // [?] classe 7 usa espada
            m_pBot->SelectItem("weapon_sword");
        else
            m_pBot->SelectItem("weapon_melee");
    }
    if (*((char *)BOTF(m_pBot, void *, 0xa00) + 0x3e) && (int)m_pBot->pev->fuser4 > 200)   // [OK] turbo se tiver ki
    {
        m_pBot->ToggleTurbo(1);
        BOTF(m_pBot, float, 0xab4) = gpGlobals->time + 1.5;
    }
    m_pEdict->v.button |= 0x800;   // byte +0x201 |= 8
}

// ---- CShootScatterShotsTask ----
CBaseEntity *CShootScatterShotsTask::GetFurthestScatterShot(void)
{
    CBaseEntity *pFurthest = NULL, *pShot = NULL;
    float flMax = 0;
    while ((pShot = UTIL_FindEntityByClassname(pShot, "scattershot")) != NULL)   // [OK]
    {
        if (FNullEnt(pShot->edict()) || pShot->pev->owner != m_pEdict)           // [OK] so os tiros do proprio bot
            continue;
        float flDist = (pShot->pev->origin - m_pBot->pev->origin).Length();
        if (flDist > flMax)
        {
            flMax = flDist;
            pFurthest = pShot;
        }
    }
    return pFurthest;
}

BOOL CShootScatterShotsTask::ReactOnDanger(danger_info_s *pDanger)
{
    if (pDanger->m_iDanger > 59)
    {
        if (RANDOM_LONG(1, 100) <= *(short *)((char *)BOTF(m_pBot, void *, 0xa04) + 0x26))
            m_pBot->Teleport();                                  // [OK]
        else if (m_pBot->BotShouldFallDown())
        {
            if (BOTF(m_pBot, int, 0x320))
                m_pBot->StopFly();
            BOTF(m_pBot, char, 0xa10) = 0;
            BOTF(m_pBot, float, 0xa14) = gpGlobals->time + RANDOM_FLOAT(0.8, 1.2);   // [OK]
        }
        else
            return TRUE;                                         // [OK] deixa a tarefa tratar
    }
    return FALSE;
}

void CShootScatterShotsTask::TaskThink(void)
{
    if (!(TASKF(float, 0x18) >= gpGlobals->time && (int)m_pEdict->v.fuser4 > 19))   // [OK] fim da tarefa / ki minimo
    {
        TASK_DONE();
        return;
    }
    CBasePlayer *pEnemy = BOT_ENEMY(m_pBot);
    if (!pEnemy)
    {
        if (gpGlobals->time - 2.0 < BOTF(m_pBot, float, 0xb40))    // [OK] perdeu o alvo ha menos de 2 s
        {
            m_pBot->GoToAnPreviousLocation();
            return;
        }
        TASK_DONE();
        return;
    }
    m_pBot->BotCombatMovement();
    if (!m_pBot->CanAttackPlayer(pEnemy))
        return;
    m_pEdict->v.button |= IN_ATTACK;   // [OK]
    BOOL fTurbo = TRUE;
    if (TASKF(char, 0x20))                                         // [OK] ja soltou o scattershot
        m_pEdict->v.button |= 0x800;
    else
    {
        CBaseEntity *pShot = NULL;
        if (!(TASKF(float, 0x1c) + 0.55 > gpGlobals->time) && (pShot = GetFurthestScatterShot()) != NULL)   // [OK]
        {
            float flShotDist  = (pShot->pev->origin - m_pBot->pev->origin).Length();
            float flEnemyDist = (pEnemy->pev->origin - m_pBot->pev->origin).Length();
            int iThresh = (BOTF(m_pBot, char, 0x9fc) * 5 + 5) * 5;  // [OK]
            if (flShotDist - (iThresh + 225.0) > flEnemyDist)
            {
                m_pEdict->v.button |= 0x800;   // [OK] dispara o contrair/explodir
                TASK_DONE();
                return;
            }
        }
    }
    if (fTurbo && BOTF(m_pBot, char, 0x9fc) <= 1)                  // [OK]
    {
        m_pBot->ToggleTurbo(1);
        BOTF(m_pBot, float, 0xab4) = gpGlobals->time + 1.5;
    }
}

// ---- CControlFriezaDiscTask ----
extern CBaseEntity *UTIL_GetAttackFromPlayerByName(CBasePlayer *pPlayer, const char *szName);   // [?] funcao livre
extern int UTIL_GetHeadingPercentage(CBasePlayer *pPlayer, CBasePlayer *pTarget);              // [?] funcao livre

BOOL CControlFriezaDiscTask::ReactOnDanger(danger_info_s *pDanger)
{
    return pDanger->m_iDanger > 59;                                // [?] o decompilado usa um _ccall de comparacao com 59
}

void CControlFriezaDiscTask::TaskThink(void)
{
    CBasePlayer *pEnemy = BOT_ENEMY(m_pBot);
    if (!(TASKF(float, 0x24) >= gpGlobals->time && pEnemy))        // [OK] fim da tarefa / sem inimigo
    {
        TASK_DONE();
        return;
    }
    if (m_pBot->GetMaxSpeed() > 0)
        m_pBot->BotCombatMovement();
    CBaseEntity *pDisc = UTIL_GetAttackFromPlayerByName(m_pBot, "Frieza Disc");   // [OK]
    if (!pDisc)
    {
        // ainda nao lancou o disco: espera enquanto sobrar tempo
        if (TASKF(float, 0x20) - 1.0 <= TASKF(float, 0x24) - gpGlobals->time)
            return;
        TASK_DONE();
        return;
    }
    if (pEnemy->pev->velocity.Length() > 550.0f)                   // [OK] inimigo rapido
        TASKF(float, 0x18) = gpGlobals->time;
    else
        TASKF(float, 0x1c) = gpGlobals->time;
    float flDiscDist  = (pDisc->pev->origin - m_pBot->pev->origin).Length();
    float flEnemyDist = (pEnemy->pev->origin - m_pBot->pev->origin).Length();
    float flThresh = (BOTF(m_pBot, char, 0x9fc) + 1) * 250.0 / 1.5;   // [OK]
    if (flDiscDist - flThresh > flEnemyDist && m_pBot->GetMaxSpeed() == 0.0f)
        m_pEdict->v.button |= 0x800;                               // [OK] byte +0x201 |= 8
    if (pDisc->pev->velocity.Length() != 0.0f)                     // [OK] disco ainda em movimento: so guia
        return;
    BOOL fFire = TRUE;
    if (gpGlobals->time - 0.5 < TASKF(float, 0x18))
        if (gpGlobals->time - 4.0 < TASKF(float, 0x1c))
            fFire = UTIL_GetHeadingPercentage(m_pBot, pEnemy) > 74;   // [?] _ccall compara com 74
    if (!fFire || !m_pBot->CanAttackPlayer(pEnemy))
        return;
    m_pEdict->v.button |= IN_ATTACK;                               // [OK]
}

// ---- CLookAroundTask ----
// task+0x18..0x47: 4 pontos (Vector) alcancados olhando em volta; +0x48 passo (1..4); +0x4c proximo instante
void CLookAroundTask::TaskThink(void)
{
    Vector *pLook = (Vector *)((char *)this + 0x18);                   // [OK] pLook[0..3]
    if (TASKF(float, 0x4c) < gpGlobals->time)
    {
        TASKF(int, 0x48)++;
        if (TASKF(int, 0x48) > 4)
        {
            float flBest = 0;
            Vector vecBest = g_vecZero;
            for (int i = 0; i < 4; i++)
            {
                float flDist = (pLook[i] - m_pEdict->v.origin).Length();   // [OK] edict+0x88 = origin
                if (flDist > flBest)
                {
                    flBest = flDist;
                    vecBest = pLook[i];                                // [OK] olha para o ponto mais distante
                }
            }
            Vector vecAng = m_pBot->GetAimAngles(vecBest);
            BOTF(m_pBot, float, 0xc10) = vecAng.x;                     // [OK] angulo ideal (pitch, yaw, roll)
            BOTF(m_pBot, float, 0xc14) = vecAng.y;
            BOTF(m_pBot, float, 0xc18) = vecAng.z;
            TASK_DONE();
            return;
        }
        float flYaw = BOTF(m_pBot, float, 0xc14) + RANDOM_LONG(80, 100);   // [OK] gira ~90 graus
        BOTF(m_pBot, float, 0xc14) = UTIL_WrapAngle(flYaw);
        UTIL_MakeVectors(m_pEdict->v.v_angle);                         // [?] angulos usados no decompilado ilegiveis
        TraceResult tr;
        Vector vecEnd = m_pEdict->v.origin + gpGlobals->v_forward * 10000.0;
        UTIL_TraceHull(m_pEdict->v.origin, vecEnd, ignore_monsters, human_hull, m_pEdict, &tr);   // [OK] hull 1
        pLook[TASKF(int, 0x48) - 1] = tr.vecEndPos;                    // [OK]
        TASKF(float, 0x4c) = gpGlobals->time + RANDOM_FLOAT(0.4, 0.8); // [?] decompilado soma mais 2x um valor perdido
    }
    m_pBot->ResetMoveSpeed();
    if (RANDOM_LONG(0, 5) > 4)
        BOTF(m_pBot, float, 0xc10) = UTIL_WrapAngle(BOTF(m_pBot, float, 0xc10) + RANDOM_LONG(-10, 10));   // [OK] tremida no pitch
    if (RANDOM_LONG(0, 5) > 4)
        BOTF(m_pBot, float, 0xc14) = UTIL_WrapAngle(BOTF(m_pBot, float, 0xc14) + RANDOM_LONG(-10, 10));   // [OK] tremida no yaw
}

// ---- CBlockTask ----
extern BOOL IsNull(edict_t *pEnt);          // [?] funcoes livres do ESF
extern BOOL IsAttack(edict_t *pEnt);
extern void WrapAngles(Vector &vecAngles);

BOOL CBlockTask::ShouldManageEnemies(void)
{
    return BOTF(m_pBot, int, 0xa1c) == 3;                           // [OK]
}

void CBlockTask::TaskThink(void)
{
    m_pBot->ResetMoveSpeed();
    BOOL fStop = (TASKF(float, 0x18) < gpGlobals->time &&           // [OK] fim do tempo de bloqueio...
                  !(BOTF(m_pBot, int, 0x358) || BOTF(m_pBot, int, 0x49c) == 2 || BOTF(m_pBot, short, 0xa18) > 159))
                 || (int)m_pEdict->v.fuser4 <= 7;                   // [OK] ...ou ki acabou (1e-44 = int 7)
    if (fStop)
    {
        if (BOTF(m_pBot, int, 0x32c))
            m_pBot->StopBlock();                                    // [OK]
        TASK_DONE();
        return;
    }
    if (BOTF(m_pBot, int, 0x358))                                   // [OK] m_fBlockStruggling
    {
        if (*((char *)BOTF(m_pBot, void *, 0xa00) + 0x3e))
        {
            m_pBot->ToggleTurbo(1);
            BOTF(m_pBot, float, 0xab4) = gpGlobals->time + 1.5;
        }
        CBaseEntity *pInAtk = BOTF(m_pBot, CBaseEntity *, 0xac0);   // [OK] ataque que esta sendo bloqueado
        edict_t *pAtk = pInAtk ? ENT(pInAtk->pev) : NULL;
        if (pAtk && !IsNull(pAtk) && IsAttack(pAtk))
        {
            BOOL fAimAtAttack = TRUE;
            edict_t *pOwner = pAtk->v.owner;                        // [OK] edict+0x218
            if (!IsNull(pOwner))
            {
                Vector vecAng = UTIL_VecToAngles(pOwner->v.origin - m_pEdict->v.origin);
                WrapAngles(vecAng);
                float flYaw   = UTIL_WrapAngle(pAtk->v.angles.y + 180.0);   // [OK]
                float flPitch = UTIL_WrapAngle(pAtk->v.angles.x + 180.0);
                if (20.0 > fabs(flYaw - vecAng.y) && 20.0 > fabs(flPitch - vecAng.x))
                {
                    // o atacante ja esta mirando de volta: acompanha o dono do ataque
                    BOTF(m_pBot, float, 0xc10) = vecAng.x;
                    BOTF(m_pBot, float, 0xc14) = vecAng.y;
                    BOTF(m_pBot, float, 0xc18) = vecAng.z;
                    fAimAtAttack = FALSE;
                }
            }
            if (fAimAtAttack)
            {
                Vector vecAng = m_pBot->GetAimAngles(pAtk->v.origin);   // [OK]
                BOTF(m_pBot, float, 0xc10) = vecAng.x;
                BOTF(m_pBot, float, 0xc14) = vecAng.y;
                BOTF(m_pBot, float, 0xc18) = vecAng.z;
            }
        }
    }
    if (!BOTF(m_pBot, int, 0x32c))
        m_pBot->StartBlock();                                       // [OK]
}
