// spiritbombattack.h -- CSpiritBombAttack (Genki Dama). RECUPERADO de decomp_raw/CSpiritBombAttack.
#pragma once
#include "explodingattack.h"
class CSpiritBombAttack : public CExplodingAttack   // [OK] usa ExplodeTouch e NormalThink
{
public:
    int m_iRadiusMult;       // +0x2d0 [OK] = 5
    int m_iExplosionType;    // +0x2d4 [OK] = 6
    static CSpiritBombAttack *CreateSpiritBomb(entvars_t *pevShooter, Vector vecOrigin, int iSprite);          // modo 1 (bola parada sobre o jogador)
    void ShootSpiritBomb(Vector vecVelocity, int iDamage);                                                    // modo 1: lanca a bola
    static CSpiritBombAttack *ShootSpiritBomb(entvars_t *pevShooter, Vector vecOrigin, Vector vecVelocity, int iDamage, float flScale, int iSprite);   // modo 2 (bola pequena)
    void Grow(void);
};
