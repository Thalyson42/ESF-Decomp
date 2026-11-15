// CMultiManager.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CMultiManager : public CBaseToggle {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__13CMultiManager
    virtual void KeyValue();  // vtable[2] KeyValue__13CMultiManagerP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__13CMultiManagerR5CSave
    virtual void Restore();  // vtable[4] Restore__13CMultiManagerR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__13CMultiManager
    virtual void HasTarget();  // vtable[36] HasTarget__13CMultiManageri
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_01c;  // +0x1c (28)
    int f_020;  // +0x20 (32)
    float f_08c;  // +0x8c (140)
    char f_0d4;  // +0xd4 (212)
    int f_104;  // +0x104 (260)
    int f_108;  // +0x108 (264)
    int f_10c;  // +0x10c (268)
    int f_110;  // +0x110 (272)
    char f_114;  // +0x114 (276)
    int f_150;  // +0x150 (336)
};
