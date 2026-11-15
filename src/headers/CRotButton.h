// CRotButton.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CRotButton : public CBaseButton {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__10CRotButton
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_020;  // +0x20 (32)
    int m_toggle_state;  // +0x80 (128) FIELD_INTEGER  [save-table]
    float m_flMoveDistance;  // +0x88 (136) FIELD_FLOAT  [save-table]
    float m_flWait;  // +0x8c (140) FIELD_FLOAT  [save-table]
    Vector m_vecAngle1;  // +0xb4 (180) FIELD_VECTOR  [save-table]
    int f_0b8;  // +0xb8 (184)
    int f_0bc;  // +0xbc (188)
    Vector m_vecAngle2;  // +0xc0 (192) FIELD_VECTOR  [save-table]
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
    BOOL m_fStayPushed;  // +0x104 (260) FIELD_BOOLEAN  [save-table]
    BOOL m_fRotating;  // +0x108 (264) FIELD_BOOLEAN  [save-table]
    int m_sounds;  // +0x138 (312) FIELD_INTEGER  [save-table]
};
