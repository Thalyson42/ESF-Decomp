// scatterbeam.cpp -- CScatterBeam 7/7, CScatterAttack 3/3, CScatterSplit 3/3. RECUPERADO de decomp_raw. [OK] = conferido.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "player_esf_manual.h"
#include "scatterbeam.h"

extern int gmsgFlare;

static void FlareMsg(CBaseEntity *p, short a, short b, int iSize, short trail, int iLife, const Vector &vecPos)
{
    MESSAGE_BEGIN(MSG_ALL, gmsgFlare);              // [OK] tipo 2
        WRITE_LONG(ENTINDEX(ENT(p->pev)));
        WRITE_SHORT(a);
        WRITE_SHORT(b);
        WRITE_SHORT(iSize);
        WRITE_SHORT(trail);
        WRITE_SHORT(iLife);
        WRITE_COORD(vecPos.x); WRITE_COORD(vecPos.y); WRITE_COORD(vecPos.z);
    MESSAGE_END();
}

// ---------- CScatterAttack ----------
CScatterAttack *CScatterAttack::ShootScatterBeam(entvars_t *pevOwner, Vector vecOrigin, Vector vecVelocity, int iDamage,
                                                 short sSpriteA, short sSpriteB, short sSpriteTrail, float flRatio)
{
    CScatterAttack *p = GetClassPtr((CScatterAttack *)NULL);
    p->Spawn();                                      // [OK] slot 0
    *(int *)((char *)p + SA_NHITS) = 0;              // [OK] +0x3b0
    SA_S(p, SA_TRAIL) = sSpriteTrail;                // [OK] +0x2dc
    SA_S(p, SA_SPRITE_A) = sSpriteA;                 // [OK] +0x2de
    SA_S(p, SA_SPRITE_B) = sSpriteB;                 // [OK] +0x2e0
    p->pev->movetype = MOVETYPE_FLY;
    p->pev->solid = SOLID_TRIGGER;
    SET_MODEL(ENT(p->pev), "sprites/null.spr");
    p->m_iExplosionType = 4;                         // [OK] +0x2d4
    p->m_iRadiusMult = 2;                            // [OK] +0x2d0
    if (iDamage > 9999) iDamage = 9999;
    p->pev->dmg = (float)iDamage;                    // [OK] +0x1e0
    p->pev->velocity = vecVelocity;
    p->m_flSpeed = vecVelocity.Length();             // [OK] +0x2a8
    p->pev->angles = UTIL_VecToAngles(vecVelocity);
    p->pev->owner = ENT(pevOwner);                   // [OK] +0x198
    p->pev->classname = MAKE_STRING("Scatter Beam"); // [OK] string em 0x1a7130
    *(float *)((char *)p + SA_RATIO) = flRatio;      // [OK] +0x2e4
    float flSize = flRatio * 80.0f;
    float flRadius = 0.25f * flSize;
    vecOrigin = vecOrigin + vecVelocity.Normalize() * flRadius;
    UTIL_SetOrigin(p->pev, vecOrigin);
    UTIL_SetSize(p->pev, Vector(-flRadius, -flRadius, -flRadius), Vector(flRadius, flRadius, flRadius));
    p->SetTouch(&CExplodingAttack::ExplodeTouch);
    FlareMsg(p, sSpriteA, sSpriteB, (int)(0.1 * flSize), sSpriteTrail, (int)(flRatio * 300.0), vecOrigin);   // [OK]
    p->SetThink(&CScatterAttack::SplitThink);
    p->pev->nextthink = gpGlobals->time + 0.3;       // [OK]
    p->m_flFieldOfView = 0.5f;                       // [OK] +0x168
    return p;
}

BOOL CScatterAttack::FInViewCone(CBaseEntity *pEntity)   // [OK] igual ao CBaseMonster, mas dentro do campo m_flFieldOfView
{
    UTIL_MakeVectors(pev->angles);
    Vector2D vec2;
    Vector vecDir = (pEntity->pev->origin - pev->origin).Normalize();
    return DotProduct(vecDir, gpGlobals->v_forward) > m_flFieldOfView;
}

