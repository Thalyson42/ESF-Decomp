// task_ctors.cpp -- construtores das 33 tarefas do bot + CBot::MakeTask (fabrica). RECUPERADO de CBot::MakeTask
// (blocos inline lidos do assembly; valores de RandomFloat/constantes conferidos) e de decomp_raw/_funcoes_livres/__9C*TaskP4CBot.
// Convencao: this->m_flDelay (+0) ja foi preenchido por CBaseTask::CBaseTask (SetGeneralDelay).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "esf_classes.h"
#include "tasks.h"

#define TASK_CTOR(cls) cls::cls(CBot *pBot) : CBaseTask(pBot)
#define SW_SKILL2(b) BOTF(b, char *, 0xa04)

TASK_CTOR(CPowerUpTask) {}
TASK_CTOR(CCombatTask) {}
TASK_CTOR(CNormalMovementTask) {}
TASK_CTOR(CPowerStruggleTask) {}
TASK_CTOR(CAscendTask) {}
TASK_CTOR(CBlindedTask) {}
TASK_CTOR(CComboTask) {}
TASK_CTOR(CRecoverHPTask) {}
TASK_CTOR(CIdleTask) {}
TASK_CTOR(CRecoverMeleeTask) {}

TASK_CTOR(CBlockTask)           { TASKF(float, 0x18) = 1.0f + m_flDelay; }                  // [OK]
TASK_CTOR(CKickEnemyTask)       { TASKF(float, 0x18) = m_flDelay; }
TASK_CTOR(CCounterMeleeTask)
{
    TASKF(int, 0x18) = 1;
    TASKF(float, 0x1c) = RANDOM_FLOAT(1.1f, 2.4f) + m_flDelay;
    TASKF(int, 0x20) = 0;
}
TASK_CTOR(CChargeAttackTask)    { TASKF(int, 0x18) = 0; TASKF(float, 0x1c) = m_flDelay; }
TASK_CTOR(CControlFriezaDiscTask)
{
    TASKF(int, 0x18) = 0;
    TASKF(float, 0x1c) = m_flDelay;
    TASKF(float, 0x20) = RANDOM_FLOAT(10.0f, 22.0f);
    TASKF(float, 0x24) = RANDOM_FLOAT(10.0f, 22.0f);
}
TASK_CTOR(CControlBeamTask)     { TASKF(float, 0x18) = m_flDelay + 10.0f; TASKF(char, 0x1c) = 0; }
TASK_CTOR(CLookAroundTask)      { TASKF(short, 0x48) = 0; TASKF(int, 0x4c) = 0; }            // [OK] objeto de 0x50 bytes
TASK_CTOR(CBeamJumpTask)
{
    TASKF(float, 0x18) = RANDOM_FLOAT(2.2f, 3.2f) + m_flDelay;
    TASKF(int, 0x1c) = 0;
    TASKF(float, 0x20) = RANDOM_FLOAT(2.2f, 3.2f) + m_flDelay;
}
TASK_CTOR(CNormalJumpTask)
{
    TASKF(float, 0x18) = RANDOM_FLOAT(0.8f, 1.2f) + m_flDelay;
    TASKF(float, 0x1c) = RANDOM_FLOAT(0.8f, 1.2f) + m_flDelay;
}
TASK_CTOR(CShootCandyTask)
{
    TASKF(float, 0x18) = RANDOM_FLOAT(2.5f, 5.0f) + m_flDelay;
    TASKF(int, 0x1c) = 0; TASKF(int, 0x20) = 0; TASKF(int, 0x24) = 0; TASKF(int, 0x28) = 0;
    TASKF(float, 0x2c) = RANDOM_FLOAT(2.5f, 5.0f) + m_flDelay;
}
TASK_CTOR(CShootNonChargebleTask) { TASKF(float, 0x18) = BOTF(pBot, float, 0xb78) + m_flDelay; }   // [OK] +0xb78 = tempo de carga do ataque
TASK_CTOR(CDBTask)              { TASKF(int, 0x18) = 0; }
TASK_CTOR(CHuntEnemyTask)       { TASKF(float, 0x18) = gpGlobals->time + 1.5f; TASKF(float, 0x1c) = m_flDelay; }
TASK_CTOR(CShootLaser1Task)     { TASKF(float, 0x18) = RANDOM_FLOAT(3.0f, 6.0f) + m_flDelay; }
TASK_CTOR(CAbsorbHealthTask)    { TASKF(float, 0x18) = RANDOM_FLOAT(3.0f, 7.0f) + m_flDelay; }

