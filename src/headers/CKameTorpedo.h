// CKameTorpedo.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CKameTorpedo : public CChargedAttack {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__12CKameTorpedo
    virtual void Precache();  // vtable[1] Precache__12CKameTorpedo
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__12CKameTorpedoP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__12CKameTorpedo
    virtual void Holster();  // vtable[63] Holster__12CKameTorpedoi
    virtual void iItemSlot();  // vtable[74] iItemSlot__12CKameTorpedo
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__12CKameTorpedo
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__12CKameTorpedo
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__12CKameTorpedo
    virtual void HolsterWhenMeleed();  // vtable[84] HolsterWhenMeleed__12CKameTorpedo
    virtual void EmitChargeSound();  // vtable[86] EmitChargeSound__12CKameTorpedo
    virtual void ShootAttack();  // vtable[93] ShootAttack__12CKameTorpedo
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    float f_09c;  // +0x9c (156)
    float f_0a0;  // +0xa0 (160)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
    int f_0c8;  // +0xc8 (200)
    int f_0cc;  // +0xcc (204)
    int f_0d0;  // +0xd0 (208)
    int f_0d4;  // +0xd4 (212)
    int f_0d8;  // +0xd8 (216)
    int f_0dc;  // +0xdc (220)
    int f_1f4;  // +0x1f4 (500)
    int f_1f8;  // +0x1f8 (504)
};
