// CTriggerMultiple.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTriggerMultiple : public CBaseTrigger {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__16CTriggerMultiple
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    float m_flWait;  // +0x8c (140) FIELD_FLOAT  [save-table]
};
