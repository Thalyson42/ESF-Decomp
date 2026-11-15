// CBodyPart.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBodyPart : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__9CBodyPart
    virtual void Precache();  // vtable[1] Precache__9CBodyPart
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__9CBodyPartP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__9CBodyPart
    virtual void Holster();  // vtable[63] Holster__9CBodyParti
    virtual void iItemSlot();  // vtable[74] iItemSlot__9CBodyPart
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__9CBodyPart
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    void* f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    float f_09c;  // +0x9c (156)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
};
