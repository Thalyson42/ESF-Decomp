// CTriggerSave.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTriggerSave : public CBaseTrigger {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__12CTriggerSave
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    string_t m_sMaster;  // +0x100 (256) FIELD_STRING  [save-table]
};
