// CPowerStruggleTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CPowerStruggleTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._18CPowerStruggleTask();  // vtable[0] _._18CPowerStruggleTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__18CPowerStruggleTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__18CPowerStruggleTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__18CPowerStruggleTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__18CPowerStruggleTask
    virtual void TaskThink();  // vtable[5] TaskThink__18CPowerStruggleTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__18CPowerStruggleTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__18CPowerStruggleTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__18CPowerStruggleTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
    void* f_00c;  // +0xc (12)
};
