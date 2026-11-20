// tasks_simple.cpp -- TaskThink das tarefas curtas do bot. RECUPERADO de decomp_raw/C*Task. m_iState = 2 => tarefa concluida.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "esf_classes.h"
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

// ---- CKameTorpTask ----
// task+0x18 fim do desvio, +0x1c direcao (bits de SetMoveDir), +0x20/+0x24 proximos instantes de desvio, +0x28 mirou,
// +0x2c estado (0 carrega, 1 power up, 2 atira, 3 desvia, 4 foge), +0x30 prazo, +0x34 fim, +0x38 maximo de torpedos
extern BOOL CheckForCollide(edict_t *pEdict, int iDir, float flDist);        // [?] funcao livre do ESF
extern Vector GetFurthestCollision(CBasePlayer *pPlayer, float flMaxDist);   // [?] idem

static BOOL KameTryAxis(CKameTorpTask *pTask, edict_t *pEdict, int r, int bitFirst, int bitSecond)
{
    int *pDir = (int *)((char *)pTask + 0x1c);
    int bitA = (r == 1) ? bitFirst : bitSecond;      // r==1 tenta o primeiro, r==2 o segundo
    int bitB = (r == 1) ? bitSecond : bitFirst;
    if (!CheckForCollide(pEdict, bitA, 35.0f)) { *pDir |= bitA; return TRUE; }
    if (!CheckForCollide(pEdict, bitB, 35.0f)) { *pDir |= bitB; return TRUE; }
    return FALSE;
}

BOOL CKameTorpTask::SetMoveAwayDir(void)
{
    TASKF(int, 0x1c) = 0;
    BOOL fFound = FALSE;
    int r = RANDOM_LONG(0, 2);                       // [OK] eixo frente/tras: 16 e 8
    if (r) fFound = KameTryAxis(this, m_pEdict, r, 16, 8);
    r = RANDOM_LONG(fFound ? 0 : 1, 2);              // [OK] sem direcao ainda: nao pode "pular" o eixo
    if (r) fFound |= KameTryAxis(this, m_pEdict, r, 2, 4);      // esquerda/direita
    r = RANDOM_LONG(fFound ? 0 : 1, 2);
    if (r) fFound |= KameTryAxis(this, m_pEdict, r, 32, 64);    // cima/baixo
    return fFound;
}

short CKameTorpTask::CountTorps(void)
{
    short n = 0;
    CBaseEntity *pTorp = NULL;
    while ((pTorp = UTIL_FindEntityByClassname(pTorp, "Kame Torpedo")) != NULL)   // [OK]
    {
        if (!IsNull(pTorp->edict()) && pTorp->pev->owner == m_pEdict && pTorp->pev->velocity.Length() <= 0.0f)   // [OK] parados
            n++;
    }
    return n;
}

void CKameTorpTask::ChargeKameTorps(void)
{
    if (BOTF(m_pBot, int, 0x6d0) > 99 || !BOTF(m_pBot, char, 0xaf0))   // [?] +0x6d0 carga do ataque, +0xaf0 flag "carregando"
    {
        if (BOTF(m_pBot, int, 0x6d0) == 100)
        {
            BOTF(m_pBot, char, 0xaf0) = 0;
            if (!SetMoveAwayDir())
                return;
            TASKF(int, 0x2c) = 3;                    // [OK] desvia depois de carregar
            TASKF(float, 0x18) = gpGlobals->time + RANDOM_FLOAT(0.13, 0.25);
            return;
        }
        if (CountTorps() >= TASKF(short, 0x38))      // [OK] ja tem torpedos suficientes
        {
            TASKF(int, 0x2c) = 2;
            TASKF(float, 0x34) = gpGlobals->time + 4.0;
            return;
        }
        BOTF(m_pBot, char, 0xaf0) = 1;
        CBasePlayerItem *pItem = BOTF(m_pBot, CBasePlayerItem *, 0x968);
        if (pItem && pItem->m_iId != 32)             // [OK] 32 = kame torpedo
            m_pBot->SelectItem("weapon_kametorpedo");
    }
    m_pEdict->v.button |= IN_ATTACK;                 // [OK]
}

BOOL CKameTorpTask::ReactOnDanger(danger_info_s *pDanger)
{
    int d = pDanger->m_iDanger;
    if ((unsigned short)(d - 100) <= 59)
        m_pEdict->v.button |= 0x800;                 // [OK]
    else if (d <= 59)
        TASKF(int, 0x38) = 3;                        // [OK] perigo baixo: ate 3 torpedos
    else
    {
        if (d > 99)
        {
            m_pEdict->v.button |= 0x800;
            return TRUE;
        }
        TASKF(int, 0x38) = 1;
    }
    return FALSE;
}

void CKameTorpTask::TaskThink(void)
{
    m_pBot->ResetMoveSpeed();
    if (TASKF(float, 0x30) < gpGlobals->time && 0.0 < TASKF(float, 0x30))   // [OK] prazo vencido
    {
        TASKF(int, 0x2c) = 2;
        TASKF(float, 0x30) = 0;
        TASKF(float, 0x34) = gpGlobals->time + 3.0;
    }
    int iKi = (int)m_pEdict->v.fuser4;
    if (iKi <= 149)                                  // [OK] sem ki: volta a carregar
    {
        TASKF(int, 0x2c) = 1;
        BOTF(m_pBot, char, 0xaf0) = 0;
    }
    switch (TASKF(int, 0x2c))
    {
    case 0:
        ChargeKameTorps();
        break;
    case 1:
        if (iKi > 700)
        {
            TASKF(int, 0x2c) = 0;
            if (BOTF(m_pBot, int, 0x330))
                m_pBot->StopPowerUp();
        }
        else if (!BOTF(m_pBot, int, 0x330))
            m_pBot->StartPowerUp();
        break;
    case 2:
        if (!BOT_ENEMY(m_pBot))
        {
            if (TASKF(float, 0x30) >= gpGlobals->time)
            {
                TASKF(int, 0x2c) = 4;
                return;
            }
            if (!TASKF(char, 0x28))
            {
                Vector vecFar = GetFurthestCollision(m_pBot, 1000.0f);   // [OK]
                if (vecFar != g_vecZero)
                {
                    Vector vecAng = m_pBot->GetAimAngles(vecFar);
                    BOTF(m_pBot, float, 0xc10) = vecAng.x;
                    BOTF(m_pBot, float, 0xc14) = vecAng.y;
                    BOTF(m_pBot, float, 0xc18) = vecAng.z;
                }
                TASKF(char, 0x28) = 1;
            }
        }
        else if (TASKF(float, 0x30) >= gpGlobals->time)
        {
            if ((int)m_pEdict->v.fuser4 > 10 && !m_pBot->CanAttackPlayer(TASKF(CBasePlayer *, 0x10)))
                return;
        }
        if (!RANDOM_LONG(0, 4))
            m_pEdict->v.button |= 0x800;
        if (TASKF(float, 0x34) < gpGlobals->time)
            TASK_DONE();
        if (!CountTorps())
            TASK_DONE();
        break;
    case 3:
        m_pBot->SetMoveDir(TASKF(int, 0x1c));
        if (TASKF(float, 0x18) > gpGlobals->time)
            return;
        TASKF(int, 0x1c) = 0;
        TASKF(int, 0x2c) = 0;
        break;
    case 4:
        if (BOT_ENEMY(m_pBot))
            TASKF(int, 0x2c) = 2;
        else if (TASKF(float, 0x24) < gpGlobals->time)
        {
            TASKF(float, 0x24) = gpGlobals->time + RANDOM_FLOAT(1.75, 2.75);
            if (!SetMoveAwayDir())
                return;
            TASKF(int, 0x2c) = 3;
            TASKF(float, 0x18) = gpGlobals->time + RANDOM_FLOAT(0.13, 0.25);
            TASKF(float, 0x20) = TASKF(float, 0x18) + RANDOM_FLOAT(0.2, 0.45);
        }
        else if (TASKF(float, 0x20) < gpGlobals->time)
        {
            TASKF(float, 0x20) = gpGlobals->time + RANDOM_FLOAT(0.35, 0.75);
            float flYaw = BOTF(m_pBot, float, 0xc14);
            if (!BOTF(m_pBot, int, 0xff0))
                flYaw += RANDOM_FLOAT(40, 50);       // [OK] gira para um lado
            else
                flYaw -= RANDOM_FLOAT(40, 50);       // ...ou para o outro
            BOTF(m_pBot, float, 0xc14) = UTIL_WrapAngle(flYaw);
        }
        break;
    }
}

// ---- CShootCandyTask ----
// task+0x1c proximo teleporte, +0x20 recuar ate, +0x24 proxima busca de doce, +0x28 prazo da busca, +0x2c ultimo instante perto
BOOL CShootCandyTask::ReactOnDanger(danger_info_s *pDanger)
{
    return pDanger->m_iDanger > 59;                  // [?] _ccall comparando com 59
}

void CShootCandyTask::TaskThink(void)
{
    if ((int)m_pEdict->v.fuser4 <= 49)               // [OK] sem ki
    {
        TASK_DONE();
        return;
    }
    CBasePlayer *pEnemy = BOT_ENEMY(m_pBot);
    BOOL fSearchCandy = FALSE;
    if (pEnemy)
    {
        if (m_pBot->CanAttackPlayer(pEnemy))
        {
            float flDist = (pEnemy->pev->origin - m_pBot->pev->origin).Length();
            if (flDist <= 950.0)                     // [OK]
            {
                if (flDist > 500.0)
                {
                    if (TASKF(float, 0x1c) <= gpGlobals->time)
                    {
                        TASKF(float, 0x1c) = gpGlobals->time + 0.2;
                        if (RANDOM_LONG(1, 100) <= *(short *)((char *)BOTF(m_pBot, void *, 0xa04) + 0x26))
                            m_pBot->Teleport();      // [OK] aproxima teleportando
                    }
                    else if ((int)m_pEdict->v.fuser4 > 250)
                        m_pBot->ToggleTurbo(1);
                }
                else if (flDist < 75.0)
                {
                    TASKF(float, 0x2c) = gpGlobals->time;
                    TASKF(float, 0x20) = gpGlobals->time + 0.35;   // [OK] muito perto: recua um pouco
                }
                else
                    TASKF(float, 0x2c) = gpGlobals->time;
                if (gpGlobals->time - 3.5 <= TASKF(float, 0x2c))   // [OK] esteve na faixa de tiro ha menos de 3.5 s
                {
                    if (TASKF(float, 0x20) > gpGlobals->time)
                        m_pBot->SetMoveDir(8);
                    CBasePlayerItem *pItem = BOTF(m_pBot, CBasePlayerItem *, 0x968);
                    if (pItem && pItem->m_iId != 20)               // [OK] 20 = candy
                        m_pBot->SelectItem("weapon_candy");
                    m_pEdict->v.button |= IN_ATTACK;
                    return;
                }
            }
        }
        TASK_DONE();
        return;
    }
    if (TASKF(float, 0x28) == 0.0f)
    {
        TASKF(float, 0x28) = gpGlobals->time + 1.0;                 // [OK] procura doce por 1 s
        fSearchCandy = TRUE;
    }
    else if (TASKF(float, 0x28) >= gpGlobals->time && BOTF(m_pBot, int, 0xb70))
        fSearchCandy = TRUE;
    if (!fSearchCandy)
    {
        TASK_DONE();
        return;
    }
    if (TASKF(float, 0x24) >= gpGlobals->time)
        return;
    TASKF(float, 0x24) = gpGlobals->time + 0.15;                    // [OK]
    CBaseEntity *pCandy = NULL;
    while ((pCandy = UTIL_FindEntityByClassname(pCandy, "candy")) != NULL)   // [OK]
    {
        if (IsNull(pCandy->edict()))
            continue;
        if ((pCandy->pev->origin - m_pBot->pev->origin).Length() <= 750.0)   // [OK]
        {
            Vector vecAng = m_pBot->GetAimAngles(pCandy->pev->origin);       // mira no doce
            BOTF(m_pBot, float, 0xc10) = vecAng.x;
            BOTF(m_pBot, float, 0xc14) = vecAng.y;
            BOTF(m_pBot, float, 0xc18) = vecAng.z;
            return;
        }
    }
    if (TASKF(float, 0x28) - gpGlobals->time <= 0.75)               // [OK] sem doce e quase sem tempo
        TASK_DONE();
}

// ---- CBeamJumpTask ----
extern entvars_t *UTIL_GetLastAttackFromPlayer(CBasePlayer *pPlayer);   // [?] funcao livre: ultimo ataque lancado pelo jogador
extern BOOL IsNull(entvars_t *pev);                                      // [?] sobrecarga

#define BEAMJUMP_ACTIVE(task) (BOTF((task)->m_pBot, int, 0x33c) && *(int *)((char *)&(task)->m_pEdict->v + 0x108) == 15)   // [OK] edict+0x188

int CBeamJumpTask::GetBotSenseChecks(void)
{
    if (BEAMJUMP_ACTIVE(this))
        return 0;                                    // [OK] em beam jump nao sente nada
    return 15;
}

BOOL CBeamJumpTask::ReactOnDanger(danger_info_s *pDanger)
{
    if (!BEAMJUMP_ACTIVE(this) && pDanger->m_iDanger > 159)
    {
        if (BOTF(m_pBot, int, 0x6d0) <= 0)
            m_pEdict->v.button |= 0x800;
        else if (*(int *)((char *)&m_pEdict->v + 0x20c) == 7)    // [?] classe 7 = espada
            m_pBot->SelectItem("weapon_sword");
        else
            m_pBot->SelectItem("weapon_melee");
        return TRUE;
    }
    return FALSE;
}

