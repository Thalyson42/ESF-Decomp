// CBasePlayerAmmo.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBasePlayerAmmo : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__15CBasePlayerAmmo
    virtual void Respawn();  // vtable[46] Respawn__15CBasePlayerAmmo
    virtual void AddAmmo();  // vtable[56] AddAmmo__15CBasePlayerAmmoP11CBaseEntity
    virtual void 0();  // vtable[57] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_014;  // +0x14 (20)
    int f_018;  // +0x18 (24)
    void* f_060;  // +0x60 (96)
};
