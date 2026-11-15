// CScatterShot.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CScatterShot : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__12CScatterShot
    virtual void Precache();  // vtable[1] Precache__12CScatterShot
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__12CScatterShotP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__12CScatterShot
    virtual void Holster();  // vtable[63] Holster__12CScatterShoti
    virtual void iItemSlot();  // vtable[74] iItemSlot__12CScatterShot
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__12CScatterShot
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__12CScatterShot
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__12CScatterShot
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    int m_iId;  // +0x88 (136) FIELD_INTEGER  [save-table]
    float m_flNextPrimaryAttack;  // +0x9c (156) FIELD_TIME  [save-table]
    float m_flNextSecondaryAttack;  // +0xa0 (160) FIELD_TIME  [save-table]
    int m_iClip;  // +0xb0 (176) FIELD_INTEGER  [save-table]
    int m_iDefaultAmmo;  // +0xc0 (192) FIELD_INTEGER  [save-table]
    int f_0e4;  // +0xe4 (228)
    short f_0e8;  // +0xe8 (232)
    short f_0ea;  // +0xea (234)
    short f_0ec;  // +0xec (236)
};
