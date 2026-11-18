// specialbeamcannon.h -- RECUPERADO de decomp_raw/CSpecialBeamCannon (Piccolo/Cell). Derivada de CChargedAttack.
#pragma once
#include "chargedattack.h"
class CSpecialBeamCannonAttack { public: static void ShootSbc(CBasePlayer *pPlayer, Vector *pvecStart, Vector *pvecVel, int iDamage, ...); };  // [?] assinatura (recebe tambem 6 sprites/shorts + 4)
class CSpecialBeamCannon : public CChargedAttack
{
public:
    // [?] campos proprios (0x1d4 sprite, 0x1d8.. modelos/sprites); base: CChargedAttack
    int   f_1d4;
    short m_usTrail, m_usOrbitTrail, m_usSpriteA, m_usSpriteB, m_usOrbitA, m_usOrbitB;   // +0x1d8..+0x1e2
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 4; }
    virtual void InitChargeSprite(void);
    virtual void EnableChargeSprite(void);
    virtual void DisableChargeSprite(void);
    virtual void RemoveChargeSprite(void);
    virtual void EmitChargeSound(void);
    virtual void EmitShootSound(void);
    virtual void ShootAttack(void);
};
