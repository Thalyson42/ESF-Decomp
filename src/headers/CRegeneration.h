// CRegeneration.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CRegeneration : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__13CRegeneration
    virtual void Precache();  // vtable[1] Precache__13CRegeneration
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__13CRegenerationP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__13CRegeneration
    virtual void Holster();  // vtable[63] Holster__13CRegenerationi
    virtual void iItemSlot();  // vtable[74] iItemSlot__13CRegeneration
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__13CRegeneration
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__13CRegeneration
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    void* f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
};
