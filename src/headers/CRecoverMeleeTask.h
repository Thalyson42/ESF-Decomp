// CRecoverMeleeTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CRecoverMeleeTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._17CRecoverMeleeTask();  // vtable[0] _._17CRecoverMeleeTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__17CRecoverMeleeTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__17CRecoverMeleeTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__17CRecoverMeleeTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__17CRecoverMeleeTask
    virtual void TaskThink();  // vtable[5] TaskThink__17CRecoverMeleeTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__17CRecoverMeleeTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__17CRecoverMeleeTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__17CRecoverMeleeTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
    void* f_00c;  // +0xc (12)
};
