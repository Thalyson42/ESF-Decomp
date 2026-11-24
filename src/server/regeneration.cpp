// regeneration.cpp -- CRegeneration 8/8. [OK] = conferido.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "player_esf_manual.h"
#include "regeneration.h"
#define RP(p,type,off) (*(type *)((char *)(p) + (off)))
#define REGEN_ACTIVE 0x334      // [OK] flag "regenerando" do jogador
#define REGEN_FLOAT  0x754      // [?] float: 0 enquanto regenera, 1.0 em repouso

void CRegeneration::Spawn(void)
{
    Precache();
    m_iId = 29;
    m_iDefaultAmmo = 0;
    m_iClip = -1;
    FallInit();
}
void CRegeneration::Precache(void) { PRECACHE_SOUND("weapons/regen.wav"); }
int CRegeneration::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki"; p->iMaxAmmo1 = -1; p->pszAmmo2 = NULL; p->iMaxAmmo2 = -1; p->iMaxClip = -1;
    p->iSlot = 6; p->iPosition = 1;
    m_iId = p->iId = 29;
    p->iFlags = 0; p->iWeight = -1;                   // [OK] a1[10] = 0xffffffff
    return 1;
}
BOOL CRegeneration::Deploy(void) { return DefaultDeploy("regeneration", "", 0, ""); }
void CRegeneration::StopRegen(void)
{
    if (RP(m_pPlayer, int, REGEN_ACTIVE))
    {
        RP(m_pPlayer, int, REGEN_ACTIVE) = 0;
        RP(m_pPlayer, float, REGEN_FLOAT) = 1.0f;
        EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "common/null.wav", 1.0, 0.8, 0, 100);   // corta o som em loop
    }
}
void CRegeneration::Holster(int skiplocal) { StopRegen(); }
void CRegeneration::WeaponIdle(void)       { StopRegen(); }
void CRegeneration::PrimaryAttack(void)
{
    if (m_pPlayer->UseKi(20))                          // [OK] 20 de ki por tick
    {
        if (!RP(m_pPlayer, int, REGEN_ACTIVE))
        {
            RP(m_pPlayer, int, REGEN_ACTIVE) = 1;
            RP(m_pPlayer, float, REGEN_FLOAT) = 0;
            EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/regen.wav", 1.0, 0.8, 0, 100);
        }
        m_pPlayer->pev->health += 1.0f;                // [OK] +1 de vida por tick
        float flMax = RP(m_pPlayer, float, 0x24c);     // [?] vida maxima do ESF
        if (flMax < m_pPlayer->pev->health) m_pPlayer->pev->health = flMax;
    }
    m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.6;
}
