// telekinesis.h -- CTelekinesis (Freeza: levanta pedras do chao e as lanca) + CRock. RECUPERADO de decomp_raw/CTelekinesis, CRock
#pragma once
#include "chargedattack.h"
#include "explodingattack.h"
class CRock : public CExplodingAttack
{
public:
    void Spawn(void);
    static CRock *CreateRock(Vector vecPos, entvars_t *pevOwner, float flScale, float flRange);
    void Shoot(Vector vecVelocity);
    void RotateThink(void);
    void ExplodeTouch(CBaseEntity *pOther);
    void DrawExplosionFX(int iRadius, Vector vecPos);
};
class CTelekinesis : public CChargedAttack
{
public:
    CRock *m_pRock[6];          // +0x1d4 [OK] pedras levantadas (max 6)
    int    m_iRocks;            // +0x1ec [OK]
    Vector m_vecGround;         // +0x1f0 [OK] ponto do chao abaixo do jogador
    float  m_flRange;           // +0x1fc [OK] raio onde as pedras surgem (padrao 100)
    char   m_fActive;           // +0x204 [OK]
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 7; }
    BOOL Deploy(void);
    void PrimaryAttack(void);
    void Shoot(void);
    virtual void DisableChargeSprite(void);
    virtual void GrowChargeSprite(void);
    virtual void EmitChargeSound(void);
    virtual void EmitShootSound(void);
    virtual void ShootAttack(void);
};
