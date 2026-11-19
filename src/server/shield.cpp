// shield.cpp -- CShield (11 funcoes) e CShieldAtk::ShootShield. RECUPERADO de decomp_raw/CShield e CShieldAtk.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "shieldattack.h"

extern int gmsgBlobStart, gmsgBlobUpdate, gmsgBlobKill;

void CShield::Spawn(void)
{
    Precache();                                    // [OK] vtable slot 1 (vazio)
    SET_MODEL(ENT(pev), "sprites/null.spr");
    *((int *)pev + 82) = 5;                        // [?] pev+0x148 = 5 (campo sem nome)
    pev->movetype = MOVETYPE_NONE;                 // [OK] +0x108 = 0
    pev->solid = SOLID_TRIGGER;                    // [OK] +0x10c = 1
}

CBaseEntity *CShield::GetOwner(entvars_t *pevShield)
{
    edict_t *pOwner = pevShield->owner;            // [OK] +0x198
    if (!pOwner)
        pOwner = INDEXENT(0);
    if (!pOwner)
        return NULL;
    return CBaseEntity::Instance(pOwner);          // [OK] edict+0x7c = pvPrivateData
}

CShield *CShield::CreateShield(CBasePlayer *pPlayer)
{
    CShield *p = GetClassPtr((CShield *)NULL);     // [OK]
    p->Spawn();                                    // [OK] vtable slot 0
    p->pev->velocity = Vector(0, 0, 0);            // [OK]
    p->pev->origin = pPlayer->pev->origin;         // [OK]
    p->pev->classname = MAKE_STRING("Shield");     // [?] endereco 0x5a7ebd nao bate com string legivel no .so; nome adivinhado
    *((int *)p->pev + 120) = 0;                    // [?] pev+0x1e0 = 0 (forca inicial)
    p->m_iSize = 40;                               // [OK]
    p->m_flNextGain = 0;
    p->m_fBroken = 0;
    p->SetThink(&CShield::ExpandShieldThink);      // [OK]
    p->pev->nextthink = gpGlobals->time;           // [OK] +0x104
    p->pev->owner = pPlayer->edict();              // [OK] +0x198
    p->SetTouch(&CShield::ShieldTouch);            // [OK]
    UTIL_SetSize(p->pev, Vector(-40, -40, -40), Vector(40, 40, 40));   // [OK]
    UTIL_SetOrigin(p->pev, p->pev->origin);
    p->CreateExplosion();                          // [OK]
    return p;
}

void CShield::CreateExplosion(void)
{
    MESSAGE_BEGIN(MSG_ALL, gmsgBlobStart, pev->origin);   // [OK] tipo 2
        WRITE_BYTE(0);
        WRITE_COORD(pev->origin.x);
        WRITE_COORD(pev->origin.y);
        WRITE_COORD(pev->origin.z);
        WRITE_SHORT(ENTINDEX(ENT(pev)));
        WRITE_SHORT(m_iSize);
    MESSAGE_END();
}

void CShield::UpdateShieldClient(void)
{
    MESSAGE_BEGIN(MSG_ALL, gmsgBlobUpdate, pev->origin);
        WRITE_SHORT(m_iSize);
        WRITE_SHORT(ENTINDEX(ENT(pev)));
    MESSAGE_END();
}

void CShield::Remove(void)
{
    MESSAGE_BEGIN(MSG_ALL, gmsgBlobKill);
        WRITE_SHORT(ENTINDEX(ENT(pev)));
        WRITE_SHORT(m_iSize);
    MESSAGE_END();
    UTIL_Remove(this);
}

// segue o dono se ele se afastou 3 ou mais unidades
static void ShieldFollowOwner(CShield *pShield)
{
    CBaseEntity *pOwner = CShield::GetOwner(pShield->pev->owner ? &pShield->pev->owner->v : NULL);
    if (!pOwner)
        return;
    if ((pOwner->pev->origin - pShield->pev->origin).Length() >= 3.0f)
        UTIL_SetOrigin(pShield->pev, pOwner->pev->origin);
}

void CShield::ExpandShieldThink(void)
{
    ShieldFollowOwner(this);
    m_iSize += 20;                                 // [OK]
    if (m_iSize > 109)
    {
        m_iSize = 110;                             // [OK]
        SetThink(&CShield::ShieldThink);           // [OK]
    }
    UTIL_SetSize(pev, Vector(-m_iSize, -m_iSize, -m_iSize), Vector(m_iSize, m_iSize, m_iSize));
    UpdateShieldClient();
    pev->nextthink = gpGlobals->time + 0.2;        // [OK]
}

