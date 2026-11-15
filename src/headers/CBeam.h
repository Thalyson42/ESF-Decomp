// CBeam.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBeam : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__5CBeam
    virtual void Precache();  // vtable[1] Precache__5CBeam
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__5CBeam
    virtual void Center();  // vtable[49] Center__5CBeam
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    void* f_060;  // +0x60 (96)
};
