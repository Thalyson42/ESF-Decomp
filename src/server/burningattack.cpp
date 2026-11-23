// burningattack.cpp -- CBurningAttack 7/7 e CBurningBeam 2/2. RECUPERADO de decomp_raw. [OK] = conferido.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "player_esf_manual.h"
#include "burningattack.h"

// ---------- CBurningBeam ----------
CBurningBeam *CBurningBeam::ShootBurningBeam(entvars_t *pevShooter, Vector vecOrigin, Vector vecDir, int iDamage,
        char *szClassname, float flScale, int iUnused, short s1, short s2, short s3, short s4, short s5,
        int iRadiusMult, float flTurnRate, int iTrail1)
{
    CBurningBeam *p = GetClassPtr((CBurningBeam *)NULL);
    p->Spawn();                                       // [OK] slot 0
    p->m_fRemoveOnVaporize = 0;                       // [OK] +0x2c8
    p->pev->movetype = MOVETYPE_FLY;
    p->pev->solid = SOLID_TRIGGER;
    SET_MODEL(ENT(p->pev), "sprites/null.spr");
    p->m_iRadiusMult = iRadiusMult;                   // [OK] +0x2d0
    p->m_iExplosionType = 4;                          // [OK] +0x2d4 (fixo; o parametro 7 nao e usado)
    p->m_flTurnRate = flTurnRate;                     // [OK] +0x2e0
    if (iDamage > 9999) iDamage = 9999;
    p->pev->dmg = (float)iDamage;
    p->pev->velocity = vecDir;
    p->m_flSpeed = vecDir.Length();
    p->pev->angles = UTIL_VecToAngles(vecDir);
    p->pev->owner = ENT(pevShooter);
    p->pev->classname = MAKE_STRING(szClassname);
    float flSize = 50.0f * flScale * 0.25f;
    Vector vecStep = vecDir.Normalize() * flSize;
    TraceResult tr;
    UTIL_TraceLine(vecOrigin, vecOrigin + vecStep, ignore_monsters, ENT(pevShooter), &tr);
    vecOrigin = vecOrigin + vecStep * tr.flFraction;  // [OK] nao nasce dentro de parede
    UTIL_SetOrigin(p->pev, vecOrigin);
    UTIL_SetSize(p->pev, Vector(-flSize, -flSize, -flSize), Vector(flSize, flSize, flSize));
    p->SetTouch(&CExplodingAttack::ExplodeTouch);
    p->SetThink(&CGuidedAttack::FollowThink);         // [OK]
    p->pev->nextthink = gpGlobals->time;
    EMIT_SOUND_DYN(ENT(p->pev), CHAN_WEAPON, "weapons/beamhead.wav", 1.0, 0.8, 0, 100);
    p->AddEntEntTrail(ENTINDEX(ENT(pevShooter)), (int)(50.0f * flScale), s1, s5, s4, s3, s2, iTrail1, 2, vecOrigin);   // [OK] (ordem como em ShootGuidedMagic)
    return p;
}

void CBurningBeam::Explode(void)
{
    entvars_t *pevAttacker = pev->owner ? VARS(pev->owner) : NULL;       // [OK] +0x198
    ::RadiusDamage(pev->origin, pev, pevAttacker, pev->dmg, pev->dmg * 5.0, CLASS_NONE, 0x1000000);   // [OK] raio = 5x o dano
    CExplodingAttack::Explode();
}

// ---------- CBurningAttack ----------
void CBurningAttack::Spawn(void)
{
    Precache();                                       // [OK] vtable slot 1
    m_iAttackState = 0;                               // [OK] +0xc4
    m_iCharge = 0;                                    // [OK] +0xd8
    m_pBeam = NULL;                                   // [OK] +0xc8
    m_iId = 18;                                       // [OK]
    m_iDefaultAmmo = 0;
    m_iClip = -1;
    m_iMaxCharge = 12;                                // [OK] +0xdc
    m_iBeamSpeed = 1800;                              // [OK] +0xe0
    m_iKiCost = 26;                                   // [OK] +0xe4
    m_iDmgPerCharge = 2;                              // [OK] +0xe8
    f_0ec = 5;                                        // [OK]
    m_flChargeSpeedMult = 0;                          // [OK] +0xf0
    strcpy((char *)this + 0xf4, "burningattack");     // [OK] 13 chars: o terminador cai em +0x100 (o array declarado so tem 12)
    f_1f4 = 0.25f;
    f_1fc = 4;
    f_1f8 = 1;
    FallInit();
}

void CBurningAttack::Precache(void)
{
    m_usSpriteAStart = PRECACHE_MODEL("sprites/burningattackastart.spr");
    m_usSpriteBStart = PRECACHE_MODEL("sprites/burningattackbstart.spr");
    m_usSpriteA = PRECACHE_MODEL("sprites/burningattacka.spr");
    m_usSpriteB = PRECACHE_MODEL("sprites/burningattackb.spr");
    PRECACHE_SOUND("weapons/burning_fire.wav");
    PRECACHE_SOUND("weapons/burning_charge.wav");
    PRECACHE_SOUND("trunks/burning_charge.wav");
    PRECACHE_SOUND("trunks/burning.wav");
    m_usTrailSprite = PRECACHE_MODEL("sprites/burningattacktrail.spr");
    CControlledBeam::Precache();                      // [OK]
}

int CBurningAttack::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki"; p->iMaxAmmo1 = -1; p->pszAmmo2 = NULL; p->iMaxAmmo2 = -1; p->iMaxClip = -1;
    p->iSlot = 3; p->iPosition = 3;
    m_iId = p->iId = 18;
    p->iFlags = 0; p->iWeight = 5;
    return 1;
}

void CBurningAttack::CreateBeam(Vector vecOrigin, Vector vecDir, float flRatio)
{
    int dmg = (int)(GetPowerRatio() * (float)(m_iDmgPerCharge * m_iCharge));   // [OK] +0xe8 * +0xd8
    m_pBeam = CBurningBeam::ShootBurningBeam(m_pPlayer->pev, vecOrigin, vecDir, dmg,
                  (char *)this + 0xf4, flRatio, f_1fc,
                  m_usTrailSprite, m_usSpriteAStart, m_usSpriteBStart, m_usSpriteA, m_usSpriteB,
                  f_0ec, f_1f4, f_1f8);
}

void CBurningAttack::EmitChargeSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/burning_charge.wav", 1.0, 0.8, 0, 100);
    m_pPlayer->EmitClassSound("burning_charge.wav");
}
void CBurningAttack::EmitShootSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/burning_fire.wav", 1.0, 0.8, 0, 100);
    m_pPlayer->EmitClassSound("burning.wav");
}
