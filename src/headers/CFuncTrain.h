// CFuncTrain.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFuncTrain : public CBasePlatTrain {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__10CFuncTrain
    virtual void Precache();  // vtable[1] Precache__10CFuncTrain
    virtual void KeyValue();  // vtable[2] KeyValue__10CFuncTrainP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__10CFuncTrainR5CSave
    virtual void Restore();  // vtable[4] Restore__10CFuncTrainR8CRestore
    virtual void Activate();  // vtable[6] Activate__10CFuncTrain
    virtual void OverrideReset();  // vtable[26] OverrideReset__10CFuncTrain
    virtual void Use();  // vtable[44] Use__10CFuncTrainP11CBaseEntityT18USE_TYPEf
    virtual void Blocked();  // vtable[45] Blocked__10CFuncTrainP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    float m_flActivateFinished;  // +0x84 (132) FIELD_TIME  [save-table]
    float m_flWait;  // +0x8c (140) FIELD_FLOAT  [save-table]
    void* m_pfnCallWhenMoveDone;  // +0xdc (220) FIELD_FUNCTION  [save-table]
    float m_volume;  // +0x108 (264) FIELD_FLOAT  [save-table]
    entvars_t* m_pevCurrentTarget;  // +0x10c (268) FIELD_EVARS  [save-table]
    int m_sounds;  // +0x110 (272) FIELD_INTEGER  [save-table]
    BOOL m_activated;  // +0x114 (276) FIELD_BOOLEAN  [save-table]
};
