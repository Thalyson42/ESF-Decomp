// CItem.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CItem : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__5CItem
    virtual void Respawn();  // vtable[46] Respawn__5CItem
    virtual void MyTouch();  // vtable[56] MyTouch__5CItemP11CBasePlayer
    virtual void 0();  // vtable[57] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_014;  // +0x14 (20)
    int f_018;  // +0x18 (24)
    void* f_060;  // +0x60 (96)
};
