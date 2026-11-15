// CFinishMeleeTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFinishMeleeTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._16CFinishMeleeTask();  // vtable[0] _._16CFinishMeleeTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__16CFinishMeleeTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__16CFinishMeleeTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__16CFinishMeleeTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__16CFinishMeleeTask
    virtual void TaskThink();  // vtable[5] TaskThink__16CFinishMeleeTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__16CFinishMeleeTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__16CFinishMeleeTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__16CFinishMeleeTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    int f_008;  // +0x8 (8)
    int f_00c;  // +0xc (12)
    short f_028;  // +0x28 (40)
    char f_02a;  // +0x2a (42)
    int f_02c;  // +0x2c (44)
    float f_030;  // +0x30 (48)
    int f_034;  // +0x34 (52)
    int f_038;  // +0x38 (56)
    char f_03c;  // +0x3c (60)
};