void CBeamJumpTask::TaskThink(void)
{
    m_pEdict->v.button |= IN_JUMP;                   // [OK]
    if (!(TASKF(float, 0x18) > gpGlobals->time))     // [OK] acabou o tempo
    {
        TASK_DONE();
        return;
    }
    BOOL fBeaming = BEAMJUMP_ACTIVE(this);
    BOOL fContinue = FALSE;
    if (!BOTF(m_pBot, int, 0x334))
    {
        if (fBeaming)
            fContinue = TRUE;
        else if (BOTF(m_pBot, int, 0x33c))
            goto aim;                                // [OK] mesmo caminho do else
    }
    else
    {
aim:
        if (!fBeaming)
        {
            // mira no ponto escolhido (bot+0xb24..0xb2c) e atira quando carregou
            Vector vecAng = m_pBot->GetAimAngles(Vector(BOTF(m_pBot, float, 0xb24), BOTF(m_pBot, float, 0xb28), BOTF(m_pBot, float, 0xb2c)));
            BOTF(m_pBot, float, 0xc10) = vecAng.x;
            BOTF(m_pBot, float, 0xc14) = vecAng.y;
            BOTF(m_pBot, float, 0xc18) = vecAng.z;
            if (BOTF(m_pBot, int, 0x6d0) && TASKF(float, 0x20) + 0.2 >= gpGlobals->time)
                m_pEdict->v.button |= IN_ATTACK;
        }
        fContinue = TRUE;
    }
    if (!fContinue)
    {
        TASK_DONE();
        return;
    }
    entvars_t *pLast = UTIL_GetLastAttackFromPlayer(m_pBot);
    if (IsNull(pLast) && gpGlobals->time + 0.4 > TASKF(float, 0x18))   // [OK] sem ataque e quase no fim
    {
        TASK_DONE();
        return;
    }
    CBasePlayer *pEnemy = BOT_ENEMY(m_pBot);
    if (fBeaming && pEnemy)
    {
        float flEnemyDist  = (pEnemy->pev->origin - m_pBot->pev->origin).Length();
        float flAtkEnemy   = (pLast->origin - pEnemy->pev->origin).Length();
        float flAtkBot     = (pLast->origin - m_pBot->pev->origin).Length();
        if (flEnemyDist > 950.0f)
        {
            // ataque proprio ja longe do inimigo e longe de mim: segue; senao termina
            if (pLast->dmg * 9.0 > flAtkEnemy && pLast->dmg * 11.0 < flAtkBot)
            {
                TASK_DONE();
                return;
            }
        }
    }
    if (TASKF(float, 0x1c) > gpGlobals->time)
        return;
    if (fBeaming)
    {
        TASKF(float, 0x1c) = gpGlobals->time + 0.1;  // [OK]
        if (!CheckForCollide(m_pEdict, 8, 50.0f))
            return;
    }
    else
        return;
    TASK_DONE();
}

// ---- CChargeAttackTask ----
// task+0x18 ultimo instante com inimigo rapido (>550), +0x1c ultimo instante com inimigo lento
extern BOOL EntityHeadsToPlayer(CBasePlayer *pBot, entvars_t *pAttack);   // [?] funcao livre
#define BOT_ATTACK(b) BOTF(b, bot_attack_s *, 0xb80)                      // [OK] ataque escolhido
#define BOT_CHARGE(b) BOTF(b, int, 0x6d0)                                 // [?] carga do ataque (100 = cheio)

BOOL CChargeAttackTask::ReactOnDanger(danger_info_s *pDanger)
{
    if (pDanger->m_iDanger <= 59)
        return FALSE;
    CBot *pBot = m_pBot;
    BOOL fCanTeleport = BOT_CHARGE(pBot) <= 0 ? TRUE : pBot->m_pClass->CanTeleportWhileCharging() != 0;   // [OK] vtable +0x44
    if (RANDOM_LONG(1, 100) <= *(short *)((char *)BOTF(pBot, void *, 0xa04) + 0x26) && fCanTeleport)
    {
        pBot->Teleport();                                       // [OK]
        return FALSE;
    }
    if (pBot->BotShouldFallDown())
    {
        if (BOTF(pBot, int, 0x320))
            pBot->StopFly();
        BOTF(pBot, char, 0xa10) = 0;
        BOTF(pBot, float, 0xa14) = gpGlobals->time + RANDOM_FLOAT(0.8, 1.2);
        return FALSE;
    }
    if (BOT_CHARGE(pBot) <= 32)
        return TRUE;                                            // [OK] pouca carga: deixa para o chamador
    if (BOT_ATTACK(pBot) && BOT_ATTACK(pBot)->m_fBeamJump && pDanger->m_iDanger <= 99 && pBot->BotCanBeamJump(0))
    {
        BOTF(pBot, int, 0x1068) = 22;                           // [OK] foge com beam jump
        TASK_DONE();
        m_pEdict->v.button |= IN_ATTACK;
        return FALSE;
    }
    BOOL fHandled = FALSE;
    if (BOT_ENEMY(pBot) && BOTF(pBot, int, 0xa1c) == 1)
    {
        entvars_t *pLast = UTIL_GetLastAttackFromPlayer(BOT_ENEMY(pBot));
        if (pLast && EntityHeadsToPlayer(pBot, pLast))          // [OK] ataque do inimigo vem em minha direcao
        {
            fHandled = TRUE;
            pBot->AddShootDelay();
            BOTF(pBot, char, 0xb14) = RANDOM_LONG(1, 100) <= *(short *)((char *)BOTF(pBot, void *, 0xa04) + 0x2a);   // [OK]
            BOTF(pBot, int, 0x1068) = 15;
            TASK_DONE();
            Vector vecAng = pBot->GetAimAngles(pLast->origin);
            BOTF(pBot, float, 0xc10) = vecAng.x;
            BOTF(pBot, float, 0xc14) = vecAng.y;
            BOTF(pBot, float, 0xc18) = vecAng.z;
        }
    }
    if (!fHandled && pDanger->m_iDanger > 99)
    {
        if (!BOT_ATTACK(pBot))
            return TRUE;
        if (pBot->AttackIsBeam(BOT_ATTACK(pBot)))
        {
            if (*(int *)((char *)&m_pEdict->v + 0x20c) == 7)    // [?] classe 7 = espada
            {
                pBot->SelectItem("weapon_sword");
                return TRUE;
            }
            pBot->SelectItem("weapon_melee");
        }
        return TRUE;
    }
    return FALSE;
}

void CChargeAttackTask::TaskThink(void)
{
    CBot *pBot = m_pBot;
    CBasePlayer *pEnemy = BOT_ENEMY(pBot);
    if (!(BOT_ATTACK(pBot) && (pEnemy || !(gpGlobals->time - 2.0 >= BOTF(pBot, float, 0xb40)))))   // [OK] ataque escolhido e alvo (ou perdido ha < 2 s)
    {
        TASK_DONE();
        return;
    }
    int iAtk = BOT_ATTACK(pBot)->m_iAttack;
    if (iAtk == 16 || iAtk == 22 || iAtk == 12 || iAtk == 15 || iAtk == 13 || iAtk == 24 || iAtk == 19)
        pBot->ResetMoveSpeed();                                 // [OK] estes ataques exigem ficar parado
    else if (!pEnemy)
        pBot->GoToAnPreviousLocation();
    else
        pBot->BotCombatMovement();
    if (pEnemy)
    {
        if (pEnemy->pev->velocity.Length() > 550.0f)            // [OK]
            TASKF(float, 0x18) = gpGlobals->time;
        else
            TASKF(float, 0x1c) = gpGlobals->time;
    }
    BOOL fFull = BOT_CHARGE(pBot) == 100;                       // [OK] carga cheia
    int iKi = (int)m_pEdict->v.fuser4;
    BOOL fKeepCharging = FALSE;                                 // true = vai para o trecho "carrega/atira"
    if (iKi > 14)
    {
        if (pEnemy)
        {
            if (gpGlobals->time - 0.5 < TASKF(float, 0x18) && gpGlobals->time - 4.0 < TASKF(float, 0x1c))
            {
                if (UTIL_GetHeadingPercentage(pBot, pEnemy) <= 74)   // [OK] inimigo nao esta de frente
                    fKeepCharging = TRUE;
            }
            else if (!pBot->CanAttackPlayer(pEnemy))
                fFull = FALSE;
        }
        if (!fKeepCharging && !fFull)
            fKeepCharging = TRUE;
    }
    if (fKeepCharging)
    {
        m_pEdict->v.button |= BOTF(pBot, int, 0xb7c);           // [OK] botao do ataque
        if (iKi <= 124 && BOTF(pBot, int, 0x324))               // [OK] +0x324 = powered up
            pBot->ToggleTurbo(0);
        else if (iAtk != 7 && iAtk != 10 && iAtk != 33)
        {
            if (*((char *)BOTF(pBot, void *, 0xa00) + 0x3e) && (int)m_pEdict->v.fuser4 > 250 && BOT_CHARGE(pBot) <= 10)
                pBot->ToggleTurbo(1);
        }
        BOTF(pBot, float, 0xab4) = gpGlobals->time + 1.5;
        return;
    }
    // soltou o ataque: termina a tarefa e escolhe o proximo modo
    pBot->AddShootDelay();
    if (pEnemy && BOTF(pEnemy, int, 0x770) && !*((char *)BOTF(pBot, void *, 0xa04) + 0x38))   // [?] campos do inimigo/habilidade
    {
        if (*(int *)((char *)&m_pEdict->v + 0x20c) == 7)
            pBot->SelectItem("weapon_sword");
        else
            pBot->SelectItem("weapon_melee");
    }
    else if (iAtk == 10)
        BOTF(pBot, int, 0x1068) = 14;
    else if (BOT_CHARGE(pBot) > 0)
    {
        BOTF(pBot, char, 0xb14) = RANDOM_LONG(1, 100) <= *(short *)((char *)BOTF(pBot, void *, 0xa04) + 0x2a);
        if (!pEnemy && pBot->BotCanBeamJump(0) && BOT_ATTACK(pBot)->m_fBeamJump)
            BOTF(pBot, int, 0x1068) = 22;
        else
            BOTF(pBot, int, 0x1068) = 15;
    }
    TASK_DONE();
}

// ---- CAbsorbHealthTask ----

BOOL CAbsorbHealthTask::ShootAbsorbHealthBeams(void)
{
    if (!BOTF(m_pBot, int, 0xa20))
        m_pBot->MakePlayerList();                                  // [OK]
    int iCount = BOTF(m_pBot, int, 0xaac);                         // [OK] numero de jogadores na lista
    if (!iCount)
        return FALSE;
    BOOL fShot = FALSE;
    for (int i = 0; i < iCount; i++)
    {
        CBasePlayer *pTarget = BOTF(m_pBot, CBasePlayer *, 0xa24 + i * 4);   // [OK] lista de jogadores do bot
        if (g_teamplay && *(int *)((char *)&m_pEdict->v + 0x1ac) == *((int *)pTarget->pev + 107))   // [OK] +0x22c / +0x1ac: mesmo time
            continue;
        if (!m_pBot->CanAttackPlayer(pTarget))
            continue;
        float flFrac = 0.95f;                                      // [OK] "33s?" = 0x3f733333
        int iDiff = BOTF(m_pBot, int, 0x744) - *(int *)((char *)pTarget + 0x744);   // [?] contador do jogador (+0x744)
        if (iDiff > 0)
            flFrac = (float)((double)iDiff / 10000000.0);
        if (flFrac < 0.05f) flFrac = 0.05f;                        // [OK] limita entre 5% e 95%
        else if (flFrac > 0.95f) flFrac = 0.95f;
        Vector vecVel = pTarget->pev->velocity;
        float flSpeed = vecVel.Length();
        Vector vecDir = flSpeed == 0.0f ? Vector(0, 0, 1) : vecVel * (1.0f / flSpeed);
        pTarget->pev->velocity = vecVel - vecDir * (flSpeed * flFrac);   // [OK] freia o alvo
        m_pBot->ShootHealthBeam(pTarget);                          // [OK]
        fShot = TRUE;
        if ((double)BOTF(m_pBot, int, 0x24c) <= m_pEdict->v.health)   // [OK] vida cheia: para
            return FALSE;
    }
    if (BOTF(m_pBot, float, 0xbb4) <= gpGlobals->time)             // [OK]
        BOTF(m_pBot, float, 0xbb4) = gpGlobals->time + 0.19;
    return fShot;
}

void CAbsorbHealthTask::TaskThink(void)
{
    if ((double)BOTF(m_pBot, int, 0x24c) > m_pEdict->v.health &&   // [OK] precisa de vida
        (int)m_pEdict->v.fuser4 >= 100 && !BOTF(m_pBot, int, 0x37c))
    {
        m_pBot->ToggleTurbo(0);
        char *pv = (char *)&m_pEdict->v;                           // [?] campos do entvars ESF configurando os raios
        *(int *)(pv + 0x148) = 0;
        *(int *)(pv + 0x15c) = 19;
        *(float *)(pv + 0x14c) = 25.0f;
        *(float *)(pv + 0x150) = 125.0f;
        *(float *)(pv + 0x154) = 255.0f;
        *(float *)(pv + 0x158) = 255.0f;
        m_pBot->ResetMoveSpeed();
        if (ShootAbsorbHealthBeams())
            return;
    }
    TASK_DONE();
}

