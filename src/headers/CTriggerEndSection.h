// CTriggerEndSection.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTriggerEndSection : public CBaseTrigger {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__18CTriggerEndSection
    virtual void KeyValue();  // vtable[2] KeyValue__18CTriggerEndSectionP14KeyValueData_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_020;  // +0x20 (32)
};
