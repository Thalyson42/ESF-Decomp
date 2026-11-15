// CCandyAttack.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CCandyAttack : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__12CCandyAttack
    virtual void Precache();  // vtable[1] Precache__12CCandyAttack
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__12CCandyAttackP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__12CCandyAttack
    virtual void Holster();  // vtable[63] Holster__12CCandyAttacki
    virtual void iItemSlot();  // vtable[74] iItemSlot__12CCandyAttack
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__12CCandyAttack
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__12CCandyAttack
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__12CCandyAttack
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    float f_09c;  // +0x9c (156)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
    char f_0cc;  // +0xcc (204)
};
