// renzoku.h -- CRenzoku (rajada de ki do Vegeta). RECUPERADO de decomp_raw/CRenzoku. Derivada de CChargedAttack.
#pragma once
#include "chargedattack.h"
#include "kiattack.h"
class CRenzoku : public CChargedAttack
{
public:
    int m_iBarrage;                  // +0x1d4 [OK] disparos restantes da rajada
    int m_fHand;                     // +0x1d8 [OK] alterna a mao a cada tiro
    unsigned short m_usSpriteA, m_usSpriteB, m_usSpriteTrail;   // +0x1dc,+0x1de,+0x1e0 [OK]
    virtual void vf_148(void);       // [?] slot 0x148
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 2; }
    BOOL Deploy(void);
    void Holster(int skiplocal = 0);
    void WeaponIdle(void);
    void PrimaryAttack(void);
    void SecondaryAttack(void);
    void Shoot(void);
    virtual void EmitShootSound(void);
    virtual void ShootAttack(void);
};
