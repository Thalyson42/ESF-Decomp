// CBotManager -- gerenciador global dos bots (objeto BotManager). Campos acessados pelos nomes f_XXX (offset em hex).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "gamerules.h"
#include "esf_classes.h"
#include "bot.h"
#include "CBotManager.h"
#include <iostream>

extern CBotManager BotManager;
extern CBotChat ChatClass;
extern cvar_t sv_num_bots, sv_bot_skill;                                      // [OK] CBotManager::sv_num_bots / sv_bot_skill (estaticos)
extern void HandleNormalBotCommands(void);
extern void ShowInGameBotHelpWindow(void);

BOOL CBotManager::IsAddingMultipleBots(void)
{
    return (f_014 || f_015 || f_016) ? TRUE : FALSE;                         // [OK] flags: encher servidor / meio time / time
}

void CBotManager::FillServer(void)
{
    f_014 = 1;
    f_018 = (char)(gpGlobals->maxClients - 1);                                // [OK] gpGlobals+0x90
}

void CBotManager::FillATeam(unsigned char ucTeam)
{
    f_016 = 1;
    f_017 = ucTeam;
    f_018 = (char)(gpGlobals->maxClients - 1);
}

void CBotManager::FillAHalfTeam(unsigned char ucTeam)
{
    f_015 = 1;
    f_017 = ucTeam;
    f_018 = (char)(gpGlobals->maxClients / 2 - 1);                            // [OK]
}

void CBotManager::HandleBotDebugCommands(void)
{
    if (!g_engfuncs.pfnIsDedicatedServer())
        f_d45 = 0;                                                            // [OK]
}

void CBotManager::GameInit(void)
{
    CVAR_REGISTER(&sv_num_bots);
    CVAR_REGISTER(&sv_bot_skill);
    LoadBotNames();
    ChatClass.ReadChatFile();
    CreateBotPersonalities();
    CreateSuperbotSettings();
    CreateSkillData();
    g_engfuncs.pfnAddServerCommand("esf_bot", HandleNormalBotCommands);       // [?] o decompilado mostra Voice_GetClientListening (simbolo trocado)
    g_engfuncs.pfnAddServerCommand("bot_help", ShowInGameBotHelpWindow);
}

void CBotManager::SetMaxBots(short sMax)
{
    if ((unsigned short)(sMax + 1) > 32)
    {
        std::cout << "Invalid max_bots argument, should be between -1 and 31\n";   // [OK]
        return;
    }
    f_01c = sMax;
}

void CBotManager::SetMinBots(short sMin)
{
    if ((unsigned short)(sMin + 1) > 32)
    {
        std::cout << "Invalid min_bots argument, should be between -1 and 31\n";   // [OK]
        return;
    }
    f_01a = sMin;
}

// Tempo do quadro em ms (max 255) e escala de tempo (+0xd40)
void CBotManager::CalcMSec(void)
{
    f_d38 = (float)(int)((gpGlobals->time - f_d3c) * 1000.0);                 // [OK]
    if (f_d38 > 255.0f)
        f_d38 = 255.0f;
    f_d40 = f_d38 / 1000.0f;
    f_d3c = gpGlobals->time;
}

// sValue: 1 liga, 0 desliga, -1 alterna
void CBotManager::ChangeBotBoolSetting(bool &bSetting, short sValue, const char *szName)
{
    if (sValue == 1)
        bSetting = true;
    else if (sValue == 0)
        bSetting = false;
    else if (sValue == -1)
        bSetting = !bSetting;                                                 // [OK]
    std::cout << szName;
    std::cout << (bSetting ? " is now ENABLED\n" : " is now DISABLED\n");
}

// Desliga o "catch-up" de power level enquanto super bots estao ativos (a cada 0.75 s)
void CBotManager::SBotRulesThink(void)
{
    if (f_030 > gpGlobals->time)
        return;
    if (!f_02c)
        return;
    f_030 = gpGlobals->time + 0.75f;                                          // [OK]
    if (CVAR_GET_FLOAT("mp_plcatchup") == 1.0f)
        CVAR_SET_FLOAT("mp_plcatchup", 0);
}

