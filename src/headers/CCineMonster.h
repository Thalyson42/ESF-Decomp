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
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    char f_110;  // +0x110 (272)
    int f_2a8;  // +0x2a8 (680)
    int f_2ac;  // +0x2ac (684)
    int f_2b0;  // +0x2b0 (688)
    int f_2b4;  // +0x2b4 (692)
    int f_2b8;  // +0x2b8 (696)
    float f_2bc;  // +0x2bc (700)
    float f_2c0;  // +0x2c0 (704)
    float f_2c8;  // +0x2c8 (712)
    int f_2cc;  // +0x2cc (716)
    int f_2d0;  // +0x2d0 (720)
    int f_2d4;  // +0x2d4 (724)
    int f_2d8;  // +0x2d8 (728)
};
