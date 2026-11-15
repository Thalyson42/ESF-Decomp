// CRotDoor.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CRotDoor : public CBaseDoor {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__8CRotDoor
    virtual void SetToggleState();  // vtable[28] SetToggleState__8CRotDoori
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_014;  // +0x14 (20)
    int f_018;  // +0x18 (24)
    int f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    float f_088;  // +0x88 (136)
    float f_0b4;  // +0xb4 (180)
    int f_0b8;  // +0xb8 (184)
    int f_0bc;  // +0xbc (188)
    float f_0c0;  // +0xc0 (192)
    float f_0c4;  // +0xc4 (196)
    float f_0c8;  // +0xc8 (200)
};
