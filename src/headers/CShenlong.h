// CShenlong.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CShenlong : public CBaseMonster {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__9CShenlong
    virtual void Precache();  // vtable[1] Precache__9CShenlong
    virtual void Touch();  // vtable[43] Touch__9CShenlongP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    int f_2a8;  // +0x2a8 (680)
    int f_2ac;  // +0x2ac (684)
    int f_2b0;  // +0x2b0 (688)
    int f_2b4;  // +0x2b4 (692)
    int f_2b8;  // +0x2b8 (696)
    int f_2bc;  // +0x2bc (700)
};
