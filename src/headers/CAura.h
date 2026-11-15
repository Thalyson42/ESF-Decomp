// CAura.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CAura : public CBaseMonster {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__5CAura
    virtual void Precache();  // vtable[1] Precache__5CAura
    virtual void TakeDamage();  // vtable[11] TakeDamage__5CAuraP9entvars_sT1fi
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    int f_060;  // +0x60 (96)
    int f_2a8;  // +0x2a8 (680)
    short f_2ac;  // +0x2ac (684)
    int f_508;  // +0x508 (1288)
};