void CScatterAttack::SplitThink(void)
{
    entvars_t *pevOwner = VARS(pev->owner);
    int *pnHits = (int *)((char *)this + SA_NHITS);
    EHANDLE *hHit = (EHANDLE *)((char *)this + SA_HITS);
    if (pev->owner)
    {
        if (!pevOwner)
        {
            SetThink(&CMagicAttack::NormalThink);    // [OK] sem dono: vira ataque normal
            pev->nextthink = gpGlobals->time;
            return;
        }
        if (*pnHits <= 24)
        {
            for (int i = 1; i <= gpGlobals->maxClients; i++)
            {
                CBasePlayer *pPlayer = (CBasePlayer *)UTIL_PlayerByIndex(i);
                if (!pPlayer || !pPlayer->IsAlive()) continue;
                if (pPlayer->pev == pevOwner) continue;
                if (pPlayer->pev->team == pevOwner->team && g_pGameRules->IsTeamplay()) continue;   // [OK] +0x1ac, vtable +0x20
                if (!FInViewCone(pPlayer)) continue;                                         // [OK] vtable +0x118
                BOOL fAlready = FALSE;
                for (int j = 0; j < *pnHits; j++)
                    if ((CBaseEntity *)hHit[j] == pPlayer) { fAlready = TRUE; break; }
                if (fAlready) continue;
                CScatterSplit::ShootScatterSplit(pevOwner, pev->origin, pev->velocity, (int)(pev->dmg * 0.5),
                                                 SA_S(this, SA_SPRITE_A), SA_S(this, SA_SPRITE_B), SA_S(this, SA_TRAIL),
                                                 *(float *)((char *)this + SA_RATIO), pPlayer);
                hHit[*pnHits] = pPlayer;             // [OK] registra o alvo
                (*pnHits)++;
                break;                               // [OK] um alvo novo por think
            }
        }
    }
    DrawBubbles();
    pev->nextthink = gpGlobals->time + 0.2;
}

// ---------- CScatterSplit ----------
CScatterSplit *CScatterSplit::ShootScatterSplit(entvars_t *pevOwner, Vector vecOrigin, Vector vecVelocity, int iDamage,
        short sSpriteA, short sSpriteB, short sSpriteTrail, float flRatio, CBasePlayer *pTarget)
{
    ALERT(at_console, "split\n");                    // [OK]
    CScatterSplit *p = GetClassPtr((CScatterSplit *)NULL);
    p->Spawn();
    p->pev->movetype = MOVETYPE_FLY;
    p->pev->solid = SOLID_NOT;                       // [OK] +0x10c = 0 ate o fim
    SET_MODEL(ENT(p->pev), "sprites/null.spr");
    p->m_iExplosionType = 4;
    p->m_iRadiusMult = 2;
    if (iDamage > 9999) iDamage = 9999;
    p->pev->dmg = (float)iDamage;
    p->pev->velocity = vecVelocity;
    p->m_flSpeed = vecVelocity.Length();
    p->pev->angles = UTIL_VecToAngles(vecVelocity);
    p->pev->owner = ENT(pevOwner);
    p->pev->classname = MAKE_STRING("Scattering Beam");   // [OK] string em 0x1a70ed
    float flSize = flRatio * 50.0f;
    float flRadius = 0.25f * flSize;
    vecOrigin = vecOrigin + vecVelocity.Normalize() * flRadius;
    UTIL_SetOrigin(p->pev, vecOrigin);
    UTIL_SetSize(p->pev, Vector(-flRadius, -flRadius, -flRadius), Vector(flRadius, flRadius, flRadius));
    FlareMsg(p, sSpriteA, sSpriteB, (int)(0.1 * flSize), sSpriteTrail, (int)(flRatio * 150.0), vecOrigin);
    p->SetThink(&CScatterSplit::ChaseThink);
    p->SetTouch(&CExplodingAttack::ExplodeTouch);
    p->m_hTarget = pTarget;                          // [OK] EHANDLE em +0x2dc
    p->m_flFieldOfView = 0.5f;
    p->pev->solid = SOLID_TRIGGER;
    p->pev->nextthink = gpGlobals->time;
    return p;
}

