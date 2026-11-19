// scattershot.cpp -- RECUPERADO de decomp_raw/CScatterShot (12) e CScatterShotAttack (2). [OK] valores do decompilado; [?] nomes.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "scattershot.h"

extern int gmsgFlare;

void CScatterShot::Spawn(void)
{
    Precache();                // [OK] vtable slot 1
    m_iId = 21;                // [OK] +0x88
    m_iDefaultAmmo = 0;        // +0xc0
    m_iClip = -1;              // +0xb0
    FallInit();
}

void CScatterShot::Precache(void)
{
    m_usSpriteA     = PRECACHE_MODEL("sprites/kiblasta.spr");       // [OK] +0xe8
    m_usSpriteB     = PRECACHE_MODEL("sprites/kiblastb.spr");       // +0xea
    m_usSpriteTrail = PRECACHE_MODEL("sprites/kiblasttrail.spr");   // +0xec
    PRECACHE_SOUND("weapons/kiblast.wav");
    PRECACHE_SOUND("weapons/kiplosion.wav");
}

int CScatterShot::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 6;
    p->iPosition = 3;
    m_iId = p->iId = 21;
    p->iWeight   = 25;
    p->iFlags    = 0;
    return 1;
}

BOOL CScatterShot::Deploy(void)
{
    m_iShots = 0;                                       // [OK] +0xe4
    return DefaultDeploy("scattershot", "", 0, "");     // [?] so o 1o argumento aparece
}

void CScatterShot::Holster(int skiplocal)
{
    for (int i = 0; i < m_iShots; i++)
        FreeShot(m_pShot[i]);                           // [OK]
    m_pPlayer->StopAniTrigger(5);                       // [OK]
    m_pPlayer->StopAniTrigger(6);
}

void CScatterShot::WeaponIdle(void)
{
    CleanUpShotList();                                  // [OK]
}

void CScatterShot::AddShotEntry(CScatterShotAttack *pShot)
{
    m_pShot[m_iShots] = pShot;                          // [OK]
    m_iShots++;
}

void CScatterShot::FreeShot(CScatterShotAttack *pShot)
{
    if (!pShot->m_fVaporized)                           // [OK] +0x2c4
        pShot->m_fRemoveOnVaporize = 1;                 // [OK] +0x2c8: o disparo some sozinho depois
    else
        pShot->Remove();                                // [OK] vtable +0x1fc
}

void CScatterShot::CleanUpShotList(void)
{
    for (int i = 0; i < m_iShots; )
    {
        if (m_pShot[i]->m_fVaporized)                   // [OK] +0x2c4
        {
            m_pShot[i]->Remove();
            m_iShots--;
            m_pShot[i] = m_pShot[m_iShots];             // [OK] troca com o ultimo
        }
        else
            i++;
    }
}

void CScatterShot::PrimaryAttack(void)
{
    CleanUpShotList();
    if (m_iShots > 7)
        return;                                         // [OK] max 8 disparos
    if (!m_pPlayer->UseKi(20))                          // [OK] 20 de ki
        return;
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/kiblast.wav", 1.0, 0.8, 0, 100);
    int iRandX = RANDOM_LONG(-10, 10) * 4;              // [OK] dispersao aleatoria +-40
    int iRandY = RANDOM_LONG(-10, 10) * 4;
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector start = m_pPlayer->GetGunPosition() + gpGlobals->v_forward * 10;   // [OK] 10.0
    m_pPlayer->SetAnimation((PLAYER_ANIM)5);
    Vector vecAim = gpGlobals->v_forward * 200 + gpGlobals->v_right * iRandX + gpGlobals->v_up * iRandY;   // [OK] 200.0 a frente + desvio
    Vector vel = vecAim.Normalize() * 750;              // [OK] 750.0
    float flRatio = GetPowerRatio();
    AddShotEntry(CScatterShotAttack::ShootScatterShotAttack(m_pPlayer->pev, start, vel, (int)(flRatio * 10.0),
                     m_usSpriteA, m_usSpriteB, m_usSpriteTrail));   // [OK]
    m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.3;            // [OK]
}

