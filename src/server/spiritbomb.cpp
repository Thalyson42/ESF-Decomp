// spiritbomb.cpp -- RECUPERADO de decomp_raw/CSpiritBomb (Goku). [OK] valores do decompilado; [?] nomes.
// Pendentes nesta etapa: PrimaryAttack, SecondaryAttack, Shoot1, Shoot2 (grandes).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "spiritbomb.h"

extern int gmsgRemoveEffect;

void CSpiritBomb::Spawn(void)
{
    Precache();               // [OK] vtable slot 1
    m_iId = 12;               // [OK] +0x88
    m_pBomb = NULL;           // +0xc8
    m_iDefaultAmmo = 0;       // +0xc0
    m_iClip = -1;             // +0xb0
    FallInit();
}

void CSpiritBomb::Precache(void)
{
    m_usSprite = PRECACHE_MODEL("sprites/spiritbomb.spr");   // [OK] +0xdc
    PRECACHE_SOUND("goku/spiritbomb_shoot.wav");
    PRECACHE_SOUND("goku/spiritbomb_charge.wav");
    PRECACHE_SOUND("goku/spiritbomb2_charge.wav");
    PRECACHE_SOUND("weapons/spiritbomb_fire.wav");
}

int CSpiritBomb::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 4;
    p->iPosition = 3;
    m_iId = p->iId = 12;
    p->iWeight   = 5;
    p->iFlags    = 0;
    return 1;
}

BOOL CSpiritBomb::Deploy(void)
{
    m_fShoot1 = 0;  m_fShoot2 = 0;  f_0d8 = 0;  m_pBomb = NULL;   // [OK] +0xcc,+0xd0,+0xd8,+0xc8
    InitChargeSprite();                                           // [OK] +0x15c
    return DefaultDeploy("spiritbomb", "", 0, "");                // [?] so o 1o argumento aparece
}

void CSpiritBomb::InitChargeSprite(void)
{
    CSprite *s = CSprite::SpriteCreate("sprites/spiritbomb.spr", m_pPlayer->pev->origin, TRUE);
    m_pChargeSprite = s;                                          // [OK] +0xd4
    edict_t *pe = m_pPlayer->pev->pContainingEntity;
    if (pe)
    {
        s->pev->skin = ENTINDEX(pe);                              // [OK] +0x110
        s->pev->body = 1;                                         // [OK] +0x114
        s->pev->aiment = pe;                                      // [OK] +0x194
        s->pev->movetype = 12;                                    // [OK] +0x108
    }
    s->pev->rendermode  = kRenderTransAdd;                        // [OK] +0x148 = 5
    s->pev->rendercolor = Vector(255, 255, 255);
    s->pev->renderamt   = 254;
    s->pev->renderfx    = 19;                                     // [OK] +0x15c
    s->pev->scale       = 0.0105f;                                // [OK] +0x144
    s->pev->framerate   = 10.0f;                                  // [OK] +0x138
    s->TurnOff();
}

void CSpiritBomb::EnableChargeSprite(void)   { m_pChargeSprite->TurnOn(); }                        // [OK]
void CSpiritBomb::DisableChargeSprite(void)  { m_pChargeSprite->TurnOff(); m_pChargeSprite->pev->renderfx = 0; }   // [OK] +0x15c = 0
void CSpiritBomb::GrowChargeSprite(void)     { m_pChargeSprite->pev->scale = m_iCharge * 0.0007; } // [OK]
void CSpiritBomb::RemoveChargeSprite(void)   { UTIL_Remove(m_pChargeSprite); }                     // [OK]

void CSpiritBomb::WeaponIdle(void)
{
    if (!m_pPlayer->f_334)
        return;
    if (m_fShoot1)
        Shoot1();                                                 // [OK]
    else if (m_fShoot2)
        Shoot2();                                                 // [OK]
}

void CSpiritBomb::Holster(int skiplocal)
{
    if (m_pPlayer->f_334)
    {
        m_pPlayer->m_flSpeedMult = 1.0f;                          // [OK] +0x754
        m_pPlayer->f_334 = 0;
        m_pPlayer->f_338 = 0;                                     // [?] +0x338
        m_pPlayer->f_368 = 0;                                     // [?] +0x368
        m_pPlayer->DrawChargeBar(0);
        EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_VOICE, "common/null.wav", 1.0, 0.8, 0, 100);   // canal 2
        if (m_fShoot1)
        {
            MESSAGE_BEGIN(MSG_ALL, gmsgRemoveEffect);             // [OK] tipo 2 = MSG_ALL
            WRITE_SHORT(ENTINDEX(m_pBomb->edict()));
            MESSAGE_END();
            m_pBomb->vfunc_1fc();                                 // [?] +0x1fc (remove/kill da bola)
            m_pBomb = NULL;
        }
        else if (m_fShoot2)
            DisableChargeSprite();                                // [OK] +0x164
    }
    RemoveChargeSprite();                                         // [OK] +0x16c
}
