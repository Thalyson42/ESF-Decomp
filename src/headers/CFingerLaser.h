// CFingerLaser.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFingerLaser : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__12CFingerLaser
    virtual void Precache();  // vtable[1] Precache__12CFingerLaser
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__12CFingerLaserP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__12CFingerLaser
    virtual void iItemSlot();  // vtable[74] iItemSlot__12CFingerLaser
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__12CFingerLaser
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__12CFingerLaser
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
    char f_0c4;  // +0xc4 (196)
};
