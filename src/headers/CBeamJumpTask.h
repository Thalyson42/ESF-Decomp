// CBeamJumpTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBeamJumpTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._13CBeamJumpTask();  // vtable[0] _._13CBeamJumpTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__13CBeamJumpTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__13CBeamJumpTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__13CBeamJumpTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__13CBeamJumpTask
    virtual void TaskThink();  // vtable[5] TaskThink__13CBeamJumpTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__13CBeamJumpTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__13CBeamJumpTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__13CBeamJumpTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
    void* f_00c;  // +0xc (12)
    int f_018;  // +0x18 (24)
    float f_01c;  // +0x1c (28)
    int f_020;  // +0x20 (32)
};
