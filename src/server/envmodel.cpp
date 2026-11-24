// envmodel.cpp -- CEnvModel 13/13. RECUPERADO de decomp_raw/CEnvModel. [OK] = conferido.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "weapons.h"
#include "animation.h"
#include "gamerules.h"
#include "player.h"
#include "player_esf_manual.h"
#include "esf_extras.h"
#include "envmodel.h"

void CEnvModel::Spawn(void)
{
    Precache();                                              // [OK] slot 1
    SET_MODEL(ENT(pev), STRING(pev->model));
    SetModelCollisionBox();
    m_flSize = (pev->maxs.x - pev->mins.x) * (pev->maxs.y - pev->mins.y) * (pev->maxs.z - pev->mins.z);
    m_flSize = pow(m_flSize, 1.0 / 3.0);                     // [OK] raiz cubica do volume
    m_flMaxZ = pev->maxs.z;                                  // [OK] +0x2ac
    m_flMinZ = pev->mins.z;                                  // [OK] +0x2b0
    float f = pev->mins.x;
    if (f >= pev->mins.y) f = pev->mins.y;
    m_flBoxB = f;                                            // [OK] +0x2b8
    float g = pev->maxs.x;
    if (g <= pev->maxs.y) g = pev->maxs.y;
    m_flBoxA = g;                                            // [OK] +0x2b4
    UTIL_SetOrigin(pev, pev->origin);
    pev->movetype = MOVETYPE_FLY;                            // [OK] 5
    pev->gravity = 0;                                        // [OK] +0x11c
    pev->takedamage = DAMAGE_YES;                            // [OK] +0x16c = 1.0
    SetIdleAnimation();
    SetTouch(&CEnvModel::EnvTouch);
    SetThink(&CEnvModel::AnimateThink);
    m_iState = 0;
}

void CEnvModel::Precache(void)
{
    PRECACHE_MODEL((char *)STRING(pev->model));
    m_sGibModel = PRECACHE_MODEL("models/rockgibs.mdl");
}

void CEnvModel::KeyValue(KeyValueData *pkvd)
{
    if (FStrEq(pkvd->szKeyName, "boundingbox"))
    {
        pev->solid = (atoi(pkvd->szValue) == 1) ? SOLID_NOT : SOLID_BBOX;   // [OK] 0 / 2
        pkvd->fHandled = TRUE;
    }
    else
        CBaseMonster::KeyValue(pkvd);
}

int CEnvModel::SetIdleAnimation(void)
{
    int iIdle = LookupSequence("idle");
    int iIdle2 = LookupSequence("idle2");
    if (!iIdle) return iIdle2;                               // [OK] (compara com 0, nao com -1)
    pev->sequence = iIdle;
    if (iIdle2 && RANDOM_FLOAT(0, 1) > 0.5)
        pev->sequence = iIdle2;                              // [OK] sorteia entre idle e idle2
    pev->gaitsequence = 0;
    pev->frame = 0;
    ResetSequenceInfo();
    return 1;
}

void CEnvModel::AnimateThink(void) { SetIdleAnimation(); }

int CEnvModel::TakeDamage(entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType)
{
    int i = LookupSequence("explosion");
    if (i != -1)
    {
        pev->gaitsequence = 0; pev->frame = 0;
        pev->sequence = i;
        ResetSequenceInfo();
        SetThink(&CEnvModel::AnimateThink);
        pev->nextthink = gpGlobals->time + 1.0;              // [OK]
    }
    return CBaseMonster::TakeDamage(pevInflictor, pevAttacker, flDamage, bitsDamageType);
}

void CEnvModel::EnvTouch(CBaseEntity *pOther)
{
    if (!pOther->IsPlayer()) return;
    int i = LookupSequence("touch");
    if (i == -1) return;
    pev->gaitsequence = 0; pev->frame = 0;
    pev->sequence = i;
    ResetSequenceInfo();
    pev->nextthink = GetAnimTime(pev->sequence) + gpGlobals->time;   // [OK]
    SetThink(&CEnvModel::AnimateThink);
}

void CEnvModel::SetBoundingBox(void)
{
    float a = (pev->angles.y + pev->angles.y) * 3.141592653589793 / 360.0 + 1.5707963267948966;   // [OK] (2*yaw)/360*pi + pi/2
    float d = -(m_flMaxZ - m_flMinZ);                        // [?] nomes dos campos 2ac/2b0
    float dx = cos(a) * d;
    float dy = sin(a) * d;
    float x0 = m_flMinZ, y0 = m_flMinZ, x1 = m_flMinZ, y1 = m_flMinZ;
    if (dx + m_flMinZ <= m_flMinZ) x0 += dx; else x1 += dx;  // [OK] min/max de (base, base+dx)
    if (dy + m_flMinZ <= m_flMinZ) y0 += dy; else y1 += dy;
    UTIL_SetSize(pev, Vector(x0, y0, m_flBoxA), Vector(x1, y1, m_flBoxB));   // [OK] z = +0x2b4 / +0x2b8
}