// ---- CHuntEnemyTask ----
// task+0x18 proxima reavaliacao. Bot: +0x1034 jogador cacado, +0x1024 waypoint destino (-1 = nenhum), +0x1008 waypoint atual,
// +0xff8 posicao do waypoint atual, +0x1004 instante, +0x1038 ultima posicao conhecida (x,y,z,tempo), +0x1048 anterior, +0x105c ultima distancia
struct waypoint_s { float x, y, z; int flags; };       // [OK] 16 bytes por waypoint
extern waypoint_s waypoints[];
extern int num_waypoints;
extern short WaypointFindReachable(edict_t *pEdict, float flRange, int iTeam);                      // [?] funcoes livres de waypoint
extern short WaypointFindNearest(Vector *pvecPos, edict_t *pEdict, float flRange, int iTeam);
extern short WaypointRouteFromTo(short iFrom, short iTo, int iTeam);

void CHuntEnemyTask::TaskThink(void)
{
    CBasePlayer *pHunted = BOTF(m_pBot, CBasePlayer *, 0x1034);
    if (UTIL_IsValidPlayer((CBaseEntity *)pHunted, 1, 1))
    {
        int iTeam = *(int *)((char *)&m_pEdict->v + 0x1ac);     // [OK] edict+0x22c
        if (BOTF(m_pBot, int, 0x1024) == -1 || !num_waypoints)
        {
            // sem waypoints: segue o rastro do jogador (5 posicoes recentes dele, 16 bytes cada, em jogador+0x6d4)
            Vector vecLast(BOTF(m_pBot, float, 0x1038), BOTF(m_pBot, float, 0x103c), BOTF(m_pBot, float, 0x1040));
            float flDist = (vecLast - m_pBot->pev->origin).Length();
            BOOL fStuck = flDist < 60.0f;                       // [OK] chegou ao ponto
            if (0.0f < BOTF(m_pBot, float, 0x105c) && flDist > BOTF(m_pBot, float, 0x105c))
                fStuck = TRUE;                                  // [OK] esta se afastando
            BOTF(m_pBot, float, 0x105c) = flDist;
            if (!fStuck)
            {
                if (TASKF(float, 0x18) < gpGlobals->time)
                {
                    TASKF(float, 0x18) = gpGlobals->time + 0.8;
                    int iBest = -1, iBestScore = 0;
                    float flNearest = 9999.9f;
                    for (int i = 4; i >= 0; i--)
                    {
                        float *pTrail = (float *)((char *)pHunted + 0x6d4 + i * 16);   // x,y,z,tempo
                        if (gpGlobals->time - 15.0f > pTrail[3])
                            continue;                           // [OK] ponto velho (> 15 s)
                        Vector vecTrail(pTrail[0], pTrail[1], pTrail[2]);
                        float flTrailDist = (vecTrail - m_pBot->pev->origin).Length();
                        if (flTrailDist > 6000.0f || flTrailDist < 300.0f)
                            continue;                           // [OK] longe demais / perto demais
                        if (vecTrail == Vector(BOTF(m_pBot, float, 0x1048), BOTF(m_pBot, float, 0x104c), BOTF(m_pBot, float, 0x1050)))
                            continue;                           // [OK] ja foi ate la
                        if (!m_pBot->CanReachPoint(vecTrail))   // [?] vtable +0xe4 do bot
                            continue;
                        int iScore = 1;                         // [?] o decompilado soma 1 por "mais perto" em dois acumuladores iguais
                        if (flTrailDist < flNearest) { flNearest = flTrailDist; iScore = 3; }
                        if (iScore >= iBestScore) { iBestScore = iScore; iBest = i; }
                    }
                    if (iBest > -1)
                    {
                        float *pTrail = (float *)((char *)pHunted + 0x6d4 + iBest * 16);
                        BOTF(m_pBot, float, 0x1048) = BOTF(m_pBot, float, 0x1038);   // guarda o ponto anterior
                        BOTF(m_pBot, float, 0x104c) = BOTF(m_pBot, float, 0x103c);
                        BOTF(m_pBot, float, 0x1050) = BOTF(m_pBot, float, 0x1040);
                        BOTF(m_pBot, float, 0x1054) = BOTF(m_pBot, float, 0x1044);
                        BOTF(m_pBot, float, 0x1038) = pTrail[0];
                        BOTF(m_pBot, float, 0x103c) = pTrail[1];
                        BOTF(m_pBot, float, 0x1040) = pTrail[2];
                        BOTF(m_pBot, float, 0x1044) = pTrail[3];
                    }
                }
                Vector vecAng = m_pBot->GetAimAngles(Vector(BOTF(m_pBot, float, 0x1038), BOTF(m_pBot, float, 0x103c), BOTF(m_pBot, float, 0x1040)));
                BOTF(m_pBot, float, 0xc10) = vecAng.x;
                BOTF(m_pBot, float, 0xc14) = vecAng.y;
                BOTF(m_pBot, float, 0xc18) = vecAng.z;
                m_pBot->ToggleTurbo(1);
                return;
            }
            if (m_pBot->CheckForHuntEnemy())
                return;
        }
        else if (!m_pBot->ReachedGoalWP())
        {
            BOOL fNavigate = TRUE;
            if (!m_pBot->CurrentWPIsValid())
            {
                short iWP = WaypointFindReachable(m_pEdict, 1250.0f, iTeam);   // [OK]
                if (iWP != -1)
                {
                    BOTF(m_pBot, int, 0x1008) = iWP;
                    BOTF(m_pBot, float, 0xff8) = waypoints[iWP].x;
                    BOTF(m_pBot, float, 0xffc) = waypoints[iWP].y;
                    BOTF(m_pBot, float, 0x1000) = waypoints[iWP].z;
                    BOTF(m_pBot, float, 0x1004) = gpGlobals->time;
                }
                else
                    fNavigate = FALSE;
            }
            if (fNavigate)
            {
                if (TASKF(float, 0x18) < gpGlobals->time)
                {
                    TASKF(float, 0x18) = gpGlobals->time + 1.5;
                    Vector vecPos = pHunted->pev->origin;
                    short iNear = WaypointFindNearest(&vecPos, ENT(pHunted->pev), 750.0f, g_teamplay ? iTeam : -1);   // [OK]
                    if (iNear != -1 && WaypointRouteFromTo(BOTF(m_pBot, int, 0x1008), iNear, iTeam) != -1)
                        BOTF(m_pBot, int, 0x1024) = iNear;      // [OK] novo destino
                }
                if (m_pBot->HeadToWaypoint())
                    return;
            }
        }
    }
    TASK_DONE();
}

// ---- CFinishMeleeTask ----
// task+0x28 modo (short: 1 = combo carregado, 2 = arremesso), +0x2a (char) minimo de golpes, +0x2c vitima, +0x30 ponto alvo (x,y,z), +0x3c achou obstaculo
BOOL CFinishMeleeTask::IsValidThrowVictim(CBasePlayer *pVictim)
{
    if (pVictim->pev->velocity.Length() > 600.0f)                  // [OK] muito rapido
        return FALSE;
    if ((pVictim->pev->origin - m_pBot->pev->origin).Length() > 1500.0f)   // [OK] muito longe
        return FALSE;
    return m_pBot->CanMelee(pVictim) == 1;                         // [OK]
}

void CFinishMeleeTask::CheckPlayerToThrowAt(void)
{
    CBasePlayer *pBest = NULL;
    float flBest = 9999.0f;
    if (!BOTF(m_pBot, char, 0xa20))
        m_pBot->MakePlayerList();
    int iCount = BOTF(m_pBot, int, 0xaac);
    for (int i = 0; i < iCount; i++)
    {
        CBasePlayer *pPlayer = BOTF(m_pBot, CBasePlayer *, 0xa24 + i * 4);
        float flDist = (pPlayer->pev->origin - m_pBot->pev->origin).Length();
        if (flDist <= 1500.0f && flDist < flBest &&
            (!g_teamplay || *(int *)((char *)m_pBot->pev + 0x1ac) != *(int *)((char *)pPlayer->pev + 0x1ac)))   // [?] campo de time do pev
        {
            BOOL fNear = flDist <= 2300.0f || BOTF(m_pBot, short, 0xba4) > 0;   // [OK]
            if ((EntIsInFieldOfView(m_pBot, pPlayer) || fNear) && IsValidThrowVictim(pPlayer))
            {
                flBest = flDist;
                pBest = pPlayer;
            }
        }
    }
    if (iCount && pBest)
        TASKF(CBasePlayer *, 0x2c) = pBest;                        // [OK]
}

// Varre 5 pitches x 5 yaws (angulos lidos do assembly: pitch 0,-40,40,-89,89; yaw 0,-90,-45,45,90) em volta da visao do bot, tracando
// para frente e para tras (3000 un.); escolhe a parede mais proxima (>125 un.) como alvo do arremesso
void CFinishMeleeTask::CheckObstacleToThrowAt(void)
{
    static const float s_flPitch[5] = { 0.0f, -40.0f, 40.0f, -89.0f, 89.0f };   // [OK] .rodata 0x1ad420..
    static const float s_flYaw[5]   = { 0.0f, -90.0f, -45.0f, 45.0f, 90.0f };
    float flBest = 9999.0f;
    Vector vecBest = g_vecZero;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            Vector vecAng = m_pEdict->v.v_angle;                   // [?] edict+0xf4: angulos de visao
            WrapAngles(vecAng);
            vecAng.x = s_flPitch[i];
            vecAng.y = UTIL_WrapAngle(s_flYaw[j] + vecAng.y);
            UTIL_MakeVectors(vecAng);
            Vector vecFwdEnd = m_pEdict->v.origin + gpGlobals->v_forward * 3000.0;
            Vector vecBackEnd = m_pEdict->v.origin - gpGlobals->v_forward * 3000.0;
            TraceResult trF, trB;
            UTIL_TraceHull(m_pEdict->v.origin, vecFwdEnd, ignore_monsters, human_hull, m_pEdict, &trF);
            UTIL_TraceHull(m_pEdict->v.origin, vecBackEnd, ignore_monsters, human_hull, m_pEdict, &trB);
            float flDistF = (trF.vecEndPos - m_pEdict->v.origin).Length();
            float flDistB = (trB.vecEndPos - m_pEdict->v.origin).Length();
            float flCand;
            Vector vecCand;
            if (flDistB > flDistF && trF.flFraction > 0 && flDistF > 125.0f)
            {
                flCand = flDistF;                                  // [OK] parede a frente
                vecCand = vecFwdEnd;
            }
            else if (trB.flFraction > 0 && flDistB > 125.0f)
            {
                flCand = flDistB;                                  // [OK] parede atras
                vecCand = vecBackEnd;
            }
            else
                continue;
            if (flCand < flBest)
            {
                flBest = flCand;
                vecBest = vecCand;
            }
        }
    }
    if (vecBest != g_vecZero)
    {
        TASKF(float, 0x30) = vecBest.x;                            // [OK]
        TASKF(float, 0x34) = vecBest.y;
        TASKF(float, 0x38) = vecBest.z;
    }
    TASKF(char, 0x3c) = 1;                                         // [OK] sempre marca que ja procurou
}

void CFinishMeleeTask::TaskThink(void)
{
    if (BOTF(m_pBot, int, 0x37c))                                  // [OK] em combate corpo a corpo
    {
        int iState = BOTF(m_pBot, int, 0x49c);
        if (iState == 1 || iState == 3 || iState == 5)
        {
            m_pBot->ResetMoveSpeed();
            if (iState == 1 && BOTF(m_pBot, int, 0x438) < TASKF(char, 0x2a) && (int)m_pEdict->v.fuser4 > 150)   // [OK] ainda faltam golpes
                return;
            if (TASKF(short, 0x28) != 1 && BOTF(m_pBot, int, 0x49c) != 3)
            {
                // modo arremesso
                if (TASKF(short, 0x28) != 2 && BOTF(m_pBot, int, 0x49c) != 5)
                    return;
                if (BOTF(m_pBot, float, 0x41c) * 100.0 >= 30.0)    // [?] +0x41c = fracao/forca do golpe
                {
                    CBasePlayer *pVictim = TASKF(CBasePlayer *, 0x2c);
                    if (!m_pBot->IsValidEnemy(pVictim) || !IsValidThrowVictim(pVictim))
                        TASKF(CBasePlayer *, 0x2c) = NULL;
                    if (!TASKF(CBasePlayer *, 0x2c))
                        CheckPlayerToThrowAt();
                    if (!TASKF(char, 0x3c) && !TASKF(CBasePlayer *, 0x2c))
                        CheckObstacleToThrowAt();
                    if (TASKF(CBasePlayer *, 0x2c))
                        m_pBot->AimAtEnemy(TASKF(CBasePlayer *, 0x2c));
                    else
                    {
                        Vector vecAng = m_pBot->GetAimAngles(Vector(TASKF(float, 0x30), TASKF(float, 0x34), TASKF(float, 0x38)));
                        BOTF(m_pBot, float, 0xc10) = vecAng.x;
                        BOTF(m_pBot, float, 0xc14) = vecAng.y;
                        BOTF(m_pBot, float, 0xc18) = vecAng.z;
                    }
                }
                m_pEdict->v.button = 0x800;                        // [OK] atribui (nao faz OR): so o botao do arremesso
                return;
            }
            m_pBot->ChargeMeleeCombo();
            void *pCombo = BOTF(m_pBot, void *, 0xb8c);
            if (!pCombo || *(int *)pCombo || BOTF(m_pBot, float, 0xb90) >= gpGlobals->time)
                return;                                            // [OK] combo ainda em andamento
        }
    }
    TASK_DONE();
}

