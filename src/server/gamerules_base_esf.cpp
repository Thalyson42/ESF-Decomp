// gamerules_base_esf.cpp -- CGameRules (base): metodos que o ESF acrescentou/mudou. RECUPERADO de decomp_raw/CGameRules.
// Os virtuais ESF nao existem no gamerules.h do SDK; aqui sao definidos como funcoes livres ligadas ao simbolo original
// (asm label), como em outros arquivos. CanHaveAmmo/GetPlayerSpawnSpot/CanHavePlayerItem sao iguais ao SDK (sdk/gamerules.cpp).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"
#include "esf_classes.h"

extern cvar_t melee_skill;                                  // cvar "am_skill" (game_esf.cpp)
void UTIL_SetPlayerModel(CBasePlayer *pPlayer, const char *pszModel);

// Modelos permitidos para o jogador (tabela de 20 x 32 bytes no .rodata; 18 usados)  [OK] lida do binario
static const char g_szModelList[20][32] = {
    "cell", "cell2", "evilbuu", "fatbuu", "frieza", "frieza2", "gohan", "goku", "krillin", "krillin2",
    "piccolo", "piccolo2", "ssjgohan", "ssjgoku", "ssjtrunks", "ssjvegeta", "trunks", "vegeta", "", ""
};

// ---- Metodos com logica ----

// +8: 3 niveis (am_skill 0..2) x 5 multiplicadores de dano/tempo de melee [OK] valores lidos do asm
void GameRules_SetMeleeSettings(void *pThis) asm("SetMeleeSettings__10CGameRules");
void GameRules_SetMeleeSettings(void *pThis)
{
    static const float k[15] = {
        0.4f,  0.7f, 1.1f, 1.5f,  0.85f,     // skill 0
        0.3f,  0.5f, 0.9f, 1.35f, 0.75f,     // skill 1
        0.2f,  0.4f, 0.7f, 1.0f,  0.5f };    // skill 2
    memcpy((char *)pThis + 8, k, sizeof(k));
}

float *GameRules_GetMeleeSkillValues(void *pThis) asm("GetMeleeSkillValues__10CGameRules");
float *GameRules_GetMeleeSkillValues(void *pThis)
{
    int iSkill = (int)melee_skill.value;
    if (iSkill < 0) iSkill = 0;
    else if (iSkill > 2) iSkill = 2;
    return (float *)((char *)pThis + 8 + iSkill * 20);
}

// Troca o modelo se o cliente pediu um da lista; com mp_lockmodels forca o modelo da classe atual.
void GameRules_ClientUserInfoChanged(void *pThis, CBasePlayer *pPlayer, char *infobuffer) asm("ClientUserInfoChanged__10CGameRulesP11CBasePlayerPc");
void GameRules_ClientUserInfoChanged(void *pThis, CBasePlayer *pPlayer, char *infobuffer)
{
    char *szModel = g_engfuncs.pfnInfoKeyValue(infobuffer, "model");
    if (strcasecmp((char *)pPlayer + 0x5a0, szModel)) {          // +0x5a0: modelo atual (string)
        bool bFound = false;
        for (int i = 0; i <= 19 && strcasecmp(g_szModelList[i], ""); i++)
            if (!strcasecmp(g_szModelList[i], szModel))
                bFound = true;
        if (bFound)
            UTIL_SetPlayerModel(pPlayer, g_engfuncs.pfnInfoKeyValue(infobuffer, "model"));
    }
    if (CVAR_GET_FLOAT("mp_lockmodels") == 0)
        return;
    CBaseClass *pClass = *(CBaseClass **)((char *)pPlayer + 0x764);
    if (pClass->Classify() < 0)
        return;
    char szClassModel[256];
    strcpy(szClassModel, pClass->GetModelName());
    if (!strcasecmp(szModel, szClassModel))
        return;
    edict_t *pEdict = pPlayer->edict();
    g_engfuncs.pfnSetClientKeyValue(ENTINDEX(pEdict), g_engfuncs.pfnGetInfoKeyBuffer(pEdict), "model", szClassModel);
    UTIL_SetPlayerModel(pPlayer, szClassModel);
}

