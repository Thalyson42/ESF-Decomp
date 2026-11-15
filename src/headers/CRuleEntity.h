// CRuleEntity.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CRuleEntity : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__11CRuleEntity
    virtual void KeyValue();  // vtable[2] KeyValue__11CRuleEntityP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__11CRuleEntityR5CSave
    virtual void Restore();  // vtable[4] Restore__11CRuleEntityR8CRestore
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    string_t m_iszMaster;  // +0x64 (100) FIELD_STRING  [save-table]
};
