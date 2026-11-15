// CLaser.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CLaser : public CBeam {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__6CLaser
    virtual void Precache();  // vtable[1] Precache__6CLaser
    virtual void KeyValue();  // vtable[2] KeyValue__6CLaserP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__6CLaserR5CSave
    virtual void Restore();  // vtable[4] Restore__6CLaserR8CRestore
    virtual void Use();  // vtable[44] Use__6CLaserP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_064;  // +0x64 (100)
    int f_068;  // +0x68 (104)
    int f_06c;  // +0x6c (108)
    int f_070;  // +0x70 (112)
    int f_074;  // +0x74 (116)
};
