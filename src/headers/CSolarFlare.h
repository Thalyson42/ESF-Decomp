// CSolarFlare.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CSolarFlare : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__11CSolarFlare
    virtual void Precache();  // vtable[1] Precache__11CSolarFlare
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__11CSolarFlareP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__11CSolarFlare
    virtual void Holster();  // vtable[63] Holster__11CSolarFlarei
    virtual void iItemSlot();  // vtable[74] iItemSlot__11CSolarFlare
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__11CSolarFlare
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
    int f_0c4;  // +0xc4 (196)
};
