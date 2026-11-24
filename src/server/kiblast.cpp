// kiblast.cpp -- CKiBlast 8/8. [OK] = conferido. Offsets de globals: v_forward 0x28, v_up 0x34, v_right 0x40.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "player_esf_manual.h"
#include "kiblast.h"

void CKiBlast::Spawn(void)
{
    Precache();
    m_iId = 3;
    m_iDefaultAmmo = 0;
    m_iClip = -1;
    m_fHand = 0;                                    // [OK] +0xc4
    FallInit();
}
void CKiBlast::Precache(void)
{
    m_usSpriteA = PRECACHE_MODEL("sprites/kiblasta.spr");
    m_usSpriteB = PRECACHE_MODEL("sprites/kiblastb.spr");
    m_usSpriteTrail = PRECACHE_MODEL("sprites/kiblasttrail.spr");
    PRECACHE_SOUND("weapons/kiblast.wav");
    PRECACHE_SOUND("weapons/kiplosion.wav");
}
int CKiBlast::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki"; p->iMaxAmmo1 = -1; p->pszAmmo2 = NULL; p->iMaxAmmo2 = -1; p->iMaxClip = -1;
    p->iSlot = 1; p->iPosition = 0;
    m_iId = p->iId = 3;
    p->iFlags = 0; p->iWeight = 25;
    return 1;
}
BOOL CKiBlast::Deploy(void) { return DefaultDeploy("kiblast", "", 0, ""); }
void CKiBlast::Holster(int skiplocal)
{
    m_pPlayer->StopAniTrigger(5);
    m_pPlayer->StopAniTrigger(6);
}

void CKiBlast::PrimaryAttack(void)
{
    if (!m_pPlayer->UseKi(20)) return;               // [OK]
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/kiblast.wav", 1.0, 0.8, 0, 100);
    m_pPlayer->SetAnimation((PLAYER_ANIM)5);
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector gun = m_pPlayer->GetGunPosition();
    Vector start = gun + gpGlobals->v_right * 10;                          // [OK] globals+0x40
    start = start + gpGlobals->v_forward * 5;                              // [OK] globals+0x28
    Vector vel = gpGlobals->v_forward * 2000;
    CKiAttack::ShootKiAttack(m_pPlayer->pev, start, vel, (int)(GetPowerRatio() * 7.0), m_usSpriteA, m_usSpriteB, m_usSpriteTrail);
    m_flNextSecondaryAttack = m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.5;   // [OK]
}

void CKiBlast::SecondaryAttack(void)
{
    if (!m_pPlayer->UseKi(15)) return;               // [OK]
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/kiblast.wav", 1.0, 0.8, 0, 100);
    int iRandA = RANDOM_LONG(0, 10);
    int iRandB = RANDOM_LONG(-10, 10);
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector gun = m_pPlayer->GetGunPosition();
    Vector start, vel;
    if (m_fHand)
    {
        start = gun + gpGlobals->v_right * 10;
        start = start + gpGlobals->v_forward.Normalize() * 10;
        vel = gpGlobals->v_forward * 2000 + gpGlobals->v_right * (float)(-iRandA) + gpGlobals->v_up * (float)iRandB;
        m_pPlayer->SetAnimation((PLAYER_ANIM)5);
    }
    else
    {
        start = gun + gpGlobals->v_right * -10;
        start = start + gpGlobals->v_forward.Normalize() * 10;
        vel = gpGlobals->v_forward * 2000 + gpGlobals->v_right * (float)iRandA + gpGlobals->v_up * (float)iRandB;
        m_pPlayer->SetAnimation((PLAYER_ANIM)6);
    }
    m_fHand = !m_fHand;
    CKiAttack::ShootCurvedKiAttack(m_pPlayer->pev, start, vel, (int)(GetPowerRatio() * 5.0), m_usSpriteA, m_usSpriteB, m_usSpriteTrail);
    m_flNextSecondaryAttack = m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.35;  // [OK]
}
