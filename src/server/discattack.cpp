// discattack.cpp -- RECUPERADO de decomp_raw/CDiscAttack (6 funcoes). [OK] valores do decompilado; [?] nomes de campos.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "discattack.h"

void CDiscAttack::Spawn(void)
{
    m_fReleased = 1;               // [OK] +0x2ac
    m_fVaporizing = 0;             // [OK] +0x2b0
    CMagicAttack::Spawn();         // [OK]
}

void CDiscAttack::Remove(void)
{
    CMagicAttack::Remove();        // [OK]
    EMIT_SOUND_DYN(ENT(pev), CHAN_WEAPON, "weapons/rotating.wav", 0, 0, SND_STOP, 100);   // [OK] 32 = SND_STOP: para o som de rotacao
}

void CDiscAttack::Vaporize(void)
{
    if (!m_fReleased)
    {
        m_fVaporizing = 1;         // [OK] ainda segurado: so marca; o dono remove depois
        return;
    }
    Remove();                      // [OK] vtable +0x1fc (slot 125)
}

void CDiscAttack::HitTouch(CBaseEntity *pOther)
{
    entvars_t *pevOwner = pev->owner ? VARS(pev->owner) : NULL;     // [OK] +0x198
    if (pevOwner == pOther->pev)
        return;                                                       // nao acerta o dono
    m_pHit = pOther;                                                  // [OK] +0x2b4
    if (!pOther->IsPlayer())                                          // [OK] vtable[38]
    {
        Vaporize();                                                   // [?] ramo final (parede/objeto): o disco some
        return;
    }
    CBasePlayer *pPlayer = (CBasePlayer *)pOther;
    if (pPlayer->m_fInPowerStruggle || pPlayer->m_fInBlockStruggle || pPlayer->m_fBlockStruggling   // [OK] +0x354,+0x35c,+0x358
        || pPlayer->f_3e4 == 4 || pPlayer->f_3e4 == 5)                                              // [OK] +0x3e4 (estados 4/5)
    {
        Vaporize();                                                   // [OK] alvo se defendeu: o disco some
        return;
    }
    pOther->TakeDamage(pev, pevOwner, pev->dmg, 0x800000);            // [OK] vtable[11]; tipo de dano 0x800000
    EMIT_SOUND_DYN(ENT(pev), CHAN_VOICE, "weapons/disckill.wav", 1.0, 0.8, 0, 100);   // [OK] canal 2
}

void CDiscAttack::AuraCheck(void)
{
    if (m_fReleased)
        return;                                                       // [OK] so enquanto segurado
    if (!pev->owner)
        return;
    CBaseEntity *pOwner = CBaseEntity::Instance(pev->owner);          // [OK]
    if (!pOwner)
        return;
    if (pOwner->IsPlayer() && ((CBasePlayer *)pOwner)->f_76c)         // [?] +0x76c: dono com aura/carregando
    {
        if (pev->movetype == MOVETYPE_NOCLIP)
            pev->movetype = MOVETYPE_FOLLOW;                          // [OK] 8 -> 12: acompanha o dono
    }
    else if (pev->movetype == MOVETYPE_FOLLOW)
    {
        pev->movetype = MOVETYPE_NOCLIP;                              // [OK] 12 -> 8
        pev->aiment = NULL;                                           // [OK] +0x194
    }
}
