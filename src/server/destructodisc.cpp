// destructodisc.cpp -- RECUPERADO de decomp_raw/CDestructoDisc (12) e CDestructoDiscAttack (3). [OK] valores do decompilado; [?] nomes.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "destructodisc.h"

void CDestructoDisc::Spawn(void)
{
    Precache();                    // [OK] vtable slot 1
    m_iId = 7;                     // [OK] +0x88
    m_iDefaultAmmo = 0;            // +0xc0
    m_iClip = -1;                  // +0xb0
    m_iMaxCharge = 30;             // [OK] +0xc8
    m_iKiCost = 25;                // [OK] +0xd0
    f_0cc = 0.5f;                  // [OK]
    strcpy(m_szWeaponName, "destructodisc");   // [OK] +0xd4
    FallInit();
}

void CDestructoDisc::Precache(void)
{
    PRECACHE_MODEL("sprites/null.spr");
    PRECACHE_MODEL("models/w_destructodisc.mdl");
    PRECACHE_SOUND("krillin/destructodisc.wav");
    PRECACHE_SOUND("krillin/destructodisc_charge.wav");
    PRECACHE_SOUND("weapons/rotating.wav");
    PRECACHE_SOUND("weapons/destructodisc_charge.wav");
    PRECACHE_SOUND("weapons/disc_fire.wav");
    PRECACHE_SOUND("weapons/disckill.wav");
}

int CDestructoDisc::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 4;
    p->iPosition = 0;
    m_iId = p->iId = 7;
    p->iWeight   = 10;
    p->iFlags    = 0;
    return 1;
}

BOOL CDestructoDisc::Deploy(void)
{
    m_pDisc = NULL;                          // [OK] +0x1d4
    return CChargedAttack::Deploy();         // [OK]
}

void CDestructoDisc::Holster(int skiplocal)
{
    if (m_pDisc)
        m_pDisc->Remove();                   // [OK] vtable +0x1fc (slot 125)
    CChargedAttack::Holster(skiplocal);      // [OK]
}

void CDestructoDisc::EnableChargeSprite(void)
{
    Vector gun = m_pPlayer->GetGunPosition();                        // [OK] vtable +0x1e0
    float flScale = (float)(m_iCharge * 0.5 / m_iMaxCharge);         // [OK]
    m_pDisc = CDestructoDiscAttack::ChargeDestructoDisc(m_pPlayer->pev, gun, flScale);
}

void CDestructoDisc::GrowChargeSprite(void)
{
    m_pDisc->pev->scale = (float)(m_iCharge * 0.5 / m_iMaxCharge);   // [OK] +0x144
}

void CDestructoDisc::EmitChargeSound(void)
{
    m_pPlayer->EmitClassSound("destructodisc_charge.wav");           // [OK]
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/destructodisc_charge.wav", 1.0, 0.8, 0, 100);
}

void CDestructoDisc::EmitShootSound(void)
{
    m_pPlayer->EmitClassSound("destructodisc.wav");                  // [OK]
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/disc_fire.wav", 1.0, 0.8, 0, 100);
}

void CDestructoDisc::ShootAttack(void)
{
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);                       // [OK]
    Vector vel = gpGlobals->v_forward * 800;                         // [OK] 800.0
    Vector gun = m_pPlayer->GetGunPosition();
    m_pDisc->Shoot(gun, vel);                                        // [OK]
    m_pDisc = NULL;                                                  // [OK]
}

// ======================================================================
// CDestructoDiscAttack
// ======================================================================
CDestructoDiscAttack *CDestructoDiscAttack::ChargeDestructoDisc(entvars_t *pevOwner, Vector vecOrigin, float flScale)
{
    CDestructoDiscAttack *p = GetClassPtr((CDestructoDiscAttack *)NULL);   // [OK]
    p->Spawn();                                                            // [OK] slot 0
    p->pev->movetype = MOVETYPE_NOCLIP;                                    // [OK] 8
    p->pev->solid = SOLID_TRIGGER;                                         // [OK] 1
    p->pev->effects &= ~4;                                                 // [OK] 251
    SET_MODEL(ENT(p->pev), "models/w_destructodisc.mdl");                  // [OK]
    p->pev->scale = flScale;                                               // [OK] +0x144
    p->pev->dmg = 999.0f;                                                  // [OK] +0x1e0
    UTIL_SetOrigin(p->pev, vecOrigin);
    p->pev->rendercolor.x = (float)ENTINDEX(ENT(pevOwner));                // [OK] +0x150: indice do dono (usado no cliente)
    p->pev->velocity = Vector(0, 0, 0);                                    // [OK]
    p->pev->classname = MAKE_STRING("Destructo Disc");                     // [OK] string em 0x59a1d0
    p->pev->sequence = 0;  p->pev->gaitsequence = 0;  p->pev->frame = 0;   // [OK] memset(+0x128, 0, 12)
    p->ResetSequenceInfo();                                                // [OK]
    p->m_fReleased = 0;                                                    // [OK] +0x2ac
    p->SetTouch(NULL);
    p->SetThink(&CDiscAttack::AuraCheck);                                  // [OK]
    p->AuraCheck();                                                        // [OK]
    return p;
}

void CDestructoDiscAttack::Shoot(Vector vecOrigin, Vector vecVelocity)
{
    pev->movetype = MOVETYPE_NOCLIP;                                       // [OK] 8
    pev->aiment = NULL;                                                    // [OK] +0x194
    pev->effects |= 4;                                                     // [OK]
    UTIL_SetOrigin(pev, vecOrigin);
    float flHalf = pev->scale * 7.0f;                                      // [OK] 7.0 * escala
    UTIL_SetSize(pev, Vector(-flHalf, -flHalf, -flHalf), Vector(flHalf, flHalf, flHalf));
    pev->velocity = vecVelocity;                                           // [OK]
    m_flSpeed = vecVelocity.Length();                                      // [OK] +0x2a8
    pev->angles = UTIL_VecToAngles(vecVelocity);                           // [OK]
    pev->rendercolor.x = 0;                                                // [OK] +0x150 = 0
    SetTouch(&CDiscAttack::HitTouch);                                      // [OK]
    SetThink(&CDestructoDiscAttack::RandomRotateThink);                    // [OK]
    EMIT_SOUND_DYN(ENT(pev), CHAN_WEAPON, "weapons/rotating.wav", 1.0, 0.8, 0, 100);   // [OK]
    pev->nextthink = gpGlobals->time + 0.25;                               // [OK]
}

void CDestructoDiscAttack::RandomRotateThink(void)
{
    // [?] o decompilado escreve em (this+100); tratado como avelocity.y (suavizacao do giro aleatorio)
    pev->avelocity.y = (float)(RANDOM_LONG(-100, 100) * 10) * 0.6 + 0.4 * pev->avelocity.y;
    CMagicAttack::NormalThink();                                           // [OK]
}
