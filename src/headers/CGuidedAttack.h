// CGuidedAttack.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CGuidedAttack : public CBeamAttack {  // base: heuristica
public:
    virtual void Release();  // vtable[128] Release__13CGuidedAttack
    virtual void PowerStruggleThink();  // vtable[130] PowerStruggleThink__13CGuidedAttack
    virtual void 0();  // vtable[131] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    void* f_208;  // +0x208 (520)
    float f_2a8;  // +0x2a8 (680)
    int f_2cc;  // +0x2cc (716)
    float f_2e0;  // +0x2e0 (736)
};
