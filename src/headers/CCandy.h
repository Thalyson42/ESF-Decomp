// CCandy.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CCandy : public CBaseEntity {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__6CCandy
    virtual void Precache();  // vtable[1] Precache__6CCandy
    virtual void Touch();  // vtable[43] Touch__6CCandyP11CBaseEntity
    virtual void GetStuff();  // vtable[56] GetStuff__6CCandyP11CBasePlayer
    virtual void 0();  // vtable[57] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
};
