// friezadisc.h -- CFriezaDisc (Kienzan do Freeza) + CFriezaDiscAttack. RECUPERADO de decomp_raw/CFriezaDisc*
#pragma once
#include "chargedattack.h"
#include "discattack.h"
class CFriezaDiscAttack : public CDiscAttack
{
public:
    static CFriezaDiscAttack *ChargeFriezaDisc(entvars_t *pevOwner, Vector vecOrigin, float flScale);
    void Shoot(Vector vecOrigin, Vector vecVelocity);
    void FollowThink(void);   // disco controlado pelo dono
    void HomeThink(void);     // disco voltando ao dono
    void Returned(void);
};
class CFriezaDisc : public CChargedAttack
{
public:
    int m_iDiscState;                 // +0x1d4 [OK] 0 nada, 1 controlando, 2 voltando, 3 de volta/na mao
    CFriezaDiscAttack *m_pDisc;       // +0x1d8 [OK]
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 5; }
    virtual BOOL HolsterWhenMeleed(void) { return 1; }   // [OK]
    BOOL Deploy(void);
    void Holster(int skiplocal = 0);
    void WeaponIdle(void);
    void PrimaryAttack(void);
    void SecondaryAttack(void);
    virtual void EnableChargeSprite(void);
    virtual void GrowChargeSprite(void);
    virtual void EmitChargeSound(void);
    virtual void EmitShootSound(void);
    virtual void ShootAttack(void);
    void HandleDiscStatus(void);
    void Release(void);
    void StopControl(void);
};
