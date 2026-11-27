// playerbag.cpp -- CPlayerBag 4/4. RECUPERADO de decomp_raw/CPlayerBag. [OK] = conferido.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "player_esf_manual.h"
#include "playerbag.h"

#define BAG_MODEL "models/w_sensubeanbag.mdl"

void CPlayerBag::Precache(void)
{
    PRECACHE_MODEL(BAG_MODEL);                              // [OK]
}

void CPlayerBag::Spawn(void)
{
    Precache();                                             // [OK] vfunc +0xc
    SET_MODEL(ENT(pev), BAG_MODEL);
    pev->movetype = MOVETYPE_TOSS;                          // [OK] 6
    pev->solid = SOLID_TRIGGER;                             // [OK] 1
    UTIL_SetSize(pev, Vector(-16, -16, 0), Vector(16, 16, 16));
}

void CPlayerBag::Touch(CBaseEntity *pOther)
{
    if (!pOther->IsPlayer())                                // vfunc +0xa0
        return;
    ((CBasePlayer *)pOther)->GiveBean(m_iBeans);
    UTIL_Remove(this);
}

// Cria o saco na posicao/velocidade do jogador morto
CPlayerBag *CPlayerBag::CreateBag(int iBeans, CBasePlayer *pPlayer)
{
    CPlayerBag *pBag = GetClassPtr((CPlayerBag *)NULL);
    pBag->Spawn();
    pBag->pev->origin = pPlayer->pev->origin;
    UTIL_SetOrigin(pBag->pev, pBag->pev->origin);
    pBag->pev->velocity = pPlayer->pev->velocity;
    pBag->m_iBeans = iBeans;
    return pBag;
}
