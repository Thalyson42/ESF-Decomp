// CCombatTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CCombatTask {
public:
    virtual void _._11CCombatTask();  // vtable[0] _._11CCombatTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__11CCombatTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__11CCombatTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__11CCombatTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__11CCombatTask
    virtual void TaskThink();  // vtable[5] TaskThink__11CCombatTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__11CCombatTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__11CCombatTask
    virtual void ManageEnemies();  // vtable[8] ManageEnemies__9CBaseTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__11CCombatTaskP13danger_info_s
    virtual void 0();  // vtable[10] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    int f_008;  // +0x8 (8)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
};
