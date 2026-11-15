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
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    CBaseEntity* m_pNext;  // +0x84 (132) FIELD_CLASSPTR  [save-table]
    int m_iId;  // +0x88 (136) FIELD_INTEGER  [save-table]
    int f_08c;  // +0x8c (140)
    int f_090;  // +0x90 (144)
    float m_flNextPrimaryAttack;  // +0x9c (156) FIELD_TIME  [save-table]
    float m_flNextSecondaryAttack;  // +0xa0 (160) FIELD_TIME  [save-table]
    float m_flTimeWeaponIdle;  // +0xa4 (164) FIELD_TIME  [save-table]
    int m_iPrimaryAmmoType;  // +0xa8 (168) FIELD_INTEGER  [save-table]
    int m_iSecondaryAmmoType;  // +0xac (172) FIELD_INTEGER  [save-table]
    int m_iClip;  // +0xb0 (176) FIELD_INTEGER  [save-table]
    int f_0b4;  // +0xb4 (180)
    int f_0b8;  // +0xb8 (184)
    int f_0bc;  // +0xbc (188)
    int m_iDefaultAmmo;  // +0xc0 (192) FIELD_INTEGER  [save-table]
};
