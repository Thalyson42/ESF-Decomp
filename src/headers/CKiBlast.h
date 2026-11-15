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
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    int m_iId;  // +0x88 (136) FIELD_INTEGER  [save-table]
    float m_flNextPrimaryAttack;  // +0x9c (156) FIELD_TIME  [save-table]
    float m_flNextSecondaryAttack;  // +0xa0 (160) FIELD_TIME  [save-table]
    int m_iClip;  // +0xb0 (176) FIELD_INTEGER  [save-table]
    int m_iDefaultAmmo;  // +0xc0 (192) FIELD_INTEGER  [save-table]
    int f_0c4;  // +0xc4 (196)
    short f_0c8;  // +0xc8 (200)
    short f_0ca;  // +0xca (202)
    short f_0cc;  // +0xcc (204)
};