// Tabela de super bots em +0x10c4: 16 bytes por entrada, short da porcentagem do laser em +12
void CBotManager::ChangeSBotLaserPercent(short sPercent)
{
    if (sPercent == -1)
        sPercent = RANDOM_LONG(1, 100);
    for (int i = 0; i <= 2; i++)
        *(short *)((char *)this + 4304 + i * 16) = sPercent;                  // [OK]
    char szNum[24];
    memset(szNum, 0, sizeof(szNum));
    sprintf(szNum, "%d", sPercent);
    std::cout << "Super bot laser percent for EVERY superbot is now: " << szNum << "\n";
}

// Personalidades: 9 entradas de 60 bytes a partir de +0xd50 (3408)
void CBotManager::ChangePersoPercentSetting(int iMemberOffset, short sPercent, const char *szName)
{
    if (sPercent == -1)
        sPercent = RANDOM_LONG(0, 100);
    if ((unsigned short)sPercent > 100)
    {
        std::cout << "Wrong value! Should be between -1 and 100\n";
        return;
    }
    for (int i = 0; i <= 8; i++)
        *(short *)((char *)this + iMemberOffset + 60 * i + 3407) = sPercent;  // [OK] 3407 = 3408 - 1 (ponteiro p/ membro = offset+1)
    char szNum[24];
    memset(szNum, 0, sizeof(szNum));
    sprintf(szNum, "%d", sPercent);
    std::cout << "The personality setting " << szName << " is now for each personality " << szNum << "\n";
}

// iLevel: 0 agressivo, 1 normal, 2 defensivo (int em +0xd84 + 60*i)
void CBotManager::ChangeAggressionLevel(int iLevel)
{
    for (int i = 0; i <= 8; i++)
        *(int *)((char *)this + 0xd84 + 60 * i) = iLevel;                     // [OK]
    char szName[24];
    memset(szName, 0, sizeof(szName));
    if (iLevel == 1)      strcpy(szName, "Normal");
    else if (iLevel == 0) strcpy(szName, "Aggressive");
    else if (iLevel == 2) strcpy(szName, "Defensive");
    std::cout << "The personality setting aggression level is now for each personality " << szName << "\n";
}

extern void BuildBotFileName(char *szOut, const char *szFile, int iFlag);      // [?] funcao livre __FPcPCci (nome real: BuildBotFileName__FPcN20)

// Nomes de bots: ate 100 entradas de 33 bytes a partir de +0x40; contagem em +0x3e (short)
void CBotManager::LoadBotNames(void)
{
    char szPath[256];
    BuildBotFileName(szPath, "bot_names.txt", 0);
    FILE *fp = fopen(szPath, "r");
    g_engfuncs.pfnServerPrint("Reading bot_names file... ");
    if (!fp)
    {
        g_engfuncs.pfnServerPrint("file not found\n");
        return;
    }
    char szLine[80];
    while (f_03e <= 99 && fgets(szLine, 80, fp))
    {
        int iLen = strlen(szLine);
        if (szLine[iLen - 1] == '\n')
        {
            szLine[iLen - 1] = 0;
            iLen--;
        }
        for (int i = 0; i < iLen; i++)                                        // remove caracteres fora de ' '..'~' e aspas
        {
            if (((unsigned char)(szLine[i] - 32) > 94 || szLine[i] == '"') && i < iLen)
                for (int j = i; j < iLen; j++)
                    szLine[j] = szLine[j + 1];                                // [OK] igual ao original (nao reexamina a posicao)
        }
        if (szLine[0])
        {
            strncpy((char *)this + 0x40 + f_03e * 33, szLine, 32);            // [OK] shl 5 + idx = 33 * idx
            f_03e++;
        }
    }
    fclose(fp);
    g_engfuncs.pfnServerPrint("done\n");
}

// Escolhe um nome da lista que nenhum jogador valido esteja usando (comeca em posicao aleatoria)
void CBotManager::PickBotName(char *szName)
{
    int iPick = RANDOM_LONG(1, f_03e) - 1;
    int iTries = 0;
    BOOL bUsed;
    do
    {
        bUsed = FALSE;
        const char *szCandidate = (char *)this + 0x40 + iPick * 33;
        for (int i = 1; i <= gpGlobals->maxClients; i++)
        {
            CBasePlayer *pPl = (CBasePlayer *)UTIL_PlayerByIndex(i);
            if (UTIL_IsValidPlayer(pPl, 0, 0) && !strcmp(szCandidate, STRING(pPl->pev->netname)))
            {
                bUsed = TRUE;
                break;
            }
        }
        if (!bUsed)
            break;
        iPick++;
        if (iPick == f_03e)
            iPick = 0;
        iTries++;
        if (iTries == f_03e)
            bUsed = FALSE;                                                    // todos usados: aceita este
    } while (bUsed);
    strcpy(szName, (char *)this + 0x40 + iPick * 33);                         // [?] o decompilado corta aqui; destino = argumento
}

