// CEyelaser.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CEyelaser : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__9CEyelaser
    virtual void Precache();  // vtable[1] Precache__9CEyelaser
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__9CEyelaserP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__9CEyelaser
    virtual void Holster();  // vtable[63] Holster__9CEyelaseri
    virtual void iItemSlot();  // vtable[74] iItemSlot__9CEyelaser
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__9CEyelaser
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__9CEyelaser
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__9CEyelaser
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    int m_iId;  // +0x88 (136) FIELD_INTEGER  [save-table]
    float m_flNextPrimaryAttack;  // +0x9c (156) FIELD_TIME  [save-table]
    int m_iClip;  // +0xb0 (176) FIELD_INTEGER  [save-table]
    int m_iDefaultAmmo;  // +0xc0 (192) FIELD_INTEGER  [save-table]
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
    int f_0cc;  // +0xcc (204)
    int f_0d0;  // +0xd0 (208)
    char f_0d4;  // +0xd4 (212)
};
