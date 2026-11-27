// gamerules_mp_esf.cpp -- CHalfLifeMultiplay: funcoes pequenas que o assemble_sdk nao reproduziu (score < 0.86) ou que o ESF mudou.
// RECUPERADO de decomp_raw/CHalfLifeMultiplay. [OK] = conferido contra o decompilado.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "gamerules.h"
#include "voice_gamemgr.h"

extern CVoiceGameMgr g_VoiceGameMgr;
extern cvar_t weaponstay, allowmonsters;
extern int g_fGameOver;
#define WEAPON_RESPAWN_TIME 20      // [OK] "+ 20.0" no asm
#define ENTITY_INTOLERANCE 100      // [OK] "- 100" no asm

BOOL CHalfLifeMultiplay::ClientConnected(edict_t *pEntity, const char *pszName, const char *pszAddress, char szRejectReason[128])
{
    g_VoiceGameMgr.ClientConnected(pEntity);                      // [OK] sem mais nada (o SDK so faz isso)
    return TRUE;
}

BOOL CHalfLifeMultiplay::FPlayerCanRespawn(CBasePlayer *pPlayer) { return TRUE; }                 // [OK]
float CHalfLifeMultiplay::FlPlayerSpawnTime(CBasePlayer *pPlayer) { return gpGlobals->time; }     // [OK] respawn imediato
BOOL CHalfLifeMultiplay::AllowAutoTargetCrosshair(void) { return FALSE; }                         // [OK] (a base devolve 1)
int  CHalfLifeMultiplay::IPointsForKill(CBasePlayer *pAttacker, CBasePlayer *pKilled) { return 1; }   // [OK]
void CHalfLifeMultiplay::PlayerGotWeapon(CBasePlayer *pPlayer, CBasePlayerItem *pWeapon) {}      // [OK]
BOOL CHalfLifeMultiplay::FAllowMonsters(void) { return allowmonsters.value != 0.0f; }             // [OK]
// Inline na classe do SDK (gamerules.h), ligadas direto ao simbolo original: PlayTextureSounds -> 0, GetTeamID -> "",
// EndMultiplayerGame -> GoToIntermission() (vfunc +0x110); GetGameDescription nao e declarada no SDK.
BOOL MP_PlayTextureSounds(void *) asm("PlayTextureSounds__18CHalfLifeMultiplay");
BOOL MP_PlayTextureSounds(void *) { return FALSE; }                                               // [OK]
const char *MP_GetTeamID(void *, CBaseEntity *) asm("GetTeamID__18CHalfLifeMultiplayP11CBaseEntity");
const char *MP_GetTeamID(void *, CBaseEntity *) { return ""; }                                     // [OK]
const char *MP_GetGameDescription(void *) asm("GetGameDescription__18CHalfLifeMultiplay");
const char *MP_GetGameDescription(void *) { return "ESF Free Fight"; }                             // [OK]
void MP_EndMultiplayerGame(void *p) asm("EndMultiplayerGame__18CHalfLifeMultiplay");
void MP_EndMultiplayerGame(void *p)
{
    (*(void (***)(void *))((char *)p + 0x44))[0x110 / 4](p);   // [OK] vptr em +0x44, slot +0x110 = GoToIntermission (protegido no SDK)
}

Vector CHalfLifeMultiplay::VecWeaponRespawnSpot(CBasePlayerItem *pWeapon)
{
    return pWeapon->pev->origin;                                  // [OK]
}

int CHalfLifeMultiplay::WeaponShouldRespawn(CBasePlayerItem *pWeapon)
{
    if (pWeapon->pev->spawnflags & SF_NORESPAWN)                  // [OK] bit 0x40000000 (byte 0x1a3 & 0x40)
        return GR_WEAPON_RESPAWN_NO;
    return GR_WEAPON_RESPAWN_YES;
}

float CHalfLifeMultiplay::FlWeaponRespawnTime(CBasePlayerItem *pWeapon)
{
    if (weaponstay.value > 0 && !(pWeapon->iFlags() & ITEM_FLAG_LIMITINWORLD))
        return gpGlobals->time + 0;                               // [OK] respawn quase instantaneo
    return gpGlobals->time + WEAPON_RESPAWN_TIME;                 // 20s
}

float CHalfLifeMultiplay::FlWeaponTryRespawn(CBasePlayerItem *pWeapon)
{
    if (pWeapon && pWeapon->m_iId && (pWeapon->iFlags() & ITEM_FLAG_LIMITINWORLD)) {
        if (NUMBER_OF_ENTITIES() < (gpGlobals->maxEntities - ENTITY_INTOLERANCE))
            return 0;
        return FlWeaponRespawnTime(pWeapon);                      // [OK] vfunc +0x80
    }
    return 0;
}

