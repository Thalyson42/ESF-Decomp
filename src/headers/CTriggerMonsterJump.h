// CTriggerMonsterJump.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTriggerMonsterJump : public CBaseTrigger {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__19CTriggerMonsterJump
    virtual void Think();  // vtable[42] Think__19CTriggerMonsterJump
    virtual void Touch();  // vtable[43] Touch__19CTriggerMonsterJumpP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    float m_flHeight;  // +0xd0 (208) FIELD_FLOAT  [save-table]
};
