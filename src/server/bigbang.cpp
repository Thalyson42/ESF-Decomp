// bigbang.cpp -- CBigBang 7/7, CBigBangAttack 1/1, CFinishingBuster 7/7, CFinishingBusterAttack 1/1. RECUPERADO. [OK] = conferido.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "player_esf_manual.h"
#include "bigbang.h"

extern int gmsgFlare;

// corpo comum de ShootBigBang / ShootFinishingBuster (so mudam: classname, tamanho da esfera 70/50)
template <class T>
static T *ShootBallAttack(entvars_t *pevOwner, Vector vecOrigin, Vector vecVelocity, int iDamage, float flRatio,
                          short sA, short sB, short sTrail, const char *szClass, float flSizeMult)
{
    T *p = GetClassPtr((T *)NULL);
    p->Spawn();                                      // [OK] slot 0
    p->pev->movetype = MOVETYPE_FLY;
    p->pev->solid = SOLID_TRIGGER;
    SET_MODEL(ENT(p->pev), "sprites/null.spr");
    p->m_iExplosionType = 0;                         // [OK] +0x2d4
    p->m_iRadiusMult = 6;                            // [OK] +0x2d0
    if (iDamage > 9999) iDamage = 9999;
    p->pev->dmg = (float)iDamage;
    p->pev->velocity = vecVelocity;
    p->m_flSpeed = vecVelocity.Length();
    p->pev->angles = UTIL_VecToAngles(vecVelocity);
    p->pev->owner = ENT(pevOwner);
    p->pev->classname = MAKE_STRING(szClass);
    float flSize = flRatio * flSizeMult;
    float flRadius = 0.25f * flSize;
    Vector vecPos = vecOrigin + vecVelocity.Normalize() * flRadius;
    UTIL_SetOrigin(p->pev, vecPos);
    UTIL_SetSize(p->pev, Vector(-flRadius, -flRadius, -flRadius), Vector(flRadius, flRadius, flRadius));
    p->SetTouch(&CExplodingAttack::ExplodeTouch);
    MESSAGE_BEGIN(MSG_ALL, gmsgFlare);               // [OK] tipo 2
        WRITE_LONG(ENTINDEX(ENT(p->pev)));
        WRITE_SHORT(sA);
        WRITE_SHORT(sB);
        WRITE_SHORT((int)(0.1 * flSize));
        WRITE_SHORT(sTrail);
        WRITE_SHORT((int)(flRatio * 80.0));
        WRITE_COORD(vecOrigin.x); WRITE_COORD(vecOrigin.y); WRITE_COORD(vecOrigin.z);
    MESSAGE_END();
    p->SetThink(&CMagicAttack::NormalThink);
    p->pev->nextthink = gpGlobals->time;
    return p;
}

CBigBangAttack *CBigBangAttack::ShootBigBang(entvars_t *pevOwner, Vector vecOrigin, Vector vecVelocity, int iDamage,
                                             float flRatio, short sA, short sB, short sTrail)
{
    return ShootBallAttack<CBigBangAttack>(pevOwner, vecOrigin, vecVelocity, iDamage, flRatio, sA, sB, sTrail, "bigbang", 70.0f);   // [OK] 70
}

CFinishingBusterAttack *CFinishingBusterAttack::ShootFinishingBuster(entvars_t *pevOwner, Vector vecOrigin, Vector vecVelocity,
        int iDamage, float flRatio, short sA, short sB, short sTrail)
{
    return ShootBallAttack<CFinishingBusterAttack>(pevOwner, vecOrigin, vecVelocity, iDamage, flRatio, sA, sB, sTrail, "finishingbuster", 50.0f);   // [OK] 50
}

