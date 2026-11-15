// CAbsorbHealthTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CAbsorbHealthTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._17CAbsorbHealthTask();  // vtable[0] _._17CAbsorbHealthTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__17CAbsorbHealthTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__17CAbsorbHealthTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__17CAbsorbHealthTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__17CAbsorbHealthTask
    virtual void TaskThink();  // vtable[5] TaskThink__17CAbsorbHealthTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__17CAbsorbHealthTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__17CAbsorbHealthTask
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    int f_008;  // +0x8 (8)
    int f_00c;  // +0xc (12)
};
