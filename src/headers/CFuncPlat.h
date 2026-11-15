// CFuncPlat.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFuncPlat : public CBasePlatTrain {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__9CFuncPlat
    virtual void Precache();  // vtable[1] Precache__9CFuncPlat
    virtual void Blocked();  // vtable[45] Blocked__9CFuncPlatP11CBaseEntity
    virtual void GoUp();  // vtable[58] GoUp__9CFuncPlat
    virtual void GoDown();  // vtable[59] GoDown__9CFuncPlat
    virtual void HitTop();  // vtable[60] HitTop__9CFuncPlat
    virtual void HitBottom();  // vtable[61] HitBottom__9CFuncPlat
    virtual void 0();  // vtable[62] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_01c;  // +0x1c (28)
    int f_020;  // +0x20 (32)
    int f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    int f_094;  // +0x94 (148)
    int f_098;  // +0x98 (152)
    float f_09c;  // +0x9c (156)
    int f_0a0;  // +0xa0 (160)
    int f_0a4;  // +0xa4 (164)
    float f_0a8;  // +0xa8 (168)
    int f_0ac;  // +0xac (172)
    float f_0b0;  // +0xb0 (176)
    int f_0d0;  // +0xd0 (208)
    int f_0dc;  // +0xdc (220)
    float f_108;  // +0x108 (264)
};
