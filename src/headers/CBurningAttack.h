// CBurningAttack.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBurningAttack : public CControlledBeam {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__14CBurningAttack
    virtual void Precache();  // vtable[1] Precache__14CBurningAttack
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__14CBurningAttackP8ItemInfo
    virtual void iItemSlot();  // vtable[74] iItemSlot__14CBurningAttack
    virtual void CreateBeam();  // vtable[85] CreateBeam__14CBurningAttackG6VectorT1f
    virtual void EmitChargeSound();  // vtable[87] EmitChargeSound__14CBurningAttack
    virtual void EmitShootSound();  // vtable[88] EmitShootSound__14CBurningAttack
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    int m_iId;  // +0x88 (136) FIELD_INTEGER  [save-table]
    int m_iClip;  // +0xb0 (176) FIELD_INTEGER  [save-table]
    int m_iDefaultAmmo;  // +0xc0 (192) FIELD_INTEGER  [save-table]
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
    int f_0d8;  // +0xd8 (216)
    int f_0dc;  // +0xdc (220)
    int f_0e0;  // +0xe0 (224)
    int f_0e4;  // +0xe4 (228)
    int f_0e8;  // +0xe8 (232)
    int f_0ec;  // +0xec (236)
    int f_0f0;  // +0xf0 (240)
    int f_0f4;  // +0xf4 (244)
    int f_0f8;  // +0xf8 (248)
    int f_0fc;  // +0xfc (252)
    short f_100;  // +0x100 (256)
    float f_1f4;  // +0x1f4 (500)
    int f_1f8;  // +0x1f8 (504)
    int f_1fc;  // +0x1fc (508)
};
