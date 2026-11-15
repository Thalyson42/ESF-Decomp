// CBlockTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBlockTask {
public:
    virtual void _._10CBlockTask();  // vtable[0] _._10CBlockTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__10CBlockTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__10CBlockTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__10CBlockTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__10CBlockTask
    virtual void TaskThink();  // vtable[5] TaskThink__10CBlockTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__10CBlockTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__10CBlockTask
    virtual void ManageEnemies();  // vtable[8] ManageEnemies__9CBaseTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__10CBlockTaskP13danger_info_s
    virtual void 0();  // vtable[10] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
    float f_018;  // +0x18 (24)
    int f_32c;  // +0x32c (812)
    int f_358;  // +0x358 (856)
    int f_49c;  // +0x49c (1180)
    void* f_a00;  // +0xa00 (2560)
    short f_a18;  // +0xa18 (2584)
    float f_ab4;  // +0xab4 (2740)
    void* f_ac0;  // +0xac0 (2752)
    int f_c10;  // +0xc10 (3088)
    int f_c14;  // +0xc14 (3092)
    int f_c18;  // +0xc18 (3096)
};
