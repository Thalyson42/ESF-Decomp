// CWallJumpTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CWallJumpTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._13CWallJumpTask();  // vtable[0] _._13CWallJumpTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__13CWallJumpTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__13CWallJumpTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__13CWallJumpTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__13CWallJumpTask
    virtual void TaskThink();  // vtable[5] TaskThink__13CWallJumpTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__13CWallJumpTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__13CWallJumpTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__13CWallJumpTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
    void* f_00c;  // +0xc (12)
};
