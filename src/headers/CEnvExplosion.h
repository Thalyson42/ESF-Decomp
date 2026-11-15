// CEnvExplosion.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CEnvExplosion : public CBaseMonster {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__13CEnvExplosion
    virtual void KeyValue();  // vtable[2] KeyValue__13CEnvExplosionP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__13CEnvExplosionR5CSave
    virtual void Restore();  // vtable[4] Restore__13CEnvExplosionR8CRestore
    virtual void Use();  // vtable[44] Use__13CEnvExplosionP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_2a8;  // +0x2a8 (680)
    char f_2ac;  // +0x2ac (684)
};
