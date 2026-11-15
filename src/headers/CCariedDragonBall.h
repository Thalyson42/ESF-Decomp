// CCariedDragonBall.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CCariedDragonBall : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__17CCariedDragonBall
    virtual void Precache();  // vtable[1] Precache__17CCariedDragonBall
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__17CCariedDragonBallP8ItemInfo
    virtual void CanDeploy();  // vtable[60] CanDeploy__17CCariedDragonBall
    virtual void Deploy();  // vtable[61] Deploy__17CCariedDragonBall
    virtual void Holster();  // vtable[63] Holster__17CCariedDragonBalli
    virtual void iItemSlot();  // vtable[74] iItemSlot__17CCariedDragonBall
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__17CCariedDragonBall
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__17CCariedDragonBall
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
};