// ---------- armas ----------
#define CHARGED_SHOOT(Cls, AttackCall, Mult)                                                                        \
void Cls::ShootAttack(void)                                                                                          \
{                                                                                                                    \
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);                                                                       \
    Vector vecSrc = m_pPlayer->GetGunPosition() + gpGlobals->v_right * 10 + gpGlobals->v_forward * 10;   /* [OK] */  \
    Vector vecVel = gpGlobals->v_forward * 1900;                                                                     \
    float flRatio = m_iCharge / 30.0;                                                                                \
    int iDamage = (int)(GetPowerRatio() * (m_iCharge * Mult));                                                       \
    AttackCall(m_pPlayer->pev, vecSrc, vecVel, iDamage, flRatio, m_usSpriteA, m_usSpriteB, m_usSpriteTrail);        \
}

CHARGED_SHOOT(CBigBang, CBigBangAttack::ShootBigBang, 4)                    // [OK] dano = poder * carga * 4
CHARGED_SHOOT(CFinishingBuster, CFinishingBusterAttack::ShootFinishingBuster, 3)   // [OK] * 3

void CBigBang::Spawn(void)
{
    Precache();
    m_iId = 13;
    m_iDefaultAmmo = 0;
    m_iClip = -1;
    m_iMaxCharge = 30;                               // [OK] +0xc8
    m_iKiCost = 25;                                  // [OK] +0xd0
    f_0cc = 0;
    strcpy(m_szWeaponName, "bigbang");               // [OK] +0xd4
    FallInit();
}
void CBigBang::Precache(void)
{
    m_usSpriteA = PRECACHE_MODEL("sprites/bigbanga.spr");
    m_usSpriteB = PRECACHE_MODEL("sprites/bigbangb.spr");
    m_usSpriteTrail = PRECACHE_MODEL("sprites/bigbangtrail.spr");
    PRECACHE_SOUND("vegeta/bigbang.wav");
    PRECACHE_SOUND("vegeta/bigbang_charge.wav");
    PRECACHE_SOUND("weapons/bigbang_fire.wav");
}
int CBigBang::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki"; p->iMaxAmmo1 = -1; p->pszAmmo2 = NULL; p->iMaxAmmo2 = -1; p->iMaxClip = -1;
    p->iSlot = 4; p->iPosition = 4;                  // [OK]
    m_iId = p->iId = 13;
    p->iFlags = 0; p->iWeight = 10;
    return 1;
}
void CBigBang::EmitChargeSound(void) { m_pPlayer->EmitClassSound("bigbang_charge.wav"); }
void CBigBang::EmitShootSound(void)
{
    m_pPlayer->EmitClassSound("bigbang.wav");
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/bigbang_fire.wav", 1.0, 0.8, 0, 100);
}

void CFinishingBuster::Spawn(void)
{
    Precache();
    m_iId = 24;
    m_iDefaultAmmo = 0;
    m_iClip = -1;
    m_iMaxCharge = 30;
    m_iKiCost = 25;
    f_0cc = 0;
    strcpy(m_szWeaponName, "finishingbuster");       // [OK] +0xd4
    FallInit();
}
void CFinishingBuster::Precache(void)
{
    m_usSpriteA = PRECACHE_MODEL("sprites/finishingbustera.spr");
    m_usSpriteB = PRECACHE_MODEL("sprites/finishingbusterb.spr");
    m_usSpriteTrail = PRECACHE_MODEL("sprites/finishingbustertrail.spr");
    PRECACHE_SOUND("weapons/buster_fire.wav");
    PRECACHE_SOUND("trunks/buster.wav");
    PRECACHE_SOUND("trunks/buster_charge.wav");
}
int CFinishingBuster::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki"; p->iMaxAmmo1 = -1; p->pszAmmo2 = NULL; p->iMaxAmmo2 = -1; p->iMaxClip = -1;
    p->iSlot = 4; p->iPosition = 6;
    m_iId = p->iId = 24;
    p->iFlags = 0; p->iWeight = 10;
    return 1;
}
void CFinishingBuster::EmitChargeSound(void) { m_pPlayer->EmitClassSound("buster_charge.wav"); }
void CFinishingBuster::EmitShootSound(void)
{
    m_pPlayer->EmitClassSound("buster.wav");
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/buster_fire.wav", 1.0, 0.8, 0, 100);
}
