// CPendulum.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CPendulum : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__9CPendulum
    virtual void KeyValue();  // vtable[2] KeyValue__9CPendulumP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__9CPendulumR5CSave
    virtual void Restore();  // vtable[4] Restore__9CPendulumR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__9CPendulum
    virtual void Touch();  // vtable[43] Touch__9CPendulumP11CBaseEntity
    virtual void Blocked();  // vtable[45] Blocked__9CPendulumP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_014;  // +0x14 (20)
    int f_018;  // +0x18 (24)
    int f_01c;  // +0x1c (28)
    int f_020;  // +0x20 (32)
    float f_064;  // +0x64 (100)
    int f_068;  // +0x68 (104)
    float f_06c;  // +0x6c (108)
    float f_074;  // +0x74 (116)
    int f_078;  // +0x78 (120)
    int f_07c;  // +0x7c (124)
    int f_080;  // +0x80 (128)
    int f_084;  // +0x84 (132)
    int f_088;  // +0x88 (136)
    int f_08c;  // +0x8c (140)
    int f_090;  // +0x90 (144)
};
