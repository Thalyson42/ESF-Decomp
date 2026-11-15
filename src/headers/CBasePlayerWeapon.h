// CBasePlayerWeapon.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBasePlayerWeapon : public CBasePlayerItem {  // base: SDK
public:
    virtual void Save();  // vtable[3] Save__17CBasePlayerWeaponR5CSave
    virtual void Restore();  // vtable[4] Restore__17CBasePlayerWeaponR8CRestore
    virtual void AddToPlayer();  // vtable[57] AddToPlayer__17CBasePlayerWeaponP11CBasePlayer
    virtual void Holster();  // vtable[63] Holster__17CBasePlayerWeaponi
    virtual void UpdateItemInfo();  // vtable[64] UpdateItemInfo__17CBasePlayerWeapon
    virtual void ItemPostFrame();  // vtable[66] ItemPostFrame__17CBasePlayerWeapon
    virtual void PrimaryAmmoIndex();  // vtable[70] PrimaryAmmoIndex__17CBasePlayerWeapon
    virtual void SecondaryAmmoIndex();  // vtable[71] SecondaryAmmoIndex__17CBasePlayerWeapon
    virtual void UpdateClientData();  // vtable[72] UpdateClientData__17CBasePlayerWeaponP11CBasePlayer
    virtual void GetWeaponPtr();  // vtable[73] GetWeaponPtr__17CBasePlayerWeapon
    virtual void PlayEmptySound();  // vtable[75] PlayEmptySound__17CBasePlayerWeapon
    virtual void ResetEmptySound();  // vtable[76] ResetEmptySound__17CBasePlayerWeapon
    virtual void SendWeaponAnim();  // vtable[77] SendWeaponAnim__17CBasePlayerWeaponiii
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__17CBasePlayerWeapon
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__17CBasePlayerWeapon
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__17CBasePlayerWeapon
    virtual void RetireWeapon();  // vtable[81] RetireWeapon__17CBasePlayerWeapon
    virtual void ShouldWeaponIdle();  // vtable[82] ShouldWeaponIdle__17CBasePlayerWeapon
    virtual void UseDecrement();  // vtable[83] UseDecrement__17CBasePlayerWeapon
    virtual void HolsterWhenMeleed();  // vtable[84] HolsterWhenMeleed__17CBasePlayerWeapon
    virtual void 0();  // vtable[85] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    void* f_084;  // +0x84 (132)
    int f_088;  // +0x88 (136)
    int f_08c;  // +0x8c (140)
    int f_090;  // +0x90 (144)
    float f_09c;  // +0x9c (156)
    float f_0a0;  // +0xa0 (160)
    float f_0a4;  // +0xa4 (164)
    int f_0a8;  // +0xa8 (168)
    int f_0b0;  // +0xb0 (176)
    int f_0b4;  // +0xb4 (180)
    int f_0b8;  // +0xb8 (184)
    int f_0bc;  // +0xbc (188)
};
