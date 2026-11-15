// CBigBang.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBigBang : public CChargedAttack {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__8CBigBang
    virtual void Precache();  // vtable[1] Precache__8CBigBang
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__8CBigBangP8ItemInfo
    virtual void iItemSlot();  // vtable[74] iItemSlot__8CBigBang
    virtual void EmitChargeSound();  // vtable[86] EmitChargeSound__8CBigBang
    virtual void EmitShootSound();  // vtable[87] EmitShootSound__8CBigBang
    virtual void ShootAttack();  // vtable[93] ShootAttack__8CBigBang
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    int m_iId;  // +0x88 (136) FIELD_INTEGER  [save-table]
    int m_iClip;  // +0xb0 (176) FIELD_INTEGER  [save-table]
    int m_iDefaultAmmo;  // +0xc0 (192) FIELD_INTEGER  [save-table]
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
    int f_0cc;  // +0xcc (204)
    int f_0d0;  // +0xd0 (208)
    int f_0d4;  // +0xd4 (212)
    int f_0d8;  // +0xd8 (216)
    short f_1d4;  // +0x1d4 (468)
    short f_1d6;  // +0x1d6 (470)
    short f_1d8;  // +0x1d8 (472)
};
