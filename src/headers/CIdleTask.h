// CIdleTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CIdleTask {
public:
    virtual void _._9CIdleTask();  // vtable[0] _._9CIdleTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__9CIdleTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__9CIdleTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__9CIdleTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__9CIdleTask
    virtual void TaskThink();  // vtable[5] TaskThink__9CIdleTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__9CIdleTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__9CIdleTask
    virtual void ManageEnemies();  // vtable[8] ManageEnemies__9CBaseTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__9CIdleTaskP13danger_info_s
    virtual void 0();  // vtable[10] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
};
