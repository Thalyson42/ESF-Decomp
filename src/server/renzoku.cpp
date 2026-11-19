// renzoku.cpp -- RECUPERADO de decomp_raw/CRenzoku (12 funcoes). [OK] valores do decompilado; [?] nomes.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "renzoku.h"

void CRenzoku::Spawn(void)
{
    Precache();                    // [OK] vtable slot 1
    m_iId = 30;                    // [OK] +0x88
    m_iDefaultAmmo = 0;            // +0xc0
    m_iClip = -1;                  // +0xb0
    m_iMaxCharge = 9;              // [OK] +0xc8
    m_iKiCost = 60;                // [OK] +0xd0
    f_0cc = 1.0f;                  // [OK]
    strcpy(m_szWeaponName, "renzoku");   // [OK] +0xd4
    FallInit();
}

void CRenzoku::Precache(void)
{
    m_usSpriteA     = PRECACHE_MODEL("sprites/kiblasta.spr");       // [OK] +0x1dc
    m_usSpriteB     = PRECACHE_MODEL("sprites/kiblastb.spr");       // +0x1de
    m_usSpriteTrail = PRECACHE_MODEL("sprites/kiblasttrail.spr");   // +0x1e0
    PRECACHE_SOUND("weapons/kiblast.wav");
    PRECACHE_SOUND("weapons/kiplosion.wav");
    PRECACHE_SOUND("vegeta/renzoku.wav");
}

int CRenzoku::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 1;
    p->iPosition = 2;
    m_iId = p->iId = 30;
    p->iWeight   = 25;
    p->iFlags    = 0;
    return 1;
}

BOOL CRenzoku::Deploy(void)
{
    m_iBarrage = 0;                          // [OK] +0x1d4
    m_fHand = 0;                             // [OK] +0x1d8
    return CChargedAttack::Deploy();         // [OK]
}

void CRenzoku::Holster(int skiplocal)
{
    m_pPlayer->f_33c = 0;                    // [OK] +0x33c
    CChargedAttack::Holster(skiplocal);      // [OK]
}

void CRenzoku::EmitShootSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/kiblast.wav", 1.0, 0.8, 0, 100);   // [OK]
}

void CRenzoku::PrimaryAttack(void)
{
    if (m_iBarrage > 0)
    {
        vf_148();                            // [OK] vtable +0x148: rajada em andamento
        return;
    }
    if (m_pPlayer->f_33c)
    {
        m_pPlayer->f_33c = 0;                // [OK] +0x33c (828)
        EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_VOICE, "common/null.wav", 1.0, 0.8, 0, 100);
    }
    CChargedAttack::PrimaryAttack();         // [OK]
}

void CRenzoku::Shoot(void)
{
    if (m_pPlayer->f_334)
    {
        m_pPlayer->m_flSpeedMult = 1.0f;                     // [OK]
        m_pPlayer->f_334 = 0;
        m_pPlayer->f_33c = 1;                                // [OK] +0x33c: soltando a rajada
        m_pPlayer->DrawChargeBar(0);
        if (m_iCharge >= m_iMaxCharge / 3)
        {
            m_iBarrage = m_iCharge * 6 / m_iMaxCharge;       // [OK] ate 6 tiros conforme a carga
            m_pPlayer->EmitClassSound("renzoku.wav");        // [OK]
        }
        else
        {
            SilenceVoice();
            SilenceWeaponSounds();
            m_iBarrage = 0;                                  // [OK]
        }
    }
    else if (m_iBarrage > 0)
    {
        ShootAttack();                                       // [OK] +0x17c: um tiro por chamada
        m_iBarrage--;
    }
}

void CRenzoku::WeaponIdle(void)
{
    if (m_pPlayer->f_334 || m_iBarrage > 0)
    {
        if (UTIL_WeaponTimeBase() <= m_flTimeWeaponIdle)     // [OK] +0xa4
            return;
        Shoot();                                             // [OK] +0x15c
        return;
    }
    if (m_pPlayer->f_33c)
    {
        m_pPlayer->f_33c = 0;
        EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_VOICE, "common/null.wav", 1.0, 0.8, 0, 100);
    }
    m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + 0.1;        // [OK]
}

void CRenzoku::SecondaryAttack(void)
{
    if (m_pPlayer->f_334)
        return;                                              // [OK] nao durante a carga
    if (m_iBarrage > 0)
        vf_148();                                            // [OK]
    m_iBarrage = 0;
    m_pPlayer->f_33c = 0;
    if (m_pPlayer->UseKi(15))                                // [OK] 15 de ki: tiro unico forte
    {
        UTIL_MakeVectors(m_pPlayer->pev->v_angle);
        Vector start = m_pPlayer->GetGunPosition() + gpGlobals->v_forward * 10;   // [OK]
        start = start + gpGlobals->v_forward.Normalize() * 5;                       // [OK] 5.0
        Vector vel = gpGlobals->v_forward * 2000;                                   // [OK] 2000.0
        float flRatio = GetPowerRatio();
        CKiAttack::ShootKiAttack(m_pPlayer->pev, start, vel, (int)(flRatio * 10.0), m_usSpriteA, m_usSpriteB, m_usSpriteTrail);   // [OK]
        EmitShootSound();                                    // [OK] +0x164
        m_pPlayer->SetAnimation((PLAYER_ANIM)5);
        m_flNextPrimaryAttack = m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + 0.6;   // [OK]
    }
}

void CRenzoku::ShootAttack(void)
{
    int iRandA = RANDOM_LONG(0, 10);                         // [OK]
    int iRandB = RANDOM_LONG(-10, 10);
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector gun = m_pPlayer->GetGunPosition();
    Vector start;
    Vector vel;
    if (m_fHand)                                             // [OK] +0x1d8: alterna as maos
    {
        start = gun + gpGlobals->v_forward * 10;             // [OK]
        start = start + gpGlobals->v_right * 5;              // [?] vetor lateral de 5.0 (v_right ou v_up)
        vel = gpGlobals->v_forward * 2000 + gpGlobals->v_right * (float)(-iRandA) + gpGlobals->v_up * (float)iRandB;   // [OK]
        m_pPlayer->SetAnimation((PLAYER_ANIM)5);
    }
    else
    {
        start = gun + gpGlobals->v_right * -10;              // [?] -10.0 * vetor lateral
        start = start + gpGlobals->v_right * 5;              // [?]
        vel = gpGlobals->v_forward * 2000 + gpGlobals->v_right * (float)iRandA + gpGlobals->v_up * (float)iRandB;   // [OK]
        m_pPlayer->SetAnimation((PLAYER_ANIM)6);
    }
    m_fHand = !m_fHand;                                      // [OK]
    float flRatio = GetPowerRatio();
    CKiAttack::ShootCurvedKiAttack(m_pPlayer->pev, start, vel, (int)(flRatio * 5.0), m_usSpriteA, m_usSpriteB, m_usSpriteTrail);   // [OK]
}
