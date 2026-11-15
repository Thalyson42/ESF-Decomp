// CFinishingBuster.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFinishingBuster : public CChargedAttack {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__16CFinishingBuster
    virtual void Precache();  // vtable[1] Precache__16CFinishingBuster
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__16CFinishingBusterP8ItemInfo
    virtual void iItemSlot();  // vtable[74] iItemSlot__16CFinishingBuster
    virtual void EmitChargeSound();  // vtable[86] EmitChargeSound__16CFinishingBuster
    virtual void EmitShootSound();  // vtable[87] EmitShootSound__16CFinishingBuster
    virtual void ShootAttack();  // vtable[93] ShootAttack__16CFinishingBuster
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
    int f_0cc;  // +0xcc (204)
    int f_0d0;  // +0xd0 (208)
    int f_0d4;  // +0xd4 (212)
    int f_0d8;  // +0xd8 (216)
    int f_0dc;  // +0xdc (220)
    int f_0e0;  // +0xe0 (224)
    short f_1d4;  // +0x1d4 (468)
    short f_1d6;  // +0x1d6 (470)
    short f_1d8;  // +0x1d8 (472)
};
