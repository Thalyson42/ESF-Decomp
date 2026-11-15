// CPiccolo.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CPiccolo : public CBaseClass {  // base: heuristica
public:
    virtual void GetSoundDir();  // vtable[0] GetSoundDir__8CPiccolo
    virtual void GetStartSpeed();  // vtable[1] GetStartSpeed__8CPiccolo
    virtual void GetStartHealth();  // vtable[2] GetStartHealth__8CPiccolo
    virtual void GetStartPowerLevel();  // vtable[3] GetStartPowerLevel__8CPiccolo
    virtual void GetAscendedClass();  // vtable[5] GetAscendedClass__8CPiccolo
    virtual void GetTransFormPowerLevel();  // vtable[8] GetTransFormPowerLevel__8CPiccolo
    virtual void AddAllAttacks();  // vtable[10] AddAllAttacks__8CPiccolo
    virtual void Classify();  // vtable[11] Classify__8CPiccolo
    virtual void GetAuraSkin();  // vtable[12] GetAuraSkin__8CPiccolo
    virtual void GetModelName();  // vtable[13] GetModelName__8CPiccolo
    virtual void GetKiEfficiency();  // vtable[14] GetKiEfficiency__8CPiccolo
    virtual void GetNumBodySlices();  // vtable[16] GetNumBodySlices__8CPiccolo
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
};
