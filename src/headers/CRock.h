// CRock.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CRock : public CExplodingAttack {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__5CRock
    virtual void DrawExplosionFX();  // vtable[129] DrawExplosionFX__5CRockiG6Vector
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_014;  // +0x14 (20)
    int f_018;  // +0x18 (24)
    int f_060;  // +0x60 (96)
    int f_2ac;  // +0x2ac (684)
    int f_2b0;  // +0x2b0 (688)
    int f_2c0;  // +0x2c0 (704)
    int f_2c4;  // +0x2c4 (708)
    int f_2c8;  // +0x2c8 (712)
    int f_2dc;  // +0x2dc (732)
    int f_2e0;  // +0x2e0 (736)
};
