// CTriggerHurt.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTriggerHurt : public CBaseTrigger {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__12CTriggerHurt
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_020;  // +0x20 (32)
    char f_0fe;  // +0xfe (254)
};
