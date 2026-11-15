// CBaseButton.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBaseButton : public CBaseToggle {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__11CBaseButton
    virtual void Precache();  // vtable[1] Precache__11CBaseButton
    virtual void KeyValue();  // vtable[2] KeyValue__11CBaseButtonP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__11CBaseButtonR5CSave
    virtual void Restore();  // vtable[4] Restore__11CBaseButtonR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__11CBaseButton
    virtual void TakeDamage();  // vtable[11] TakeDamage__11CBaseButtonP9entvars_sT1fi
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_014;  // +0x14 (20)
    int f_018;  // +0x18 (24)
    int f_01c;  // +0x1c (28)
    int f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    float f_08c;  // +0x8c (140)
    float f_090;  // +0x90 (144)
    float f_09c;  // +0x9c (156)
    int f_0a0;  // +0xa0 (160)
    int f_0a4;  // +0xa4 (164)
    float f_0a8;  // +0xa8 (168)
    float f_0ac;  // +0xac (172)
    float f_0b0;  // +0xb0 (176)
    float f_0b4;  // +0xb4 (180)
    float f_0c0;  // +0xc0 (192)
    char f_0d4;  // +0xd4 (212)
    int f_0dc;  // +0xdc (220)
    int f_100;  // +0x100 (256)
    int f_104;  // +0x104 (260)
    int f_108;  // +0x108 (264)
    int f_10c;  // +0x10c (268)
    int f_110;  // +0x110 (272)
    int f_114;  // +0x114 (276)
    int f_118;  // +0x118 (280)
    int f_11c;  // +0x11c (284)
    char f_134;  // +0x134 (308)
    char f_135;  // +0x135 (309)
    char f_136;  // +0x136 (310)
    char f_137;  // +0x137 (311)
    int f_138;  // +0x138 (312)
};
