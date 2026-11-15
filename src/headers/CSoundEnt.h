// CSoundEnt.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CSoundEnt : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__9CSoundEnt
    virtual void Precache();  // vtable[1] Precache__9CSoundEnt
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__9CSoundEnt
    virtual void Think();  // vtable[42] Think__9CSoundEnt
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_064;  // +0x64 (100)
    int f_068;  // +0x68 (104)
    int f_070;  // +0x70 (112)
};
