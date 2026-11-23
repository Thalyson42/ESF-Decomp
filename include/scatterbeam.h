// scatterbeam.h -- CScatterBeam (arma do Krillin), CScatterAttack (raio principal) e CScatterSplit (raios secundarios). RECUPERADO.
#pragma once
#include "explodingattack.h"
#include "chargedattack.h"
// campos de CScatterAttack acessados por offset (o layout de CExplodingAttack termina antes de 0x2dc)
#define SA_S(p, off) (*(short *)((char *)(p) + (off)))
enum { SA_TRAIL = 0x2dc, SA_SPRITE_A = 0x2de, SA_SPRITE_B = 0x2e0, SA_RATIO = 0x2e4, SA_HITS = 0x2e8, SA_NHITS = 0x3b0 };

class CScatterAttack : public CExplodingAttack     // classname "Scatter Beam"; 25 alvos max em m_hHit[] (+0x2e8, EHANDLE de 8 bytes)
{
public:
    static CScatterAttack *ShootScatterBeam(entvars_t *pevOwner, Vector vecOrigin, Vector vecVelocity, int iDamage,
                                            short sSpriteA, short sSpriteB, short sSpriteTrail, float flRatio);
    void SplitThink(void);
    BOOL FInViewCone(CBaseEntity *pEntity);
};
class CScatterSplit : public CExplodingAttack      // classname "Scattering Beam"; persegue 1 alvo (EHANDLE em +0x2dc)
{
public:
    EHANDLE m_hTarget;                              // +0x2dc [OK]
    static CScatterSplit *ShootScatterSplit(entvars_t *pevOwner, Vector vecOrigin, Vector vecVelocity, int iDamage,
                                            short sSpriteA, short sSpriteB, short sSpriteTrail, float flRatio, CBasePlayer *pTarget);
    void ChaseThink(void);
    BOOL FInViewCone(CBaseEntity *pEntity);
};
class CScatterBeam : public CChargedAttack
{
public:
    unsigned short m_usSpriteTrail, m_usSpriteA, m_usSpriteB;    // +0x1d4/+0x1d6/+0x1d8 [OK]
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 7; }
    void EmitChargeSound(void);
    void EmitShootSound(void);
    void ShootAttack(void);
};