void CScatterShot::SecondaryAttack(void)
{
    CleanUpShotList();
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector gun = m_pPlayer->GetGunPosition();
    Vector vecEnd = gun + gpGlobals->v_forward * 8192;              // [OK]
    TraceResult tr;
    UTIL_TraceLine(gun, vecEnd, dont_ignore_monsters, ENT(m_pPlayer->pev), &tr);
    for (int i = 0; i < m_iShots; i++)
    {
        CScatterShotAttack *p = m_pShot[i];
        if (!p->m_fContracting && !p->f_2b0 && !p->f_2ac)           // [OK] so disparos ainda livres
        {
            p->m_vecContractPos = tr.vecEndPos;                     // [OK] +0x304: todos convergem no ponto mirado
            p->m_flContractDist = (p->pev->origin - tr.vecEndPos).Length();   // [OK] +0x310
            p->m_fContracting = 1;                                  // [OK] +0x314
            p->m_flSpeed = 1900;                                    // [OK] +0x2a8
            p->SetThink(&CScatterShotAttack::ContractThink);        // [OK]
            FreeShot(p);                                            // [OK]
        }
    }
    m_iShots = 0;                                                   // [OK]
    m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + 0.3;          // [OK] +0xa0
}

// ======================================================================
// CScatterShotAttack
// ======================================================================
CScatterShotAttack *CScatterShotAttack::ShootScatterShotAttack(entvars_t *pevShooter, Vector vecOrigin, Vector vecVelocity,
        int iDamage, short sSpriteA, short sSpriteB, short sSpriteTrail)
{
    CScatterShotAttack *p = GetClassPtr((CScatterShotAttack *)NULL);   // [OK]
    p->Spawn();                                                        // [OK] slot 0
    p->pev->movetype = MOVETYPE_FLY;                                   // [OK] 5
    p->pev->solid = SOLID_TRIGGER;                                     // [OK] 1
    SET_MODEL(ENT(p->pev), "sprites/null.spr");
    if (iDamage > 9999) iDamage = 9999;
    p->pev->dmg = (float)iDamage;                                      // [OK] +0x1e0
    float flRadius = 0.25f * 25.0f;                                    // [OK] 6.25
    UTIL_SetOrigin(p->pev, vecOrigin + vecVelocity.Normalize() * flRadius);   // [OK]
    UTIL_SetSize(p->pev, Vector(-flRadius, -flRadius, -flRadius), Vector(flRadius, flRadius, flRadius));
    p->pev->velocity = vecVelocity;                                    // [OK]
    p->m_flSpeed = vecVelocity.Length();                               // [OK] +0x2a8
    p->pev->angles = UTIL_VecToAngles(vecVelocity);
    p->pev->classname = MAKE_STRING("scattershot");                    // [OK] string em 0x5a2cc9
    MESSAGE_BEGIN(MSG_ALL, gmsgFlare);                                 // [OK] tipo 2
        WRITE_LONG(ENTINDEX(ENT(p->pev)));
        WRITE_SHORT(sSpriteA);
        WRITE_SHORT(sSpriteB);
        WRITE_SHORT((int)(0.1 * 25.0));                                // [OK]
        WRITE_SHORT(sSpriteTrail);
        WRITE_SHORT(40);                                               // [OK]
        WRITE_COORD(vecOrigin.x);
        WRITE_COORD(vecOrigin.y);
        WRITE_COORD(vecOrigin.z);
    MESSAGE_END();
    p->SetTouch(&CExplodingAttack::ExplodeTouch);                      // [OK]
    p->SetThink(&CMagicAttack::NormalThink);                           // [OK]
    p->m_fContracting = 0;                                             // [OK] +0x314
    p->m_fRemoveOnVaporize = 0;                                        // [OK] +0x2c8
    p->pev->owner = ENT(pevShooter);                                   // [?] nao visivel
    return p;
}

void CScatterShotAttack::ContractThink(void)
{
    Vector vecToTarget = m_vecContractPos - pev->origin;
    float flDist = vecToTarget.Length();
    if (flDist > m_flContractDist)                                     // [OK] ja passou do ponto: some
    {
        Remove();                                                      // [OK] vtable +0x200 [?] (slot 126 vs 125)
        return;
    }
    Vector vecDir = vecToTarget.Normalize();
    if (pev->velocity.Length() > m_flSpeed)                            // [?] limita a velocidade atual
        pev->velocity = pev->velocity.Normalize() * m_flSpeed;
    pev->velocity = (vecDir * m_flSpeed) * 0.7 + pev->velocity * 0.3;  // [OK] 0.7 / 0.3
    pev->angles = UTIL_VecToAngles(pev->velocity);
    DrawBubbles();                                                     // [OK]
    m_flContractDist = flDist;                                         // [OK] +0x310
    pev->nextthink = gpGlobals->time + 0.3;                            // [OK]
}
