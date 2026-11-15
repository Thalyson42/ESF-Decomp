// CFrictionModifier.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFrictionModifier : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__17CFrictionModifier
    virtual void KeyValue();  // vtable[2] KeyValue__17CFrictionModifierP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__17CFrictionModifierR5CSave
    virtual void Restore();  // vtable[4] Restore__17CFrictionModifierR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__17CFrictionModifier
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    float m_frictionFraction;  // +0x64 (100) FIELD_FLOAT  [save-table]
};
