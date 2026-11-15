// CDragonBall.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CDragonBall : public CBaseEntity {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__11CDragonBall
    virtual void Precache();  // vtable[1] Precache__11CDragonBall
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_014;  // +0x14 (20)
    int f_018;  // +0x18 (24)
    void* f_060;  // +0x60 (96)
    int f_064;  // +0x64 (100)
    float f_068;  // +0x68 (104)
    int f_06c;  // +0x6c (108)
    short f_070;  // +0x70 (112)
    float f_074;  // +0x74 (116)
    int f_208;  // +0x208 (520)
};
