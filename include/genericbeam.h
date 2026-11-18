// genericbeam.h -- CGenericBeam (feixe basico, cor conforme aura). RECUPERADO de decomp_raw/CGenericBeam
#pragma once
#include "controlledweapon.h"
class CGenericBall { public: static void ShootGenericBall(CBasePlayer *pPlayer, Vector *pvecStart, Vector *pvecVel, int iDamage); };  // [?] assinatura
class CGenericBeam : public CControlledBeam
{
public:
    unsigned short m_usColor[5][5];   // +0x212.. [OK] indices 265..289 (shorts): [0]=trail [1]=A [2]=B [3]=AStart [4]=BStart, 5 cores
    char  m_fBallCharging;            // +0x210 [OK] 1 = carregando bola (secundario)
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 3; }   // [OK]
    BOOL Deploy(void);
    void PrimaryAttack(void);
    void SecondaryAttack(void);
    void Shoot(void);
    void InitChargeSprite(void);
    void EnableChargeSprite(void);
    void DisableChargeSprite(void);
    void GrowChargeSprite(void);
    void RemoveChargeSprite(void);
    void EmitChargeSound(void);
    void EmitShootSound(void);
};
