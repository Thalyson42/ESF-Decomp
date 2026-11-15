// CFuncTrackChange.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFuncTrackChange : public CFuncPlatRot {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__16CFuncTrackChange
    virtual void Precache();  // vtable[1] Precache__16CFuncTrackChange
    virtual void KeyValue();  // vtable[2] KeyValue__16CFuncTrackChangeP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__16CFuncTrackChangeR5CSave
    virtual void Restore();  // vtable[4] Restore__16CFuncTrackChangeR8CRestore
    virtual void OverrideReset();  // vtable[26] OverrideReset__16CFuncTrackChange
    virtual void Touch();  // vtable[43] Touch__16CFuncTrackChangeP11CBaseEntity
    virtual void Use();  // vtable[44] Use__16CFuncTrackChangeP11CBaseEntityT18USE_TYPEf
    virtual void IsTogglePlat();  // vtable[57] IsTogglePlat__16CFuncTrackChange
    virtual void GoUp();  // vtable[58] GoUp__16CFuncTrackChange
    virtual void GoDown();  // vtable[59] GoDown__16CFuncTrackChange
    virtual void HitTop();  // vtable[60] HitTop__16CFuncTrackChange
    virtual void HitBottom();  // vtable[61] HitBottom__16CFuncTrackChange
    virtual void UpdateAutoTargets();  // vtable[62] UpdateAutoTargets__16CFuncTrackChangei
    virtual void 0();  // vtable[63] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    int m_toggle_state;  // +0x80 (128) FIELD_INTEGER  [save-table]
    float f_0b0;  // +0xb0 (176)
    void* m_pfnCallWhenMoveDone;  // +0xdc (220) FIELD_FUNCTION  [save-table]
    Vector m_end;  // +0x10c (268) FIELD_VECTOR  [save-table]
    float f_110;  // +0x110 (272)
    float f_114;  // +0x114 (276)
    Vector m_start;  // +0x118 (280) FIELD_VECTOR  [save-table]
    float f_11c;  // +0x11c (284)
    float f_120;  // +0x120 (288)
    CBaseEntity* m_trackTop;  // +0x124 (292) FIELD_CLASSPTR  [save-table]
    CBaseEntity* m_trackBottom;  // +0x128 (296) FIELD_CLASSPTR  [save-table]
    CBaseEntity* m_train;  // +0x12c (300) FIELD_CLASSPTR  [save-table]
    string_t m_trackTopName;  // +0x130 (304) FIELD_STRING  [save-table]
    string_t m_trackBottomName;  // +0x134 (308) FIELD_STRING  [save-table]
    string_t m_trainName;  // +0x138 (312) FIELD_STRING  [save-table]
    int m_code;  // +0x13c (316) FIELD_INTEGER  [save-table]
    int m_targetState;  // +0x140 (320) FIELD_INTEGER  [save-table]
    int m_use;  // +0x144 (324) FIELD_INTEGER  [save-table]
};
