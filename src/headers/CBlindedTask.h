// CBlindedTask.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBlindedTask : public CBaseTask {  // base: heuristica
public:
    virtual void _._12CBlindedTask();  // vtable[0] _._12CBlindedTask
    virtual void GetNesserelyChecks();  // vtable[1] GetNesserelyChecks__12CBlindedTask
    virtual void GetBotStatusChecks();  // vtable[2] GetBotStatusChecks__12CBlindedTask
    virtual void GetBotSenseChecks();  // vtable[3] GetBotSenseChecks__12CBlindedTask
    virtual void GetBotMiscChecks();  // vtable[4] GetBotMiscChecks__12CBlindedTask
    virtual void TaskThink();  // vtable[5] TaskThink__12CBlindedTask
    virtual void TaskIdentify();  // vtable[6] TaskIdentify__12CBlindedTask
    virtual void ShouldManageEnemies();  // vtable[7] ShouldManageEnemies__12CBlindedTask
    virtual void ReactOnDanger();  // vtable[9] ReactOnDanger__12CBlindedTaskP13danger_info_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_004;  // +0x4 (4)
    void* f_008;  // +0x8 (8)
};