void CShield::ShieldThink(void)
{
    ShieldFollowOwner(this);
    if (m_flNextGain < gpGlobals->time)            // [OK]
    {
        m_flNextGain = gpGlobals->time + 1.75;     // [OK]
        pev->dmg += 3.0;                           // [OK] pev+0x1e0: o escudo acumula forca
    }
    pev->nextthink = gpGlobals->time;              // [OK] +0x104
}

void CShield::ShieldTouch(CBaseEntity *pOther)
{
    CBasePlayer *pOwner = (CBasePlayer *)GetOwner(pev);
    if (pOther->IsPlayer())                        // [OK] vtable +0xa0
    {
        if (ENTINDEX(pOwner->edict()) == ENTINDEX(pOther->edict()))
            return;                                // [OK] o proprio dono
        CBasePlayer *pPlayer = (CBasePlayer *)pOther;
        if (pPlayer->m_fInPowerStruggle || pPlayer->m_fBlockStruggling || pPlayer->m_fInBlockStruggle)
            return;                                // [OK] +0x354/+0x358/+0x35c
        if (*(int *)((char *)pPlayer + 0x4c4))     // [?] +0x4c4 (nome desconhecido)
            return;
        // [?] g_pGameRules vtable +0x20 = teamplay?; mesmo time (pev+0x1ac) nao e empurrado
        if (g_pGameRules->IsTeamplay() && *((int *)pOwner->pev + 107) == *((int *)pOther->pev + 107))
            return;
        Vector vecDir = (pev->origin - pOther->pev->origin) * -1;   // [OK] do escudo para fora
        vecDir = vecDir.Length() == 0 ? Vector(0, 0, 1) : vecDir.Normalize();
        pOther->pev->velocity = vecDir * 300.0;    // [OK] empurra o jogador
    }
    else if (pOther->Classify() == 1)              // [OK] vtable +0x28: ataque de ki
    {
        CExplodingAttack *pAtk = (CExplodingAttack *)pOther;
        if (pAtk->m_fInBlockStruggle || pAtk->m_fInStruggle || pAtk->m_fStuck)   // [OK] +0x2b0/+0x2ac/+0x2cc
            return;
        int iCost = (int)(3.5 * pAtk->pev->dmg);   // [OK]
        if (!pOwner->UseKi(iCost))
        {
            pOwner->pev->fuser4 = 0;               // [OK] ki do dono zera
            m_fBroken = 1;                         // [OK] +0x6c
            return;
        }
        if (!strcmp(STRING(pAtk->pev->classname), "kiblast"))
            pev->dmg += pAtk->pev->dmg;            // [OK] absorve inteiro
        else
            pev->dmg += pAtk->pev->dmg * 0.25;     // [OK]
        pAtk->Vaporize();                          // [OK]
    }
}

CShieldAtk *CShieldAtk::ShootShield(entvars_t *pevShooter, Vector vecOrigin, Vector vecVelocity, int iDamage)
{
    CShieldAtk *p = GetClassPtr((CShieldAtk *)NULL);   // [OK]
    p->Spawn();                                        // [OK]
    p->pev->movetype = MOVETYPE_FLY;                   // [OK] 5
    p->pev->solid = SOLID_TRIGGER;                     // [OK] 1
    SET_MODEL(ENT(p->pev), "sprites/shieldattack.spr");
    p->m_iExplosionType = 4;                           // [OK] +0x2d4
    p->m_iRadiusMult = 4;                              // [OK] +0x2d0
    if (iDamage > 9999) iDamage = 9999;
    p->pev->dmg = (float)iDamage;                      // [OK] +0x1e0
    p->pev->velocity = vecVelocity;
    p->m_flSpeed = vecVelocity.Length();               // [OK] +0x2a8
    p->pev->angles = UTIL_VecToAngles(vecVelocity);
    p->pev->owner = ENT(pevShooter);                   // [OK] +0x198
    p->pev->classname = MAKE_STRING("Shield Attack");  // [?] endereco 0x5a7e96 cai numa lista de nomes de modelo (trunks); nome adivinhado
    p->pev->fuser2 = 1.0;                              // [?] pev+0x144 = 1.0
    p->pev->origin = vecOrigin + vecVelocity.Normalize() * 16.0;   // [OK]
    UTIL_SetOrigin(p->pev, p->pev->origin);
    UTIL_SetSize(p->pev, Vector(-17, -17, -17), Vector(17, 17, 17));   // [?] max do decompilado ilegivel (-0x11 = -17)
    p->SetTouch(&CExplodingAttack::ExplodeTouch);      // [OK]
    p->SetThink(&CMagicAttack::NormalThink);           // [OK]
    p->pev->nextthink = gpGlobals->time;               // [OK] +0x104
    return p;
}
