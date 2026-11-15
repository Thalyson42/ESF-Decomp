// CBasePlayerAmmo.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBasePlayerAmmo : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__15CBasePlayerAmmo
    virtual void Respawn();  // vtable[46] Respawn__15CBasePlayerAmmo
    virtual void AddAmmo();  // vtable[56] AddAmmo__15CBasePlayerAmmoP11CBaseEntity
    virtual void 0();  // vtable[57] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    void* f_060;  // +0x60 (96)
};
