// CBaseDelay.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBaseDelay : public CBaseEntity {  // base: SDK
public:
    virtual void KeyValue();  // vtable[2] KeyValue__10CBaseDelayP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__10CBaseDelayR5CSave
    virtual void Restore();  // vtable[4] Restore__10CBaseDelayR8CRestore
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    float m_flDelay;  // +0x64 (100) FIELD_FLOAT  [save-table]
    string_t m_iszKillTarget;  // +0x68 (104) FIELD_STRING  [save-table]
    int f_104;  // +0x104 (260)
    int f_180;  // +0x180 (384)
    int f_198;  // +0x198 (408)
    int f_1c8;  // +0x1c8 (456)
};
