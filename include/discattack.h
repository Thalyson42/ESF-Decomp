// discattack.h -- CDiscAttack: base dos discos (Destructo Disc, Kienzan do Freeza). RECUPERADO de decomp_raw/CDiscAttack
#pragma once
#include "magicattack.h"
class CDiscAttack : public CMagicAttack
{
public:
    int  m_fReleased;      // +0x2ac [OK] Spawn = 1 (parado/segurado?)  [?] nome
    int  m_fVaporizing;    // +0x2b0 [OK] Spawn = 0
    CBaseEntity *m_pHit;   // +0x2b4 [OK] ultimo alvo tocado
    virtual void Spawn(void);
    virtual int  Classify(void) { return 14; }      // [OK]
    virtual void Remove(void);                      // slot 125
    void HitTouch(CBaseEntity *pOther);
    void Vaporize(void);
    void AuraCheck(void);
};