// ---- CCounterMeleeTask ----
// Os dois switches foram lidos do assembly (0x14f590): estado do bot (+0x49c) - 3 => 0,4,5: ChargeMeleeCombo; 1,6,7,8: consome a fila de
// botoes (bot+0xb84); 2,3 e fora de 3..11: termina. Fila: lista encadeada simples {dado, proximo, anterior}.
struct bot_btn_node_s { int m_iButtons; bot_btn_node_s *next; bot_btn_node_s *prev; };
struct bot_btn_list_s { bot_btn_node_s *head; bot_btn_node_s *tail; };

void CCounterMeleeTask::TaskThink(void)
{
    if (BOTF(m_pBot, int, 0x37c))                                  // [OK]
    {
        m_pBot->ResetMoveSpeed();
        if (!BOTF(m_pBot, int, 0x480))
            m_pEdict->v.button |= IN_ATTACK;                       // [OK]
        unsigned int uIdx = BOTF(m_pBot, int, 0x49c) - 3;
        if (uIdx <= 8)
        {
            switch (uIdx)
            {
            case 0: case 4: case 5:
                m_pBot->ChargeMeleeCombo();                        // [OK]
                return;
            case 1: case 6: case 7: case 8:
            {
                bot_btn_list_s *pList = (bot_btn_list_s *)((char *)m_pBot + 0xb84);   // [OK]
                if (!pList->head)
                    return;                                        // [OK] fila vazia: espera
                bot_btn_node_s *pNode = pList->head;               // consome o primeiro botao
                int iButtons = pNode->m_iButtons;
                if (pNode == pList->tail)
                    pList->tail = pNode->next;
                pList->head = pList->head->next;
                if (pList->head)
                    pList->head->prev = NULL;
                pNode->next = NULL;
                delete pNode;
                BOOL fRandom = iButtons == 0;
                if (!fRandom && RANDOM_LONG(1, 100) <= *(short *)((char *)BOTF(m_pBot, void *, 0xa00) + 0x3c))
                    fRandom = TRUE;                                // [OK] as vezes erra de proposito (habilidade +0x3c)
                if (fRandom)
                {
                    switch (RANDOM_LONG(1, 4))                     // [OK] botao aleatorio: 8, 0x10, 0x200 ou 0x400
                    {
                    case 1: iButtons = 0x8; break;
                    case 2: iButtons = 0x10; break;
                    case 3: iButtons = 0x200; break;
                    default: iButtons = 0x400; break;
                    }
                }
                m_pEdict->v.button |= iButtons;
                return;
            }
            default:
                break;
            }
        }
    }
    TASK_DONE();
}

// ---- CNormalMovementTask ----
extern char *g_pBotManager;   // BotManager+0xd48 (3400): bots ativos

void CNormalMovementTask::TaskThink(void)
{
    m_pEdict->v.v_angle.z = 0;                                       // [OK] edict+0xfc
    m_pEdict->v.angles.y = m_pEdict->v.v_angle.y;                    // [OK] edict+0xd4 = edict+0xf8: o corpo acompanha a visao
    m_pEdict->v.angles.z = 0;                                        // [OK] edict+0xd8
    BOOL fMoving = FALSE;
    if (m_pBot->GetMaxSpeed() == 0.0f)                               // [OK] parado (ex.: congelado)
        return;
    if (!(g_pBotManager && g_pBotManager[0xd48]))
        return;
    if (BOTF(m_pBot, float, 0x1030) <= gpGlobals->time && BOTF(m_pBot, int, 0x320) && num_waypoints)   // [OK] voando e com waypoints
    {
        BOOL fValid = m_pBot->CurrentWPIsValid();
        if (!fValid)
        {
            short iWP = WaypointFindReachable(m_pEdict, 400.0f, g_teamplay ? *(int *)((char *)&m_pEdict->v + 0x1ac) : -1);   // [OK]
            if (iWP == -1)
                goto no_waypoint;
            BOTF(m_pBot, int, 0x1008) = iWP;
            BOTF(m_pBot, float, 0xff8) = waypoints[iWP].x;
            BOTF(m_pBot, float, 0xffc) = waypoints[iWP].y;
            BOTF(m_pBot, float, 0x1000) = waypoints[iWP].z;
            BOTF(m_pBot, float, 0x1004) = gpGlobals->time;
        }
        fMoving = m_pBot->HeadToWaypoint();
    }
no_waypoint:
    if (fMoving)
        return;
    if (BOTF(m_pBot, float, 0xb20) < gpGlobals->time)                // [OK] acabou o tempo de movimento normal
    {
        BOTF(m_pBot, int, 0x1068) = 16;                              // [OK] proximo modo
        TASK_DONE();
        return;
    }
    if (BOTF(m_pBot, float, 0xff4) <= gpGlobals->time)
        BotCheckUpDown();
    m_pBot->CheckStrafe();
    if (BOTF(m_pBot, float, 0xd88) > gpGlobals->time)
        return;
    if (BOTF(m_pBot, float, 0xd8c) < gpGlobals->time)
    {
        BotLook();
        CheckFOV();
        BOTF(m_pBot, float, 0xd8c) = gpGlobals->time + RANDOM_FLOAT(0.8, 1.2);   // [OK]
    }
    CheckSkyBox();
}

struct bot_look_entry_s { float m_flDist; int m_iContents; Vector m_vecEnd; Vector m_vecNormal; };   // [OK] 32 bytes, tabela em bot+0xd90 (19 entradas)

void CNormalMovementTask::BotCheckUpDown(void)
{
    if (!BOTF(m_pBot, int, 0x320))                                  // [OK] no chao: olha 40 graus para baixo
    {
        BOTF(m_pBot, float, 0xc10) = 40.0f;
        return;
    }
    BOTF(m_pBot, float, 0xff4) = gpGlobals->time + 3.0;             // [OK]
    BOOL fUp = CheckForCollide(m_pEdict, 0x100, 100.0f);            // [OK] 0x42c80000 = 100.0
    BOOL fDown = CheckForCollide(m_pEdict, 0x200, 100.0f);
    float flPitch;
    if (fUp && fDown)
        flPitch = 0;
    else if (fUp)
        flPitch = RANDOM_FLOAT(-35.0, -25.0);                       // [?] o decompilado perdeu o retorno do RandomFloat
    else if (fDown)
        flPitch = RANDOM_FLOAT(25.0, 35.0);
    else
        switch (RANDOM_LONG(1, 3))
        {
        case 1: flPitch = RANDOM_FLOAT(-35.0, -25.0); break;
        case 2: flPitch = RANDOM_FLOAT(25.0, 35.0); break;
        default: flPitch = 0; break;
        }
    BOTF(m_pBot, float, 0xc10) = flPitch;                           // [OK] pitch ideal
}

// Varre 19 direcoes (-45..+45 graus em passos de 5) com um traco de 10000 un., guarda distancia/contents/ponto/normal na tabela do bot e
// mira na mais longa (corredor mais aberto). [OK] lido do assembly em 0x171ad0
void CNormalMovementTask::BotLook(void)
{
    if (BOTF(m_pBot, float, 0xd88) > gpGlobals->time)
        return;
    bot_look_entry_s *pTable = (bot_look_entry_s *)((char *)m_pBot + 0xd90);
    int iBest = -1;
    float flBest = 0;
    int i = 0;
    for (float flOffset = -45.0f; flOffset <= 45.0f; flOffset += 5.0f, i++)
    {
        Vector vecAng = m_pEdict->v.v_angle;
        WrapAngles(vecAng);
        vecAng.y = UTIL_WrapAngle(vecAng.y + flOffset);            // [?] o assembly embrulha (angulo + offset)
        UTIL_MakeVectors(vecAng);
        Vector vecEnd = m_pEdict->v.origin + gpGlobals->v_forward * 10000.0;
        TraceResult tr;
        UTIL_TraceHull(m_pEdict->v.origin, vecEnd, ignore_monsters, human_hull, m_pEdict, &tr);
        pTable[i].m_flDist = 10000.0f * tr.flFraction;             // [OK]
        pTable[i].m_iContents = UTIL_PointContents(tr.vecEndPos);  // [OK]
        pTable[i].m_vecEnd = tr.vecEndPos;
        pTable[i].m_vecNormal = tr.vecPlaneNormal;
        if (pTable[i].m_flDist > flBest)
        {
            flBest = pTable[i].m_flDist;
            iBest = i;
        }
    }
    if (iBest >= 0)
    {
        Vector vecAim = m_pBot->GetAimAngles(pTable[iBest].m_vecEnd);
        BOTF(m_pBot, float, 0xc10) = vecAim.x;
        BOTF(m_pBot, float, 0xc14) = vecAim.y;
        BOTF(m_pBot, float, 0xc18) = vecAim.z;
    }
}

void CNormalMovementTask::CheckSkyBox(void)
{
    if (BOTF(m_pBot, float, 0xd88) > gpGlobals->time)
        return;
    Vector vecAng = m_pEdict->v.v_angle;
    WrapAngles(vecAng);
    UTIL_MakeVectors(vecAng);
    Vector vecEye = m_pEdict->v.origin + *(Vector *)((char *)m_pEdict + 0x1f4);   // [?] edict[125..127] = deslocamento do olho (view_ofs)
    Vector vecEnd = vecEye + gpGlobals->v_forward * 400.0;
    if (UTIL_PointContents(vecEnd) != CONTENTS_SKY)                // [OK] -6
        return;
    m_pBot->TurnAround();                                          // [OK] encara o ceu: vira
    BOTF(m_pBot, float, 0xd88) = gpGlobals->time + 1.0;
    BOTF(m_pBot, float, 0xaec) += 1.5f;                            // [OK] bot+0xaec (699*4)
}

void CNormalMovementTask::BotTurnAtWall(Vector *pvecWallNormal)
{
    Vector vecWallAng = UTIL_VecToAngles(*pvecWallNormal);
    float flYaw = m_pEdict->v.v_angle.y + 180.0f;                  // [OK] edict+0xf8
    if (flYaw > 359.0f) flYaw -= 360.0f;
    float flWall = vecWallAng.y - 180.0f;
    if (flWall < 0.0f) flWall += 360.0f;
    float flLeft = flWall - 90.0f;
    if (RANDOM_LONG(1, 100) <= 50)
        flLeft -= RANDOM_FLOAT(5.0, 20.0);                         // [?] o decompilado perdeu o retorno do RandomFloat (usa 5.0)
    if (flLeft < 0.0f) flLeft += 360.0f;
    float flRight = flWall + 90.0f;
    if (RANDOM_LONG(1, 100) <= 50)
        flRight += RANDOM_FLOAT(5.0, 20.0);
    if (flRight > 359.0f) flRight -= 360.0f;
    int iDiffL = abs((int)(flYaw - flLeft));
    if (iDiffL > 179) iDiffL = abs((int)(iDiffL - 360.0));
    int iDiffR = abs((int)(flYaw - flRight));
    if (iDiffR > 179) iDiffR = abs((int)(iDiffR - 360.0));
    float flPick = flRight;
    if (iDiffL > iDiffR)
        flPick = flLeft;                                           // [OK] literal do decompilado
    if (flPick > 180.0f) flPick -= 360.0f;
    BOTF(m_pBot, float, 0xc14) = UTIL_WrapAngle(flPick);          // [OK] yaw ideal
}

// Decide entre pular, virar ou seguir quando a frente esta bloqueada. Usa a tabela de BotLook: [0] = -45 graus, [10] = frente, [18] = +45.
static BOOL NormalMoveCanJump(CNormalMovementTask *pTask, edict_t *pEdict, float flAhead)
{
    char *pv = (char *)&pEdict->v;
    if (!(0.1f < *(float *)(pv + 0x11c) && *(int *)(pv + 0x1c0) != 3 && !(*(unsigned char *)(pv + 0x1a5) & 2)))   // [?] campos do entvars ESF (edict+0x19c/+0x240/+0x225)
        return FALSE;
    UTIL_MakeVectors(pEdict->v.v_angle);
    Vector vecStart = pEdict->v.origin + Vector(0, 0, 200);       // [OK] traca 200 un. acima: o obstaculo e baixo?
    Vector vecEnd = vecStart + gpGlobals->v_forward * flAhead;
    TraceResult tr;
    UTIL_TraceHull(vecStart, vecEnd, ignore_monsters, human_hull, pEdict, &tr);
    return tr.flFraction >= 1.0f;                                  // [OK] livre: da para pular
}

void CNormalMovementTask::CheckFOV(void)
{
    if (BOTF(m_pBot, float, 0xd88) > gpGlobals->time)
        return;
    bot_look_entry_s *pTable = (bot_look_entry_s *)((char *)m_pBot + 0xd90);
    float flLeft = pTable[0].m_flDist, flRight = pTable[18].m_flDist, flFront = pTable[10].m_flDist;   // [OK] +0xd90, +0xfd0, +0xed0
    if (70.0f > flLeft && 70.0f > flRight)                        // [OK] bloqueado dos dois lados
    {
        if (70.0f > flFront)
        {
            if (45.0f > flFront && NormalMoveCanJump(this, m_pEdict, 80.0f))
            {
                m_pEdict->v.button |= IN_JUMP;                    // [OK]
                return;
            }
            m_pBot->TurnAround();                                 // [OK]
            BOTF(m_pBot, float, 0xd88) = gpGlobals->time + 1.0;
        }
        return;
    }
    if (70.0f > flFront)                                          // [OK] so a frente bloqueada
    {
        if (NormalMoveCanJump(this, m_pEdict, 40.0f))
        {
            m_pEdict->v.button |= IN_JUMP;
            return;
        }
        BotTurnAtWall(&pTable[10].m_vecNormal);                   // [OK] +0xee4 = normal da parede a frente
        BOTF(m_pBot, float, 0xd88) = gpGlobals->time + 1.0;
        BOTF(m_pBot, float, 0xaec) += 1.5f;
    }
}

