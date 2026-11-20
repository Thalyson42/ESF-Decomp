// tasks.h -- GERADO por tools/gen_tasks.py: declaracoes das tarefas do bot (todas derivam de CBaseTask).
#pragma once
#include "bot.h"

class CAbsorbHealthTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    BOOL ShootAbsorbHealthBeams(void);
};

class CAscendTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CBeamJumpTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CBlindedTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CBlockTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CChargeAttackTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CCombatTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CComboTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CControlBeamTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CControlFriezaDiscTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CCounterMeleeTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CDBTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
};

class CDrainEntsTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
};

class CFinishMeleeTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CHuntEnemyTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CIdleTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CJumpOffGroundTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CKameTorpTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
    void ChargeKameTorps(void);
    short CountTorps(void);
    BOOL SetMoveAwayDir(void);
};

class CKickEnemyTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CLookAroundTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
};

class CNormalJumpTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CNormalMovementTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
};

class CPowerStruggleTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CPowerUpTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CRecoverHPTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CRecoverMeleeTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CShootCandyTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CShootLaser1Task : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CShootNonChargebleTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CShootScatterShotsTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
    CBaseEntity *GetFurthestScatterShot(void);
};

class CSwoopTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CTeleportTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

class CWallJumpTask : public CBaseTask
{
public:
    virtual int GetNesserelyChecks(void);
    virtual int GetBotStatusChecks(void);
    virtual int GetBotSenseChecks(void);
    virtual int GetBotMiscChecks(void);
    virtual void TaskThink(void);
    virtual int TaskIdentify(void);
    virtual BOOL ShouldManageEnemies(void);
    virtual BOOL ReactOnDanger(danger_info_s *pDanger);
};

enum ETaskId {
    TASK_POWERUP = 0,
    TASK_TELEPORT = 1,
    TASK_BLOCK = 2,
    TASK_KICKENEMY = 3,
    TASK_COUNTERMELEE = 4,
    TASK_COMBAT = 5,
    TASK_NORMALMOVEMENT = 6,
    TASK_SWOOP = 7,
    TASK_FINISHMELEE = 8,
    TASK_POWERSTRUGGLE = 9,
    TASK_ASCEND = 10,
    TASK_BLINDED = 11,
    TASK_COMBO = 12,
    TASK_CHARGEATTACK = 13,
    TASK_CONTROLFRIEZADISC = 14,
    TASK_CONTROLBEAM = 15,
    TASK_LOOKAROUND = 16,
    TASK_RECOVERHP = 17,
    TASK_WALLJUMP = 18,
    TASK_KAMETORP = 19,
    TASK_IDLE = 20,
    TASK_RECOVERMELEE = 21,
    TASK_BEAMJUMP = 22,
    TASK_NORMALJUMP = 23,
    TASK_SHOOTCANDY = 24,
    TASK_SHOOTSCATTERSHOTS = 25,
    TASK_SHOOTNONCHARGEBLE = 26,
    TASK_DB = 27,
    TASK_JUMPOFFGROUND = 28,
    TASK_HUNTENEMY = 29,
    TASK_SHOOTLASER1 = 30,
    TASK_DRAINENTS = 31,
    TASK_ABSORBHEALTH = 32,
};
