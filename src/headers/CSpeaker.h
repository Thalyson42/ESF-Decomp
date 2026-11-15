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
    int f_00c;  // +0xc (12)
    int f_01c;  // +0x1c (28)
    int f_060;  // +0x60 (96)
    int f_064;  // +0x64 (100)
};
