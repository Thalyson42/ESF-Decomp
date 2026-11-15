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
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_060;  // +0x60 (96)
    int m_toggle_state;  // +0x80 (128) FIELD_INTEGER  [save-table]
    float m_flWait;  // +0x8c (140) FIELD_FLOAT  [save-table]
    float m_flLip;  // +0x90 (144) FIELD_FLOAT  [save-table]
    Vector m_vecPosition1;  // +0x9c (156) FIELD_POSITION_VECTOR  [save-table]
    int f_0a0;  // +0xa0 (160)
    int f_0a4;  // +0xa4 (164)
    Vector m_vecPosition2;  // +0xa8 (168) FIELD_POSITION_VECTOR  [save-table]
    float f_0ac;  // +0xac (172)
    float f_0b0;  // +0xb0 (176)
    Vector m_vecAngle1;  // +0xb4 (180) FIELD_VECTOR  [save-table]
    Vector m_vecAngle2;  // +0xc0 (192) FIELD_VECTOR  [save-table]
    EHANDLE m_hActivator;  // +0xd4 (212) FIELD_EHANDLE  [save-table]
    void* m_pfnCallWhenMoveDone;  // +0xdc (220) FIELD_FUNCTION  [save-table]
    string_t m_sMaster;  // +0x100 (256) FIELD_STRING  [save-table]
    BOOL m_fStayPushed;  // +0x104 (260) FIELD_BOOLEAN  [save-table]
    BOOL m_fRotating;  // +0x108 (264) FIELD_BOOLEAN  [save-table]
    string_t m_strChangeTarget;  // +0x10c (268) FIELD_STRING  [save-table]
    int f_110;  // +0x110 (272)
    int f_114;  // +0x114 (276)
    int f_118;  // +0x118 (280)
    int f_11c;  // +0x11c (284)
    char m_bLockedSound;  // +0x134 (308) FIELD_CHARACTER  [save-table]
    char m_bLockedSentence;  // +0x135 (309) FIELD_CHARACTER  [save-table]
    char m_bUnlockedSound;  // +0x136 (310) FIELD_CHARACTER  [save-table]
    char m_bUnlockedSentence;  // +0x137 (311) FIELD_CHARACTER  [save-table]
    int m_sounds;  // +0x138 (312) FIELD_INTEGER  [save-table]
};
