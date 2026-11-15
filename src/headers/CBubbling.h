// CBubbling.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBubbling : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__9CBubbling
    virtual void Precache();  // vtable[1] Precache__9CBubbling
    virtual void KeyValue();  // vtable[2] KeyValue__9CBubblingP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__9CBubblingR5CSave
    virtual void Restore();  // vtable[4] Restore__9CBubblingR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__9CBubbling
    virtual void Use();  // vtable[44] Use__9CBubblingP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    int f_064;  // +0x64 (100)
    int f_068;  // +0x68 (104)
    int f_06c;  // +0x6c (108)
    int f_070;  // +0x70 (112)
};
