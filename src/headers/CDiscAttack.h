// CDiscAttack.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CDiscAttack : public CMagicAttack {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__11CDiscAttack
    virtual void Classify();  // vtable[8] Classify__11CDiscAttack
    virtual void Remove();  // vtable[125] Remove__11CDiscAttack
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    int f_2ac;  // +0x2ac (684)
    int f_2b0;  // +0x2b0 (688)
    void* f_2b4;  // +0x2b4 (692)
};
