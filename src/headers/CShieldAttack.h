// CShieldAttack.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CShieldAttack : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__13CShieldAttack
    virtual void Precache();  // vtable[1] Precache__13CShieldAttack
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__13CShieldAttackP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__13CShieldAttack
    virtual void Holster();  // vtable[63] Holster__13CShieldAttacki
    virtual void iItemSlot();  // vtable[74] iItemSlot__13CShieldAttack
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__13CShieldAttack
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__13CShieldAttack
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__13CShieldAttack
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    float f_09c;  // +0x9c (156)
    float f_0a0;  // +0xa0 (160)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
    int f_0c4;  // +0xc4 (196)
    char f_0c8;  // +0xc8 (200)
    float f_0cc;  // +0xcc (204)
    int f_0d0;  // +0xd0 (208)
    int f_0d4;  // +0xd4 (212)
};
