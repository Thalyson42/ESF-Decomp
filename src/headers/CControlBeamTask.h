// CControlBeamTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CControlBeamTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._16CControlBeamTask();  // vtable[0] _._16CControlBeamTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__16CControlBeamTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__16CControlBeamTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__16CControlBeamTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__16CControlBeamTask
    virtual void TaskThink();  // vtable[5] TaskThink__16CControlBeamTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__16CControlBeamTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__16CControlBeamTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__16CControlBeamTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
    void* f_00c;  // +0xc (12)
    float f_018;  // +0x18 (24)
    char f_01c;  // +0x1c (28)
};
