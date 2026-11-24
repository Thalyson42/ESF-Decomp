// kiblast.h -- CKiBlast (arma "kiblast": tiros de ki rapidos). RECUPERADO de decomp_raw/CKiBlast.
#pragma once
#include "kiattack.h"
class CKiBlast : public CBasePlayerWeapon
{
public:
    int   m_fHand;                                  // +0xc4 [OK] alterna a mao no tiro secundario
    unsigned short m_usSpriteA, m_usSpriteB, m_usSpriteTrail;   // +0xc8,+0xca,+0xcc [OK]
    float GetPowerRatio(void) { return m_pPlayer->GetPowerRatio(); }
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 2; }
    BOOL Deploy(void);
    void Holster(int skiplocal = 0);
    void PrimaryAttack(void);
    void SecondaryAttack(void);
};
