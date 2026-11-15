// CKiAttack.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CKiAttack : public CBeamAttack {  // base: heuristica
public:
    virtual void GetExplosionRadius();  // vtable[127] GetExplosionRadius__9CKiAttack
    virtual void DrawExplosionFX();  // vtable[129] DrawExplosionFX__9CKiAttackiG6Vector
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_208;  // +0x208 (520)
    float f_2dc;  // +0x2dc (732)
    float f_2e0;  // +0x2e0 (736)
    float f_2e4;  // +0x2e4 (740)
    float f_2e8;  // +0x2e8 (744)
    float f_2ec;  // +0x2ec (748)
    float f_2f0;  // +0x2f0 (752)
    float f_2f4;  // +0x2f4 (756)
    float f_2f8;  // +0x2f8 (760)
    float f_2fc;  // +0x2fc (764)
    float f_300;  // +0x300 (768)
};
