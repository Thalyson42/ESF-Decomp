// CGamePlayerZone.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CGamePlayerZone : public CRuleBrushEntity {  // base: SDK
public:
    virtual void KeyValue();  // vtable[2] KeyValue__15CGamePlayerZoneP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__15CGamePlayerZoneR5CSave
    virtual void Restore();  // vtable[4] Restore__15CGamePlayerZoneR8CRestore
    virtual void Use();  // vtable[44] Use__15CGamePlayerZoneP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_068;  // +0x68 (104)
    int f_06c;  // +0x6c (108)
    int f_070;  // +0x70 (112)
    int f_074;  // +0x74 (116)
};
