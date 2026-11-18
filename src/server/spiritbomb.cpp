// spiritbomb.cpp -- RECUPERADO de decomp_raw/CSpiritBomb (Goku). [OK] valores do decompilado; [?] nomes.
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

extern int gmsgAddEffect;

void CSpiritBomb::PrimaryAttack(void)
{
    if (m_fShoot2)
        return;                                                   // [OK] +0xd0
    if (!m_pPlayer->f_334)                                        // ainda nao esta carregando
    {
        UTIL_MakeVectors(m_pPlayer->pev->angles);                 // [OK]
        Vector end = m_pPlayer->pev->origin + Vector(0, 0, 200);  // [OK] 200.0: precisa de espaco livre acima
        Vector gun = m_pPlayer->GetGunPosition();
        TraceResult tr;
        UTIL_TraceLine(gun, end, ignore_monsters, ENT(m_pPlayer->pev), &tr);
        if (tr.flFraction < 1.0)
            return;                                               // [OK] teto bloqueando
        m_pPlayer->EmitClassSound("spiritbomb_charge.wav");
        m_pPlayer->f_334 = 1;
        m_pPlayer->f_368 = 1;                                     // [?] +0x368
        m_fShoot1 = 1;
        m_pPlayer->m_flSpeedMult = 0;                             // [OK] +0x754
        m_iCharge = 0;
        m_pBomb = CSpiritBombAttack::CreateSpiritBomb(m_pPlayer, &end, m_usSprite);   // [OK]
        MESSAGE_BEGIN(MSG_ALL, gmsgAddEffect, m_pPlayer->pev->origin);   // [OK] tipo 2
            WRITE_BYTE(1);
            WRITE_SHORT(ENTINDEX(m_pBomb->edict()));
            WRITE_COORD(m_pBomb->pev->origin.x);
            WRITE_COORD(m_pBomb->pev->origin.y);
            WRITE_COORD(m_pBomb->pev->origin.z);
        MESSAGE_END();
    }
    else if (!m_pPlayer->UseKi(0))                                // sem ki: solta o que tem
    {
        if (m_pPlayer->f_334)
            Shoot1();
        return;
    }
    else if (m_iCharge <= 90)                                     // [OK] max 90 ticks
    {
        if (m_iCharge & 1)
            m_pBomb->Grow();                                      // [OK] cresce a cada 2 ticks
        m_iCharge++;
        m_pPlayer->DrawChargeBar(m_iCharge * 10 / 9);             // [OK]
    }
    m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.2;          // [OK] +0x9c
}

void CSpiritBomb::SecondaryAttack(void)
{
    if (m_fShoot1)
        return;
    if (!m_pPlayer->f_334)
    {
        m_pPlayer->f_334 = 1;
        m_pPlayer->f_338 = 1;                                     // [?] +0x338
        m_fShoot2 = 1;
        m_pPlayer->m_flSpeedMult = 0;
        m_iCharge = 0;
        m_pPlayer->EmitClassSound("spiritbomb2_charge.wav");
        if (!m_pPlayer->m_fPoweredUp)                             // [OK] player+0x324
        {
            f_0d8 = 1;                                            // jogador fica transparente enquanto carrega
            m_pPlayer->pev->rendercolor = Vector(255, 255, 255);  // [OK] +0x150
            m_pPlayer->pev->renderamt = 0;                        // [OK] +0x14c
            m_pPlayer->pev->renderfx = 19;                        // [OK] +0x15c
        }
    }
    else if (!m_pPlayer->UseKi(0))
    {
        if (m_pPlayer->f_334)
            Shoot2();
        return;
    }
    else if (m_iCharge <= 44)                                     // [OK] max 45 ticks
    {
        if (m_iCharge == 15)
            EnableChargeSprite();                                 // [OK] +0x160
        else if (m_iCharge > 15)
        {
            GrowChargeSprite();                                   // [OK] +0x168
            if (f_0d8)
                m_pPlayer->pev->renderamt = 35 - ((m_iCharge - 15) * 35) / 30;   // [OK]
        }
        else if (f_0d8)
            m_pPlayer->pev->renderamt = m_iCharge * 7 / 3;        // [OK]
        m_iCharge++;
        m_pPlayer->DrawChargeBar(m_iCharge * 20 / 9);             // [OK]
    }
    m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + 0.2;        // [OK] +0xa0
}

void CSpiritBomb::Shoot1(void)
{
    m_pPlayer->m_flSpeedMult = 1.0f;
    m_pPlayer->f_334 = 0;
    m_pPlayer->f_368 = 0;
    m_fShoot1 = 0;
    m_pPlayer->DrawChargeBar(0);
    MESSAGE_BEGIN(MSG_ALL, gmsgRemoveEffect);
        WRITE_SHORT(ENTINDEX(m_pBomb->edict()));
    MESSAGE_END();
    if (m_iCharge < 30)                                           // [OK] carga minima 30: senao cancela
    {
        m_pBomb->vfunc_1fc();                                     // [?] remove a bola
        m_pBomb = NULL;
        EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_VOICE, "common/null.wav", 1.0, 0.8, 0, 100);
        return;
    }
    m_pPlayer->EmitClassSound("spiritbomb_shoot.wav");
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/spiritbomb_fire.wav", 1.0, 0.8, 0, 100);
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector gun = m_pPlayer->GetGunPosition();
    Vector end = gun + gpGlobals->v_forward * 8192;               // [OK] 8192
    TraceResult tr;
    UTIL_TraceLine(gun, end, dont_ignore_monsters, ENT(m_pPlayer->pev), &tr);
    Vector dir = tr.vecEndPos - m_pBomb->pev->origin;             // [?] ponto de origem da subtracao
    m_pPlayer->SetAnimation((PLAYER_ANIM)5);
    Vector vel = dir.Normalize() * 1000;                          // [OK] 1000
    CSpiritBombAttack::ShootSpiritBomb(m_pBomb, &vel, m_iCharge * 3);
}

void CSpiritBomb::Shoot2(void)
{
    m_pPlayer->m_flSpeedMult = 1.0f;
    m_pPlayer->f_334 = 0;
    m_pPlayer->f_338 = 0;
    m_fShoot2 = 0;
    f_0d8 = 0;
    m_pPlayer->DrawChargeBar(0);
    DisableChargeSprite();                                        // [OK] +0x164
    if (m_iCharge < 15)                                           // [OK] carga minima 15
    {
        EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_VOICE, "common/null.wav", 1.0, 0.8, 0, 100);
        return;
    }
    m_pPlayer->EmitClassSound("spiritbomb_shoot.wav");
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/spiritbomb_fire.wav", 1.0, 0.8, 0, 100);
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector fwd = gpGlobals->v_forward;
    Vector start = m_pPlayer->GetGunPosition() + fwd * 10;        // [OK] 10.0
    m_pPlayer->SetAnimation((PLAYER_ANIM)6);
    Vector vel = fwd.Normalize() * 1000;                          // [OK]
    float flScale = (float)(m_iCharge * 0.25 / 45.0);             // [OK]
    CSpiritBombAttack::ShootSpiritBomb(m_pPlayer, &start, &vel, m_iCharge * 3, flScale, m_usSprite);
}
