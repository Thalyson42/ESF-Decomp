// CCell.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CCell : public CBaseClass {  // base: heuristica
public:
    virtual void GetSoundDir();  // vtable[0] GetSoundDir__5CCell
    virtual void GetStartSpeed();  // vtable[1] GetStartSpeed__5CCell
    virtual void GetStartHealth();  // vtable[2] GetStartHealth__5CCell
    virtual void GetStartPowerLevel();  // vtable[3] GetStartPowerLevel__5CCell
    virtual void GetAscendedClass();  // vtable[5] GetAscendedClass__5CCell
    virtual void GetTransFormPowerLevel();  // vtable[8] GetTransFormPowerLevel__5CCell
    virtual void AddAllAttacks();  // vtable[10] AddAllAttacks__5CCell
    virtual void Classify();  // vtable[11] Classify__5CCell
    virtual void GetAuraSkin();  // vtable[12] GetAuraSkin__5CCell
    virtual void GetModelName();  // vtable[13] GetModelName__5CCell
    virtual void GetKiEfficiency();  // vtable[14] GetKiEfficiency__5CCell
    virtual void GetNumBodySlices();  // vtable[16] GetNumBodySlices__5CCell
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
};