// ---- Virtuais triviais (base nao faz nada) [OK] ----
int  GameRules_IsTeamplay(void *) asm("IsTeamplay__10CGameRules");                    int GameRules_IsTeamplay(void *) { return 0; }
const char *GameRules_GetGameDescription(void *) asm("GetGameDescription__10CGameRules");
const char *GameRules_GetGameDescription(void *) { return "Earth Special Forces"; }
void GameRules_UpdateGameMode(void *, CBasePlayer *) asm("UpdateGameMode__10CGameRulesP11CBasePlayer");
void GameRules_UpdateGameMode(void *, CBasePlayer *) {}
int  GameRules_FPlayerCanTakeDamage(void *, CBasePlayer *, CBaseEntity *) asm("FPlayerCanTakeDamage__10CGameRulesP11CBasePlayerP11CBaseEntity");
int  GameRules_FPlayerCanTakeDamage(void *, CBasePlayer *, CBaseEntity *) { return 1; }
int  GameRules_ShouldAutoAim(void *, CBasePlayer *, edict_t *) asm("ShouldAutoAim__10CGameRulesP11CBasePlayerP7edict_s");
int  GameRules_ShouldAutoAim(void *, CBasePlayer *, edict_t *) { return 1; }
int  GameRules_AllowAutoTargetCrosshair(void *) asm("AllowAutoTargetCrosshair__10CGameRules");
int  GameRules_AllowAutoTargetCrosshair(void *) { return 1; }
int  GameRules_ClientCommand(void *, CBasePlayer *, const char *) asm("ClientCommand__10CGameRulesP11CBasePlayerPCc");
int  GameRules_ClientCommand(void *, CBasePlayer *, const char *) { return 0; }
float GameRules_FlHEVChargerRechargeTime(void *) asm("FlHEVChargerRechargeTime__10CGameRules");
float GameRules_FlHEVChargerRechargeTime(void *) { return 0; }
int  GameRules_GetTeamIndex(void *, const char *) asm("GetTeamIndex__10CGameRulesPCc");
int  GameRules_GetTeamIndex(void *, const char *) { return -1; }
const char *GameRules_GetIndexedTeamName(void *, int) asm("GetIndexedTeamName__10CGameRulesi");
const char *GameRules_GetIndexedTeamName(void *, int) { return ""; }
int  GameRules_IsValidTeam(void *, const char *) asm("IsValidTeam__10CGameRulesPCc");
int  GameRules_IsValidTeam(void *, const char *) { return 1; }
void GameRules_ChangePlayerTeam(void *, CBasePlayer *, const char *, int, int) asm("ChangePlayerTeam__10CGameRulesP11CBasePlayerPCcii");
void GameRules_ChangePlayerTeam(void *, CBasePlayer *, const char *, int, int) {}
const char *GameRules_SetDefaultPlayerTeam(void *, CBasePlayer *) asm("SetDefaultPlayerTeam__10CGameRulesP11CBasePlayer");
const char *GameRules_SetDefaultPlayerTeam(void *, CBasePlayer *) { return ""; }
int  GameRules_PlayTextureSounds(void *) asm("PlayTextureSounds__10CGameRules");
int  GameRules_PlayTextureSounds(void *) { return 1; }
int  GameRules_PlayFootstepSounds(void *, CBasePlayer *, float) asm("PlayFootstepSounds__10CGameRulesP11CBasePlayerf");
int  GameRules_PlayFootstepSounds(void *, CBasePlayer *, float) { return 1; }
void GameRules_EndMultiplayerGame(void *) asm("EndMultiplayerGame__10CGameRules");
void GameRules_EndMultiplayerGame(void *) {}
void GameRules_UpdatePlayerStats(void *) asm("UpdatePlayerStats__10CGameRules");
void GameRules_UpdatePlayerStats(void *) {}
void GameRules_DragonBallPickUp(void *, int, int) asm("DragonBallPickUp__10CGameRulesii");
void GameRules_DragonBallPickUp(void *, int, int) {}
class CDragonBall;
void GameRules_DragonBallDrop(void *, int, CDragonBall *) asm("DragonBallDrop__10CGameRulesiP11CDragonBall");
void GameRules_DragonBallDrop(void *, int, CDragonBall *) {}
int  GameRules_PlayerUses(void *, CBasePlayer *) asm("PlayerUses__10CGameRulesP11CBasePlayer");
int  GameRules_PlayerUses(void *, CBasePlayer *) { return 0; }
int  GameRules_IsValidClass(void *, const char *, CBasePlayer *) asm("IsValidClass__10CGameRulesPCcP11CBasePlayer");
int  GameRules_IsValidClass(void *, const char *, CBasePlayer *) { return 1; }
