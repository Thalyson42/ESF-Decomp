// bodypart.cpp -- CBodyPart (7) e CBodyPartAttack (4). RECUPERADO de decomp_raw/CBodyPart e CBodyPartAttack.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "esf_classes.h"
#include "magicattack.h"
#include "bodypart.h"

// ---------------------------------------------------------------- CBodyPart (arma)
void CBodyPart::Spawn(void)
{
    Precache();
    m_iId = 27;
    m_iDefaultAmmo = 0;
    m_iClip = -1;
    FallInit();
}

void CBodyPart::Precache(void)
{
    PRECACHE_MODEL("models/bodypart.mdl");
    PRECACHE_MODEL("models/bodypart_medium.mdl");
    PRECACHE_MODEL("models/p_test.mdl");                         // [OK]
}

int CBodyPart::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2 = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip = -1;
    p->iSlot = 5;
    p->iPosition = 5;
    m_iId = p->iId = 27;
    p->iWeight = -1;
    p->iFlags = 0;
    return 1;
}

BOOL CBodyPart::Deploy(void)
{
    return DefaultDeploy("bodypart", "", 0, "");                 // [?] so o 1o argumento aparece
}

// custa 2 de vida (dano proprio 0x800000), arremessa a parte do corpo para frente e espera 3 s
void CBodyPart::PrimaryAttack(void)
{
    m_pPlayer->TakeDamage(m_pPlayer->pev, m_pPlayer->pev, 2.0f, 0x800000);   // [OK] vtable[11]
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector vecGun = m_pPlayer->GetGunPosition();                 // [OK] vtable +0x1e0
    Vector vecStart = vecGun + gpGlobals->v_right * 10;          // [OK] 10 unidades para a direita
    Vector vecVel = gpGlobals->v_forward * 500;
    CBodyPartAttack::ShootBodyPart(m_pPlayer->pev, vecStart, vecVel);
    m_pPlayer->SetAnimation(PLAYER_ATTACK1);
    m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 3.0;
}

// ---------------------------------------------------------------- CBodyPartAttack (projetil)
void CBodyPartAttack::Spawn(void)
{
    Precache();                                                  // [OK] vtable slot 1
    pev->globalname = MAKE_STRING("magic_attack");               // [?] o binario grava em pev+4 (globalname), nao em classname
}

CBodyPartAttack *CBodyPartAttack::ShootBodyPart(entvars_t *pevOwner, Vector vecStart, Vector vecVelocity)
{
    CBodyPartAttack *p = GetClassPtr((CBodyPartAttack *)NULL);
    p->Spawn();                                                  // [OK] vtable slot 0
    p->pev->movetype = MOVETYPE_TOSS;                            // [OK] +0x108 = 6
    p->pev->solid = SOLID_TRIGGER;                               // [OK]
    p->pev->gravity = 0.2;                                       // [OK] +0x11c
    p->pev->frame = 0;                                           // [OK] +0x12c
    p->pev->framerate = 0;                                       // [OK] +0x130
    p->pev->sequence = p->LookupSequence("bodypart_fly");        // [OK]
    p->ResetSequenceInfo();
    SET_MODEL(ENT(p->pev), "models/bodypart.mdl");
    p->pev->rendermode = 0;                                      // [OK] +0x148
    p->pev->velocity = vecVelocity;
    p->m_flSpeed = vecVelocity.Length();                         // [OK] +0x2a8
    p->pev->angles = UTIL_VecToAngles(p->pev->velocity);         // [OK]
    p->pev->owner = pevOwner->pContainingEntity;                 // [OK] +0x198
    p->pev->classname = MAKE_STRING("bodypart");                 // [OK]
    UTIL_SetOrigin(p->pev, vecStart);
    UTIL_SetSize(p->pev, Vector(-10, -10, -10), Vector(10, 10, 10));   // [OK]
    p->SetTouch((void (CBaseEntity::*)(CBaseEntity *))&CBodyPartAttack::StickyTouch);
    p->SetThink((void (CBaseEntity::*)(void))&CMagicAttack::NormalThink);
    p->pev->nextthink = gpGlobals->time;                         // [OK] +0x104
    return p;
}

// ao tocar um jogador livre, gruda nele ("wrap") e passa a estrangular; em outra coisa, para e some
void CBodyPartAttack::StickyTouch(CBaseEntity *pOther)
{
    entvars_t *pevOwner = pev->owner ? VARS(pev->owner) : NULL;
    if (pevOwner == pOther->pev)
        return;
    if (pOther->IsPlayer())
    {
        CBasePlayer *pPlayer = (CBasePlayer *)pOther;
        ALERT(at_console, "You have been strangled\n");
        if (pPlayer->m_fBlocking)                                // +0x32c
            return;
        if (pPlayer->m_fInPowerStruggle)                         // +0x354
            return;
        if (pPlayer->m_fBlockStruggling)                         // +0x358
            return;
        if (pPlayer->m_fStrangled)                               // +0x360
            return;
        SET_MODEL(ENT(pev), "models/bodypart_medium.mdl");
        pev->solid = SOLID_NOT;                                  // [OK] +0x10c = 0
        pev->aiment = pPlayer->pev->pContainingEntity;           // [OK] +0x194
        pev->movetype = MOVETYPE_FOLLOW;                         // [OK] 12
        m_pVictim = pPlayer;                                     // [OK] +0x2ac
        SetTouch(NULL);
        pev->frame = 0;
        pev->framerate = 0;
        pev->sequence = LookupSequence("wrap");
        ResetSequenceInfo();
        SetThink((void (CBaseEntity::*)(void))&CBodyPartAttack::StrangleThink);
        pev->nextthink = GetAnimTime(pev->sequence) + gpGlobals->time;   // [OK]
    }
    else
    {
        pev->sequence = 0;                                       // [OK] zera sequence/frame/framerate (+0x128..+0x130)
        pev->frame = 0;
        pev->framerate = 0;
        ResetSequenceInfo();
        pev->velocity = Vector(0, 0, 0);
        SUB_StartFadeOut();
    }
}

// enquanto a vitima tem ki <= 750 e esta viva, perde 2 de vida a cada 0.2 s; senao solta
void CBodyPartAttack::StrangleThink(void)
{
    if (!m_pVictim->m_fStrangled)
    {
        m_pVictim->m_fStrangled = 1;
        m_pVictim->SetAnimation((PLAYER_ANIM)10);                // [?] animacao ESF de estrangulamento
        pev->frame = 0;
        pev->framerate = 0;
        pev->sequence = LookupSequence("struggle");
        ResetSequenceInfo();
    }
    if (750.0f < m_pVictim->pev->fuser4)                         // [OK] ki acima de 750 escapa
    {
        ALERT(at_console, "unstrangled\n");
        m_pVictim->m_fStrangled = 0;
        Remove();                                                // [OK] vtable slot 125
    }
    else
    {
        if (!m_pVictim->IsAlive())                               // [OK] vtable +0x8c
            Remove();
        else
            m_pVictim->TakeDamage(pev, pev->owner ? VARS(pev->owner) : NULL, 2.0f, 0x800000);
    }
    pev->nextthink = gpGlobals->time + 0.2;                      // [OK]
}
