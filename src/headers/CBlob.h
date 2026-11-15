// CBlob.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBlob : public CBaseEntity {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__5CBlob
    virtual void Precache();  // vtable[1] Precache__5CBlob
    virtual void Classify();  // vtable[8] Classify__5CBlob
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    float f_064;  // +0x64 (100)
    float f_068;  // +0x68 (104)
};
