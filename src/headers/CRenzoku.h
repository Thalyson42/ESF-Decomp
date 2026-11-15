// CRenzoku.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CRenzoku : public CChargedAttack {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__8CRenzoku
    virtual void Precache();  // vtable[1] Precache__8CRenzoku
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__8CRenzokuP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__8CRenzoku
    virtual void Holster();  // vtable[63] Holster__8CRenzokui
    virtual void iItemSlot();  // vtable[74] iItemSlot__8CRenzoku
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__8CRenzoku
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__8CRenzoku
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__8CRenzoku
    virtual void Shoot();  // vtable[85] Shoot__8CRenzoku
    virtual void EmitShootSound();  // vtable[87] EmitShootSound__8CRenzoku
    virtual void ShootAttack();  // vtable[93] ShootAttack__8CRenzoku
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    int m_iId;  // +0x88 (136) FIELD_INTEGER  [save-table]
    float m_flNextPrimaryAttack;  // +0x9c (156) FIELD_TIME  [save-table]
    float m_flNextSecondaryAttack;  // +0xa0 (160) FIELD_TIME  [save-table]
    float m_flTimeWeaponIdle;  // +0xa4 (164) FIELD_TIME  [save-table]
    int m_iClip;  // +0xb0 (176) FIELD_INTEGER  [save-table]
    int m_iDefaultAmmo;  // +0xc0 (192) FIELD_INTEGER  [save-table]
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
    int f_0cc;  // +0xcc (204)
    int f_0d0;  // +0xd0 (208)
    int f_0d4;  // +0xd4 (212)
    int f_0d8;  // +0xd8 (216)
    int f_1d4;  // +0x1d4 (468)
    int f_1d8;  // +0x1d8 (472)
    short f_1dc;  // +0x1dc (476)
    short f_1de;  // +0x1de (478)
    short f_1e0;  // +0x1e0 (480)
};
