// CLightning.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CLightning : public CBeam {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__10CLightning
    virtual void Precache();  // vtable[1] Precache__10CLightning
    virtual void KeyValue();  // vtable[2] KeyValue__10CLightningP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__10CLightningR5CSave
    virtual void Restore();  // vtable[4] Restore__10CLightningR8CRestore
    virtual void Activate();  // vtable[6] Activate__10CLightning
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_01c;  // +0x1c (28)
    int f_020;  // +0x20 (32)
    int f_060;  // +0x60 (96)
    int f_064;  // +0x64 (100)
    int f_068;  // +0x68 (104)
    int f_06c;  // +0x6c (108)
    float f_070;  // +0x70 (112)
    int f_074;  // +0x74 (116)
    int f_078;  // +0x78 (120)
    int f_080;  // +0x80 (128)
    float f_084;  // +0x84 (132)
    int f_088;  // +0x88 (136)
    int f_08c;  // +0x8c (140)
    int f_090;  // +0x90 (144)
    float f_094;  // +0x94 (148)
};
