// burningattack.h -- CBurningAttack (arma do Trunks) + CBurningBeam (feixe guiado que explode em area). RECUPERADO.
#pragma once
#include "controlledweapon.h"
class CBurningBeam : public CGuidedAttack
{
public:
    static CBurningBeam *ShootBurningBeam(entvars_t *pevShooter, Vector vecOrigin, Vector vecDir, int iDamage,
                                          char *szClassname, float flScale, int iUnused,
                                          short s1, short s2, short s3, short s4, short s5,
                                          int iRadiusMult, float flTurnRate, int iTrail1);
    virtual void Explode(void);          // dano em area extra (bits 0x1000000) antes da explosao normal
};
class CBurningAttack : public CControlledBeam
{
public:
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 4; }
    void CreateBeam(Vector vecOrigin, Vector vecDir, float flRatio);
    void EmitChargeSound(void);
    void EmitShootSound(void);
};
