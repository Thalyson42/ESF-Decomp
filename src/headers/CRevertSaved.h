// CRevertSaved.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CRevertSaved : public CPointEntity {  // base: SDK
public:
    virtual void KeyValue();  // vtable[2] KeyValue__12CRevertSavedP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__12CRevertSavedR5CSave
    virtual void Restore();  // vtable[4] Restore__12CRevertSavedR8CRestore
    virtual void Use();  // vtable[44] Use__12CRevertSavedP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    float f_064;  // +0x64 (100)
    float f_068;  // +0x68 (104)
};
