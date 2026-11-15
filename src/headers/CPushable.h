// CPushable.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CPushable : public CBreakable {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__9CPushable
    virtual void Precache();  // vtable[1] Precache__9CPushable
    virtual void KeyValue();  // vtable[2] KeyValue__9CPushableP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__9CPushableR5CSave
    virtual void Restore();  // vtable[4] Restore__9CPushableR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__9CPushable
    virtual void TakeDamage();  // vtable[11] TakeDamage__9CPushableP9entvars_sT1fi
    virtual void Touch();  // vtable[43] Touch__9CPushableP11CBaseEntity
    virtual void Use();  // vtable[44] Use__9CPushableP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    int f_084;  // +0x84 (132)
    float m_maxSpeed;  // +0x88 (136) FIELD_FLOAT  [save-table]
    float m_soundTime;  // +0x8c (140) FIELD_TIME  [save-table]
};
