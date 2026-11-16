// esf_mods.cpp -- funções de classes do SDK (não-CBasePlayer) que o ESF alterou. RECUPERADO À MÃO.
// Fonte: decomp_raw/<Classe>/*.c. As que são iguais ao SDK estão em src/server/sdk/ (docs/sdk_reviewed.txt).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"
#include "multiplay_gamerules.h"

#define ESF_ITEM_RESPAWN_TIME 120      // [OK] SDK: 30

float CHalfLifeMultiplay::FlItemRespawnTime(CItem *pItem)
{
    return gpGlobals->time + ESF_ITEM_RESPAWN_TIME;           // [OK]
}

float CHalfLifeMultiplay::FlPlayerFallDamage(CBasePlayer *pPlayer)
{
    return 10;                                                // [OK] ESF: dano fixo (sem cvar falldamage)
}

void CWorld::Spawn(void)
{
    g_fGameOver = FALSE;
    Precache();
    g_flWeaponCheat = CVAR_GET_FLOAT("sv_cheats");            // [OK] impulse 101 só com sv_cheats
}

void CGib::WaitTillLand(void)
{
    if (!IsInWorld())
    {
        UTIL_Remove(this);
        return;
    }
    if (pev->velocity == g_vecZero)
    {
        SetThink(&CGib::SUB_StartFadeOut);
        pev->movetype = MOVETYPE_NONE;                        // [OK] ESF: o pedaço fica parado...
        pev->origin.z += 10.0f;                               // [OK] ...e sobe 10 unidades
        pev->nextthink = gpGlobals->time + m_lifeTime;
        if (m_bloodColor != DONT_BLEED)
            CSoundEnt::InsertSound(bits_SOUND_MEAT, pev->origin, 384, 25);
    }
    else
        pev->nextthink = gpGlobals->time + 0.5f;
}

void CBaseEntity::TraceAttack(entvars_t *pevAttacker, float flDamage, Vector vecDir, TraceResult *ptr, int bitsDamageType)
{
    Vector vecOrigin = ptr->vecEndPos - vecDir * 4;
    if (pev->takedamage)
    {
        AddMultiDamage(pevAttacker, this, flDamage, bitsDamageType);
        int blood = BloodColor();
        if (blood != DONT_BLEED || (bitsDamageType & DMG_BULLET))   // [OK] ESF: sangra também sem cor de sangue se for bala (bits & 2)
        {
            SpawnBlood(vecOrigin, blood, flDamage);
            TraceBleed(flDamage, vecDir, ptr, bitsDamageType);      // [OK] virtual (slot +0x44) no ESF
        }
    }
}
