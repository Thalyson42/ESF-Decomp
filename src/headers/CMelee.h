// CMelee.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CMelee : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__6CMelee
    virtual void Precache();  // vtable[1] Precache__6CMelee
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__6CMeleeP8ItemInfo
    virtual void CanDeploy();  // vtable[60] CanDeploy__6CMelee
    virtual void Deploy();  // vtable[61] Deploy__6CMelee
    virtual void Holster();  // vtable[63] Holster__6CMeleei
    virtual void iItemSlot();  // vtable[74] iItemSlot__6CMelee
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__6CMelee
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__6CMelee
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__6CMelee
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    int m_iId;  // +0x88 (136) FIELD_INTEGER  [save-table]
    float m_flNextPrimaryAttack;  // +0x9c (156) FIELD_TIME  [save-table]
    float m_flNextSecondaryAttack;  // +0xa0 (160) FIELD_TIME  [save-table]
    int m_iClip;  // +0xb0 (176) FIELD_INTEGER  [save-table]
    int m_iDefaultAmmo;  // +0xc0 (192) FIELD_INTEGER  [save-table]
};
