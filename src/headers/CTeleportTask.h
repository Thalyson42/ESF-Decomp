// CTeleportTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTeleportTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._13CTeleportTask();  // vtable[0] _._13CTeleportTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__13CTeleportTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__13CTeleportTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__13CTeleportTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__13CTeleportTask
    virtual void TaskThink();  // vtable[5] TaskThink__13CTeleportTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__13CTeleportTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__13CTeleportTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__13CTeleportTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
    int f_00c;  // +0xc (12)
};
