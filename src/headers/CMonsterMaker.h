// CMonsterMaker.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CMonsterMaker : public CBaseMonster {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__13CMonsterMaker
    virtual void Precache();  // vtable[1] Precache__13CMonsterMaker
    virtual void KeyValue();  // vtable[2] KeyValue__13CMonsterMakerP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__13CMonsterMakerR5CSave
    virtual void Restore();  // vtable[4] Restore__13CMonsterMakerR8CRestore
    virtual void DeathNotice();  // vtable[9] DeathNotice__13CMonsterMakerP9entvars_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_020;  // +0x20 (32)
    int f_060;  // +0x60 (96)
    float m_flDelay;  // +0x64 (100) FIELD_FLOAT  [save-table]
    string_t m_iszMonsterClassname;  // +0x2a8 (680) FIELD_STRING  [save-table]
    int m_cNumMonsters;  // +0x2ac (684) FIELD_INTEGER  [save-table]
    int m_cLiveChildren;  // +0x2b0 (688) FIELD_INTEGER  [save-table]
    int m_iMaxLiveChildren;  // +0x2b4 (692) FIELD_INTEGER  [save-table]
    float m_flGround;  // +0x2b8 (696) FIELD_FLOAT  [save-table]
    BOOL m_fActive;  // +0x2bc (700) FIELD_BOOLEAN  [save-table]
    BOOL m_fFadeChildren;  // +0x2c0 (704) FIELD_BOOLEAN  [save-table]
};