// Conexao de um jogador: conta (+0xd44) e, se nao for local (127.0.0.1), agenda checagem e remove bot excedente
void CBotManager::PlayerConnect(const char *szAddress)
{
    f_d44++;
    if (strncmp(szAddress, "127.0.0.1", 10) != 0)                             // [?] comparacao de 10 bytes, resultado em flag
    {
        f_010 = gpGlobals->time + 30.0f;                                      // [OK]
        if (f_d44 > f_01a && f_01a != -1)
            KickLastBot(0);
    }
}

extern void WaypointFree(void);
extern void HandleNormalBotCommands(void);

// Fim do mapa: libera waypoints e expulsa todos os bots
void CBotManager::MapFree(void)
{
    WaypointFree();
    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CBasePlayer *pPl = (CBasePlayer *)UTIL_PlayerByIndex(i);
        if (!UTIL_IsValidPlayer(pPl, 0, 0))
            continue;
        BOOL bBot = FALSE;
        if (!pPl->IsNetClient())                                              // [?] vtable +0xa4
            bBot = (*((unsigned char *)pPl->pev + 0x1a5) & 32) != 0;
        if (bBot && pPl)
        {
            char szCmd[128];
            sprintf(szCmd, "kick \"%s\"\n", STRING(pPl->pev->netname));       // [OK]
            SERVER_COMMAND(szCmd);
        }
    }
}

// 9 personalidades de 60 bytes a partir de +0xd50: 25 percentuais (shorts), agressividade (+52) e flag (+56)
void CBotManager::MakeRandomPersonalities(void)
{
    static const int s_iOrder[25] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 36, 32, 34, 38, 40, 42, 44, 46, 48 };   // [OK] ordem das chamadas ao RandomLong
    for (int i = 0; i <= 8; i++)
    {
        char *pPers = (char *)this + 3408 + i * 60;
        for (int k = 0; k < 25; k++)
            *(short *)(pPers + s_iOrder[k]) = RANDOM_LONG(0, 100);
        int iAggr = RANDOM_LONG(0, 2);
        if (iAggr == 1)      *(int *)(pPers + 52) = 1;
        else if (iAggr == 0) *(int *)(pPers + 52) = 2;
        else if (iAggr == 2) *(int *)(pPers + 52) = 0;
        *(char *)(pPers + 56) = RANDOM_LONG(0, 1) ? 1 : 0;
    }
}

// Comandos do console do host (servidor nao dedicado)
BOOL CBotManager::HandleBotCommands(edict_t *pEntity)
{
    if (g_engfuncs.pfnIsDedicatedServer())
        return FALSE;
    edict_t *pHost = f_00c ? (edict_t *)f_00c : g_engfuncs.pfnPEntityOfEntOffset(0);   // [?]
    CBaseEntity *pHostEnt = pHost ? (CBaseEntity *)pHost->pvPrivateData : NULL;
    if (!pHostEnt || pHostEnt->pev->pContainingEntity == pEntity)             // so o host pode usar
    {
        HandleNonDedBotCommands();
        if (f_d45 || (HandleNormalBotCommands(), f_d45))
        {
            f_d45 = 0;
            return TRUE;
        }
    }
    return FALSE;
}

// ---------------------------------------------------------------------------
// Pontos de reuniao das Dragon Balls: 10 por time, 16 bytes {x,y,z, char apagado}
// ---------------------------------------------------------------------------
struct gather_spot_s { Vector vecPos; char bDeleted; char pad[3]; };
extern gather_spot_s GatherSpotsForTeamGood[10];
extern gather_spot_s GatherSpotsForTeamEvil[10];

// jogador do host (servidor nao dedicado): f_00c (edict) ou o primeiro jogador
// vfunc em vtable +0xe4 (this, Vector*) -> int
static int HostCanReach(CBasePlayer *p, const Vector &v)
{
    typedef int (*pfn_t)(void *, const Vector *);
    void **vt = *(void ***)p;
    return ((pfn_t)vt[0xe4 / 4])(p, &v);                                      // [?]
}

