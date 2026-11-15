// CCineMonster.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CCineMonster : public CBaseMonster {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__12CCineMonster
    virtual void KeyValue();  // vtable[2] KeyValue__12CCineMonsterP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__12CCineMonsterR5CSave
    virtual void Restore();  // vtable[4] Restore__12CCineMonsterR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__12CCineMonster
    virtual void Activate();  // vtable[6] Activate__12CCineMonster
    virtual void Touch();  // vtable[43] Touch__12CCineMonsterP11CBaseEntity
    virtual void Use();  // vtable[44] Use__12CCineMonsterP11CBaseEntityT18USE_TYPEf
    virtual void Blocked();  // vtable[45] Blocked__12CCineMonsterP11CBaseEntity
    virtual void IgnoreConditions();  // vtable[103] IgnoreConditions__12CCineMonster
    virtual void PossessEntity();  // vtable[124] PossessEntity__12CCineMonster
    virtual void StartSequence();  // vtable[125] StartSequence__12CCineMonsterP12CBaseMonsterii
    virtual void FCanOverrideState();  // vtable[126] FCanOverrideState__12CCineMonster
    virtual void FixScriptMonsterSchedule();  // vtable[127] FixScriptMonsterSchedule__12CCineMonsterP12CBaseMonster
    virtual void 0();  // vtable[128] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    EHANDLE m_hTargetEnt;  // +0x110 (272) FIELD_EHANDLE  [save-table]
    string_t m_iszIdle;  // +0x2a8 (680) FIELD_STRING  [save-table]
    string_t m_iszPlay;  // +0x2ac (684) FIELD_STRING  [save-table]
    string_t m_iszEntity;  // +0x2b0 (688) FIELD_STRING  [save-table]
    int m_fMoveTo;  // +0x2b4 (692) FIELD_INTEGER  [save-table]
    int m_iFinishSchedule;  // +0x2b8 (696) FIELD_INTEGER  [save-table]
    float m_flRadius;  // +0x2bc (700) FIELD_FLOAT  [save-table]
    float m_flRepeat;  // +0x2c0 (704) FIELD_FLOAT  [save-table]
    int m_iDelay;  // +0x2c4 (708) FIELD_INTEGER  [save-table]
    float m_startTime;  // +0x2c8 (712) FIELD_TIME  [save-table]
    int m_saved_movetype;  // +0x2cc (716) FIELD_INTEGER  [save-table]
    int m_saved_solid;  // +0x2d0 (720) FIELD_INTEGER  [save-table]
    int m_saved_effects;  // +0x2d4 (724) FIELD_INTEGER  [save-table]
    BOOL m_interruptable;  // +0x2d8 (728) FIELD_BOOLEAN  [save-table]
};
