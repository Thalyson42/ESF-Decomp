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
    float f_06c;  // +0x6c (108)
    float f_074;  // +0x74 (116)
    int f_078;  // +0x78 (120)
    int f_07c;  // +0x7c (124)
};
