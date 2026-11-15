// CAutoTrigger.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CAutoTrigger : public CBaseDelay {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__12CAutoTrigger
    virtual void Precache();  // vtable[1] Precache__12CAutoTrigger
    virtual void KeyValue();  // vtable[2] KeyValue__12CAutoTriggerP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__12CAutoTriggerR5CSave
    virtual void Restore();  // vtable[4] Restore__12CAutoTriggerR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__12CAutoTrigger
    virtual void Think();  // vtable[42] Think__12CAutoTrigger
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    string_t m_globalstate;  // +0x6c (108) FIELD_STRING  [save-table]
    int triggerType;  // +0x70 (112) FIELD_INTEGER  [save-table]
};
