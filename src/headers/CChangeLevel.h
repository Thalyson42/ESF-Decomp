// CChangeLevel.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CChangeLevel : public CBaseTrigger {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__12CChangeLevel
    virtual void KeyValue();  // vtable[2] KeyValue__12CChangeLevelP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__12CChangeLevelR5CSave
    virtual void Restore();  // vtable[4] Restore__12CChangeLevelR8CRestore
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_020;  // +0x20 (32)
    void* f_060;  // +0x60 (96)
    EHANDLE m_hActivator;  // +0xd4 (212) FIELD_EHANDLE  [save-table]
    char m_szMapName[32];  // +0x104 (260) FIELD_CHARACTER  [save-table]
    char m_szLandmarkName[32];  // +0x124 (292) FIELD_CHARACTER  [save-table]
    string_t m_changeTarget;  // +0x144 (324) FIELD_STRING  [save-table]
    float m_changeTargetDelay;  // +0x148 (328) FIELD_FLOAT  [save-table]
};
