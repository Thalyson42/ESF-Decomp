// CEnvGlobal.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CEnvGlobal : public CPointEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__10CEnvGlobal
    virtual void KeyValue();  // vtable[2] KeyValue__10CEnvGlobalP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__10CEnvGlobalR5CSave
    virtual void Restore();  // vtable[4] Restore__10CEnvGlobalR8CRestore
    virtual void Use();  // vtable[44] Use__10CEnvGlobalP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    string_t m_globalstate;  // +0x64 (100) FIELD_STRING  [save-table]
    int m_triggermode;  // +0x68 (104) FIELD_INTEGER  [save-table]
    int m_initialstate;  // +0x6c (108) FIELD_INTEGER  [save-table]
};
