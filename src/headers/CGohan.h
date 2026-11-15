// CGohan.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CGohan : public CBaseClass {  // base: heuristica
public:
    virtual void GetSoundDir();  // vtable[0] GetSoundDir__6CGohan
    virtual void GetStartSpeed();  // vtable[1] GetStartSpeed__6CGohan
    virtual void GetStartHealth();  // vtable[2] GetStartHealth__6CGohan
    virtual void GetStartPowerLevel();  // vtable[3] GetStartPowerLevel__6CGohan
    virtual void GetAscendedClass();  // vtable[5] GetAscendedClass__6CGohan
    virtual void GetTransFormPowerLevel();  // vtable[8] GetTransFormPowerLevel__6CGohan
    virtual void AddAllAttacks();  // vtable[10] AddAllAttacks__6CGohan
    virtual void Classify();  // vtable[11] Classify__6CGohan
    virtual void GetAuraSkin();  // vtable[12] GetAuraSkin__6CGohan
    virtual void GetModelName();  // vtable[13] GetModelName__6CGohan
    virtual void GetKiEfficiency();  // vtable[14] GetKiEfficiency__6CGohan
    virtual void GetNumBodySlices();  // vtable[16] GetNumBodySlices__6CGohan
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
};
