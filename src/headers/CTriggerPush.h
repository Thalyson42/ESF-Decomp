// CTriggerPush.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTriggerPush : public CBaseTrigger {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__12CTriggerPush
    virtual void KeyValue();  // vtable[2] KeyValue__12CTriggerPushP14KeyValueData_s
    virtual void Touch();  // vtable[43] Touch__12CTriggerPushP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
};
