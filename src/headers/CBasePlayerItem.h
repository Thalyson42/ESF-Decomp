// CBasePlayerItem.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBasePlayerItem : public CBaseAnimating {  // base: SDK
public:
    virtual void Save();  // vtable[3] Save__15CBasePlayerItemR5CSave
    virtual void Restore();  // vtable[4] Restore__15CBasePlayerItemR8CRestore
    virtual void SetObjectCollisionBox();  // vtable[7] SetObjectCollisionBox__15CBasePlayerItem
    virtual void Respawn();  // vtable[46] Respawn__15CBasePlayerItem
    virtual void AddToPlayer();  // vtable[57] AddToPlayer__15CBasePlayerItemP11CBasePlayer
    virtual void AddDuplicate();  // vtable[58] AddDuplicate__15CBasePlayerItemP15CBasePlayerItem
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__15CBasePlayerItemP8ItemInfo
    virtual void CanDeploy();  // vtable[60] CanDeploy__15CBasePlayerItem
    virtual void Deploy();  // vtable[61] Deploy__15CBasePlayerItem
    virtual void CanHolster();  // vtable[62] CanHolster__15CBasePlayerItem
    virtual void Holster();  // vtable[63] Holster__15CBasePlayerItemi
    virtual void UpdateItemInfo();  // vtable[64] UpdateItemInfo__15CBasePlayerItem
    virtual void ItemPreFrame();  // vtable[65] ItemPreFrame__15CBasePlayerItem
    virtual void ItemPostFrame();  // vtable[66] ItemPostFrame__15CBasePlayerItem
    virtual void Drop();  // vtable[67] Drop__15CBasePlayerItem
    virtual void Kill();  // vtable[68] Kill__15CBasePlayerItem
    virtual void AttachToPlayer();  // vtable[69] AttachToPlayer__15CBasePlayerItemP11CBasePlayer
    virtual void PrimaryAmmoIndex();  // vtable[70] PrimaryAmmoIndex__15CBasePlayerItem
    virtual void SecondaryAmmoIndex();  // vtable[71] SecondaryAmmoIndex__15CBasePlayerItem
    virtual void UpdateClientData();  // vtable[72] UpdateClientData__15CBasePlayerItemP11CBasePlayer
    virtual void GetWeaponPtr();  // vtable[73] GetWeaponPtr__15CBasePlayerItem
    virtual void iItemSlot();  // vtable[74] iItemSlot__15CBasePlayerItem
    virtual void 0();  // vtable[75] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    void* f_060;  // +0x60 (96)
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    CBaseEntity* m_pNext;  // +0x84 (132) FIELD_CLASSPTR  [save-table]
    int m_iId;  // +0x88 (136) FIELD_INTEGER  [save-table]
};
