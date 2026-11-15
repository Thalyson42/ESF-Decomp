// CBaseToggle.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBaseToggle : public CBaseAnimating {  // base: SDK
public:
    virtual void KeyValue();  // vtable[2] KeyValue__11CBaseToggleP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__11CBaseToggleR5CSave
    virtual void Restore();  // vtable[4] Restore__11CBaseToggleR8CRestore
    virtual void GetToggleState();  // vtable[19] GetToggleState__11CBaseToggle
    virtual void GetDelay();  // vtable[24] GetDelay__11CBaseToggle
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_044;  // +0x44 (68)
    int f_048;  // +0x48 (72)
    int f_04c;  // +0x4c (76)
    int f_080;  // +0x80 (128)
    float f_088;  // +0x88 (136)
    float f_08c;  // +0x8c (140)
    float f_090;  // +0x90 (144)
    short f_0dc;  // +0xdc (220)
    short f_0de;  // +0xde (222)
    int f_0e0;  // +0xe0 (224)
    int f_0e4;  // +0xe4 (228)
    int f_0e8;  // +0xe8 (232)
    int f_0ec;  // +0xec (236)
    int f_0f0;  // +0xf0 (240)
    int f_0f4;  // +0xf4 (244)
    int f_0f8;  // +0xf8 (248)
    int f_100;  // +0x100 (256)
    char f_1a0;  // +0x1a0 (416)
};
