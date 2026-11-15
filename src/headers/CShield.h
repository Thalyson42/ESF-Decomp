// CShield.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CShield : public CBaseEntity {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__7CShield
    virtual void Precache();  // vtable[1] Precache__7CShield
    virtual void Classify();  // vtable[8] Classify__7CShield
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    void* f_060;  // +0x60 (96)
    int f_064;  // +0x64 (100)
    float f_068;  // +0x68 (104)
    char f_06c;  // +0x6c (108)
};
