// CGibShooter.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CGibShooter : public CBaseDelay {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__11CGibShooter
    virtual void Precache();  // vtable[1] Precache__11CGibShooter
    virtual void KeyValue();  // vtable[2] KeyValue__11CGibShooterP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__11CGibShooterR5CSave
    virtual void Restore();  // vtable[4] Restore__11CGibShooterR8CRestore
    virtual void Use();  // vtable[44] Use__11CGibShooterP11CBaseEntityT18USE_TYPEf
    virtual void CreateGib();  // vtable[56] CreateGib__11CGibShooter
    virtual void 0();  // vtable[57] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    float f_064;  // +0x64 (100)
    int f_06c;  // +0x6c (108)
    int f_070;  // +0x70 (112)
    int f_078;  // +0x78 (120)
    float f_07c;  // +0x7c (124)
    float f_080;  // +0x80 (128)
    float f_084;  // +0x84 (132)
};