extern BOOL CheckForCollide(edict_t *pEdict, int iDir, float flDist);      // [?]
int CTeleportTask::GetRandomTeleDir(void)
{
    // direcoes livres, com peso [OK]: (dir, distancia, peso, id retornado)
    static const struct { int iDir; float flDist; int iWeight; int iId; } aOpt[7] = {
        { 2, 350.0f, 30, 2 }, { 4, 350.0f, 30, 4 }, { 32, 650.0f, 75, 32 }, { 64, 650.0f, 75, 64 },
        { 0x40000, 650.0f, 40, 10 }, { 0x80000, 650.0f, 40, 12 }, { 8, 650.0f, 40, 8 } };
    int aId[7], aW[7], n = 0, iTotal = 0;
    for (int i = 0; i < 7; i++)
        if (!CheckForCollide(m_pEdict, aOpt[i].iDir, aOpt[i].flDist))
        {
            aId[n] = aOpt[i].iId; aW[n] = aOpt[i].iWeight; iTotal += aW[n]; n++;
        }
    int iPick = RANDOM_LONG(0, iTotal), iAcc = 0;
    for (int i = 0; i < n; i++)
    {
        if (iPick >= iAcc && iPick < iAcc + aW[i])                     // [?] limites do FindSelection
            return aId[i];
        iAcc += aW[i];
    }
    return 0;                                                          // [?] padrao
}

TASK_CTOR(CTeleportTask)
{
    if (!BOTF(pBot, int, 0xb0c))
        BOTF(pBot, int, 0xb0c) = GetRandomTeleDir();                // [?] helper da tarefa
    if (BOTF(pBot, float, 0xb08) < gpGlobals->time)
        BOTF(pBot, float, 0xb08) = 0.2f + m_flDelay;
    if (!pBot->BotShouldFallDown())
        return;
    if (BOTF(pBot, int, 0x320))
        pBot->StopFly();
    BOTF(pBot, char, 0xa10) = 0;
    BOTF(pBot, float, 0xa14) = RANDOM_FLOAT(0.8f, 1.2f) + gpGlobals->time;   // [?] resultado de RandomFloat
}

TASK_CTOR(CSwoopTask)
{
    m_flDelay = gpGlobals->time;
    TASKF(float, 0x2c) = gpGlobals->time + 0.75f;
    TASKF(char, 0x18) = 0; TASKF(char, 0x19) = 0; TASKF(int, 0x30) = 0;
    if (pBot->m_Swoop.m_iType != 4)
        TASKF(float, 0x28) = GetSwoopLifeTime();
    else
        SelectSwoopType();
    TASKF(float, 0x34) = m_flDelay;
}

TASK_CTOR(CWallJumpTask)
{
    if (!BOTF(pBot, int, 0x6c8))
        m_flDelay = 1.0f + gpGlobals->time;
    TASKF(float, 0x18) = m_flDelay + 3.0f;
    TASKF(int, 0x1c) = 0;
}

TASK_CTOR(CKameTorpTask)
{
    float flTime = RANDOM_FLOAT(35.0f, 43.0f);                      // [?] o decompilador mostra 35 como base
    int iLevel = *(int *)(SW_SKILL2(pBot) + 0x34);
    if (iLevel == 2)      flTime *= 1.2f;
    else if (iLevel == 0) flTime *= 0.8f;
    TASKF(float, 0x30) = flTime + m_flDelay;
    TASKF(int, 0x34) = 0;
    TASKF(short, 0x38) = 6;
    TASKF(short, 0x3a) = 0;
    TASKF(int, 0x2c) = 0;
    memset((char *)this + 0x18, 0, 0x11);
}

TASK_CTOR(CShootScatterShotsTask)
{
    TASKF(float, 0x18) = RANDOM_FLOAT(2.75f, 3.45f) + m_flDelay;
    TASKF(float, 0x1c) = m_flDelay;
    if (BOTF(pBot, char, 0x9fc) <= 1 && RANDOM_LONG(1, 100) <= 19)
        TASKF(char, 0x20) = 1;
    else
        TASKF(char, 0x20) = 0;
}

