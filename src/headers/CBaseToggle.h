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
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    int f_044;  // +0x44 (68)
    int f_048;  // +0x48 (72)
    int f_04c;  // +0x4c (76)
    int m_toggle_state;  // +0x80 (128) FIELD_INTEGER  [save-table]
    float m_flActivateFinished;  // +0x84 (132) FIELD_TIME  [save-table]
    float m_flMoveDistance;  // +0x88 (136) FIELD_FLOAT  [save-table]
    float m_flWait;  // +0x8c (140) FIELD_FLOAT  [save-table]
    float m_flLip;  // +0x90 (144) FIELD_FLOAT  [save-table]
    float m_flTWidth;  // +0x94 (148) FIELD_FLOAT  [save-table]
    float m_flTLength;  // +0x98 (152) FIELD_FLOAT  [save-table]
    Vector m_vecPosition1;  // +0x9c (156) FIELD_POSITION_VECTOR  [save-table]
    Vector m_vecPosition2;  // +0xa8 (168) FIELD_POSITION_VECTOR  [save-table]
    Vector m_vecAngle1;  // +0xb4 (180) FIELD_VECTOR  [save-table]
    Vector m_vecAngle2;  // +0xc0 (192) FIELD_VECTOR  [save-table]
    int m_cTriggersLeft;  // +0xcc (204) FIELD_INTEGER  [save-table]
    float m_flHeight;  // +0xd0 (208) FIELD_FLOAT  [save-table]
    EHANDLE m_hActivator;  // +0xd4 (212) FIELD_EHANDLE  [save-table]
    void* m_pfnCallWhenMoveDone;  // +0xdc (220) FIELD_FUNCTION  [save-table]
    short f_0de;  // +0xde (222)
    int f_0e0;  // +0xe0 (224)
    Vector m_vecFinalDest;  // +0xe4 (228) FIELD_POSITION_VECTOR  [save-table]
    int f_0e8;  // +0xe8 (232)
    int f_0ec;  // +0xec (236)
    Vector m_vecFinalAngle;  // +0xf0 (240) FIELD_VECTOR  [save-table]
    int f_0f4;  // +0xf4 (244)
    int f_0f8;  // +0xf8 (248)
    int m_bitsDamageInflict;  // +0xfc (252) FIELD_INTEGER  [save-table]
    string_t m_sMaster;  // +0x100 (256) FIELD_STRING  [save-table]
    char f_1a0;  // +0x1a0 (416)
};