void CEnvModel::AimAtPlayer(entvars_t *pevPlayer, float flTime)
{
    UTIL_MakeVectors(pevPlayer->v_angle);
    Vector vecEye = pevPlayer->origin + pevPlayer->view_ofs;
    Vector vecEnd = vecEye + gpGlobals->v_forward * 8192;
    TraceResult tr;
    UTIL_TraceLine(vecEye, vecEnd, dont_ignore_monsters, ENT(pev), &tr);
    Vector vecDir = (tr.vecEndPos - pev->origin).Normalize();
    Vector vecAng = UTIL_VecToAngles(vecDir);
    Vector vecTarget(vecAng.x, vecAng.y - 90.0f, 90.0f);     // [OK] o modelo "deita" de frente para o ponto mirado
    pev->avelocity = (vecTarget - pev->angles) * (1.0f / flTime);   // [OK] gira ate o alvo em flTime
    pev->nextthink = gpGlobals->time + flTime;
}

void CEnvModel::Lift(entvars_t *pevPlayer, float flZVel, float flTime)
{
    ALERT(at_console, "Size %f\n", m_flSize);                // [OK]
    pev->velocity = Vector(0, 0, flZVel);
    SetTouch(NULL);
    pev->movetype = MOVETYPE_NOCLIP;                         // [OK] 8
    pev->gravity = 1.0000000116860974e-07f;                  // [OK] +0x11c
    pev->owner = pevPlayer->pContainingEntity;               // [OK]
    SetThink(&CEnvModel::RotateThink);
    AimAtPlayer(pevPlayer, flTime);
    m_iState = 1;                                            // [OK] +0x2a8
}

void CEnvModel::RotateThink(void)
{
    if (!pev->owner)
    {
        ALERT(at_console, "Invalid owner for envmodel");     // [OK]
        return;
    }
    AimAtPlayer(VARS(pev->owner), 0.1f);                     // [OK] re-mira a cada 0.1 s
}

void CEnvModel::Shoot(Vector vecDir, float flSpeed, float flMult)
{
    pev->avelocity = Vector(0, 0, 0);
    float f1 = 20.0f / m_flSize;  if (f1 > 1.0f) f1 = 1.0f;   // [OK] objetos pequenos voam mais rapido
    float f2 = m_flSize / 100.0f; if (f2 > 1.0f) f2 = 1.0f;   // [OK] objetos grandes causam mais dano
    pev->velocity = vecDir * (flSpeed * 2000.0f) * flMult * f1;
    pev->movetype = MOVETYPE_FLY;
    pev->dmg = f2 * 5.0f;                                    // [OK] +0x1e0
    SetBoundingBox();
    SetThink(NULL);
    SetTouch(&CEnvModel::ExplodeTouch);
    m_iState = 0;
}

void CEnvModel::Drop(void)
{
    SetBoundingBox();
    pev->velocity = Vector(0, 0, 0);
    pev->avelocity = Vector(0, 0, 0);
    pev->gravity = 9.800000190734863f;                       // [OK]
    SetThink(NULL);
    m_iState = 0;
}

void CEnvModel::ExplodeTouch(CBaseEntity *pOther)
{
    entvars_t *pevOwner = pev->owner ? VARS(pev->owner) : NULL;
    ::RadiusDamage(pev->origin, pev, pevOwner, pev->dmg, pev->dmg * 3.0f, CLASS_NONE, 0x800000);   // [OK]
    Vector vecDir = pev->velocity.Normalize();
    Vector vecStart = pev->origin - vecDir * 20.0f;
    Vector vecEnd = vecStart + vecDir * 3.0f + pev->velocity.Normalize() * 30.0f;
    TraceResult tr;
    UTIL_TraceLine(vecStart, vecEnd, ignore_monsters, ENT(pev), &tr);
    if (tr.flFraction >= 1.0f) { UTIL_Remove(this); return; }
    MESSAGE_BEGIN(MSG_ALL, SVC_TEMPENTITY);                  // [OK] 2, 23
    WRITE_BYTE(TE_BREAKMODEL);                               // [OK] 108
    WRITE_COORD(tr.vecEndPos.x); WRITE_COORD(tr.vecEndPos.y); WRITE_COORD(tr.vecEndPos.z);
    WRITE_COORD(50); WRITE_COORD(50); WRITE_COORD(50);       // [OK] tamanho
    WRITE_COORD(200 * tr.vecPlaneNormal.x); WRITE_COORD(200 * tr.vecPlaneNormal.y); WRITE_COORD(200 * tr.vecPlaneNormal.z);
    WRITE_BYTE(30);                                          // velocidade aleatoria
    WRITE_SHORT(m_sGibModel);
    WRITE_BYTE(20);                                          // quantidade
    WRITE_BYTE(50);                                          // vida (0.1 s)
    WRITE_BYTE(0);
    MESSAGE_END();
    UTIL_Remove(this);
}