// ---- CDBTask (Dragon Balls) ----
// task+0x18: instante em que vai pular para largar a esfera no ponto de reuniao. Bot: +0xb30 esfera alvo, +0xb39 flag, +0x760 (1888) "tem esfera"
extern Vector GatherDBPosForTeamGood, GatherDBPosForTeamEvil;   // [OK] pontos de reuniao das esferas por time
extern BOOL UTIL_DBsAreGathered(void);                          // [?] funcoes livres
extern BOOL UTIL_DBsAreActive(void);
extern BOOL IsNull(CBaseEntity *pEnt);                          // [?] sobrecarga

BOOL CDBTask::HeadToNextDBWP(void)
{
    if (m_pBot->ReachedGoalWP())
        return FALSE;
    if (!m_pBot->CurrentWPIsValid())
    {
        short iWP = WaypointFindReachable(m_pEdict, 1250.0f, *(int *)((char *)&m_pEdict->v + 0x1ac));   // [OK]
        if (iWP == -1)
            return FALSE;
        BOTF(m_pBot, int, 0x1008) = iWP;
        BOTF(m_pBot, float, 0xff8) = waypoints[iWP].x;
        BOTF(m_pBot, float, 0xffc) = waypoints[iWP].y;
        BOTF(m_pBot, float, 0x1000) = waypoints[iWP].z;
        BOTF(m_pBot, float, 0x1004) = gpGlobals->time;
    }
    return m_pBot->HeadToWaypoint();
}

BOOL CDBTask::GoToDB(void)
{
    CBaseEntity *pDB = BOTF(m_pBot, CBaseEntity *, 0xb30);
    if (!IsNull(pDB) && !UTIL_DBsAreGathered() && UTIL_DBsAreActive())
    {
        if (m_pBot->CanReachPoint(pDB->pev->origin))              // [OK] vtable +0xe4
        {
            Vector vecAng = m_pBot->GetAimAngles(pDB->pev->origin);
            BOTF(m_pBot, float, 0xc10) = vecAng.x;
            BOTF(m_pBot, float, 0xc14) = vecAng.y;
            BOTF(m_pBot, float, 0xc18) = vecAng.z;
            BOTF(m_pBot, int, 0x1008) = -1;                       // [OK] esquece o waypoint atual: vai direto
            return TRUE;
        }
        if (BOTF(m_pBot, int, 0x1024) != -1)
            return HeadToNextDBWP();
    }
    TASK_DONE();
    return FALSE;
}

BOOL CDBTask::CheckThrowToDBSpot(void)
{
    Vector vecSpot = (*(int *)((char *)m_pBot->pev + 0x1ac) == 1) ? GatherDBPosForTeamGood : GatherDBPosForTeamEvil;   // [OK]
    float flDist = (vecSpot - m_pEdict->v.origin).Length();
    if (flDist >= 150.0f)
        return FALSE;
    if (0.1f < *(float *)((char *)&m_pEdict->v + 0x11c) && (*(unsigned char *)((char *)&m_pEdict->v + 0x1a5) & 2))   // [?] voando
    {
        m_pEdict->v.button |= 0x800;                              // [OK] solta a esfera
        return TRUE;
    }
    int iDir;
    if (flDist < 125.0f)
        iDir = 8;                                                 // [OK] perto demais: recua
    else
    {
        m_pBot->ResetMoveSpeed();
        if (m_pEdict->v.origin.z - 175.0f >= vecSpot.z)
            iDir = 32;                                            // [OK] bem acima do ponto: desce
        else if (m_pEdict->v.origin.z - 200.0f >= vecSpot.z)
            iDir = 64;                                            // [OK] (literal; nunca e alcancado depois do teste acima)
        else
        {
            if (TASKF(float, 0x18) == 0.0f)
            {
                TASKF(float, 0x18) = gpGlobals->time + 0.25;      // [OK] espera 0.25 s
                return FALSE;
            }
            if (TASKF(float, 0x18) < gpGlobals->time)
            {
                m_pEdict->v.button |= 0x800;
                return TRUE;
            }
            return FALSE;
        }
    }
    m_pBot->SetMoveDir(iDir);
    return FALSE;
}

BOOL CDBTask::GoToDBSpot(void)
{
    if (GatherDBPosForTeamGood == g_vecZero)
        return FALSE;
    if (GatherDBPosForTeamEvil == g_vecZero)
        return FALSE;
    Vector &vecSpot = (*(int *)((char *)&m_pEdict->v + 0x1ac) == 1) ? GatherDBPosForTeamGood : GatherDBPosForTeamEvil;   // [OK] edict+0x22c
    if (m_pBot->CanReachPoint(vecSpot))
    {
        if (BOTF(m_pBot, int, 0x1008) != -1)
            BOTF(m_pBot, int, 0x1008) = -1;
        if (CheckThrowToDBSpot())
            m_pBot->TurnAround();                                 // [OK] largou a esfera: sai de perto
        else
        {
            Vector vecAng = m_pBot->GetAimAngles(vecSpot);
            BOTF(m_pBot, float, 0xc10) = vecAng.x;
            BOTF(m_pBot, float, 0xc14) = vecAng.y;
            BOTF(m_pBot, float, 0xc18) = vecAng.z;
        }
        return TRUE;
    }
    if (BOTF(m_pBot, int, 0x1024) != -1)
        return HeadToNextDBWP();
    return FALSE;
}

BOOL CDBTask::GoToGatheredSpot(void)
{
    if (!BOTF(m_pBot, char, 0xb39))
    {
        CBaseEntity *pDB = BOTF(m_pBot, CBaseEntity *, 0xb30);
        if (!IsNull(pDB))
        {
            Vector vecPos = pDB->pev->origin;
            if (m_pBot->CanReachPoint(vecPos))
            {
                if (BOTF(m_pBot, int, 0x1008) != -1)
                    BOTF(m_pBot, int, 0x1008) = -1;
                if ((vecPos - m_pEdict->v.origin).Length() < 100.0f)   // [OK] chegou
                {
                    if (RANDOM_LONG(1, 100) <= 50)
                        m_pEdict->v.button |= 0x20;                    // [OK] botao de pegar/usar
                    m_pBot->ResetMoveSpeed();
                }
                else
                {
                    Vector vecAng = m_pBot->GetAimAngles(vecPos);
                    BOTF(m_pBot, float, 0xc10) = vecAng.x;
                    BOTF(m_pBot, float, 0xc14) = vecAng.y;
                    BOTF(m_pBot, float, 0xc18) = vecAng.z;
                }
                return TRUE;
            }
            if (BOTF(m_pBot, int, 0x1024) != -1)
                return HeadToNextDBWP();
        }
    }
    return FALSE;
}

void CDBTask::TaskThink(void)
{
    if ((int)m_pEdict->v.fuser4 <= 249)                            // [OK] sem ki
    {
        BOTF(m_pBot, int, 0x1068) = 0;
        TASK_DONE();
        return;
    }
    BOOL fBusy;
    if (UTIL_DBsAreGathered())
        fBusy = GoToGatheredSpot();
    else if (!BOTF(m_pBot, int, 0x760))                            // [OK] +0x760 (1888): nao carrega esfera
        fBusy = GoToDB();
    else
        fBusy = GoToDBSpot();
    if (fBusy)
        m_pBot->ToggleTurbo(1);                                    // [OK]
    else
        TASK_DONE();
}

// ---- CControlBeamTask ----
// task+0x18: instante limite do raio; +0x1c: flag "reagiu ao ataque inimigo". Bot: +0x33c carregando, +0xab4 atraso, +0xb14 flag, +0xa1c
extern BOOL IsBeamAttack(edict_t *pEnt);                              // [?]
extern BOOL IsNonBeamAttack(edict_t *pEnt);                           // [?]
extern BOOL EntIsInFieldOfView(entvars_t *pViewer, entvars_t *pTarget);   // [?] sobrecarga

#define CB_RELEASE() (m_pEdict->v.button |= 0x800)                    // [OK] solta o botao do raio (button+1 |= 8)
#define CB_AIM(vec) do { Vector _a = m_pBot->GetAimAngles(vec); \
    BOTF(m_pBot, float, 0xc10) = _a.x; BOTF(m_pBot, float, 0xc14) = _a.y; BOTF(m_pBot, float, 0xc18) = _a.z; } while (0)

BOOL CControlBeamTask::ReactOnDanger(danger_info_s *pDanger)
{
    if (pDanger->m_iDanger > 59)
    {
        entvars_t *pOwn = UTIL_GetLastAttackFromPlayer(m_pBot);
        if (!pOwn)
        {
            CB_RELEASE();
            return FALSE;
        }
        float flDist = (pOwn->origin - m_pBot->pev->origin).Length();
        float flLimit = pOwn->dmg * 12.5;                             // [OK] +0x1e0
        CBasePlayer *pEnemy = BOT_ENEMY(m_pBot);
        entvars_t *pEnemyAtk = NULL;
        if (pEnemy && BOTF(m_pBot, int, 0xa1c) == 1)
            pEnemyAtk = UTIL_GetLastAttackFromPlayer(pEnemy);
        if (pEnemyAtk && EntIsInFieldOfView(pOwn, pEnemyAtk))
        {
            CB_AIM(pEnemyAtk->origin);
            TASKF(char, 0x1c) = 1;
        }
        else if (pDanger->m_iDanger <= 159)
        {
            if (m_pBot->BotCanBeamJump(1))
            {
                BOTF(m_pBot, int, 0x1068) = 22;                       // [OK] modo: beam jump
                TASK_DONE();
            }
            else if (flDist > flLimit && pDanger->m_iDanger > 99)
            {
                CB_RELEASE();
                return FALSE;
            }
        }
        else
        {
            CB_RELEASE();
            return FALSE;
        }
    }
    return FALSE;
}

void CControlBeamTask::TaskThink(void)
{
    BOTF(m_pBot, float, 0xab4) = gpGlobals->time + 1.5;
    if (!BOTF(m_pBot, int, 0x33c) && TASKF(float, 0x18) - gpGlobals->time <= 9.5)
    {
        TASK_DONE();
        return;
    }
    if (TASKF(float, 0x18) < gpGlobals->time)
    {
        CB_RELEASE();
        return;
    }
    CBasePlayer *pEnemy = BOT_ENEMY(m_pBot);
    entvars_t *pOwn = UTIL_GetLastAttackFromPlayer(m_pBot);
    if (m_pBot->IsValidEnemy(pEnemy))
    {
        if (!pOwn)
        {
            if (TASKF(float, 0x18) - gpGlobals->time >= 9.0)
                m_pBot->AimAtEnemy(pEnemy);
            else
                TASK_DONE();
            return;
        }
        entvars_t *pEnemyAtk = UTIL_GetLastAttackFromPlayer(pEnemy);
        if (pEnemyAtk && (IsBeamAttack(pEnemyAtk->pContainingEntity) || IsNonBeamAttack(pEnemyAtk->pContainingEntity))
            && EntIsInFieldOfView(pOwn, pEnemyAtk))
        {
            CB_AIM(pEnemyAtk->origin);                                 // reage ao ataque inimigo
            TASKF(char, 0x1c) = 1;
            return;
        }
        float flDistBot   = (pOwn->origin - m_pBot->pev->origin).Length();
        float flDistEnemy = (pOwn->origin - pEnemy->pev->origin).Length();
        if (BOTF(m_pBot, char, 0xb14) && flDistEnemy <= BOTF(m_pBot, float *, 0xa00)[0x38 / 4])   // [OK]
        {
            CB_RELEASE();                                              // raio ja chegou perto o bastante
            return;
        }
        float flDistEdict = (pOwn->origin - m_pEdict->v.origin).Length();
        if (flDistBot - 500.0 <= flDistEdict)
        {
            if (flDistBot - 100.0 >= flDistEdict)
                CB_AIM(pEnemy->pev->origin);                           // [OK] mira no inimigo
            else
                m_pBot->AimAtEnemy(pEnemy);
            return;
        }
        CB_RELEASE();
        return;
    }

    // sem inimigo valido: desvia do proprio raio
    if (!pOwn)
    {
        CB_RELEASE();
        return;
    }
    float flReach = pOwn->dmg * 12.0;                                  // [OK]
    if ((pOwn->origin - m_pBot->pev->origin).Length() >= flReach)
        return;
    UTIL_MakeVectors(pOwn->angles);
    Vector vecEnd = pOwn->origin + gpGlobals->v_forward * 800.0;
    TraceResult tr;
    UTIL_TraceHull(pOwn->origin, vecEnd, ignore_monsters, point_hull, pOwn->pContainingEntity, &tr);   // [OK]
    if (tr.flFraction * 800.0 >= 800.0f)
        return;                                                        // nada no caminho
    if (m_pBot->BotCanBeamJump(1))
    {
        BOTF(m_pBot, int, 0x1068) = 22;
        return;
    }
    edict_t *pe = pOwn->pContainingEntity;
    float &yaw = BOTF(m_pBot, float, 0xc14), &pitch = BOTF(m_pBot, float, 0xc10);
    BOOL fYawDone = FALSE;
    // yaw: 2 = esquerda, 4 = direita
    if (RANDOM_LONG(0, 1) == 0)
    {
        if (!CheckForCollide(pe, 2, 800.0f))      { yaw = UTIL_WrapAngle(yaw + RANDOM_FLOAT(40, 50)); return; }   // [?] sinais
        if (!CheckForCollide(pe, 4, 800.0f))      { yaw = UTIL_WrapAngle(yaw - RANDOM_FLOAT(40, 50)); return; }
    }
    else
    {
        if (!CheckForCollide(pe, 4, 800.0f))      { yaw = UTIL_WrapAngle(yaw - RANDOM_FLOAT(40, 50)); return; }
        if (!CheckForCollide(pe, 2, 800.0f))      { yaw = UTIL_WrapAngle(yaw + RANDOM_FLOAT(40, 50)); return; }
    }
    (void)fYawDone;
    // pitch: 64 = cima, 32 = baixo
    if (RANDOM_LONG(0, 1) == 0)
    {
        if (!CheckForCollide(pe, 64, 800.0f))     { pitch = UTIL_WrapAngle(pitch + RANDOM_FLOAT(40, 50)); return; }
        if (!CheckForCollide(pe, 32, 800.0f))     { pitch = UTIL_WrapAngle(pitch - RANDOM_FLOAT(40, 50)); return; }
    }
    else
    {
        if (!CheckForCollide(pe, 32, 800.0f))     { pitch = UTIL_WrapAngle(pitch - RANDOM_FLOAT(40, 50)); return; }
        if (!CheckForCollide(pe, 64, 800.0f))     { pitch = UTIL_WrapAngle(pitch + RANDOM_FLOAT(40, 50)); return; }
    }
}

