// CChargedAttack.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CChargedAttack : public CBasePlayerWeapon {  // base: heuristica
public:
    virtual void Deploy();  // vtable[61] Deploy__14CChargedAttack
    virtual void Holster();  // vtable[63] Holster__14CChargedAttacki
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__14CChargedAttack
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__14CChargedAttack
    virtual void Shoot();  // vtable[85] Shoot__14CChargedAttack
    virtual void EmitChargeSound();  // vtable[86] EmitChargeSound__14CChargedAttack
    virtual void EmitShootSound();  // vtable[87] EmitShootSound__14CChargedAttack
    virtual void InitChargeSprite();  // vtable[88] InitChargeSprite__14CChargedAttack
    virtual void EnableChargeSprite();  // vtable[89] EnableChargeSprite__14CChargedAttack
    virtual void DisableChargeSprite();  // vtable[90] DisableChargeSprite__14CChargedAttack
    virtual void GrowChargeSprite();  // vtable[91] GrowChargeSprite__14CChargedAttack
    virtual void RemoveChargeSprite();  // vtable[92] RemoveChargeSprite__14CChargedAttack
    virtual void ShootAttack();  // vtable[93] ShootAttack__14CChargedAttack
    virtual void 0();  // vtable[94] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    CBaseEntity* m_pPlayer;  // +0x80 (128) FIELD_CLASSPTR  [save-table]
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
};
