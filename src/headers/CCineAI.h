// CCineAI.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CCineAI : public CCineMonster {  // base: SDK
public:
    virtual void PossessEntity();  // vtable[124] PossessEntity__7CCineAI
    virtual void StartSequence();  // vtable[125] StartSequence__7CCineAIP12CBaseMonsterii
    virtual void FCanOverrideState();  // vtable[126] FCanOverrideState__7CCineAI
    virtual void FixScriptMonsterSchedule();  // vtable[127] FixScriptMonsterSchedule__7CCineAIP12CBaseMonster
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    char f_110;  // +0x110 (272)
    int f_2b4;  // +0x2b4 (692)
    int f_2b8;  // +0x2b8 (696)
    int f_2cc;  // +0x2cc (716)
    int f_2d0;  // +0x2d0 (720)
    int f_2d4;  // +0x2d4 (724)
};
