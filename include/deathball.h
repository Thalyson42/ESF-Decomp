// deathball.h -- RECUPERADO de decomp_raw/CDeathBall (Frieza). Derivada de CChargedAttack
#pragma once
#include "chargedattack.h"
class CDeathBallAttack { public: static void ShootDeathBall(CBasePlayer *pPlayer, Vector *pvecStart, Vector *pvecVel, int iDamage); };  // [?] assinatura
class CDeathBall : public CChargedAttack
{
public:
    // [?] campos proprios (0x1d4 sprite, 0x1d8.. modelos/sprites); base: CChargedAttack
    int   f_1d4;  int f_1d8;  float f_1e0;
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 6; }
    virtual void InitChargeSprite(void);
    virtual void GrowChargeSprite(void);
    virtual void EnableChargeSprite(void);
    virtual void DisableChargeSprite(void);
    virtual void RemoveChargeSprite(void);
    virtual void EmitChargeSound(void);
    virtual void EmitShootSound(void);
    virtual void ShootAttack(void);
};