void CHalfLifeMultiplay::PlayerThink(CBasePlayer *pPlayer)
{
    if (g_fGameOver) {                                            // [OK] mascara 0x827 = DUCK|ATTACK|ATTACK2|USE|JUMP
        if (pPlayer->m_afButtonPressed & (IN_DUCK | IN_ATTACK | IN_ATTACK2 | IN_USE | IN_JUMP))
            m_iEndIntermissionButtonHit = TRUE;
        pPlayer->m_afButtonPressed = 0;
        pPlayer->pev->button = 0;
        pPlayer->m_afButtonReleased = 0;
    }
}

// ---- ESF: modo de jogo, passos, estatisticas e limite de personagens ----
#include "esf_classes.h"
extern cvar_t characterlimit;                  // "mp_characterlimit" (game_esf.cpp)
extern cvar_t *g_footsteps;
extern int gmsgGameMode;

// Avisa o cliente (ou todos, se pPlayer == NULL) do modo de jogo: byte 0 + limite de personagens
void CHalfLifeMultiplay::UpdateGameMode(CBasePlayer *pPlayer)        // [OK] 0xdbed0
{
    if (pPlayer) { MESSAGE_BEGIN(MSG_ONE, gmsgGameMode, NULL, pPlayer->pev); }
    else         { MESSAGE_BEGIN(MSG_ALL, gmsgGameMode); }
        WRITE_BYTE(0);
        WRITE_BYTE((int)characterlimit.value & 0xff);
    MESSAGE_END();
}

BOOL CHalfLifeMultiplay::PlayFootstepSounds(CBasePlayer *pl, float fvol)   // [OK] 0xddb10 (asm: velocidade > 220, nao >=)
{
    if (g_footsteps && g_footsteps->value == 0)
        return FALSE;
    if (!pl->IsOnLadder() && pl->pev->velocity.Length2D() <= 220.0f)
        return FALSE;
    return TRUE;
}

// Media de PL maximo (+0) e de PL potencial (+4) dos jogadores vivos com classe valida; guardada nos 2 primeiros ints do gamerules
// (virtual ESF fora do gamerules.h do SDK: funcao livre ligada ao simbolo)
void MP_UpdatePlayerStats(void *pThis) asm("UpdatePlayerStats__18CHalfLifeMultiplay");
void MP_UpdatePlayerStats(void *pThis)                                // [OK] 0xdeb30
{
    int iCount = 0, iSumMax = 0, iSumPot = 0;
    for (int i = 1; i <= gpGlobals->maxClients; i++) {
        CBasePlayer *pl = (CBasePlayer *)UTIL_PlayerByIndex(i);
        if (!pl || !pl->IsPlayer())
            continue;
        if (pl->m_iMaxPowerLevel <= 0)
            continue;
        if (pl->m_pClass->Classify() >= 0) {
            iCount++;
            iSumMax += pl->m_iMaxPowerLevel;
            iSumPot += pl->GetPotentialPL();
        }
    }
    int *pStats = (int *)pThis;
    if (iCount <= 0) { pStats[0] = 0; pStats[1] = 0; return; }
    pStats[0] = iSumMax / iCount;
    pStats[1] = iSumPot / iCount;
}

// mp_characterlimit: no maximo N jogadores com o mesmo personagem
BOOL MP_IsValidClass(void *pThis, const char *pszClass, CBasePlayer *pPlayer) asm("IsValidClass__18CHalfLifeMultiplayPCcP11CBasePlayer");
BOOL MP_IsValidClass(void *pThis, const char *pszClass, CBasePlayer *pPlayer)   // [OK] 0xdec20
{
    int iLeft = (int)characterlimit.value;
    if (iLeft <= 0)
        return TRUE;
    for (int i = 1; i <= gpGlobals->maxClients; i++) {
        CBasePlayer *pl = (CBasePlayer *)UTIL_PlayerByIndex(i);
        if (!pl || !pl->IsPlayer() || pl == pPlayer)
            continue;
        if (pl->pev->iuser1)                                  // +0x244 [?] modo de observador
            continue;
        if (pl->m_afPhysicsFlags & PFLAG_OBSERVER)
            continue;
        if (!strcmp(STRING(pl->pev->netname), ""))
            continue;
        if (!pl->pev->solid)                                  // edict->v +0x10c
            continue;
        if (!strcmp(pszClass, CBaseClass::GetName(pl->m_pClass->Classify())))
            iLeft--;
    }
    return iLeft > 0;
}
