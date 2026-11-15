// CLight.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CLight : public CPointEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__6CLight
    virtual void KeyValue();  // vtable[2] KeyValue__6CLightP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__6CLightR5CSave
    virtual void Restore();  // vtable[4] Restore__6CLightR8CRestore
    virtual void Use();  // vtable[44] Use__6CLightP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_064;  // +0x64 (100)
    int f_068;  // +0x68 (104)
};
