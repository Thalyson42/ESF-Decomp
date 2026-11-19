// kiattack.h -- CKiAttack: bolas de ki simples (Renzoku, KiBlast...). RECUPERADO de decomp_raw/CKiAttack
#pragma once
#include "explodingattack.h"
class CKiAttack : public CExplodingAttack
{
public:
    static CKiAttack *ShootKiAttack(entvars_t *pevShooter, Vector vecOrigin, Vector vecVelocity, int iDamage, short sSpriteA, short sSpriteB, short sSpriteTrail);
    static CKiAttack *ShootCurvedKiAttack(entvars_t *pevShooter, Vector vecOrigin, Vector vecVelocity, int iDamage, short sSpriteA, short sSpriteB, short sSpriteTrail);
    void CurveThink(void);
    void DrawExplosionFX(int iType, Vector vecOrigin);
    float GetExplosionRadius(void);
};
