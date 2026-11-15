// CGibShooter.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CGibShooter : public CBaseDelay {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__11CGibShooter
    virtual void Precache();  // vtable[1] Precache__11CGibShooter
    virtual void KeyValue();  // vtable[2] KeyValue__11CGibShooterP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__11CGibShooterR5CSave
    virtual void Restore();  // vtable[4] Restore__11CGibShooterR8CRestore
    virtual void Use();  // vtable[44] Use__11CGibShooterP11CBaseEntityT18USE_TYPEf
    virtual void CreateGib();  // vtable[56] CreateGib__11CGibShooter
    virtual void 0();  // vtable[57] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    float m_flDelay;  // +0x64 (100) FIELD_FLOAT  [save-table]
    int m_iGibs;  // +0x6c (108) FIELD_INTEGER  [save-table]
    int m_iGibCapacity;  // +0x70 (112) FIELD_INTEGER  [save-table]
    int m_iGibMaterial;  // +0x74 (116) FIELD_INTEGER  [save-table]
    int m_iGibModelIndex;  // +0x78 (120) FIELD_INTEGER  [save-table]
    float m_flGibVelocity;  // +0x7c (124) FIELD_FLOAT  [save-table]
    float m_flVariance;  // +0x80 (128) FIELD_FLOAT  [save-table]
    float m_flGibLife;  // +0x84 (132) FIELD_FLOAT  [save-table]
};
