// CFuncPlatRot.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFuncPlatRot : public CFuncPlat {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__12CFuncPlatRot
    virtual void Save();  // vtable[3] Save__12CFuncPlatRotR5CSave
    virtual void Restore();  // vtable[4] Restore__12CFuncPlatRotR8CRestore
    virtual void GoUp();  // vtable[58] GoUp__12CFuncPlatRot
    virtual void GoDown();  // vtable[59] GoDown__12CFuncPlatRot
    virtual void HitTop();  // vtable[60] HitTop__12CFuncPlatRot
    virtual void HitBottom();  // vtable[61] HitBottom__12CFuncPlatRot
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    Vector m_vecFinalAngle;  // +0xf0 (240) FIELD_VECTOR  [save-table]
    Vector m_end;  // +0x10c (268) FIELD_VECTOR  [save-table]
    int f_110;  // +0x110 (272)
    int f_114;  // +0x114 (276)
    Vector m_start;  // +0x118 (280) FIELD_VECTOR  [save-table]
    int f_11c;  // +0x11c (284)
    int f_120;  // +0x120 (288)
};