extern int UTIL_EntDir(CBaseEntity *pEnt, Vector vecPos);          // [?]
TASK_CTOR(CJumpOffGroundTask)
{
    int iW16 = 50, iW8 = 50, iW2 = 50, iW4 = 50;
    if (m_pEnemy)
    {
        int iDir = UTIL_EntDir(pBot, m_pEnemy->pev->origin);
        if (iDir & 2)  iW2 = 15;
        if (iDir & 4)  iW4 = 15;
        if (iDir & 8)  iW8 = 15;
        if (iDir & 16) iW16 = 15;
    }
    struct { int iId, iW; } aOpt[8] = {
        { 16, iW16 }, { 8, iW8 }, { 2, iW2 }, { 4, iW4 },
        { 18, (iW2 + iW16) >> 1 }, { 20, (iW4 + iW16) >> 1 }, { 10, (iW2 + iW8) >> 1 }, { 12, (iW4 + iW8) >> 1 } };   // [OK]
    int iTotal = 0;
    for (int i = 0; i < 8; i++) iTotal += aOpt[i].iW;
    int iPick = RANDOM_LONG(0, iTotal);
    int iAcc = 0;
    TASKF(int, 0x18) = 0;
    for (int i = 0; i < 8; i++)
    {
        if (!aOpt[i].iW) continue;
        if (iPick >= iAcc && iPick < iAcc + aOpt[i].iW) { TASKF(int, 0x18) = aOpt[i].iId; break; }   // [?] limites do FindSelection
        iAcc += aOpt[i].iW;
    }
}

TASK_CTOR(CFinishMeleeTask)
{
    unsigned short usChance = *(unsigned short *)(SW_SKILL2(pBot) + 0x14);
    BOOL fCombo = FALSE;
    int iKi = (int)pBot->pev->fuser4;
    if (iKi <= 399)
        usChance = (unsigned short)(int)(usChance * (2.0 - (iKi * 0.001f + iKi * 0.001f)));   // [OK]
    if (RANDOM_LONG(1, 100) <= usChance)
    {
        TASKF(int, 0x28) = 1;
        TASKF(float, 0x24) = RANDOM_FLOAT(4.3f, 6.1f) + m_flDelay;
        if (BOTF(pBot, char *, 0xa00)[0x3f] && RANDOM_LONG(0, 1))
            fCombo = TRUE;
    }
    else
    {
        TASKF(int, 0x28) = 2;
        TASKF(float, 0x24) = RANDOM_FLOAT(3.8f, 4.6f) + m_flDelay;
    }
    TASKF(float, 0x20) = RANDOM_FLOAT(1.5f, 2.4f) + m_flDelay;
    TASKF(int, 0x18) = 1;
    TASKF(int, 0x1c) = 0;
    int iMaxStun  = (int)CVAR_GET_FLOAT("am_prepunch_maxstun");
    int iMinCombo = (int)CVAR_GET_FLOAT("am_prepunch_mincombo");
    int iMax      = (int)CVAR_GET_FLOAT("am_prepunch_max") - 1;
    int iLevel = BOTF(pBot, char, 0x9fc);
    int iLo = iMaxStun - (char)RANDOM_LONG(0, (char)(iLevel + 1) >> 1);
    int iHi;
    if (fCombo)
        iHi = iMaxStun + (char)RANDOM_LONG(0, (char)(iLevel + 1) >> 1);
    else
        iHi = iMax - (char)RANDOM_LONG(0, iLevel) - *(int *)(SW_SKILL2(pBot) + 0x34);
    if (iLo <= iMinCombo) iLo = iMinCombo + 1;
    if (iHi <= iLo)       iHi = iMinCombo + 1;
    if (TASKF(int, 0x28) == 2 && iHi > 6) iHi = 6;
    TASKF(short, 0x2a) = RANDOM_LONG(iLo, iHi);
    TASKF(int, 0x2c) = 0;
    TASKF(Vector, 0x30) = g_vecZero;
    TASKF(int, 0x3c) = 0;
    if (fCombo)
        pBot->MakeMeleeComboList();
}

// CDrainEntsTask: o construtor fica em tasks_simple.cpp (usa a estrutura da lista)

