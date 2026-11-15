// CTestEffect.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTestEffect : public CBaseDelay {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__11CTestEffect
    virtual void Precache();  // vtable[1] Precache__11CTestEffect
    virtual void Use();  // vtable[44] Use__11CTestEffectP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* f_060;  // +0x60 (96)
    int f_070;  // +0x70 (112)
    int f_074;  // +0x74 (116)
    float f_134;  // +0x134 (308)
};
