// CKameTorpTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CKameTorpTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._13CKameTorpTask();  // vtable[0] _._13CKameTorpTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__13CKameTorpTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__13CKameTorpTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__13CKameTorpTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__13CKameTorpTask
    virtual void TaskThink();  // vtable[5] TaskThink__13CKameTorpTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__13CKameTorpTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__13CKameTorpTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__13CKameTorpTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    int f_008;  // +0x8 (8)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    float f_018;  // +0x18 (24)
    int f_01c;  // +0x1c (28)
    float f_020;  // +0x20 (32)
    float f_024;  // +0x24 (36)
    char f_028;  // +0x28 (40)
    int f_02c;  // +0x2c (44)
    float f_030;  // +0x30 (48)
    float f_034;  // +0x34 (52)
    short f_038;  // +0x38 (56)
};
