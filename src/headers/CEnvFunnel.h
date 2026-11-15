// CEnvFunnel.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CEnvFunnel : public CBaseDelay {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__10CEnvFunnel
    virtual void Precache();  // vtable[1] Precache__10CEnvFunnel
    virtual void Use();  // vtable[44] Use__10CEnvFunnelP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    void* f_060;  // +0x60 (96)
    int f_06c;  // +0x6c (108)
};
