// bigbang.h -- CBigBang/CBigBangAttack (Vegeta) e CFinishingBuster/CFinishingBusterAttack (Trunks). RECUPERADO de decomp_raw.
#pragma once
#include "explodingattack.h"
#include "chargedattack.h"

class CBigBangAttack : public CExplodingAttack      // classname "bigbang"
{
public:
    static CBigBangAttack *ShootBigBang(entvars_t *pevOwner, Vector vecOrigin, Vector vecVelocity, int iDamage,
                                        float flRatio, short sSpriteA, short sSpriteB, short sSpriteTrail);
};
class CBigBang : public CChargedAttack
{
public:
    unsigned short m_usSpriteA, m_usSpriteB, m_usSpriteTrail;    // +0x1d4/+0x1d6/+0x1d8 [OK]
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 5; }
    void EmitChargeSound(void);
    void EmitShootSound(void);
    void ShootAttack(void);
};
class CFinishingBusterAttack : public CExplodingAttack   // classname "finishingbuster"
{
public:
    static CFinishingBusterAttack *ShootFinishingBuster(entvars_t *pevOwner, Vector vecOrigin, Vector vecVelocity, int iDamage,
                                                        float flRatio, short sSpriteA, short sSpriteB, short sSpriteTrail);
};
class CFinishingBuster : public CChargedAttack
{
public:
    unsigned short m_usSpriteA, m_usSpriteB, m_usSpriteTrail;
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 5; }
    void EmitChargeSound(void);
    void EmitShootSound(void);
    void ShootAttack(void);
};
