// CGlow.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CGlow : public CPointEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__5CGlow
    virtual void Save();  // vtable[3] Save__5CGlowR5CSave
    virtual void Restore();  // vtable[4] Restore__5CGlowR8CRestore
    virtual void Think();  // vtable[42] Think__5CGlow
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    float m_lastTime;  // +0x64 (100) FIELD_TIME  [save-table]
    float m_maxFrame;  // +0x68 (104) FIELD_FLOAT  [save-table]
};
