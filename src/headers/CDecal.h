// CDecal.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CDecal : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__6CDecal
    virtual void KeyValue();  // vtable[2] KeyValue__6CDecalP14KeyValueData_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_020;  // +0x20 (32)
};
