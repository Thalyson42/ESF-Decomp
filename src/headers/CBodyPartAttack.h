// CBodyPartAttack.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBodyPartAttack : public CMagicAttack {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__15CBodyPartAttack
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    int f_060;  // +0x60 (96)
    int f_208;  // +0x208 (520)
    int f_2ac;  // +0x2ac (684)
};
