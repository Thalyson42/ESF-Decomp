// CTriggerRelay.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTriggerRelay : public CBaseDelay {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__13CTriggerRelay
    virtual void KeyValue();  // vtable[2] KeyValue__13CTriggerRelayP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__13CTriggerRelayR5CSave
    virtual void Restore();  // vtable[4] Restore__13CTriggerRelayR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__13CTriggerRelay
    virtual void Use();  // vtable[44] Use__13CTriggerRelayP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_06c;  // +0x6c (108)
};
