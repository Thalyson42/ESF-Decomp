// deathball.cpp -- RECUPERADO de decomp_raw/CDeathBall (Frieza). [OK] valores lidos do decompilado; [?] nomes de campos.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "deathball.h"

void CDeathBall::Spawn(void)
{
    Precache();                      // [OK] vtable slot 1
    m_iId = 17;                      // [OK] +0x88
    m_iDefaultAmmo = 0;              // [OK] +0xc0
    m_iClip = -1;                    // [OK] +0xb0
    f_0c8 = 45;                      // [OK] carga maxima
    f_0d0 = 20;
    f_0cc = 0.5f;
    strcpy(m_szWeaponName, "deathball");  // [OK] +0xd4
    FallInit();
}

void CDeathBall::Precache(void)
{
    f_1d8 = PRECACHE_MODEL("sprites/deathball.spr");   // [OK]
    PRECACHE_SOUND("weapons/deathball_fire.wav");
    PRECACHE_SOUND("weapons/deathball_charge.wav");
    PRECACHE_SOUND("frieza/deathball.wav");
}

int CDeathBall::GetItemInfo(ItemInfo *p)
{
    f_1e0 = gpGlobals->time + p->iSlot * 0;   // [?] a1[6] = *(this) + gpGlobals+0x98: campo desconhecido
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 5;
    p->iPosition = 3;
    p->iId       = 17;
    p->iWeight   = 5;
    p->iFlags    = 0;
    return 1;
}

void CDeathBall::InitChargeSprite(void)
{
    CSprite *s = CSprite::SpriteCreate("sprites/deathball.spr", m_pPlayer->pev->origin, TRUE);
    f_1d4 = (int)s;                                    // [OK] +0x1d4
    s->TurnOff();
    s->pev->scale = 0.00001f;                          // [OK]
    edict_t *pe = m_pPlayer->pev->pContainingEntity;
    if (pe)
    {
        s->pev->skin = ENTINDEX(pe);                   // [OK] +0x110
        s->pev->body = 3;                              // [OK] +0x114
        s->pev->aiment = pe;                           // [OK] +0x194
        s->pev->movetype = 12;                         // [OK] +0x108 MOVETYPE_FOLLOW
    }
    s->pev->rendermode  = kRenderTransAdd;             // [OK] +0x148 = 5
    s->pev->rendercolor = Vector(255, 255, 255);
    s->pev->renderamt   = 254;
    s->pev->renderfx    = 19;                          // [OK] +0x15c
    s->pev->framerate   = 10.0f;
}

void CDeathBall::GrowChargeSprite(void)
{
    ((CSprite *)f_1d4)->pev->scale = (m_iCharge - 14.0) * 0.4 / (45.0 - 14.0);   // [OK]
}

void CDeathBall::EnableChargeSprite(void)
{
    vfunc_174();         // [?] slot 0x174 desconhecido
    ((CSprite *)f_1d4)->TurnOn();
}

void CDeathBall::DisableChargeSprite(void)   { ((CSprite *)f_1d4)->TurnOff(); }     // [OK]
void CDeathBall::RemoveChargeSprite(void)    { UTIL_Remove((CBaseEntity *)f_1d4); } // [OK]

void CDeathBall::EmitChargeSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev->pContainingEntity), CHAN_WEAPON, "weapons/deathball_charge.wav", 1.0, 0.8, 0, 100);   // [OK]
}

void CDeathBall::EmitShootSound(void)
{
    m_pPlayer->EmitClassSound("deathball.wav");        // [OK]
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev->pContainingEntity), CHAN_WEAPON, "weapons/deathball_fire.wav", 1.0, 0.8, 0, 100);
}

void CDeathBall::ShootAttack(void)
{
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);         // [OK]
    Vector gun = m_pPlayer->GetGunPosition();                   // [OK] vfunc +0x1e0
    Vector start = gun + Vector(0, 0, 30) + gpGlobals->v_forward * 10;   // [OK] 30.0 e 10.0
    Vector vel   = gpGlobals->v_forward * 1900;                           // [OK]
    float ratio  = GetPowerRatio();
    CDeathBallAttack::ShootDeathBall(m_pPlayer, &start, &vel, (int)(ratio * m_iCharge * 4.0));   // [?] dano
}
