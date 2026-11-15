// CChargeAttackTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CChargeAttackTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._17CChargeAttackTask();  // vtable[0] _._17CChargeAttackTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__17CChargeAttackTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__17CChargeAttackTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__17CChargeAttackTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__17CChargeAttackTask
    virtual void TaskThink();  // vtable[5] TaskThink__17CChargeAttackTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__17CChargeAttackTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__17CChargeAttackTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__17CChargeAttackTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
    void* f_00c;  // +0xc (12)
    int f_018;  // +0x18 (24)
    int f_01c;  // +0x1c (28)
};
