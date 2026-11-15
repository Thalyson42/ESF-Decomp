// CTriggerMonsterJump.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTriggerMonsterJump : public CBaseTrigger {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__19CTriggerMonsterJump
    virtual void Think();  // vtable[42] Think__19CTriggerMonsterJump
    virtual void Touch();  // vtable[43] Touch__19CTriggerMonsterJumpP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_01c;  // +0x1c (28)
    float f_0d0;  // +0xd0 (208)
};
