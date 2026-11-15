// CBubbling.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBubbling : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__9CBubbling
    virtual void Precache();  // vtable[1] Precache__9CBubbling
    virtual void KeyValue();  // vtable[2] KeyValue__9CBubblingP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__9CBubblingR5CSave
    virtual void Restore();  // vtable[4] Restore__9CBubblingR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__9CBubbling
    virtual void Use();  // vtable[44] Use__9CBubblingP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    int m_density;  // +0x64 (100) FIELD_INTEGER  [save-table]
    int m_frequency;  // +0x68 (104) FIELD_INTEGER  [save-table]
    int f_06c;  // +0x6c (108)
    int m_state;  // +0x70 (112) FIELD_INTEGER  [save-table]
};
