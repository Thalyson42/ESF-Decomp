// CEnvSound.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CEnvSound : public CPointEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__9CEnvSound
    virtual void KeyValue();  // vtable[2] KeyValue__9CEnvSoundP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__9CEnvSoundR5CSave
    virtual void Restore();  // vtable[4] Restore__9CEnvSoundR8CRestore
    virtual void Think();  // vtable[42] Think__9CEnvSound
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    float f_068;  // +0x68 (104)
};
