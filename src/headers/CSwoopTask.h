// CSwoopTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CSwoopTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._10CSwoopTask();  // vtable[0] _._10CSwoopTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__10CSwoopTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__10CSwoopTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__10CSwoopTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__10CSwoopTask
    virtual void TaskThink();  // vtable[5] TaskThink__10CSwoopTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__10CSwoopTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__10CSwoopTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__10CSwoopTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    int f_008;  // +0x8 (8)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    char f_018;  // +0x18 (24)
    char f_019;  // +0x19 (25)
    short f_01a;  // +0x1a (26)
    short f_01c;  // +0x1c (28)
    float f_020;  // +0x20 (32)
    float f_024;  // +0x24 (36)
    float f_028;  // +0x28 (40)
    float f_02c;  // +0x2c (44)
    char f_030;  // +0x30 (48)
    float f_034;  // +0x34 (52)
};
