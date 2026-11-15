// CFireAndDie.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFireAndDie : public CBaseDelay {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__11CFireAndDie
    virtual void Precache();  // vtable[1] Precache__11CFireAndDie
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__11CFireAndDie
    virtual void Think();  // vtable[42] Think__11CFireAndDie
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    float m_flDelay;  // +0x64 (100) FIELD_FLOAT  [save-table]
};
