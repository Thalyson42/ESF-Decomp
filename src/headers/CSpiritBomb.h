// CSpiritBomb.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CSpiritBomb : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__11CSpiritBomb
    virtual void Precache();  // vtable[1] Precache__11CSpiritBomb
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__11CSpiritBombP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__11CSpiritBomb
    virtual void Holster();  // vtable[63] Holster__11CSpiritBombi
    virtual void iItemSlot();  // vtable[74] iItemSlot__11CSpiritBomb
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__11CSpiritBomb
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__11CSpiritBomb
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__11CSpiritBomb
    virtual void InitChargeSprite();  // vtable[85] InitChargeSprite__11CSpiritBomb
    virtual void EnableChargeSprite();  // vtable[86] EnableChargeSprite__11CSpiritBomb
    virtual void DisableChargeSprite();  // vtable[87] DisableChargeSprite__11CSpiritBomb
    virtual void GrowChargeSprite();  // vtable[88] GrowChargeSprite__11CSpiritBomb
    virtual void RemoveChargeSprite();  // vtable[89] RemoveChargeSprite__11CSpiritBomb
    virtual void 0();  // vtable[90] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    float f_09c;  // +0x9c (156)
    float f_0a0;  // +0xa0 (160)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
    char f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
    int f_0cc;  // +0xcc (204)
    int f_0d0;  // +0xd0 (208)
    int f_0d4;  // +0xd4 (212)
    int f_0d8;  // +0xd8 (216)
    short f_0dc;  // +0xdc (220)
};
