// CTriggerCDAudio.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTriggerCDAudio : public CBaseTrigger {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__15CTriggerCDAudio
    virtual void Touch();  // vtable[43] Touch__15CTriggerCDAudioP11CBaseEntity
    virtual void Use();  // vtable[44] Use__15CTriggerCDAudioP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
};
