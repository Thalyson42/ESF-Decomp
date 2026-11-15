// CMelee.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CMelee : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__6CMelee
    virtual void Precache();  // vtable[1] Precache__6CMelee
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__6CMeleeP8ItemInfo
    virtual void CanDeploy();  // vtable[60] CanDeploy__6CMelee
    virtual void Deploy();  // vtable[61] Deploy__6CMelee
    virtual void Holster();  // vtable[63] Holster__6CMeleei
    virtual void iItemSlot();  // vtable[74] iItemSlot__6CMelee
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__6CMelee
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__6CMelee
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__6CMelee
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    void* f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    float f_09c;  // +0x9c (156)
    float f_0a0;  // +0xa0 (160)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
};