// ---- CDrainEntsTask (drena ki/PL de jogadores e ataques proximos) ----
// task+0x18: fim do dreno; +0x1c: lista de entidades afetadas (velocidade original guardada).
// Lista [OK]: cabeca/cauda; no = {dado, proximo, anterior} (12 bytes); dado = {ent, vel(3 floats), flag} (20 bytes)
struct drain_entry_s { CBaseEntity *pEnt; Vector vecVel; int fTouched; };
struct drain_node_s  { drain_entry_s *pData; drain_node_s *pNext; drain_node_s *pPrev; };
struct drain_list_s  { drain_node_s *pHead; drain_node_s *pTail; };
extern BOOL IsOtherAttack(edict_t *pEnt);                      // [?]
extern void UTIL_DamagePlayer(CBasePlayer *pAttacker, CBasePlayer *pVictim, const char *szWeapon, float flDamage);   // [?]
extern void UTIL_DrawBeamToAll(Vector vecStart, Vector vecEnd, int a, int b, int c, int r, int g, int bl, int d);   // [?] largura, brilho...

void CDrainEntsTask::DrainPlayer(CBasePlayer *pVictim)
{
    int iVictimPL = pVictim->m_iPowerLevel;
    int iBotPL = m_pBot->m_iPowerLevel;
    float flSpeed = pVictim->pev->velocity.Length();
    if (flSpeed > 10.0f)
    {
        float flFrac = 0.05f;                                  // [?] valor inicial (o decompilador perdeu)
        if (iBotPL - iVictimPL > 0)
            flFrac = (float)(iBotPL - iVictimPL) / 10000000.0;
        if (flFrac < 0.05f) flFrac = 0.05f;                    // [OK] limites
        else if (flFrac > 0.95f) flFrac = 0.95f;
        pVictim->pev->velocity = pVictim->pev->velocity - pVictim->pev->velocity.Normalize() * (flSpeed * flFrac);   // freia a vitima
    }
    iVictimPL -= 950;                                          // [OK]
    iBotPL += 950;
    if (pVictim->m_iPowerLevel <= 2850)
        UTIL_DamagePlayer(m_pBot, pVictim, "Super bot laser", 1.0 + pVictim->pev->health);   // [OK] mata
    else if (iBotPL <= 999999998)
    {
        pVictim->SetPowerLevel(iVictimPL);
        m_pBot->SetPowerLevel(iBotPL);
        m_pBot->SetMaxPowerLevel(iBotPL);
    }
    pVictim->UseKi(3);
    m_pBot->UseKi(3);
}

void CDrainEntsTask::DrainAttack(CBaseEntity *pAttack)
{
    drain_list_s *pList = TASKF(drain_list_s *, 0x1c);
    drain_entry_s *pEntry = NULL;
    for (drain_node_s *pNode = pList->pHead; pNode; pNode = pNode->pNext)
        if (pNode->pData->pEnt == pAttack)
        {
            pNode->pData->fTouched = 1;
            pEntry = pNode->pData;
            break;
        }
    if (!pEntry)
    {
        pEntry = new drain_entry_s;
        pEntry->pEnt = pAttack;
        pEntry->vecVel = pAttack->pev->velocity;               // [OK] guarda a velocidade original
        pEntry->fTouched = 1;
        drain_node_s *pNew = new drain_node_s;
        pNew->pData = pEntry; pNew->pNext = NULL; pNew->pPrev = NULL;
        if (!pList->pHead)
            pList->pHead = pList->pTail = pNew;
        else
        {
            pNew->pPrev = pList->pTail;
            pList->pTail->pNext = pNew;
            pList->pTail = pNew;
        }
    }
    if (pAttack->pev->velocity.Length() > 0.0f)
        pAttack->pev->velocity = pEntry->vecVel / 100.0f;      // [OK] quase para o ataque
    pAttack->pev->health -= m_pBot->m_iPowerLevel / 1000000.0 * 0.375;   // [?] +0x1e0 e health? sim: entvars+0x160
    m_pBot->UseKi(5);
    m_pBot->IncreasePL(500);
    if (pAttack->pev->health <= 2.0f)
    {
        pAttack->pev->health = 1.0f;
        DispatchTouch(pAttack->pev->pContainingEntity, m_pEdict);   // [OK] explode o ataque no bot
    }
}

void CDrainEntsTask::TaskThink(void)
{
    if ((int)m_pEdict->v.fuser4 < 150)                         // [OK] sem ki
    {
        TASK_DONE();
        return;
    }
    if (TASKF(float, 0x18) < gpGlobals->time || BOT_P37C(m_pBot))
    {
        TASK_DONE();
        return;
    }
    if (m_pBot->GetMaxSpeed() == 0)
    {
        TASK_DONE();
        return;
    }
    BOOL fAny = FALSE;
    m_pBot->ResetMoveSpeed();
    if (BOTF(m_pBot, int, 0x324))
    {
        m_pBot->ToggleTurbo(0);
        return;
    }
    m_pEdict->v.rendermode = 0;                                // [OK] brilho em volta do bot (glow shell)
    m_pEdict->v.renderfx = 19;
    m_pEdict->v.renderamt = 25.0f;
    m_pEdict->v.rendercolor = Vector(255, 255, 255);
    BOOL fBeam = FALSE;
    if (BOTF(m_pBot, float, 0xbb4) <= gpGlobals->time)
    {
        BOTF(m_pBot, float, 0xbb4) = gpGlobals->time + 0.1;
        fBeam = TRUE;
    }
    drain_list_s *pList = TASKF(drain_list_s *, 0x1c);
    for (drain_node_s *pN = pList->pHead; pN; pN = pN->pNext)
        pN->pData->fTouched = 0;
    CBaseEntity *pEnt = NULL;
    while ((int)m_pEdict->v.fuser4 > 19)
    {
        pEnt = UTIL_FindEntityInSphere(pEnt, m_pEdict->v.origin, 800.0f);   // [OK] raio 800
        if (!pEnt)
            break;
        if (pEnt == m_pBot || IsNull(pEnt))
            continue;
        BOOL fPlayer = pEnt->IsPlayer();
        if (!fPlayer && (!IsAttack(pEnt->pev->pContainingEntity) || IsOtherAttack(pEnt->pev->pContainingEntity)))
            continue;
        CBasePlayer *pPlayer = NULL;
        if (fPlayer)
        {
            if ((pEnt->pev->origin - m_pEdict->v.origin).Length() < 350.0f)
            {
                TASK_DONE();                                   // [OK] muito perto: vai para o melee
                return;
            }
            pPlayer = (CBasePlayer *)pEnt;
            if (!UTIL_IsValidPlayer(pPlayer, 1, 1))
                continue;
        }
        BOOL fOk = TRUE;
        if (g_teamplay)
        {
            int iTeam = *(int *)((char *)&m_pEdict->v + 0x1ac);
            if (pPlayer && *(int *)((char *)pPlayer->pev + 0x1ac) == iTeam)
                fOk = FALSE;
            else if (!IsNull(pEnt->pev->owner) && *(int *)((char *)&pEnt->pev->owner->v + 0x1ac) == iTeam)
                fOk = FALSE;
        }
        if (!fOk || (pPlayer && !m_pBot->CanAttackPlayer(pPlayer)) || !m_pBot->CanReachPoint(pEnt->pev->origin))
            continue;
        fAny = TRUE;
        if (fBeam)
            UTIL_DrawBeamToAll(m_pBot->GetGunPosition(), pEnt->pev->origin, 20, 8, 125, 255, 255, 250, 5);   // [?] argumentos
        if (pPlayer)
            DrainPlayer(pPlayer);
        else
            DrainAttack(pEnt);
        TASKF(float, 0x18) += 0.2f;                            // [OK] prolonga o dreno
    }
    if (fAny)
    {
        if (BOTF(m_pBot, float, 0xbbc) <= gpGlobals->time)
        {
            EMIT_SOUND_DYN2(m_pEdict, CHAN_WEAPON, "weapons/basicbeam_chargeoriginal.wav", 1.0, 0.8, 0, 100);   // [OK]
            BOTF(m_pBot, float, 0xbbc) = gpGlobals->time + 0.3;
        }
    }
    else if (gpGlobals->time + 1.0 < TASKF(float, 0x18))
        TASKF(float, 0x18) = gpGlobals->time + 0.9;            // [OK] encurta se nao ha alvo
    // devolve a velocidade original aos ataques que sairam do alcance
    drain_node_s *pN = pList->pHead;
    while (pN)
    {
        drain_entry_s *pData = pN->pData;
        drain_node_s *pNext = pN->pNext;
        if (!pData->fTouched)
        {
            if (pList->pHead == pN) { pList->pHead = pN->pNext; if (pList->pHead) pList->pHead->pPrev = NULL; if (pList->pTail == pN) pList->pTail = pN->pNext; }
            else if (pList->pTail == pN) { pList->pTail = pN->pPrev; pList->pTail->pNext = NULL; }
            else { pN->pPrev->pNext = pN->pNext; pN->pNext->pPrev = pN->pPrev; }
            delete pN;
            if (!IsNull(pData->pEnt))
                pData->pEnt->pev->velocity = pData->vecVel;
            delete pData;
        }
        pN = pNext;
    }
}

// ---- CSwoopTask (investida em voo) ----
// task+0x18 secundario ja checado, +0x19 usa secundario, +0x1a/+0x1c deriva (short), +0x20/+0x24 alvo da deriva,
// +0x28 fim da investida, +0x2c proxima checagem, +0x30 combo criado, +0x34 ultimo instante fora de alcance do melee
// Bot: m_Swoop em +0x504 (tipo = 0..5), +0xbe4 modo (0 nada, 1 desvio fixo, 2 deriva), +0xbe8/+0xbec/+0xbf0 desvio, +0xbfc tempo
#define COMBO_NONE ((EComboType)38)                                  // [OK]
#define SW_SKILL(b)  BOTF(b, char *, 0xa00)
#define SW_SKILL2(b) BOTF(b, char *, 0xa04)

float CSwoopTask::GetSwoopLifeTime(void)
{
    float flDist = BOTF(m_pBot, float, 0xa18) * 10.0f;
    if (flDist > 1500.0f)
        flDist = 1500.0f;
    Vector vecStart = m_pEdict->v.origin;
    UTIL_MakeVectors(m_pEdict->v.v_angle);
    Vector vecEnd = vecStart;                                        // [?] tipo 4 / invalido: sem deslocamento
    switch (m_pBot->m_Swoop.m_iType)
    {
    case 0: vecEnd = vecStart + gpGlobals->v_right   * flDist; break;   // [OK] tabela de saltos lida do binario
    case 1: vecEnd = vecStart - gpGlobals->v_right   * flDist; break;
    case 2: vecEnd = vecStart - gpGlobals->v_up      * flDist; break;
    case 3: vecEnd = vecStart + gpGlobals->v_up      * flDist; break;
    case 5: vecEnd = vecStart - gpGlobals->v_forward * flDist; break;
    }
    TraceResult tr;
    UTIL_TraceHull(vecStart, vecEnd, dont_ignore_monsters, human_hull, m_pEdict, &tr);
    if (tr.flFraction <= 0.0f)
        return 0.1f;                                                 // [OK] (a constante 0.1 e retornada assim mesmo)
    return flDist * tr.flFraction / 1500.0 * 2.0 + gpGlobals->time;  // [OK]
}

void CSwoopTask::CheckSecondaryFire(void)
{
    TASKF(char, 0x18) = 1;
    if (CVAR_GET_FLOAT("mp_simplemelee") != 1.0)
    {
        unsigned short usChance = *(unsigned short *)(SW_SKILL2(m_pBot) + 0x16);   // [?] chance do tiro secundario
        if (m_pEnemy->pev->health < 5.0f && BOTF(m_pBot, int, 0x9fc) <= 2)
            usChance = (unsigned short)(int)(usChance * 1.5);
        if ((int)m_pEdict->v.fuser4 <= 299)
            usChance = (unsigned short)(int)(usChance * 1.2f);
        if (RANDOM_LONG(1, 100) > usChance)
            return;
    }
    TASKF(char, 0x19) = 1;
}

BOOL CSwoopTask::IsAvoidDangerSwoop(void)
{
    return m_pBot->m_Swoop.m_iType != 4;                            // [OK]
}

