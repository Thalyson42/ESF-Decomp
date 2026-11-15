// CSprite.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CSprite : public CPointEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__7CSprite
    virtual void Precache();  // vtable[1] Precache__7CSprite
    virtual void Save();  // vtable[3] Save__7CSpriteR5CSave
    virtual void Restore();  // vtable[4] Restore__7CSpriteR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__7CSprite
    virtual void Use();  // vtable[44] Use__7CSpriteP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    float f_064;  // +0x64 (100)
    float f_068;  // +0x68 (104)
};
