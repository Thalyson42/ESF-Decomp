// solarflare.cpp -- CSolarFlare 8/8. [OK] = conferido.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "player_esf_manual.h"
#include "solarflare.h"

void CSolarFlare::Spawn(void)
{
    Precache();
    m_iId = 8;
    m_iDefaultAmmo = 0;
    m_iClip = -1;
    FallInit();
}
void CSolarFlare::Precache(void)
{
    PRECACHE_SOUND("goku/solarflare.wav");
    PRECACHE_SOUND("cell/solarflare.wav");
    PRECACHE_SOUND("cell2/solarflare.wav");
    PRECACHE_SOUND("krillin/solarflare.wav");
    PRECACHE_SOUND("weapons/solarflare.wav");
}
int CSolarFlare::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki"; p->iMaxAmmo1 = -1; p->pszAmmo2 = NULL; p->iMaxAmmo2 = -1; p->iMaxClip = -1;
    p->iSlot = 5; p->iPosition = 0;
    m_iId = p->iId = 8;
    p->iFlags = 0; p->iWeight = -1;
    return 1;
}
BOOL CSolarFlare::Deploy(void)
{
    m_fUsed = 0;
    return DefaultDeploy("solarflare", "", 0, "");
}
void CSolarFlare::EmitShootSound(void)
{
    m_pPlayer->EmitClassSound("solarflare.wav");
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/solarflare.wav", 1.0, 0.8, 0, 100);
}
void CSolarFlare::PrimaryAttack(void)
{
    if (m_fUsed) return;                                 // [OK] +0xc4
    float flKi = m_pPlayer->pev->fuser4;                 // [OK] ki = pev+0x260
    if (flKi <= 500.0f) return;                          // [OK] precisa de mais de 500 de ki
    int iCost = (flKi < 750.0f) ? (int)flKi : 750;       // [OK] gasta ate 750
    float flRatio = (float)iCost / 750.0f;
    m_pPlayer->UseKi(iCost);
    m_pPlayer->SetAnimation((PLAYER_ANIM)5);
    EmitShootSound();
    Vector vecAng = m_pPlayer->pev->v_angle + m_pPlayer->pev->punchangle;   // [OK] +0x74 + +0x68
    UTIL_MakeVectors(vecAng);
    float flRadius = flRatio * 325.0f;                   // [OK]
    float flDist = 0.5f * flRadius + 40.0f;              // [OK] centro do flash a frente do jogador
    Vector vecCenter = m_pPlayer->pev->origin + gpGlobals->v_forward * flDist;
    ::RadiusDamage(vecCenter, m_pPlayer->pev, m_pPlayer->pev, 0, flRadius, CLASS_NONE, 2);   // [OK] dano 0: so o efeito de cegueira
    if (m_pPlayer->f_344) return;                       // [OK] f_344 = ja esta cego (flash)
    UTIL_ScreenFade(m_pPlayer, Vector(255, 255, 255), 1.0f, 0.5f, 255, 0);    // [OK] o proprio usuario tambem ve o flash
}
