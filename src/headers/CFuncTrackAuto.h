// CFuncTrackAuto.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFuncTrackAuto : public CFuncTrackChange {  // base: SDK
public:
    virtual void Use();  // vtable[44] Use__14CFuncTrackAutoP11CBaseEntityT18USE_TYPEf
    virtual void UpdateAutoTargets();  // vtable[62] UpdateAutoTargets__14CFuncTrackAutoi
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    int m_toggle_state;  // +0x80 (128) FIELD_INTEGER  [save-table]
    CBaseEntity* m_trackTop;  // +0x124 (292) FIELD_CLASSPTR  [save-table]
    CBaseEntity* m_trackBottom;  // +0x128 (296) FIELD_CLASSPTR  [save-table]
    CBaseEntity* m_train;  // +0x12c (300) FIELD_CLASSPTR  [save-table]
    int m_code;  // +0x13c (316) FIELD_INTEGER  [save-table]
    int m_targetState;  // +0x140 (320) FIELD_INTEGER  [save-table]
    int m_use;  // +0x144 (324) FIELD_INTEGER  [save-table]
};