static CBasePlayer *GetHostPlayer(CBotManager *pMgr)
{
    if (g_engfuncs.pfnIsDedicatedServer())
        return NULL;
    edict_t *pHost = pMgr->f_00c ? (edict_t *)pMgr->f_00c : g_engfuncs.pfnPEntityOfEntOffset(0);   // [?]
    return pHost ? (CBasePlayer *)pHost->pvPrivateData : NULL;                // [OK] edict+0x7c
}

short CBotManager::GetNearestDBSpotIndex(CBasePlayer *pPlayer, float flMaxDist)
{
    CBasePlayer *pHost = GetHostPlayer(this);                                 // [?] o argumento pPlayer e ignorado no original
    if (!UTIL_IsValidPlayer(pHost, 0, 0))
        return -1;
    Vector vecPos = pHost->pev->origin;
    float flBest = 9999.9f;
    short sBest = -1;
    gather_spot_s *pSpots = (pHost->pev->team == 0) ? GatherSpotsForTeamGood : GatherSpotsForTeamEvil;   // [OK]
    for (short i = 0; i <= 9; i++)
    {
        if (pSpots[i].bDeleted)
            continue;
        float flD = (pSpots[i].vecPos - vecPos).Length();
        if (flD < flBest && flD <= flMaxDist && HostCanReach(pHost, pSpots[i].vecPos))   // [?] vtable +0xe4
        {
            flBest = flD;
            sBest = i;
        }
    }
    return sBest;
}

short CBotManager::GetRandomDBSpotIndex(short sTeam)
{
    gather_spot_s *pSpots = (sTeam == 1) ? GatherSpotsForTeamGood : GatherSpotsForTeamEvil;
    short aIdx[10];
    int n = 0, iTotal = 0;
    for (short i = 0; i <= 9; i++)
        if (!pSpots[i].bDeleted)
        {
            aIdx[n++] = i;
            iTotal += 50;                                                     // peso 50 cada
        }
    int iPick = RANDOM_LONG(0, iTotal);                                       // [OK]
    for (int k = 0; k < n; k++)
        if (iPick >= k * 50 && iPick < (k + 1) * 50)                          // FindSelection: faixa [lo, lo+50)
            return aIdx[k];
    return -1;                                                                // [?] valor de retorno final nao visivel no decompilado
}

// Marca como apagado o ponto de reuniao mais proximo (75 unidades) do host; so no modo mp_gamemode == 2
void CBotManager::DeleteDBGatherSpot(void)
{
    if (!g_teamplay)
        return;
    if (CVAR_GET_FLOAT("mp_gamemode") != 2.0f)
        return;
    CBasePlayer *pHost = GetHostPlayer(this);
    if (!UTIL_IsValidPlayer(pHost, 0, 0))
        return;
    short sIdx = GetNearestDBSpotIndex(pHost, 75.0f);
    if (sIdx <= -1)
        return;
    gather_spot_s *pSpots = (pHost->pev->team == 0) ? GatherSpotsForTeamGood : GatherSpotsForTeamEvil;
    pSpots[sIdx].bDeleted = 1;
}

// Coloca um novo ponto de reuniao no chao sob o host (usa um slot marcado como apagado); so mp_gamemode == 2
void CBotManager::PlaceNewDBGatherSpot(void)
{
    if (!g_teamplay)
        return;
    if (CVAR_GET_FLOAT("mp_gamemode") != 2.0f)
        return;
    CBasePlayer *pHost = GetHostPlayer(this);
    if (!UTIL_IsValidPlayer(pHost, 0, 0))
        return;

    bool bGood = (pHost->pev->team == 0);
    gather_spot_s *pSpots = bGood ? GatherSpotsForTeamGood : GatherSpotsForTeamEvil;
    short i = 0;
    while (i <= 9 && !pSpots[i].bDeleted)
        i++;
    if (i > 9)
    {
        std::cout << (bGood ? "Cannot create new DragonBall spot for team good, max reached.\n"
                            : "Cannot create new DragonBall spot for team evil, max reached.\n");
        return;
    }

    TraceResult tr;
    Vector vecEnd = pHost->pev->origin + Vector(0, 0, -9999.0f);
    UTIL_TraceLine(pHost->pev->origin, vecEnd, ignore_monsters, ENT(pHost->pev), &tr);
    pSpots[i].vecPos = (tr.flFraction < 1.0f) ? tr.vecEndPos : pHost->pev->origin;
    pSpots[i].bDeleted = 0;
}
