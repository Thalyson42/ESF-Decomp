// spiritbombattack.cpp -- RECUPERADO de decomp_raw/CSpiritBombAttack (4 funcoes). [OK] valores do decompilado.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "spiritbombattack.h"

extern int gmsgBall;

CSpiritBombAttack *CSpiritBombAttack::CreateSpiritBomb(entvars_t *pevShooter, Vector vecOrigin, int iSprite)
{
    CSpiritBombAttack *p = GetClassPtr((CSpiritBombAttack *)NULL);   // [OK]
    p->Spawn();                                                      // [OK] slot 0
    p->pev->movetype = MOVETYPE_FLY;                                 // [OK] 5
    p->pev->solid = SOLID_NOT;                                       // [OK] +0x10c = 0
    SET_MODEL(ENT(p->pev), "sprites/null.spr");
    MESSAGE_BEGIN(MSG_ALL, gmsgBall);                                // [OK] tipo 2
        WRITE_SHORT(ENTINDEX(ENT(p->pev)));
        WRITE_SHORT(iSprite);
        WRITE_SHORT(26);                                             // [OK]
    MESSAGE_END();
    p->m_iRadiusMult = 5;                                            // [OK] +0x2d0
    p->m_iExplosionType = 6;                                         // [OK] +0x2d4
    UTIL_SetOrigin(p->pev, vecOrigin);
    p->pev->velocity = Vector(0, 0, 0);                              // [OK]
    p->pev->classname = MAKE_STRING("Spirit Bomb");                  // [OK] string em 0x5a9051
    p->pev->scale = 0.01f;                                           // [OK] +0x144
    p->pev->owner = ENT(pevShooter);                                 // [?] nao visivel no decompilado (a0 e usado so como 'owner')
    p->SetTouch(NULL);                                               // [OK] +0x14/+0x18 zerados
    p->SetThink(&CMagicAttack::NormalThink);                         // [OK]
    return p;
}

void CSpiritBombAttack::Grow(void)
{
    pev->scale += 0.02f;                                             // [OK]
}

void CSpiritBombAttack::ShootSpiritBomb(Vector vecVelocity, int iDamage)
{
    pev->solid = SOLID_TRIGGER;                                      // [OK] +0x10c = 1
    if (iDamage > 9999) iDamage = 9999;
    pev->dmg = (float)iDamage;                                       // [OK] +0x1e0
    pev->velocity = vecVelocity;                                     // [OK]
    m_flSpeed = vecVelocity.Length();                                // [OK] +0x2a8
    pev->angles = UTIL_VecToAngles(vecVelocity);                     // [OK]
    float flSize = (int)(256.0 * pev->scale * 0.5);                  // [OK] hitbox proporcional a escala
    UTIL_SetSize(pev, Vector(-flSize, -flSize, -flSize), Vector(flSize, flSize, flSize));
    SetTouch(&CExplodingAttack::ExplodeTouch);                       // [OK]
    SetThink(&CMagicAttack::NormalThink);                            // [OK]
    pev->nextthink = gpGlobals->time;                                // [OK]
}

CSpiritBombAttack *CSpiritBombAttack::ShootSpiritBomb(entvars_t *pevShooter, Vector vecOrigin, Vector vecVelocity,
                                                      int iDamage, float flScale, int iSprite)
{
    CSpiritBombAttack *p = GetClassPtr((CSpiritBombAttack *)NULL);   // [OK]
    p->Spawn();
    p->pev->movetype = MOVETYPE_FLY;                                 // [OK]
    p->pev->solid = SOLID_TRIGGER;                                   // [OK]
    SET_MODEL(ENT(p->pev), "sprites/null.spr");
    MESSAGE_BEGIN(MSG_ALL, gmsgBall);
        WRITE_SHORT(ENTINDEX(ENT(p->pev)));
        WRITE_SHORT(iSprite);
        WRITE_SHORT(26);
    MESSAGE_END();
    p->m_iRadiusMult = 5;
    p->m_iExplosionType = 6;
    p->pev->velocity = vecVelocity;                                  // [OK]
    p->m_flSpeed = vecVelocity.Length();
    p->pev->angles = UTIL_VecToAngles(vecVelocity);
    p->pev->classname = MAKE_STRING("Spirit Bomb");                  // [OK]
    p->pev->scale = flScale;                                         // [OK] +0x144
    float flSize = (float)(256.0 * flScale * 0.5);                   // [OK]
    UTIL_SetOrigin(p->pev, vecOrigin + vecVelocity.Normalize() * flSize);   // [OK] nasce a 1 raio a frente
    UTIL_SetSize(p->pev, Vector(-flSize, -flSize, -flSize), Vector(flSize, flSize, flSize));
    if (iDamage > 9999) iDamage = 9999;
    p->pev->dmg = (float)iDamage;                                    // [OK]
    p->pev->owner = ENT(pevShooter);                                 // [?]
    p->SetTouch(&CExplodingAttack::ExplodeTouch);
    p->SetThink(&CMagicAttack::NormalThink);
    return p;
}
