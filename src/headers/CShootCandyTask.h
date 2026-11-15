// CShootCandyTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CShootCandyTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._15CShootCandyTask();  // vtable[0] _._15CShootCandyTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__15CShootCandyTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__15CShootCandyTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__15CShootCandyTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__15CShootCandyTask
    virtual void TaskThink();  // vtable[5] TaskThink__15CShootCandyTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__15CShootCandyTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__15CShootCandyTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__15CShootCandyTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
    void* f_00c;  // +0xc (12)
    float f_01c;  // +0x1c (28)
    float f_020;  // +0x20 (32)
    float f_024;  // +0x24 (36)
    float f_028;  // +0x28 (40)
    float f_02c;  // +0x2c (44)
};
