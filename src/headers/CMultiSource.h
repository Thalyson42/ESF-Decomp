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
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    void* f_060;  // +0x60 (96)
    char f_064;  // +0x64 (100)
    int f_164;  // +0x164 (356)
    int f_1e4;  // +0x1e4 (484)
    int f_1e8;  // +0x1e8 (488)
};
