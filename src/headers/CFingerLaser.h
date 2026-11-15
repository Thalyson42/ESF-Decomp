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
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    int m_iId;  // +0x88 (136) FIELD_INTEGER  [save-table]
    int m_iClip;  // +0xb0 (176) FIELD_INTEGER  [save-table]
    int m_iDefaultAmmo;  // +0xc0 (192) FIELD_INTEGER  [save-table]
    char f_0c4;  // +0xc4 (196)
};
