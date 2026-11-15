// CGamePlayerZone.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CGamePlayerZone : public CRuleBrushEntity {  // base: SDK
public:
    virtual void KeyValue();  // vtable[2] KeyValue__15CGamePlayerZoneP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__15CGamePlayerZoneR5CSave
    virtual void Restore();  // vtable[4] Restore__15CGamePlayerZoneR8CRestore
    virtual void Use();  // vtable[44] Use__15CGamePlayerZoneP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    string_t m_iszInTarget;  // +0x68 (104) FIELD_STRING  [save-table]
    string_t m_iszOutTarget;  // +0x6c (108) FIELD_STRING  [save-table]
    string_t m_iszInCount;  // +0x70 (112) FIELD_STRING  [save-table]
    string_t m_iszOutCount;  // +0x74 (116) FIELD_STRING  [save-table]
};
