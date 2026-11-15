// CSolarFlare.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CSolarFlare : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__11CSolarFlare
    virtual void Precache();  // vtable[1] Precache__11CSolarFlare
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__11CSolarFlareP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__11CSolarFlare
    virtual void Holster();  // vtable[63] Holster__11CSolarFlarei
    virtual void iItemSlot();  // vtable[74] iItemSlot__11CSolarFlare
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__11CSolarFlare
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    int m_iId;  // +0x88 (136) FIELD_INTEGER  [save-table]
    int m_iClip;  // +0xb0 (176) FIELD_INTEGER  [save-table]
    int m_iDefaultAmmo;  // +0xc0 (192) FIELD_INTEGER  [save-table]
    int f_0c4;  // +0xc4 (196)
};
