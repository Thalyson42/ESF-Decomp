// CScatterAttack.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CScatterAttack : public CBeamAttack {  // base: heuristica
public:
    virtual void FInViewCone();  // vtable[68] FInViewCone__14CScatterAttackP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_060;  // +0x60 (96)
    float m_flFieldOfView;  // +0x168 (360) FIELD_FLOAT  [save-table]
    int f_208;  // +0x208 (520)
    short f_2dc;  // +0x2dc (732)
    short f_2de;  // +0x2de (734)
    short f_2e0;  // +0x2e0 (736)
    float f_2e4;  // +0x2e4 (740)
    int f_3b0;  // +0x3b0 (944)
};
