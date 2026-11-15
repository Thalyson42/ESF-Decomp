// CSensuBean.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CSensuBean : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__10CSensuBean
    virtual void Precache();  // vtable[1] Precache__10CSensuBean
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__10CSensuBeanP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__10CSensuBean
    virtual void iItemSlot();  // vtable[74] iItemSlot__10CSensuBean
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__10CSensuBean
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__10CSensuBean
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__10CSensuBean
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    void* f_080;  // +0x80 (128)
    int f_088;  // +0x88 (136)
    int f_0b0;  // +0xb0 (176)
    int f_0c0;  // +0xc0 (192)
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
};
