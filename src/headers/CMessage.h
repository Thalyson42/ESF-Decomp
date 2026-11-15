// CMessage.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CMessage : public CPointEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__8CMessage
    virtual void Precache();  // vtable[1] Precache__8CMessage
    virtual void KeyValue();  // vtable[2] KeyValue__8CMessageP14KeyValueData_s
    virtual void Use();  // vtable[44] Use__8CMessageP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
};
