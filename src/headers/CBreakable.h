// CBreakable.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBreakable : public CBaseDelay {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__10CBreakable
    virtual void Precache();  // vtable[1] Precache__10CBreakable
    virtual void KeyValue();  // vtable[2] KeyValue__10CBreakableP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__10CBreakableR5CSave
    virtual void Restore();  // vtable[4] Restore__10CBreakableR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__10CBreakable
    virtual void TraceAttack();  // vtable[10] TraceAttack__10CBreakableP9entvars_sfG6VectorP11TraceResulti
    virtual void TakeDamage();  // vtable[11] TakeDamage__10CBreakableP9entvars_sT1fi
    virtual void DamageDecal();  // vtable[27] DamageDecal__10CBreakablei
    virtual void Use();  // vtable[44] Use__10CBreakableP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    int f_060;  // +0x60 (96)
    float m_flDelay;  // +0x64 (100) FIELD_FLOAT  [save-table]
    int m_Material;  // +0x6c (108) FIELD_INTEGER  [save-table]
    int m_Explosion;  // +0x70 (112) FIELD_INTEGER  [save-table]
    int f_074;  // +0x74 (116)
    float m_angle;  // +0x78 (120) FIELD_FLOAT  [save-table]
    string_t m_iszGibModel;  // +0x7c (124) FIELD_STRING  [save-table]
    string_t m_iszSpawnObject;  // +0x80 (128) FIELD_STRING  [save-table]
};
