// CPowerBeam.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CPowerBeam : public CControlledBeam {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__10CPowerBeam
    virtual void Precache();  // vtable[1] Precache__10CPowerBeam
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__10CPowerBeamP8ItemInfo
    virtual void iItemSlot();  // vtable[74] iItemSlot__10CPowerBeam
    virtual void EmitChargeSound();  // vtable[87] EmitChargeSound__10CPowerBeam
    virtual void EmitShootSound();  // vtable[88] EmitShootSound__10CPowerBeam
    virtual void InitChargeSprite();  // vtable[89] InitChargeSprite__10CPowerBeam
    virtual void EnableChargeSprite();  // vtable[90] EnableChargeSprite__10CPowerBeam
    virtual void DisableChargeSprite();  // vtable[91] DisableChargeSprite__10CPowerBeam
    virtual void GrowChargeSprite();  // vtable[92] GrowChargeSprite__10CPowerBeam
    virtual void RemoveChargeSprite();  // vtable[93] RemoveChargeSprite__10CPowerBeam
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
    int f_0d8;  // +0xd8 (216)
    int f_0dc;  // +0xdc (220)
    int f_0e0;  // +0xe0 (224)
    int f_0e4;  // +0xe4 (228)
    int f_0e8;  // +0xe8 (232)
    int f_0ec;  // +0xec (236)
    int f_0f4;  // +0xf4 (244)
    int f_0f8;  // +0xf8 (248)
    short f_0fc;  // +0xfc (252)
    float f_1f4;  // +0x1f4 (500)
    int f_1f8;  // +0x1f8 (504)
    int f_1fc;  // +0x1fc (508)
    int f_20c;  // +0x20c (524)
};
