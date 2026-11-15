// CRotDoor.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CRotDoor : public CBaseDoor {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__8CRotDoor
    virtual void SetToggleState();  // vtable[28] SetToggleState__8CRotDoori
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    int f_060;  // +0x60 (96)
    int m_toggle_state;  // +0x80 (128) FIELD_INTEGER  [save-table]
    float m_flMoveDistance;  // +0x88 (136) FIELD_FLOAT  [save-table]
    Vector m_vecAngle1;  // +0xb4 (180) FIELD_VECTOR  [save-table]
    int f_0b8;  // +0xb8 (184)
    int f_0bc;  // +0xbc (188)
    Vector m_vecAngle2;  // +0xc0 (192) FIELD_VECTOR  [save-table]
    float f_0c4;  // +0xc4 (196)
    float f_0c8;  // +0xc8 (200)
};