BOOL CScatterSplit::FInViewCone(CBaseEntity *pEntity)    // [OK] identico ao de CScatterAttack
{
    UTIL_MakeVectors(pev->angles);
    Vector vecDir = (pEntity->pev->origin - pev->origin).Normalize();
    return DotProduct(vecDir, gpGlobals->v_forward) > m_flFieldOfView;
}

void CScatterSplit::ChaseThink(void)
{
    if ((int)m_hTarget)
    {
        CBaseEntity *pTarget = m_hTarget;
        if (FInViewCone(pTarget))                    // [OK] so curva se o alvo esta no cone
        {
            Vector vecDir = (pTarget->pev->origin - pev->origin).Normalize() * m_flSpeed;
            pev->velocity = pev->velocity * 0.4 + vecDir * 0.6;          // [OK] 40% antiga + 60% direcao ao alvo
            pev->velocity = pev->velocity.Normalize() * m_flSpeed;       // [OK] mantem a velocidade
            pev->angles = UTIL_VecToAngles(pev->velocity);
        }
    }
    DrawBubbles();
    pev->nextthink = gpGlobals->time + 0.2;
}

// ---------- CScatterBeam (arma) ----------
void CScatterBeam::Spawn(void)
{
    Precache();                                      // [OK] vtable slot 1
    m_iId = 19;
    m_iDefaultAmmo = 0;
    m_iClip = -1;
    m_iMaxCharge = 42;                               // [OK] +0xc8
    m_iKiCost = 25;                                  // [OK] +0xd0
    f_0cc = 0;
    strcpy(m_szWeaponName, "scatterbeam");           // [OK] +0xd4
    FallInit();
}

void CScatterBeam::Precache(void)
{
    m_usSpriteA = PRECACHE_MODEL("sprites/scatterbeama.spr");
    m_usSpriteB = PRECACHE_MODEL("sprites/scatterbeamb.spr");
    m_usSpriteTrail = PRECACHE_MODEL("sprites/scatterbeamtrail.spr");
    PRECACHE_SOUND("krillin/scatterbeamha.wav");
    PRECACHE_SOUND("krillin/scatterbeamha_charge.wav");
    PRECACHE_SOUND("weapons/scatterbeam.wav");
}

int CScatterBeam::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2 = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip = -1;
    p->iSlot = 6;
    p->iPosition = 0;
    m_iId = p->iId = 19;
    p->iFlags = 0;
    p->iWeight = 12;
    return 1;
}

void CScatterBeam::EmitChargeSound(void) { m_pPlayer->EmitClassSound("scatterbeamha_charge.wav"); }   // [OK]

void CScatterBeam::EmitShootSound(void)
{
    m_pPlayer->EmitClassSound("scatterbeamha.wav");
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/scatterbeam.wav", 1.0, 0.8, 0, 100);   // [OK] canal 1
}

void CScatterBeam::ShootAttack(void)
{
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector vecSrc = m_pPlayer->GetGunPosition() + gpGlobals->v_forward * 10;     // [OK] vtable +0x1e0
    Vector vecVel = gpGlobals->v_forward * 1500;
    float flRatio = m_iCharge / 42.0;
    int iDamage = (int)(GetPowerRatio() * (m_iCharge * 3));
    CScatterAttack::ShootScatterBeam(m_pPlayer->pev, vecSrc, vecVel, iDamage, m_usSpriteA, m_usSpriteB, m_usSpriteTrail, flRatio);
}
