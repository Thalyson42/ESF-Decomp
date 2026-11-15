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
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_020;  // +0x20 (32)
    int f_060;  // +0x60 (96)
    int m_toggle_state;  // +0x80 (128) FIELD_INTEGER  [save-table]
    float m_flTWidth;  // +0x94 (148) FIELD_FLOAT  [save-table]
    float m_flTLength;  // +0x98 (152) FIELD_FLOAT  [save-table]
    Vector m_vecPosition1;  // +0x9c (156) FIELD_POSITION_VECTOR  [save-table]
    int f_0a0;  // +0xa0 (160)
    int f_0a4;  // +0xa4 (164)
    Vector m_vecPosition2;  // +0xa8 (168) FIELD_POSITION_VECTOR  [save-table]
    int f_0ac;  // +0xac (172)
    float f_0b0;  // +0xb0 (176)
    float m_flHeight;  // +0xd0 (208) FIELD_FLOAT  [save-table]
    void* m_pfnCallWhenMoveDone;  // +0xdc (220) FIELD_FUNCTION  [save-table]
    float m_volume;  // +0x108 (264) FIELD_FLOAT  [save-table]
};
