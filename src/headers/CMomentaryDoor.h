// CMomentaryDoor.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CMomentaryDoor : public CBaseToggle {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__14CMomentaryDoor
    virtual void Precache();  // vtable[1] Precache__14CMomentaryDoor
    virtual void KeyValue();  // vtable[2] KeyValue__14CMomentaryDoorP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__14CMomentaryDoorR5CSave
    virtual void Restore();  // vtable[4] Restore__14CMomentaryDoorR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__14CMomentaryDoor
    virtual void Use();  // vtable[44] Use__14CMomentaryDoorP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_014;  // +0x14 (20)
    int f_018;  // +0x18 (24)
    int f_060;  // +0x60 (96)
    float f_090;  // +0x90 (144)
    float f_09c;  // +0x9c (156)
    float f_0a0;  // +0xa0 (160)
    float f_0a4;  // +0xa4 (164)
    float f_0a8;  // +0xa8 (168)
    float f_0ac;  // +0xac (172)
    float f_0b0;  // +0xb0 (176)
    char f_104;  // +0x104 (260)
};
