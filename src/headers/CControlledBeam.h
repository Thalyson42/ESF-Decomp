// CControlledBeam.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CControlledBeam : public CChargedAttack {  // base: heuristica
public:
    virtual void Precache();  // vtable[1] Precache__15CControlledBeam
    virtual void Deploy();  // vtable[61] Deploy__15CControlledBeam
    virtual void CanHolster();  // vtable[62] CanHolster__15CControlledBeam
    virtual void Holster();  // vtable[63] Holster__15CControlledBeami
    virtual void PrimaryAttack();  // vtable[78] PrimaryAttack__15CControlledBeam
    virtual void SecondaryAttack();  // vtable[79] SecondaryAttack__15CControlledBeam
    virtual void WeaponIdle();  // vtable[80] WeaponIdle__15CControlledBeam
    virtual void CreateBeam();  // vtable[85] CreateBeam__15CControlledBeamG6VectorT1f
    virtual void EmitControlSound();  // vtable[86] EmitControlSound__15CControlledBeam
    virtual void EmitChargeSound();  // vtable[87] EmitChargeSound__15CControlledBeam
    virtual void EmitShootSound();  // vtable[88] EmitShootSound__15CControlledBeam
    virtual void InitChargeSprite();  // vtable[89] InitChargeSprite__15CControlledBeam
    virtual void EnableChargeSprite();  // vtable[90] EnableChargeSprite__15CControlledBeam
    virtual void DisableChargeSprite();  // vtable[91] DisableChargeSprite__15CControlledBeam
    virtual void GrowChargeSprite();  // vtable[92] GrowChargeSprite__15CControlledBeam
    virtual void RemoveChargeSprite();  // vtable[93] RemoveChargeSprite__15CControlledBeam
    virtual void Shoot();  // vtable[94] Shoot__15CControlledBeam
    virtual void CanBeamJump();  // vtable[95] CanBeamJump__15CControlledBeam
    virtual void 0();  // vtable[96] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    float f_09c;  // +0x9c (156)
    float f_0a0;  // +0xa0 (160)
    float f_0a4;  // +0xa4 (164)
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
    int f_0d8;  // +0xd8 (216)
    int f_0dc;  // +0xdc (220)
    int f_0e0;  // +0xe0 (224)
    int f_0e4;  // +0xe4 (228)
    int f_0e8;  // +0xe8 (232)
    float f_0f0;  // +0xf0 (240)
    char f_0f4;  // +0xf4 (244)
    int f_200;  // +0x200 (512)
    int f_204;  // +0x204 (516)
    int f_208;  // +0x208 (520)
};
