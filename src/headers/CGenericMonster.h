// CGenericMonster.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CGenericMonster : public CBaseMonster {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__15CGenericMonster
    virtual void Precache();  // vtable[1] Precache__15CGenericMonster
    virtual void Classify();  // vtable[8] Classify__15CGenericMonster
    virtual void HandleAnimEvent();  // vtable[56] HandleAnimEvent__15CGenericMonsterP14MonsterEvent_t
    virtual void SetYawSpeed();  // vtable[96] SetYawSpeed__15CGenericMonster
    virtual void ISoundMask();  // vtable[106] ISoundMask__15CGenericMonster
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    float f_168;  // +0x168 (360)
    int f_180;  // +0x180 (384)
    int f_278;  // +0x278 (632)
};
