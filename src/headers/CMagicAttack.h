// CMagicAttack.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CMagicAttack : public CBaseMonster {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__12CMagicAttack
    virtual void Precache();  // vtable[1] Precache__12CMagicAttack
    virtual void BloodColor();  // vtable[14] BloodColor__12CMagicAttack
    virtual void SwatAway();  // vtable[124] SwatAway__12CMagicAttackP11CBasePlayeri
    virtual void Remove();  // vtable[125] Remove__12CMagicAttack
    virtual void 0();  // vtable[126] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    int f_2a8;  // +0x2a8 (680)
};
