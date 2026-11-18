// destructodisc.h -- CDestructoDisc (Kuririn) + CDestructoDiscAttack. RECUPERADO de decomp_raw/CDestructoDisc*
#pragma once
#include "chargedattack.h"
#include "discattack.h"
class CDestructoDiscAttack : public CDiscAttack
{
public:
    static CDestructoDiscAttack *ChargeDestructoDisc(entvars_t *pevOwner, Vector vecOrigin, float flScale);
    void Shoot(Vector vecOrigin, Vector vecVelocity);
    void RandomRotateThink(void);
};
class CDestructoDisc : public CChargedAttack
{
public:
    CDestructoDiscAttack *m_pDisc;   // +0x1d4 [OK] disco atual
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 5; }
    virtual BOOL HolsterWhenMeleed(void) { return 1; }   // [OK] vtable do CBasePlayerWeapon
    BOOL Deploy(void);
    void Holster(int skiplocal = 0);
    virtual void EnableChargeSprite(void);
    virtual void GrowChargeSprite(void);
    virtual void EmitChargeSound(void);
    virtual void EmitShootSound(void);
    virtual void ShootAttack(void);
};
