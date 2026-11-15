// CPlayerBag.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CPlayerBag : public CBaseEntity {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__10CPlayerBag
    virtual void Precache();  // vtable[1] Precache__10CPlayerBag
    virtual void Touch();  // vtable[43] Touch__10CPlayerBagP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    int f_064;  // +0x64 (100)
};
