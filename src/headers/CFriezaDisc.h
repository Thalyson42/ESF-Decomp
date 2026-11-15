// CFriezaDisc.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFriezaDisc : public CChargedAttack {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__11CFriezaDisc
    virtual void Precache();  // vtable[1] Precache__11CFriezaDisc
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__11CFriezaDiscP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__11CFriezaDisc
    virtual void Holster();  // vtable[63] Holster__11CFriezaDisci
    virtual void iItemSlot();  // vtable[74] iItemSlot__11CFriezaDisc
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__11CFriezaDisc
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__11CFriezaDisc
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__11CFriezaDisc
    virtual void HolsterWhenMeleed();  // vtable[84] HolsterWhenMeleed__11CFriezaDisc
    virtual void EmitChargeSound();  // vtable[86] EmitChargeSound__11CFriezaDisc
    virtual void EmitShootSound();  // vtable[87] EmitShootSound__11CFriezaDisc
    virtual void EnableChargeSprite();  // vtable[89] EnableChargeSprite__11CFriezaDisc
    virtual void DisableChargeSprite();  // vtable[90] DisableChargeSprite__11CFriezaDisc
    virtual void GrowChargeSprite();  // vtable[91] GrowChargeSprite__11CFriezaDisc
    virtual void ShootAttack();  // vtable[93] ShootAttack__11CFriezaDisc
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
    int f_0d4;  // +0xd4 (212)
    int f_0d8;  // +0xd8 (216)
    short f_0dc;  // +0xdc (220)
    char f_0de;  // +0xde (222)
    int f_1d4;  // +0x1d4 (468)
    int f_1d8;  // +0x1d8 (472)
};
