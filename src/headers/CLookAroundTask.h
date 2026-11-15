// CLookAroundTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CLookAroundTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._15CLookAroundTask();  // vtable[0] _._15CLookAroundTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__15CLookAroundTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__15CLookAroundTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__15CLookAroundTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__15CLookAroundTask
    virtual void TaskThink();  // vtable[5] TaskThink__15CLookAroundTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__15CLookAroundTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__15CLookAroundTask
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
    void* f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_014;  // +0x14 (20)
    int f_018;  // +0x18 (24)
    int f_01c;  // +0x1c (28)
    int f_020;  // +0x20 (32)
    short f_048;  // +0x48 (72)
    float f_04c;  // +0x4c (76)
};
