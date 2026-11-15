// CNormalJumpTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CNormalJumpTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._15CNormalJumpTask();  // vtable[0] _._15CNormalJumpTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__15CNormalJumpTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__15CNormalJumpTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__15CNormalJumpTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__15CNormalJumpTask
    virtual void TaskThink();  // vtable[5] TaskThink__15CNormalJumpTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__15CNormalJumpTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__15CNormalJumpTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__15CNormalJumpTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
    void* f_00c;  // +0xc (12)
    int f_018;  // +0x18 (24)
    float f_01c;  // +0x1c (28)
};
