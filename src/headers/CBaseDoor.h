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
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
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
    EHANDLE m_hActivator;  // +0xd4 (212) FIELD_EHANDLE  [save-table]
    void* m_pfnCallWhenMoveDone;  // +0xdc (220) FIELD_FUNCTION  [save-table]
    string_t m_sMaster;  // +0x100 (256) FIELD_STRING  [save-table]
    char m_bHealthValue;  // +0x104 (260) FIELD_CHARACTER  [save-table]
    char m_bMoveSnd;  // +0x105 (261) FIELD_CHARACTER  [save-table]
    char m_bStopSnd;  // +0x106 (262) FIELD_CHARACTER  [save-table]
    int f_108;  // +0x108 (264)
    int f_10c;  // +0x10c (268)
    int f_110;  // +0x110 (272)
    int f_114;  // +0x114 (276)
    char m_bLockedSound;  // +0x12c (300) FIELD_CHARACTER  [save-table]
    char m_bLockedSentence;  // +0x12d (301) FIELD_CHARACTER  [save-table]
    char m_bUnlockedSound;  // +0x12e (302) FIELD_CHARACTER  [save-table]
    char m_bUnlockedSentence;  // +0x12f (303) FIELD_CHARACTER  [save-table]
};
