// CTelekinesis.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTelekinesis : public CChargedAttack {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__12CTelekinesis
    virtual void Precache();  // vtable[1] Precache__12CTelekinesis
    virtual void GetItemInfo();  // vtable[59] GetItemInfo__12CTelekinesisP8ItemInfo
    virtual void Deploy();  // vtable[61] Deploy__12CTelekinesis
    virtual void iItemSlot();  // vtable[74] iItemSlot__12CTelekinesis
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__12CTelekinesis
    virtual void Shoot();  // vtable[85] Shoot__12CTelekinesis
    virtual void EmitChargeSound();  // vtable[86] EmitChargeSound__12CTelekinesis
    virtual void EmitShootSound();  // vtable[87] EmitShootSound__12CTelekinesis
    virtual void DisableChargeSprite();  // vtable[90] DisableChargeSprite__12CTelekinesis
    virtual void GrowChargeSprite();  // vtable[91] GrowChargeSprite__12CTelekinesis
    virtual void ShootAttack();  // vtable[93] ShootAttack__12CTelekinesis
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
    int f_0dc;  // +0xdc (220)
    int f_1d4;  // +0x1d4 (468)
    int f_1ec;  // +0x1ec (492)
    int f_1f0;  // +0x1f0 (496)
    int f_1f4;  // +0x1f4 (500)
    float f_1f8;  // +0x1f8 (504)
    float f_1fc;  // +0x1fc (508)
    char f_204;  // +0x204 (516)
};