BOOL CSwoopTask::ReactOnDanger(danger_info_s *pDanger)
{
    return FALSE;                                                    // [OK]
}

void CSwoopTask::SelectSwoopType(void)
{
    if (!m_pEnemy)
        return;
    float flDist = (m_pEnemy->pev->origin - m_pBot->pev->origin).Length();
    BOTF(m_pBot, int, 0xbe4) = 0;
    if (RANDOM_LONG(1, 100) > 70 || BOTF(m_pBot, int, 0x9fc) || flDist <= 800.0f)
        return;
    if (RANDOM_LONG(0, 1))
    {
        // modo 2: deriva aleatoria
        BOTF(m_pBot, int, 0xbe4) = 2;
        BOTF(m_pBot, Vector, 0xbe8) = g_vecZero;
        if (RANDOM_LONG(0, 1)) { TASKF(float, 0x20) = RANDOM_LONG(16, 18);   TASKF(short, 0x1a) = RANDOM_LONG(2, 3);   }
        else                   { TASKF(float, 0x20) = RANDOM_LONG(-18, -16); TASKF(short, 0x1a) = RANDOM_LONG(-3, -2); }
        if (RANDOM_LONG(0, 1)) { TASKF(float, 0x24) = RANDOM_LONG(16, 18);   TASKF(short, 0x1c) = RANDOM_LONG(2, 3);   }
        else                   { TASKF(float, 0x24) = RANDOM_LONG(-18, -16); TASKF(short, 0x1c) = RANDOM_LONG(-3, -2); }
        return;
    }
    // modo 1: escolhe ao acaso (pesos iguais, 50 cada) entre as direcoes livres
    struct { int iDir; Vector vec; } aOpt[4] = {
        { 2, Vector(0, 20, 0) }, { 4, Vector(0, -20, 0) }, { 32, Vector(20, 0, 0) }, { 64, Vector(-20, 0, 0) } };   // [OK]
    Vector aFree[4];
    int nFree = 0;
    for (int i = 0; i < 4; i++)
        if (!CheckForCollide(m_pEdict, aOpt[i].iDir, 200.0f))
            aFree[nFree++] = aOpt[i].vec;
    int iPick = RANDOM_LONG(0, nFree * 50);
    int iIdx = iPick / 50;                                           // [?] faixas [i*50, i*50+50)
    if (iIdx < nFree)
    {
        BOTF(m_pBot, Vector, 0xbe8) = aFree[iIdx];
        BOTF(m_pBot, int, 0xbe4) = 1;
    }
}

void CSwoopTask::TaskThink(void)
{
    m_pBot->ResetMoveSpeed();
    BOOL fKeep = FALSE;                                              // TRUE = tarefa continua (senao encerra)
    BOOL fFinish = FALSE;                                            // vai para o bloco final (botao, secundario, esquiva)
    if (BOTF(m_pBot, float, 0xbfc) != 0.0f && *(int *)((char *)m_pEdict + 0x188) == 11 && m_pEnemy)   // [?] 0x188 = estado do jogador
    {
        m_pBot->m_Swoop.GetSwoopTime();
        if (BOTF(m_pBot, float, 0xbfc) > 2.25f && SW_SKILL(m_pBot)[0x40] && (int)m_pEdict->v.fuser4 > 250 && m_pEnemy)
        {
            int iLevel = *(int *)(SW_SKILL2(m_pBot) + 0x34);
            short sBase = *(short *)SW_SKILL2(m_pBot);
            if (m_pBot->m_Swoop.m_iType != 4)
            {
                short sChance = (short)(int)(sBase * 0.75);
                if (iLevel == 2) sChance = (short)(int)(0.75 * sChance);
                else if (!iLevel) sChance = (short)(int)(sChance * 1.25);
                if (RANDOM_LONG(1, 100) <= sChance && EntIsInFieldOfView(m_pBot, m_pEnemy)
                    && (m_pEnemy->pev->origin - m_pBot->pev->origin).Length() < 1500.0f)
                {
                    MakeCombo((EComboType)2);                        // [?] tipo 2
                    TASKF(char, 0x30) = 1;
                    return;
                }
            }
            else
            {
                short sChance = (short)(int)(sBase * 0.75);
                if (iLevel == 2) sChance = (short)(int)(0.75 * sChance);
                else if (!iLevel) sChance = (short)(int)(sChance * 1.25);
                if (RANDOM_LONG(1, 100) <= sChance && EntIsInFieldOfView(m_pBot, m_pEnemy)
                    && (m_pEnemy->pev->origin - m_pBot->pev->origin).Length() > 1250.0f)
                {
                    EComboType eChain = m_pBot->MakeAttackChainSwoop();
                    if (eChain != COMBO_NONE)
                    {
                        MakeCombo(eChain);
                        TASKF(char, 0x30) = 1;
                        return;
                    }
                }
            }
        }

        char *pBM = g_pBotManager;
        if (m_pBot->m_Swoop.m_iType == 4)
        {
            if (!*(short *)SW_SKILL2(m_pBot) || !pBM || !pBM[0xd47] || !pBM[0xd46])
            {
                TASK_DONE();
                CBasePlayerItem *pItem = BOTF(m_pBot, CBasePlayerItem *, 0x968);
                if (pItem && (unsigned)(BOTF(pItem, int, 0x88) - 1) <= 1)
                    m_pBot->SelectItem("weapon_genericbeam");
                return;
            }
            if (m_pBot->CanMelee(m_pEnemy))
            {
                BOOL fAim = FALSE;
                if (BOTF(m_pBot, float, 0xc28) < 20.0f && BOTF(m_pBot, float, 0xc2c) < 20.0f)
                {
                    TASKF(float, 0x34) = gpGlobals->time;
                    fAim = TRUE;
                }
                else if (gpGlobals->time - TASKF(float, 0x34) > 1.0f && SW_SKILL(m_pBot)[0x40] && (int)m_pEdict->v.fuser4 > 250)
                {
                    EComboType eAway = m_pBot->MakeAwayChainSwoop(m_pEnemy);
                    if (eAway != COMBO_NONE)
                    {
                        MakeCombo(eAway);
                        TASKF(char, 0x30) = 1;
                        return;
                    }
                    fAim = TRUE;
                }
                else
                    fAim = TRUE;
                (void)fAim;
                float flEnemyDist = (m_pEnemy->pev->origin - m_pBot->pev->origin).Length();
                if (BOTF(m_pBot, float, 0xc28) <= 100.0f || flEnemyDist <= 700.0f)
                {
                    CBasePlayerItem *pItem = BOTF(m_pBot, CBasePlayerItem *, 0x968);
                    if (pItem)
                    {
                        if (BOTF(pItem, int, 0x88) != 2 && *(int *)((char *)m_pEdict + 0x28c) == 7)
                            m_pBot->SelectItem("weapon_sword");
                        else if (!(BOTF(pItem, int, 0x88) == 1 || *(int *)((char *)m_pEdict + 0x28c) == 7))
                            m_pBot->SelectItem("weapon_melee");
                    }
                    int iMode = BOTF(m_pBot, int, 0xbe4);
                    if (iMode)
                    {
                        float flMin = (iMode == 2) ? 200.0f : 750.0f, flMax = (iMode == 2) ? 1700.0f : 2200.0f;
                        if (flMin < flEnemyDist && flMax >= flEnemyDist)
                        {
                            Vector vecAng = m_pBot->GetAimAngles(m_pEnemy->pev->origin);
                            BOTF(m_pBot, Vector, 0xc10) = vecAng;
                            if (iMode == 2)
                            {
                                // deriva: cada eixo oscila ate o alvo (+0x20/+0x24) e troca de sentido
                                float &fx = BOTF(m_pBot, float, 0xbe8), &fy = BOTF(m_pBot, float, 0xbec);
                                if (TASKF(short, 0x1a) > 0)
                                {
                                    if (fx >= TASKF(float, 0x20)) { TASKF(float, 0x20) = RANDOM_LONG(-18, -16); TASKF(short, 0x1a) = RANDOM_LONG(-3, -2); }
                                }
                                else if (fx <= TASKF(float, 0x20)) { TASKF(float, 0x20) = RANDOM_LONG(16, 18); TASKF(short, 0x1a) = RANDOM_LONG(2, 3); }
                                if (TASKF(short, 0x1c) > 0)
                                {
                                    if (fy >= TASKF(float, 0x24)) { TASKF(float, 0x24) = RANDOM_LONG(-18, -16); TASKF(short, 0x1c) = RANDOM_LONG(-3, -2); }
                                }
                                else if (fy <= TASKF(float, 0x24)) { TASKF(float, 0x24) = RANDOM_LONG(16, 18); TASKF(short, 0x1c) = RANDOM_LONG(2, 3); }
                                fx += TASKF(short, 0x1a);
                                fy += TASKF(short, 0x1c);
                            }
                            Vector vecSum = BOTF(m_pBot, Vector, 0xc10) + BOTF(m_pBot, Vector, 0xbe8);
                            WrapAngles(vecSum);
                            BOTF(m_pBot, Vector, 0xc10) = vecSum;
                        }
                    }
                    fFinish = TRUE;
                }
            }
        }
        else if (TASKF(float, 0x28) >= gpGlobals->time)
        {
            if (TASKF(float, 0x2c) >= gpGlobals->time || !SW_SKILL(m_pBot)[0x40] || (int)m_pEdict->v.fuser4 <= 250)
                fFinish = TRUE;
            else
            {
                RANDOM_FLOAT(0.2f, 0.5f);                            // [?] resultado descartado
                TASKF(float, 0x2c) = gpGlobals->time + 0.2;
                float flDist = 9999.9f;
                BOOL fFall = TRUE;                                   // cai em L54de54 (checa a trajetoria)
                if (m_pEnemy)
                {
                    flDist = (m_pEnemy->pev->origin - m_pBot->pev->origin).Length();
                    if (RANDOM_LONG(1, 100) <= *(short *)(SW_SKILL2(m_pBot) + 40) && EntIsInFieldOfView(m_pBot, m_pEnemy) && flDist < 750.0f)
                    {
                        int iChance = 50;
                        int iLvl = *(int *)(SW_SKILL2(m_pBot) + 52);
                        if (iLvl == 2) iChance = 25; else if (!iLvl) iChance = 75;
                        BOOL fCan = FALSE;
                        if (*(short *)SW_SKILL2(m_pBot) > 0 && pBM && pBM[0xd47] && pBM[0xd46])
                            fCan = m_pBot->CanAttackPlayer(m_pEnemy);
                        if (RANDOM_LONG(1, 100) <= iChance && fCan)
                        {
                            MakeCombo((EComboType)2);
                            TASKF(char, 0x30) = 1;
                            return;
                        }
                        EComboType eChain = m_pBot->MakeNormalChainSwoop();
                        if (eChain != COMBO_NONE)
                        {
                            MakeCombo(eChain);
                            TASKF(char, 0x30) = 1;
                            return;
                        }
                        fFinish = TRUE;
                        fFall = FALSE;
                    }
                }
                if (fFall)
                {
                    Vector vecDir = m_pBot->m_Swoop.GetCurrentDirection();
                    Vector vecEnd = m_pEdict->v.origin + vecDir * 50.0f;   // [?] o decompilador perdeu a soma com a origem
                    TraceResult tr;
                    UTIL_TraceHull(m_pEdict->v.origin, vecEnd, ignore_monsters, human_hull, m_pEdict, &tr);
                    if (tr.flFraction >= 1.0f)
                        fFinish = TRUE;
                    else
                    {
                        BOOL fDone = FALSE;
                        if (flDist < 750.0f && RANDOM_LONG(1, 100) <= *(short *)(SW_SKILL2(m_pBot) + 40))
                        {
                            EComboType eChain = m_pBot->MakeNormalChainSwoop();
                            if (eChain != COMBO_NONE)
                            {
                                MakeCombo(eChain);
                                TASKF(char, 0x30) = 1;
                                return;
                            }
                        }
                        if (0.2f <= tr.flFraction)
                            fFinish = TRUE;
                        (void)fDone;
                    }
                }
            }
        }
    }
    if (fFinish)
    {
        m_pBot->SetSwoopButton();
        if (!TASKF(char, 0x18))
            CheckSecondaryFire();
        if (TASKF(char, 0x19))
            m_pEdict->v.button |= 0x800;                             // [OK] button+1 |= 8
        EComboType eAvoid = m_pBot->AvoidAttacksWhileSwoop();
        if (eAvoid != COMBO_NONE)
            MakeCombo(eAvoid);
        return;
    }
    (void)fKeep;
    TASK_DONE();
}

// ---- CCombatTask: tabela de ataques e escolha ----
// BotWeaponInfoTable: entradas de 21 ints (84 bytes) terminadas por id 0; [0] id do ataque, [19] distancia minima, [20] maxima
struct bot_weapon_info_s { int iAttack; char szWeapon[64]; char fSecondary; char fCombo; short sPad; float flCharge; float flMinDist; float flMaxDist; };   // [OK] stride 84; +0x44 usa botao secundario, +0x45 ataque com combo, +0x48 tempo de carga
extern bot_weapon_info_s BotWeaponInfoTable[];

int CCombatTask::GetAttackIndex(int iAttack)
{
    for (int i = 0; BotWeaponInfoTable[i].iAttack; i++)
        if (BotWeaponInfoTable[i].iAttack == iAttack)
            return i;
    return 0;                                                       // [OK] nao achado: primeira entrada
}

float CCombatTask::GetMaxDistForAttackByTableIndex(int iIndex)
{
    return BotWeaponInfoTable[iIndex].flMaxDist;                    // [OK]
}

