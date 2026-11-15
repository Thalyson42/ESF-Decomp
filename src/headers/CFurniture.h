// CFurniture.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFurniture : public CBaseMonster {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__10CFurniture
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__10CFurniture
    virtual void Classify();  // vtable[8] Classify__10CFurniture
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
};
