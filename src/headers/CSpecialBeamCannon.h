// CSpecialBeamCannon.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CSpecialBeamCannon : public CChargedAttack {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__18CSpecialBeamCannon
    virtual void Precache();  // vtable[1] Precache__18CSpecialBeamCannon
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__18CSpecialBeamCannonP8ItemInfo
    virtual void iItemSlot();  // vtable[74] iItemSlot__18CSpecialBeamCannon
    virtual void EmitChargeSound();  // vtable[86] EmitChargeSound__18CSpecialBeamCannon
    virtual void EmitShootSound();  // vtable[87] EmitShootSound__18CSpecialBeamCannon
    virtual void InitChargeSprite();  // vtable[88] InitChargeSprite__18CSpecialBeamCannon
    virtual void EnableChargeSprite();  // vtable[89] EnableChargeSprite__18CSpecialBeamCannon
    virtual void DisableChargeSprite();  // vtable[90] DisableChargeSprite__18CSpecialBeamCannon
    virtual void RemoveChargeSprite();  // vtable[92] RemoveChargeSprite__18CSpecialBeamCannon
    virtual void ShootAttack();  // vtable[93] ShootAttack__18CSpecialBeamCannon
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    int m_iId;  // +0x88 (136) FIELD_INTEGER  [save-table]
    int m_iClip;  // +0xb0 (176) FIELD_INTEGER  [save-table]
    int m_iDefaultAmmo;  // +0xc0 (192) FIELD_INTEGER  [save-table]
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
    float f_0cc;  // +0xcc (204)
    int f_0d0;  // +0xd0 (208)
    int f_1d4;  // +0x1d4 (468)
    short f_1d8;  // +0x1d8 (472)
    short f_1da;  // +0x1da (474)
    short f_1dc;  // +0x1dc (476)
    short f_1de;  // +0x1de (478)
    short f_1e0;  // +0x1e0 (480)
    short f_1e2;  // +0x1e2 (482)
};
