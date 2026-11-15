// CKiBlast.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CKiBlast : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__8CKiBlast
    virtual void Precache();  // vtable[1] Precache__8CKiBlast
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__8CKiBlastP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__8CKiBlast
    virtual void Holster();  // vtable[63] Holster__8CKiBlasti
    virtual void iItemSlot();  // vtable[74] iItemSlot__8CKiBlast
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__8CKiBlast
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__8CKiBlast
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    float f_09c;  // +0x9c (156)
    float f_0a0;  // +0xa0 (160)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
    int f_0c4;  // +0xc4 (196)
    short f_0c8;  // +0xc8 (200)
    short f_0ca;  // +0xca (202)
    short f_0cc;  // +0xcc (204)
};
