// CBean.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBean : public CBaseMonster {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__5CBean
    virtual void Precache();  // vtable[1] Precache__5CBean
    virtual void Touch();  // vtable[43] Touch__5CBeanP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    int f_208;  // +0x208 (520)
};
