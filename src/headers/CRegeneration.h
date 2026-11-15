// CRegeneration.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CRegeneration : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__13CRegeneration
    virtual void Precache();  // vtable[1] Precache__13CRegeneration
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__13CRegenerationP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__13CRegeneration
    virtual void Holster();  // vtable[63] Holster__13CRegenerationi
    virtual void iItemSlot();  // vtable[74] iItemSlot__13CRegeneration
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__13CRegeneration
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__13CRegeneration
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    int m_iId;  // +0x88 (136) FIELD_INTEGER  [save-table]
    int m_iClip;  // +0xb0 (176) FIELD_INTEGER  [save-table]
    int m_iDefaultAmmo;  // +0xc0 (192) FIELD_INTEGER  [save-table]
};
