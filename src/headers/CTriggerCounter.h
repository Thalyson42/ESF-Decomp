// CTriggerCounter.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTriggerCounter : public CBaseTrigger {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__15CTriggerCounter
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_020;  // +0x20 (32)
    int m_cTriggersLeft;  // +0xcc (204) FIELD_INTEGER  [save-table]
};
