// CSpeaker.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CSpeaker : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__8CSpeaker
    virtual void Precache();  // vtable[1] Precache__8CSpeaker
    virtual void KeyValue();  // vtable[2] KeyValue__8CSpeakerP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__8CSpeakerR5CSave
    virtual void Restore();  // vtable[4] Restore__8CSpeakerR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__8CSpeaker
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_060;  // +0x60 (96)
    int m_preset;  // +0x64 (100) FIELD_INTEGER  [save-table]
};
