// CAscendTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CAscendTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._11CAscendTask();  // vtable[0] _._11CAscendTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__11CAscendTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__11CAscendTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__11CAscendTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__11CAscendTask
    virtual void TaskThink();  // vtable[5] TaskThink__11CAscendTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__11CAscendTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__11CAscendTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__11CAscendTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
    void* f_00c;  // +0xc (12)
};
