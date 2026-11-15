// CDBTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CDBTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._7CDBTask();  // vtable[0] _._7CDBTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__7CDBTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__7CDBTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__7CDBTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__7CDBTask
    virtual void TaskThink();  // vtable[5] TaskThink__7CDBTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__7CDBTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__7CDBTask
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    int f_008;  // +0x8 (8)
    int f_00c;  // +0xc (12)
    float f_018;  // +0x18 (24)
};
