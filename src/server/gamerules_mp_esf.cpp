// gamerules_mp_esf.cpp -- CHalfLifeMultiplay: virtuais que so existem no ESF (UpdatePlayerStats, IsValidClass) e as inline do SDK.
// As demais (GoToIntermission, ChangeLevel, SendMOTDToClient, GetNextBestWeapon, respawn de armas, PlayerThink...) estao em
// sdk/multiplay_gamerules.cpp (iguais ao SDK; as 3 que o ESF muda foram ajustadas la: UpdateGameMode, AllowAutoTargetCrosshair, ChangeLevel).
// RECUPERADO de decomp_raw/CHalfLifeMultiplay. [OK] = conferido contra o decompilado.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "gamerules.h"
#include "voice_gamemgr.h"

extern CVoiceGameMgr g_VoiceGameMgr;
extern cvar_t weaponstay, allowmonsters, mp_chattime;
extern int g_fGameOver;
#define WEAPON_RESPAWN_TIME 20      // [OK] "+ 20.0" no asm
#define ENTITY_INTOLERANCE 100      // [OK] "- 100" no asm

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

// ---- ESF: estatisticas e limite de personagens ----
#include "esf_classes.h"
extern cvar_t characterlimit;                  // "mp_characterlimit" (game_esf.cpp)

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
