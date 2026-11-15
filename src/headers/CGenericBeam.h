// CGenericBeam.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CGenericBeam : public CControlledBeam {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__12CGenericBeam
    virtual void Precache();  // vtable[1] Precache__12CGenericBeam
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__12CGenericBeamP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__12CGenericBeam
    virtual void iItemSlot();  // vtable[74] iItemSlot__12CGenericBeam
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__12CGenericBeam
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__12CGenericBeam
    virtual void EmitChargeSound();  // vtable[87] EmitChargeSound__12CGenericBeam
    virtual void EmitShootSound();  // vtable[88] EmitShootSound__12CGenericBeam
    virtual void InitChargeSprite();  // vtable[89] InitChargeSprite__12CGenericBeam
    virtual void EnableChargeSprite();  // vtable[90] EnableChargeSprite__12CGenericBeam
    virtual void DisableChargeSprite();  // vtable[91] DisableChargeSprite__12CGenericBeam
    virtual void GrowChargeSprite();  // vtable[92] GrowChargeSprite__12CGenericBeam
    virtual void RemoveChargeSprite();  // vtable[93] RemoveChargeSprite__12CGenericBeam
    virtual void Shoot();  // vtable[94] Shoot__12CGenericBeam
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    float f_09c;  // +0x9c (156)
    float f_0a0;  // +0xa0 (160)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
    short f_0cc;  // +0xcc (204)
    short f_0ce;  // +0xce (206)
    short f_0d0;  // +0xd0 (208)
    short f_0d2;  // +0xd2 (210)
    short f_0d4;  // +0xd4 (212)
    int f_0d8;  // +0xd8 (216)
    int f_0dc;  // +0xdc (220)
    int f_0e0;  // +0xe0 (224)
    int f_0e4;  // +0xe4 (228)
    int f_0e8;  // +0xe8 (232)
    int f_0ec;  // +0xec (236)
    float f_0f0;  // +0xf0 (240)
    char f_0f4;  // +0xf4 (244)
    int f_0f8;  // +0xf8 (248)
    int f_0fc;  // +0xfc (252)
    float f_1f4;  // +0x1f4 (500)
    int f_1f8;  // +0x1f8 (504)
    int f_1fc;  // +0x1fc (508)
    int f_20c;  // +0x20c (524)
    char f_210;  // +0x210 (528)
};