float CCombatTask::GetMaxDistForAttackById(int iAttack)
{
    return BotWeaponInfoTable[GetAttackIndex(iAttack)].flMaxDist;   // [OK]
}

float CCombatTask::GetMinDistForAttackByTableIndex(int iIndex)
{
    float flMin = BotWeaponInfoTable[iIndex].flMinDist;
    int iLevel = *(int *)(SW_SKILL2(m_pBot) + 0x34);                // [OK] nivel de habilidade
    if (iLevel == 0)
        return flMin * 0.8f;
    if (iLevel == 2)
        return flMin * 1.2f;
    return flMin;
}

float CCombatTask::GetMinDistForAttackById(int iAttack)
{
    return GetMinDistForAttackByTableIndex(GetAttackIndex(iAttack));
}

BOOL CCombatTask::ReactOnDanger(danger_info_s *pDanger)
{
    return pDanger->m_iDanger > 59;                                 // [OK] (cmp word [+0x18], 0x3b; setg)
}

// Chance (0..100) de usar o ataque iAttack contra pEnemy. Tabela de habilidades do bot: shorts em SW_SKILL2(bot)+2..+0x10.
int CCombatTask::GetAttackPercent(CBasePlayer *pEnemy, int iAttack)
{
    char *pBM = g_pBotManager;
    if (!pBM || !pBM[0xd47])
        return 0;
    char *pSkill = SW_SKILL2(m_pBot);
    float fS4 = *(short *)(pSkill + 4),  fS6 = *(short *)(pSkill + 6),  fS8 = *(short *)(pSkill + 8),  fSE = *(short *)(pSkill + 0xe);
    float fS2 = *(short *)(pSkill + 2),  fSA = *(short *)(pSkill + 0xa), fSC = *(short *)(pSkill + 0xc), fS10 = *(short *)(pSkill + 0x10);
    if (BOTF(pEnemy, int, 0x334) || BOTF(pEnemy, int, 0x338))
    {
        // inimigo carregando: se o bot ve a carga, aumenta a chance de ataques que interrompem esse tipo de carga
        short sCharge = BOTF(pEnemy, short, 0x6d0);
        int iLevel = (unsigned char)BOTF(m_pBot, char, 0x9fc);
        if (iLevel <= 4)
        {
            int iRange = 10 + 5 * iLevel;                           // [OK] tabela de saltos: 10,15,20,25,30
            sCharge += RANDOM_LONG(-iRange, iRange);
        }
        CBasePlayerItem *pItem = BOTF(pEnemy, CBasePlayerItem *, 0x968);
        if (sCharge > 0 && pItem)
        {
            switch (BOTF(pItem, int, 0x88))                         // [OK] tabela por id da arma do inimigo (4..24)
            {
            case 4: case 18:                            fS4 *= 1.75; break;
            case 16: case 22:                           fS6 *= 1.75; break;
            case 5: case 6: case 15: case 23:           fS8 *= 1.75; break;
            case 11: case 12: case 13: case 17: case 19: case 24:   fSE *= 1.75; break;
            }
        }
    }
    else if (BOTF(pEnemy, int, 0x37c) && (unsigned)(BOTF(pEnemy, int, 0x3e4) - 3) <= 1)
    {
        fS2 *= 1.75; fSC *= 1.75;                                   // [OK] inimigo preso/defendendo
    }
    else if (pEnemy->pev->fuser1 == 0.0f)                           // [?] pev+0x210 (campo exato a confirmar)
    {
        fS2 *= 1.25f; fSC *= 1.25f;
    }
    float fResult;
    switch (iAttack)
    {
    case 1: case 2:                                         return 0;
    case 3: case 30: case 21:                               fResult = fS2; break;
    case 4: case 18:                                        fResult = fS4; break;
    case 22: case 16:                                       fResult = fS6; break;
    case 5: case 6: case 15: case 23:                       fResult = fS8; break;
    case 7: case 10:                                        fResult = fSA; break;
    case 9: case 14: case 20:                               fResult = fSC; break;
    case 11: case 12: case 13: case 17: case 19: case 24: case 33:   fResult = fSE; break;
    case 32:                                                fResult = fS10; break;
    case 128:
        if (BOTF(m_pBot, short, 0xba4) > 0)
            return *(short *)((char *)BOTF(m_pBot, void *, 0xba8) + 0xc);
        return 0;
    case 8:                                                 return *(short *)(pSkill + 0x12);
    default:                                                return 0;
    }
    return (short)(int)fResult;
}

// ---- CCombatTask::PrepareAttack ----
// Escolhe a arma, configura o ataque (bot+0xb80/0xb78/0xb7c) e decide se vira combo ou se muda o modo do bot (+0x1068).
void CCombatTask::PrepareAttack(int iAttack, EComboUse eUse)
{
    BOOL fCombo = FALSE;
    switch (eUse)
    {
    case COMBO_USE_ALWAYS:
        fCombo = TRUE;
        break;
    case COMBO_USE_RANDOM:
        if (BOTF(m_pBot, char, 0x9fc) <= 1 && *(short *)SW_SKILL2(m_pBot) > 0)
        {
            float flChance = *(short *)(SW_SKILL2(m_pBot) + 0x26);                // [OK]
            flChance += (gpGlobals->time - BOTF(m_pBot, float, 0xab0)) * flChance;
            int iKi = (int)m_pEdict->v.fuser4;
            if (iKi <= 199)       flChance = 0;
            else if (iKi <= 399)  flChance *= 0.6;
            else if (iKi <= 599)  flChance *= 0.8;
            else if (iKi <= 699)  flChance *= 0.9;
            float flDist = (m_pEnemy->pev->origin - m_pEdict->v.origin).Length();
            if ((unsigned)(iAttack - 1) <= 1)                                     // ataques corpo a corpo
            {
                if (flDist > 2100.0f || BOTF(m_pBot, char, 0x9fc))
                    flChance = 0;
                if (!EntIsInFieldOfView(m_pEnemy, m_pBot))
                    flChance *= 1.5;
            }
            else
            {
                if (flDist < 500.0f)        flChance *= 1.25;
                else if (flDist < 1000.0f)  flChance *= 1.05f;
                else if (flDist < 1750.0f)  flChance *= 0.85f;
                else                        flChance = 0;
            }
            if (RANDOM_FLOAT(1.0f, 100.0f) <= flChance)                           // [?] o decompilador perdeu o resultado
                fCombo = TRUE;
        }
        break;
    default:
        break;
    }

    bot_weapon_info_s *pInfo = &BotWeaponInfoTable[GetAttackIndex(iAttack)];
    CBasePlayerItem *pItem = BOTF(m_pBot, CBasePlayerItem *, 0x968);
    if (pItem && BOTF(pItem, int, 0x88) != iAttack)
        m_pBot->SelectItem(pInfo->szWeapon);                                      // [OK] troca para a arma do ataque

    if ((unsigned)(iAttack - 1) <= 1)
    {
        AttackWithMelee(fCombo);
        return;
    }
    switch (iAttack)
    {
    case 32:  BOTF(m_pBot, int, 0x1068) = 19; TASK_DONE(); return;
    case 128: BOTF(m_pBot, int, 0x1068) = 30; TASK_DONE(); return;
    case 20:  BOTF(m_pBot, int, 0x1068) = 24; TASK_DONE(); return;
    case 21:  BOTF(m_pBot, int, 0x1068) = 25; TASK_DONE(); return;
    }

    RANDOM_LONG(1, 100);                                                          // [?] resultado descartado
    EComboType eCombo;
    if (pInfo->fCombo)
    {
        BOTF(m_pBot, bot_weapon_info_s *, 0xb80) = pInfo;
        BOTF(m_pBot, int, 0xb7c) = pInfo->fSecondary ? 0x800 : 1;
        if (iAttack == 4 && pInfo->fSecondary && RANDOM_LONG(1, 100) <= *(short *)SW_SKILL2(m_pBot))
            eCombo = (EComboType)28;
        else if (!fCombo)
        {
            if ((int)m_pEdict->v.fuser4 > 449)
            {
                BOTF(m_pBot, int, 0x1068) = 13;
                TASK_DONE();
                return;
            }
            eCombo = (EComboType)26;
        }
        else
        {
            MakeCombo((EComboType)6);
            BOTF(m_pBot, float, 0xab0) = gpGlobals->time + RANDOM_FLOAT(10.0f, 20.0f);   // [?]
            return;
        }
    }
    else if (pInfo->flCharge > 0.0f)
    {
        BOTF(m_pBot, bot_weapon_info_s *, 0xb80) = pInfo;
        BOTF(m_pBot, float, 0xb78) = pInfo->flCharge;
        BOTF(m_pBot, int, 0xb7c) = pInfo->fSecondary ? 0x800 : 1;
        if (fCombo)
        {
            MakeCombo((EComboType)7);
            BOTF(m_pBot, float, 0xab0) = gpGlobals->time + RANDOM_FLOAT(10.0f, 20.0f);   // [?]
            return;
        }
        if ((int)m_pEdict->v.fuser4 > 449)
        {
            BOTF(m_pBot, int, 0x1068) = 26;
            TASK_DONE();
            return;
        }
        eCombo = (EComboType)27;
    }
    else
    {
        if (!pInfo->fSecondary)
            m_pEdict->v.button |= 1;                                              // [OK] atira (botao primario)
        else
            m_pEdict->v.button |= 0x800;
        m_pBot->AddShootDelay();
        return;
    }
    MakeCombo(eCombo);
}

// ---- CCombatTask::AttackWithMelee ----
// Escolhe um combo corpo a corpo. Pesos [OK]: ids 21/22 = 50 (so de 1250 a 1750), 23 = 25, 24 = 50, 20 = 25; padrao: combo 2.
void CCombatTask::AttackWithMelee(BOOL fCombo)
{
    if (25.0f <= BOTF(m_pBot, float, 0xc28) && BOTF(m_pBot, char, 0x9fc) > 2)
        return;
    if (m_pBot->GetMaxSpeed() == 0)
        return;
    CBasePlayerItem *pItem = BOTF(m_pBot, CBasePlayerItem *, 0x968);
    if (pItem)
    {
        if (*(int *)((char *)m_pEdict + 0x28c) == 7)
        {
            if (BOTF(pItem, int, 0x88) != 2)
                m_pBot->SelectItem("weapon_sword");
        }
        else if (BOTF(pItem, int, 0x88) != 1)
            m_pBot->SelectItem("weapon_melee");
    }
    if (*(short *)SW_SKILL2(m_pBot) <= 99)
    {
        if (RANDOM_LONG(1, 100) <= *(short *)(SW_SKILL2(m_pBot) + 4))
            MakeCombo((EComboType)28);                                       // [OK] (nao retorna)
    }
    if (!fCombo)
    {
        if ((int)m_pEdict->v.fuser4 > 149)
            MakeCombo((EComboType)2);
        else
            MakeCombo((EComboType)25);
        return;
    }
    int iW20 = 25, iW21 = 50, iW23 = 25, iW24 = 50;
    CBasePlayer *pEnemy = BOT_ENEMY(m_pBot);
    float flDist = (pEnemy->pev->origin - m_pBot->pev->origin).Length();
    if (flDist > 1200.0f)
        iW20 = 0;
    else if ((short)UTIL_GetHeadingPercentage(m_pBot, pEnemy) > 64)
        iW20 = (int)(iW20 * 0.25);
    if (*(int *)((char *)pEnemy->pev + 0x108) == 11)                          // [?] estado do inimigo
    {
        iW23 = 0;
        iW20 = 0;
    }
    if (BOTF(pEnemy, int, 0x3e4) == 1)
        iW20 = (int)(iW20 * 1.5);
    int iKi = (int)m_pEdict->v.fuser4;
    if ((int)flDist / 400 > iKi / 200 - 1)
        iW20 = 0;
    if (iKi > 480)
        iW24 = 0;
    if (flDist < 1250.0f)
        iW21 = 0;
    if (!(flDist >= 850.0f && flDist <= 1750.0f))
        iW21 = 0;

    struct { int iLo, iHi, iCombo; } aSel[5];
    int nSel = 0, iTotal = 0;
    if (iW21) { aSel[nSel].iLo = iTotal; aSel[nSel].iHi = iTotal + iW21; aSel[nSel++].iCombo = 21; iTotal += iW21;
                aSel[nSel].iLo = iTotal; aSel[nSel].iHi = iTotal + iW21; aSel[nSel++].iCombo = 22; iTotal += iW21; }
    if (iW23) { aSel[nSel].iLo = iTotal; aSel[nSel].iHi = iTotal + iW23; aSel[nSel++].iCombo = 23; iTotal += iW23; }
    if (iW24) { aSel[nSel].iLo = iTotal; aSel[nSel].iHi = iTotal + iW24; aSel[nSel++].iCombo = 24; iTotal += iW24; }
    if (iW20) { aSel[nSel].iLo = iTotal; aSel[nSel].iHi = iTotal + iW20; aSel[nSel++].iCombo = 20; iTotal += iW20; }

    int iPick = RANDOM_LONG(0, iTotal);
    int iChosen = 2;                                                         // [OK] padrao
    for (int i = 0; i < nSel; i++)
        if (iPick >= aSel[i].iLo && iPick < aSel[i].iHi)                     // [?] limites do FindSelection
        {
            iChosen = aSel[i].iCombo;
            break;
        }
    MakeCombo((EComboType)iChosen);
    BOTF(m_pBot, float, 0xab0) = gpGlobals->time + RANDOM_FLOAT(10.0f, 20.0f);   // [?]
}
