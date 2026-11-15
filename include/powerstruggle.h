// powerstruggle.h -- "Power Struggle": disputa entre feixes que se encontram. RECUPERADO À MÃO.
// Offsets do hl_i386.so. A força de cada feixe é pev->dmg (entvars +0x1e0).
#pragma once
#include "magicattack.h"

class CExplodingAttack;

struct PSNode { PSNode *pNext; CExplodingAttack *pAttack; };   // nó de 8 bytes ([OK] __builtin_new(8))

class CPowerStruggle : public CMagicAttack
{
public:
    static CPowerStruggle *CreatePowerStruggle(CExplodingAttack *a, CExplodingAttack *b);
    void  AddAttack(CExplodingAttack *pAttack);
    BOOL  IsFull(void);
    BOOL  InStruggle(entvars_t *pevAttack);
    CExplodingAttack *GetStrongestAttack(void);
    void  PSThink(void);
    virtual void Remove(void);

    PSNode *m_pAttacks;          // +0x2ac  lista encadeada (inserção na frente)
    int     m_iNumAttacks;       // +0x2b0
    float   m_flStalemateTime;   // +0x2b4  tempo acumulado com velocidade resultante < 5
};

// Campos que o struggle usa na CExplodingAttack:
//   +0x2ac int  m_fInStruggle      +0x2b8 float m_flStruggleRatio (velocidade assinada)
//   +0x2c0 CPowerStruggle *m_pStruggle
