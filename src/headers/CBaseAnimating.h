// CBaseAnimating.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBaseAnimating : public CBaseDelay {  // base: SDK
public:
    virtual void Save();  // vtable[3] Save__14CBaseAnimatingR5CSave
    virtual void Restore();  // vtable[4] Restore__14CBaseAnimatingR8CRestore
    virtual void HandleAnimEvent();  // vtable[56] HandleAnimEvent__14CBaseAnimatingP14MonsterEvent_t
    virtual void 0();  // vtable[57] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    float m_flFrameRate;  // +0x6c (108) FIELD_FLOAT  [save-table]
    float m_flGroundSpeed;  // +0x70 (112) FIELD_FLOAT  [save-table]
    float m_flLastEventCheck;  // +0x74 (116) FIELD_TIME  [save-table]
    BOOL m_fSequenceFinished;  // +0x78 (120) FIELD_BOOLEAN  [save-table]
    BOOL m_fSequenceLoops;  // +0x7c (124) FIELD_BOOLEAN  [save-table]
};
