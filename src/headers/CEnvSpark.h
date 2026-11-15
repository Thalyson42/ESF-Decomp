// CEnvSpark.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CEnvSpark : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__9CEnvSpark
    virtual void Precache();  // vtable[1] Precache__9CEnvSpark
    virtual void KeyValue();  // vtable[2] KeyValue__9CEnvSparkP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__9CEnvSparkR5CSave
    virtual void Restore();  // vtable[4] Restore__9CEnvSparkR8CRestore
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_020;  // +0x20 (32)
    float m_flDelay;  // +0x64 (100) FIELD_FLOAT  [save-table]
};
