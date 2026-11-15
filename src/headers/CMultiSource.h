// CMultiSource.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CMultiSource : public CPointEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__12CMultiSource
    virtual void KeyValue();  // vtable[2] KeyValue__12CMultiSourceP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__12CMultiSourceR5CSave
    virtual void Restore();  // vtable[4] Restore__12CMultiSourceR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__12CMultiSource
    virtual void IsTriggered();  // vtable[16] IsTriggered__12CMultiSourceP11CBaseEntity
    virtual void Use();  // vtable[44] Use__12CMultiSourceP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* f_060;  // +0x60 (96)
    EHANDLE m_rgEntities[32];  // +0x64 (100) FIELD_EHANDLE  [save-table]
    int m_rgTriggered[32];  // +0x164 (356) FIELD_INTEGER  [save-table]
    int m_iTotal;  // +0x1e4 (484) FIELD_INTEGER  [save-table]
    string_t m_globalstate;  // +0x1e8 (488) FIELD_STRING  [save-table]
};
