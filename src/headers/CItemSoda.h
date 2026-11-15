// CItemSoda.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CItemSoda : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__9CItemSoda
    virtual void Precache();  // vtable[1] Precache__9CItemSoda
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    int f_060;  // +0x60 (96)
};