// ---- fabrica de tarefas: CBot::MakeTask(ETaskCode) [OK] tabela de saltos lida do binario ----
void CBot::MakeTask(int iCode)
{
    CBaseTask *pTask = BOTF(this, CBaseTask *, 0x1064);
    if (pTask)
    {
        if (pTask->TaskIdentify() == iCode)
            return;                                                  // ja e a tarefa atual
        BOTF(this, int, 0x106c) = pTask->TaskIdentify();             // lembra a anterior
        KillCurrentTask();
    }
    if (iCode > 0x20)
        return;
    CBaseTask *p = NULL;
    switch (iCode)
    {
    case 0:  p = new CPowerUpTask(this); break;
    case 1:  p = new CTeleportTask(this); break;
    case 2:  p = new CBlockTask(this); break;
    case 3:  p = new CKickEnemyTask(this); break;
    case 4:  p = new CCounterMeleeTask(this); break;
    case 5:  p = new CCombatTask(this); break;
    case 6:  p = new CNormalMovementTask(this); break;
    case 7:  p = new CSwoopTask(this); break;
    case 8:  p = new CFinishMeleeTask(this); break;
    case 9:  p = new CPowerStruggleTask(this); break;
    case 10: p = new CAscendTask(this); break;
    case 11: p = new CBlindedTask(this); break;
    case 12: p = new CComboTask(this); break;
    case 13: p = new CChargeAttackTask(this); break;
    case 14: p = new CControlFriezaDiscTask(this); break;
    case 15: p = new CControlBeamTask(this); break;
    case 16: p = new CLookAroundTask(this); break;
    case 17: p = new CRecoverHPTask(this); break;
    case 18: p = new CWallJumpTask(this); break;
    case 19: p = new CKameTorpTask(this); break;
    case 20: p = new CIdleTask(this); break;
    case 21: p = new CRecoverMeleeTask(this); break;
    case 22: p = new CBeamJumpTask(this); break;
    case 23: p = new CNormalJumpTask(this); break;
    case 24: p = new CShootCandyTask(this); break;
    case 25: p = new CShootScatterShotsTask(this); break;
    case 26: p = new CShootNonChargebleTask(this); break;
    case 27: p = new CDBTask(this); break;
    case 28: p = new CJumpOffGroundTask(this); break;
    case 29: p = new CHuntEnemyTask(this); break;
    case 30: p = new CShootLaser1Task(this); break;
    case 31: p = new CDrainEntsTask(this); break;
    case 32: p = new CAbsorbHealthTask(this); break;
    }
    BOTF(this, CBaseTask *, 0x1064) = p;                             // [OK] +0x1064 tarefa atual
}

void CBot::KillCurrentTask(void)
{
    CBaseTask *pTask = BOTF(this, CBaseTask *, 0x1064);
    if (!pTask)
        return;
    BOTF(this, int, 0x106c) = pTask->TaskIdentify();                 // [OK]
    delete pTask;
    BOTF(this, CBaseTask *, 0x1064) = NULL;
}

void CBot::BotPerformTasks(void)
{
    CBaseTask *pTask = BOTF(this, CBaseTask *, 0x1064);
    if (!pTask)
        return;
    if (pTask->GetTaskState() != 2)
    {
        if (pTask->GetTaskDelay() <= gpGlobals->time)
        {
            if (pTask->ShouldManageEnemies())
                pTask->ManageEnemies();
            pTask->TaskThink();
        }
        else
            ResetMoveSpeed();                                        // [OK] ainda esperando o atraso da tarefa
        if (BOTF(this, CBaseTask *, 0x1064)->GetTaskState() != 2)
            return;
    }
    KillCurrentTask();                                               // tarefa concluida
    if (BOTF(this, int, 0x1068) != 33)                               // 33 = nenhuma pendente
    {
        MakeTask(BOTF(this, int, 0x1068));
        BOTF(this, int, 0x1068) = 33;
    }
}

void CBot::SetMoveDir(int iDir)
{
    if (iDir & 2)  { BOTF(this, float, 0xd68) = -GetMaxSpeed(); pev->button |= 0x200; }
    if (iDir & 4)  { BOTF(this, float, 0xd68) =  GetMaxSpeed(); pev->button |= 0x400; }
    if (iDir & 16) { BOTF(this, float, 0xd70) =  GetMaxSpeed(); pev->button |= 0x8; }
    if (iDir & 8)  { BOTF(this, float, 0xd70) = -GetMaxSpeed(); pev->button |= 0x10; }
    if (iDir & 32) { BOTF(this, float, 0xd6c) =  GetMaxSpeed(); pev->button |= 0x2; }
    if (iDir & 64) { BOTF(this, float, 0xd6c) = -GetMaxSpeed(); pev->button |= 0x4; }
}

extern float UTIL_WrapAngle(float flAngle);
void CBot::TurnAround(void)
{
    BOTF(this, float, 0xc10) = pev->v_angle.x;                       // [OK] vira 180 graus no yaw
    BOTF(this, float, 0xc14) = UTIL_WrapAngle(pev->v_angle.y + 180.0f);
    BOTF(this, float, 0xc18) = pev->v_angle.z;
}

BOOL CBot::DangerousPlForBot(long lPL)
{
    int iLo, iHi;
    switch (*(int *)(SW_SKILL2(this) + 0x34))
    {
    case 2:  iLo = 100000; iHi = 250000;  break;
    case 1:  iLo = 550000; iHi = 1000000; break;
    case 0:  iLo = 750000; iHi = 1250000; break;
    default: return m_iPowerLevel < lPL;
    }
    return m_iPowerLevel < (int)(lPL - RANDOM_LONG(iLo, iHi));       // [OK]
}
