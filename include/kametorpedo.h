// kametorpedo.h -- CKameTorpedo (Kamehameha torpedo: varias bolas que depois sao disparadas) + CKameTorpedoAttack. RECUPERADO de decomp_raw/CKameTorpedo*
#pragma once
#include "chargedattack.h"
#include "explodingattack.h"
class CKameTorpedoAttack : public CExplodingAttack
{
public:
    static CKameTorpedoAttack *DropTorpedo(entvars_t *pevOwner, Vector vecOrigin, int iDamage, short sSpriteA, short sSpriteB, short sSpriteTrail, int iRadiusMult, float flScale);
    void Fire(Vector vecVelocity, int iChase);
    BOOL FInViewCone(CBaseEntity *pEntity);
    void ChaseThink(void);
    CBaseEntity *&Target(void) { return *(CBaseEntity **)&m_fReleased; }   // [?] +0x2dc (compartilha o offset de m_fReleased)
};
class CKameTorpedo : public CChargedAttack
{
public:
    CKameTorpedoAttack *m_pTorpedo[6];   // +0x1d4 [OK] torpedos soltos (max 6)
    unsigned short m_usSpriteA, m_usSpriteB, m_usSpriteTrail;   // +0x1ec,+0x1ee,+0x1f0 [OK]
    int m_iTorpedoes;                    // +0x1f4 [OK]
    int m_fCanFire;                      // +0x1f8 [OK]
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 7; }
    virtual BOOL HolsterWhenMeleed(void) { return 1; }   // [OK]
    BOOL Deploy(void);
    void Holster(int skiplocal = 0);
    void WeaponIdle(void);
    void PrimaryAttack(void);
    void SecondaryAttack(void);
    virtual void EmitChargeSound(void);
    virtual void ShootAttack(void);
    void UpdateTorpedoList(void);
};
