// CCounterMeleeTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CCounterMeleeTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._17CCounterMeleeTask();  // vtable[0] _._17CCounterMeleeTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__17CCounterMeleeTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__17CCounterMeleeTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__17CCounterMeleeTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__17CCounterMeleeTask
    virtual void TaskThink();  // vtable[5] TaskThink__17CCounterMeleeTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__17CCounterMeleeTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__17CCounterMeleeTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__17CCounterMeleeTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
    void* f_00c;  // +0xc (12)
};
