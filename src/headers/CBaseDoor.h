// CBaseDoor.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBaseDoor : public CBaseToggle {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__9CBaseDoor
    virtual void Precache();  // vtable[1] Precache__9CBaseDoor
    virtual void KeyValue();  // vtable[2] KeyValue__9CBaseDoorP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__9CBaseDoorR5CSave
    virtual void Restore();  // vtable[4] Restore__9CBaseDoorR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__9CBaseDoor
    virtual void SetToggleState();  // vtable[28] SetToggleState__9CBaseDoori
    virtual void Use();  // vtable[44] Use__9CBaseDoorP11CBaseEntityT18USE_TYPEf
    virtual void Blocked();  // vtable[45] Blocked__9CBaseDoorP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_014;  // +0x14 (20)
    int f_018;  // +0x18 (24)
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
    char f_0d4;  // +0xd4 (212)
    int f_0dc;  // +0xdc (220)
    int f_100;  // +0x100 (256)
    char f_104;  // +0x104 (260)
    char f_105;  // +0x105 (261)
    char f_106;  // +0x106 (262)
    int f_108;  // +0x108 (264)
    int f_10c;  // +0x10c (268)
    int f_110;  // +0x110 (272)
    int f_114;  // +0x114 (276)
    char f_12c;  // +0x12c (300)
    char f_12d;  // +0x12d (301)
    char f_12e;  // +0x12e (302)
    char f_12f;  // +0x12f (303)
};
