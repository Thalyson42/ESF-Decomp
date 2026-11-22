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

// ---------------------------------------------------------------------------
// Criacao de bots (fake clients)
// ---------------------------------------------------------------------------
extern BOOL ClientConnect(edict_t *pEntity, const char *pszName, const char *pszAddress, char szRejectReason[128]);
extern void ClientPutInServer(edict_t *pEntity);

// remove caracteres fora de 32..126 e aspas (0x22) do nome
static void SanitizeBotName(char *sz)
{
    int len = strlen(sz);
    for (int i = 0; i < len; i++)
        if ((unsigned char)(sz[i] - 32) > 94 || sz[i] == '"')
        {
            for (int j = i; j < len; j++)
                sz[j] = sz[j + 1];
            len--;
        }
}

// cria o fake client + CBot; retorna o CBot ou NULL (mensagens como no original)
static CBot *SpawnFakeBot(char *szName, char *szReject)
{
    edict_t *pEdict = g_engfuncs.pfnCreateFakeClient(szName);
    if (!pEdict || !g_engfuncs.pfnEntOffsetOfPEntity(pEdict))
    {
        ALERT(at_console, "Max. Players reached.  Can't create bot!\n");
        return NULL;
    }
    ALERT(at_console, "Creating bot...\n");
    g_engfuncs.pfnFreeEntPrivateData(pEdict);
    pEdict->pvPrivateData = NULL;                                             // edict+0x7c
    CBot *pBot = GetClassPtr((CBot *)NULL);                                   // [OK] pev = &edict->v
    if (!pBot)
    {
        ALERT(at_console, "Error ! Couldn't create bot\n");
        return NULL;
    }
    ClientConnect(pEdict, szName, "127.0.0.1", szReject);
    ClientPutInServer(pEdict);
    return pBot;
}

void CBotManager::CreateBot(short sTeam, short sClass, const char *szName, short sSkill, short sPersonality)
{
    char szFull[128];
    char szReject[128];
    if (szName && *szName)
    {
        strncpy(szFull, szName, 31);
        szFull[32] = 0;
    }
    else if (f_03e > 0)
        PickBotName(szFull);
    else
        strcpy(szFull, "Bot");                                                // 0x746f42 = "Bot"

    if ((unsigned short)(sSkill - 1) > 4)                                     // fora de 1..5
        sSkill = (short)(1.0f + sv_bot_skill.value);

    SanitizeBotName(szFull);
    CBot *pBot = SpawnFakeBot(szFull, szReject);
    if (!pBot)
        return;
    pBot->CreateInit(sTeam, sClass, sSkill, sPersonality, -1);
    f_004++;                                                                  // [?] contador (campo +4)
    f_010 = gpGlobals->time + 5.0f;
}

void CBotManager::CreateSuperBot(short sClass, const char *szName, short sSkill, short sSBotLevel)
{
    char szFull[128];
    char szBase[64];
    char szReject[128];
    if (sSBotLevel <= 0)
        sSBotLevel = 1;
    else if (sSBotLevel > 3)
        sSBotLevel = 3;

    if (szName && *szName)
    {
        strncpy(szBase, szName, 31);
        szBase[32] = 0;
    }
    else if (f_03e > 0)
        PickBotName(szBase);
    else
        strcpy(szBase, "Bot");

    sprintf(szFull, "[SBot%i]", sSBotLevel);
    strncat(szFull, szBase, 32 - strlen(szFull));
    SanitizeBotName(szFull);

    CBot *pBot = SpawnFakeBot(szFull, szReject);
    if (!pBot)
        return;
    pBot->CreateInit(2, sClass, 1, sSkill, sSBotLevel);
    f_004++;
    f_010 = gpGlobals->time + 5.0f;
    if (!f_02c)
    {
        f_028 = (int)CVAR_GET_FLOAT("mp_plcatchup");                          // [?] valor guardado em +0x28
        CVAR_SET_FLOAT("mp_plcathcup", 0);                                    // grafia do original
    }
    f_02c++;
}

// ---------------------------------------------------------------------------
// Fila de bots a recriar (lista encadeada {head,tail}, nos {data,next,prev})
// ---------------------------------------------------------------------------
struct bot_restore_entry_s
{
    unsigned char ucSkill;       // +0
    unsigned char ucPersonality; // +1
    short sClass;                // +2
    short sTeam;                 // +4
    char szName[34];             // +6
};
struct bot_restore_node_s { bot_restore_entry_s *pData; bot_restore_node_s *pNext, *pPrev; };
struct bot_restore_list_s { bot_restore_node_s *pHead, *pTail; };

// Recria um bot da fila a cada 2 segundos (f_020 = proximo instante, f_024 = em andamento)
void CBotManager::RestoreBots(void)
{
    if (f_020 >= 1.0f && f_020 <= gpGlobals->time)
    {
        bot_restore_list_s *pList = m_pRestoreList;
        if (pList && pList->pHead)
        {
            if (!f_024)
                f_024 = 1;
            bot_restore_node_s *pNode = pList->pHead;
            bot_restore_entry_s *pEnt = pNode->pData;
            if (pNode == pList->pTail)                                        // original: tail = node->next
                pList->pTail = pNode->pNext;
            pList->pHead = pNode->pNext;
            if (pList->pHead)
                pList->pHead->pPrev = NULL;
            pNode->pNext = NULL;
            delete pNode;

            short sSBot = *(short *)((char *)pEnt + 0x28);
            if (sSBot > 0)
                CreateSuperBot(pEnt->sClass, pEnt->szName, (short)(pEnt->ucPersonality + 1), sSBot);
            else
                CreateBot(pEnt->sTeam, pEnt->sClass, pEnt->szName, (short)(pEnt->ucSkill + 1), pEnt->ucPersonality);
            f_020 = gpGlobals->time + 2.0f;
            delete pEnt;
            return;
        }
        f_020 = 0;
    }
    else if (!f_024)
        return;
    f_024 = 0;
}

// ---------------------------------------------------------------------------
// sbot.cfg: 3 entradas de 16 bytes em +4292 {short ki_gain, short health_gain, int powerlevel,
// int transparency_val, short sbotlaser_percent}; secoes [SUPERBOT] [MEGABOT] [ULTIMATEBOT]
// ---------------------------------------------------------------------------
void CBotManager::CreateSuperbotSettings(void)
{
    char szFile[256] = { 0 };
    char *pBase = (char *)this + 4292;
    memset(pBase, 0, 48);
    BuildBotFileName(szFile, "sbot.cfg", 0);
    FILE *fp = fopen(szFile, "r");

    for (int i = 0; i <= 2; i++)                                              // valores aleatorios padrao
    {
        *(short *)(pBase + i * 16 + 0)  = RANDOM_LONG(-1, 5);
        *(short *)(pBase + i * 16 + 2)  = RANDOM_LONG(-1, 5);
        *(int   *)(pBase + i * 16 + 4)  = RANDOM_LONG(3500000, 10000000);
        *(int   *)(pBase + i * 16 + 8)  = RANDOM_LONG(1, 255);
        *(short *)(pBase + i * 16 + 12) = RANDOM_LONG(0, 100);
    }
    g_engfuncs.pfnServerPrint("Reading sbot.cfg file... ");
    if (!fp)
    {
        g_engfuncs.pfnServerPrint("file not found, random settings will be used\n");
        return;
    }

    int idx = -1;
    char szLine[256];
    while (fgets(szLine, sizeof(szLine), fp))
    {
        // normaliza: tab -> espaco, colapsa espacos repetidos, tira CR/LF
        char szNorm[256];
        int n = 0;
        for (char *p = szLine; *p && *p != '\n' && *p != '\r'; p++)
        {
            char c = (*p == '\t') ? ' ' : *p;
            if (c == ' ' && n > 0 && szNorm[n - 1] == ' ')
                continue;
            if (c == ' ' && n == 0)
                continue;                                                     // espacos iniciais (fgetc loop inicial)
            szNorm[n++] = c;
        }
        szNorm[n] = 0;

        char *pValue = strchr(szNorm, ' ');
        if (pValue)
            *pValue++ = 0;
        if (szNorm[0] == '#' || !szNorm[0])
            continue;

        if (!strcmp(szNorm, "[SUPERBOT]"))
            idx = 0;
        else if (!strcmp(szNorm, "[MEGABOT]"))
            idx = 1;
        else if (!strcmp(szNorm, "[ULTIMATEBOT]"))
            idx = 2;

        if (!pValue || !*pValue || idx == -1)
            continue;
        long v = strtol(pValue, NULL, 10);
        char *pE = pBase + idx * 16;
        if (!strcmp(szNorm, "ki_gain"))
            *(short *)(pE + 0) = (v >= -1 && v <= 1000) ? (short)v : (short)RANDOM_LONG(-1, 5);
        else if (!strcmp(szNorm, "health_gain"))
            *(short *)(pE + 2) = (v >= -1 && v <= 250) ? (short)v : (short)RANDOM_LONG(-1, 5);
        else if (!strcmp(szNorm, "powerlevel"))
            *(int *)(pE + 4) = (v >= 650000 && v <= 99999999) ? (int)v : RANDOM_LONG(650000, 10000000);
        else if (!strcmp(szNorm, "transparency_val"))
            *(int *)(pE + 8) = (v == -1 || (v >= 1 && v <= 255)) ? (int)v : RANDOM_LONG(1, 255);
        else if (!strcmp(szNorm, "sbotlaser_percent"))
            *(short *)(pE + 12) = (v >= 0 && v <= 100) ? (short)v : (short)RANDOM_LONG(0, 100);
    }
    fclose(fp);
    g_engfuncs.pfnServerPrint("done\n");
}

// Valores padrao das 5 tabelas de skill (68 bytes cada, a partir de +0xf70): 15 floats, short combo%, 3 flags.
// Valores dos floats lidos do binario ([ebx-X] = GOT-X); [OK] conforme o assembly (incl. escrita dupla em +0xfa0/+0xfe4/+0x1028/+0x10b0).
void CBotManager::InitSkillDate(void)
{
    char *p = (char *)this;
    *(char *)(p + 0xfae) = 1;
    *(float *)(p + 0xf70) = 0.015f;
    *(float *)(p + 0xf74) = 0.035f;
    *(float *)(p + 0xf88) = 15.0f;
    *(float *)(p + 0xf8c) = 20.0f;
    *(float *)(p + 0xf90) = 10.0f;
    *(float *)(p + 0xf94) = 10.0f;
    *(float *)(p + 0xf78) = 330.0f;
    *(float *)(p + 0xf7c) = 355.0f;
    *(float *)(p + 0xf80) = 350.0f;
    *(float *)(p + 0xf84) = 375.0f;
    *(float *)(p + 0xf98) = 0.1f;
    *(float *)(p + 0xf9c) = 0.4f;
    *(float *)(p + 0xfa0) = 0.09f;
    *(float *)(p + 0xfa0) = 0.12f;
    *(float *)(p + 0xfa8) = 150.0f;
    *(short *)(p + 0xfac) = 0;
    *(char *)(p + 0xfaf) = 1;
    *(char *)(p + 0xfb0) = 1;
    *(char *)(p + 0xff2) = 1;
    *(float *)(p + 0xfb4) = 150.0f;
    *(float *)(p + 0xfb8) = 0.045f;
    *(float *)(p + 0xfcc) = 0.045f;
    *(float *)(p + 0xfd0) = 25.0f;
    *(float *)(p + 0xfd4) = 25.0f;
    *(float *)(p + 0xfd8) = 25.0f;
    *(float *)(p + 0xfbc) = 250.0f;
    *(float *)(p + 0xfc0) = 265.0f;
    *(float *)(p + 0xfc4) = 260.0f;
    *(float *)(p + 0xfc8) = 285.0f;
    *(float *)(p + 0xfdc) = 0.3f;
    *(float *)(p + 0xfe0) = 0.6f;
    *(float *)(p + 0xfe4) = 0.6f;
    *(float *)(p + 0xfe4) = 0.17f;
    *(float *)(p + 0xfec) = 165.0f;
    *(short *)(p + 0xff0) = 15;
    *(char *)(p + 0xff3) = 1;
    *(char *)(p + 0xff4) = 1;
    *(char *)(p + 0x1036) = 1;
    *(float *)(p + 0xff8) = 0.075f;
    *(float *)(p + 0xffc) = 0.01f;
    *(float *)(p + 0x1010) = 0.01f;
    *(float *)(p + 0x1014) = 30.0f;
    *(float *)(p + 0x1018) = 30.0f;
    *(float *)(p + 0x101c) = 30.0f;
    *(float *)(p + 0x1000) = 190.0f;
    *(float *)(p + 0x1004) = 125.0f;
    *(float *)(p + 0x1008) = 210.0f;
    *(float *)(p + 0x100c) = 240.0f;
    *(float *)(p + 0x1020) = 0.5f;
    *(float *)(p + 0x1024) = 1.1f;
    *(float *)(p + 0x1028) = 0.18f;
    *(float *)(p + 0x1028) = 0.22f;
    *(float *)(p + 0x1030) = 230.0f;
    *(short *)(p + 0x1034) = 25;
    *(char *)(p + 0x1037) = 0;
    *(char *)(p + 0x1038) = 0;
    *(char *)(p + 0x107a) = 0;
    *(float *)(p + 0x103c) = 0.15f;
    *(float *)(p + 0x1040) = 0.2f;
    *(float *)(p + 0x1054) = 0.2f;
    *(float *)(p + 0x1058) = 35.0f;
    *(float *)(p + 0x105c) = 35.0f;
    *(float *)(p + 0x1060) = 35.0f;
    *(float *)(p + 0x1044) = 155.0f;
    *(float *)(p + 0x1048) = 170.0f;
    *(float *)(p + 0x104c) = 175.0f;
    *(float *)(p + 0x1050) = 195.0f;
    *(float *)(p + 0x1064) = 1.2f;
    *(float *)(p + 0x1068) = 1.6f;
    *(float *)(p + 0x106c) = 1.6f;
    *(float *)(p + 0x1074) = 1.6f;
    *(short *)(p + 0x1078) = 50;
    *(char *)(p + 0x107b) = 0;
    *(char *)(p + 0x107c) = 0;
    *(char *)(p + 0x10be) = 0;
    *(float *)(p + 0x1080) = 1.6f;
    *(float *)(p + 0x1084) = 1.6f;
    *(float *)(p + 0x1098) = 1.6f;
    *(float *)(p + 0x109c) = 40.0f;
    *(float *)(p + 0x10a0) = 40.0f;
    *(float *)(p + 0x10a4) = 40.0f;
    *(float *)(p + 0x1088) = 60.0f;
    *(float *)(p + 0x108c) = 90.0f;
    *(float *)(p + 0x1090) = 800.0f;
    *(float *)(p + 0x1094) = 110.0f;
    *(float *)(p + 0x10a8) = 1.5f;
    *(float *)(p + 0x10ac) = 2.0f;
    *(float *)(p + 0x10b0) = 2.0f;
    *(float *)(p + 0x10b0) = 0.36f;
    *(float *)(p + 0x10b8) = 340.0f;
    *(short *)(p + 0x10bc) = 75;
    *(char *)(p + 0x10bf) = 0;
    *(char *)(p + 0x10c0) = 0;
}

// skill.cfg: secoes [SKILL1]..[SKILL5] (nao diferencia maiusculas); chave valor por linha, '#' = comentario
void CBotManager::CreateSkillData(void)
{
    static const struct { const char *szKey; int iOff; } aFloats[] = {
        { "min_general_delay", 0 },          { "max_general_delay", 4 },
        { "min_x_aim_speed", 8 },            { "max_x_aim_speed", 12 },
        { "min_y_aim_speed", 16 },           { "max_y_aim_speed", 20 },
        { "min_x_aim_offset", 24 },          { "max_x_aim_offset", 28 },
        { "min_y_aim_offset", 32 },          { "max_y_aim_offset", 36 },
        { "min_attack_delay", 40 },          { "max_attack_delay", 44 },
        { "min_enemy_search_delay", 48 },    { "max_enemy_search_delay", 52 },
        { "min_beam_explode_distance", 56 },
    };
    InitSkillDate();

    char szFile[256] = { 0 };
    BuildBotFileName(szFile, "skill.cfg", 0);
    FILE *fp = fopen(szFile, "r");
    g_engfuncs.pfnServerPrint("Reading skill.cfg file... ");
    if (!fp)
    {
        g_engfuncs.pfnServerPrint("file not found, default settings will be used\n");
        return;
    }

    int iSkill = -1;
    char szLine[256];
    while (fgets(szLine, sizeof(szLine), fp))
    {
        char szNorm[256];
        int n = 0;
        for (char *p = szLine; *p && *p != '\n' && *p != '\r'; p++)
        {
            char c = (*p == '\t') ? ' ' : *p;
            if (c == ' ' && (n == 0 || szNorm[n - 1] == ' '))
                continue;
            szNorm[n++] = c;
        }
        szNorm[n] = 0;
        char *pValue = strchr(szNorm, ' ');
        if (pValue)
            *pValue++ = 0;
        if (szNorm[0] == '#' || !szNorm[0])
            continue;

        for (int k = 0; k < 5; k++)
        {
            char szSec[16];
            sprintf(szSec, "[SKILL%d]", k + 1);
            if (!strcasecmp(szNorm, szSec))
                iSkill = k;
        }
        if (!pValue || !*pValue || iSkill == -1)
            continue;

        float flVal = (float)strtod(pValue, NULL);
        char *pE = (char *)this + 0xf70 + iSkill * 0x44;
        bool bDone = false;
        for (unsigned k = 0; k < sizeof(aFloats) / sizeof(aFloats[0]); k++)
            if (!strcasecmp(szNorm, aFloats[k].szKey))
            {
                *(float *)(pE + aFloats[k].iOff) = flVal;
                bDone = true;
                break;
            }
        if (bDone)
            continue;
        if (!strcasecmp(szNorm, "random_combo_button_percent"))
            *(short *)(pE + 60) = (short)(int)flVal;
        else if (!strcasecmp(szNorm, "uses_turbo"))
            *(char *)(pE + 62) = (flVal != 0.0f);
        else if (!strcasecmp(szNorm, "uses_meleecombos"))
            *(char *)(pE + 63) = (flVal != 0.0f);
        else if (!strcasecmp(szNorm, "uses_chainswoop"))
            *(char *)(pE + 64) = (flVal != 0.0f);
    }
    fclose(fp);
    g_engfuncs.pfnServerPrint("done\n");
}

// ---------------------------------------------------------------------------
// Balanceamento de times (a cada 5 s): se um time tem 2+ jogadores a mais, move bots (flag 0x1a5&32) para o outro
// ---------------------------------------------------------------------------
static bool IsBotPlayer(CBasePlayer *p)
{
    return !p->IsNetClient() && (*((unsigned char *)p->pev + 0x1a5) & 32) != 0;    // [?] vtable +0xa4 e flag de bot
}

void CBotManager::BotBalanceTeamsThink(void)
{
    if (f_008 >= gpGlobals->time)
        return;
    f_008 = gpGlobals->time + 5.0f;
    if (!f_d4c || !f_004 || !g_teamplay)
        return;

    int nTeam1 = 0, nTeam2 = 0;
    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CBasePlayer *pPl = (CBasePlayer *)UTIL_PlayerByIndex(i);
        if (UTIL_IsValidPlayer(pPl, 1, 0))
        {
            if (pPl->pev->team == 1) nTeam1++;
            if (pPl->pev->team == 2) nTeam2++;
        }
    }

    if (nTeam1 - 1 > nTeam2)
    {
        for (int i = 1; i <= gpGlobals->maxClients; i++)
        {
            CBasePlayer *pPl = (CBasePlayer *)UTIL_PlayerByIndex(i);
            if (!UTIL_IsValidPlayer(pPl, 0, 0))
                continue;
            if (IsBotPlayer(pPl) && pPl->pev->team == 1)
            {
                *(short *)((char *)pPl + 0x1060) = 2;
                g_pGameRules->ClientCommand(pPl, "jointeam");                 // [?] vfunc do gamerules
                nTeam1--;
                if (nTeam1 <= nTeam2)
                    return;
            }
        }
    }
    else if (nTeam2 - 1 > nTeam1)
    {
        for (int i = 1; i <= gpGlobals->maxClients; i++)
        {
            CBasePlayer *pPl = (CBasePlayer *)UTIL_PlayerByIndex(i);
            if (!UTIL_IsValidPlayer(pPl, 0, 0))
                continue;
            if (IsBotPlayer(pPl) && pPl->pev->team == 2)
            {
                *(short *)((char *)pPl + 0x1060) = 1;
                g_pGameRules->ClientCommand(pPl, "jointeam");
                return;                                                       // so move um (assimetria do original)
            }
        }
    }
}

// ---------------------------------------------------------------------------
// Preenchimento de bots (fill server / add multiple / sv_numbots). Espera 15 s depois do inicio do mapa.
// f_014/f_015/f_016: fill server / metade do time / time; f_017 time; f_018 quantidade pendente; f_d24 modo sv_numbots;
// f_d44 numero de jogadores ativos; f_01c bots desejados (-1 = nenhum)
// ---------------------------------------------------------------------------
void CBotManager::BotFillThink(void)
{
    if (15.0f > gpGlobals->time || !g_pGameRules)
        return;

    if (!g_engfuncs.pfnIsDedicatedServer() && !f_025)
    {
        CBasePlayer *pHost = GetHostPlayer(this);
        if (UTIL_IsValidPlayer(pHost, 1, 0))
        {
            f_025 = 1;                                                        // host ja entrou
            if (1.0f <= f_020 && f_020 >= gpGlobals->time + 1.0f)
                f_020 = gpGlobals->time + 1.0f;
            if (1.0f <= f_034 && f_034 >= gpGlobals->time + 1.0f)
                f_034 = gpGlobals->time + 1.0f;
            if (1.0f <= f_010 && f_010 >= gpGlobals->time + 1.0f)
                f_010 = gpGlobals->time + 1.0f;
        }
    }

    RestoreBots();
    if (f_024)
        return;
    if (f_010 > gpGlobals->time)
        return;

    if (f_d24)
    {
        if (f_d44 < gpGlobals->maxClients - 1 && (float)f_004 < CVAR_GET_FLOAT("sv_numbots"))
        {
            CreateBot(-1, -1, NULL, -1, -1);
            return;
        }
        f_d24 = 0;
    }

    if (IsAddingMultipleBots())
    {
        if (f_018 && f_d44 < gpGlobals->maxClients - 1)
        {
            short sTeam = (f_015 || f_016) ? (short)f_017 : (short)-1;
            CreateBot(sTeam, -1, NULL, -1, -1);
            f_018--;
            return;
        }
        f_014 = f_015 = f_016 = f_017 = f_018 = 0;                            // memset(+20, 0, 5)
    }

    if (f_d44 >= f_01c || f_01c == -1)
        return;
    CreateBot(-1, -1, NULL, -1, -1);
}

// ---------------------------------------------------------------------------
// Kick / skill
// ---------------------------------------------------------------------------
static void KickBotPlayer(CBasePlayer *p)
{
    char szCmd[64];
    *(int *)((char *)p + 0xa08) = 1;                                          // [OK] CBot: sendo expulso
    sprintf(szCmd, "kick \"%s\"\n", STRING(p->pev->netname));                 // netname = pev+0x1d0 + gpGlobals->pStringBase
    g_engfuncs.pfnServerCommand(szCmd);
}

// Expulsa todos os bots (sTeam: 1 Good, 2 Evil, -1 todos; sem teamplay sempre todos)
void CBotManager::KickBots(short sTeam)
{
    if (!g_teamplay)
        sTeam = -1;
    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CBasePlayer *pPl = (CBasePlayer *)UTIL_PlayerByIndex(i);
        if (!UTIL_IsValidPlayer(pPl, 0, 0))
            continue;
        if (IsBotPlayer(pPl) && (pPl->pev->team == sTeam || sTeam == -1))
            KickBotPlayer(pPl);
    }
    f_d24 = 0;
    if (sTeam == 1)
        std::cout << "All bots removed in team good\n";
    else if (sTeam == 2)
        std::cout << "All bots removed in team evil\n";
    else
        std::cout << "All bots removed\n";
}

// Expulsa o ultimo bot (indice mais alto) e zera o estado de "adicionar varios"
void CBotManager::KickLastBot(bool bMsg)
{
    for (int i = gpGlobals->maxClients; i >= 1; i--)
    {
        CBasePlayer *pPl = (CBasePlayer *)UTIL_PlayerByIndex(i);
        if (!UTIL_IsValidPlayer(pPl, 0, 0))
            continue;
        if (IsBotPlayer(pPl))
        {
            KickBotPlayer(pPl);
            break;
        }
    }
    f_d24 = 0;
    f_014 = f_015 = f_016 = f_017 = f_018 = 0;                                // memset(+20, 0, 5)
    if (bMsg)
        std::cout << "Last bot kicked\n";
}

// Muda o nivel de skill de todos os bots (1 = melhor, 5 = pior; -1 = aleatorio); atualiza sv_botskill
void CBotManager::ChangeBotSkill(short sSkill)
{
    if (sSkill == -1)
        sSkill = RANDOM_LONG(1, 5);
    if ((unsigned short)(sSkill - 1) > 4)
    {
        std::cout << "Invalid botskill ! Choose a number between 1(best) and 5(worst)\n";
        return;
    }
    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CBasePlayer *pPl = (CBasePlayer *)UTIL_PlayerByIndex(i);
        if (!UTIL_IsValidPlayer(pPl, 0, 0))
            continue;
        if (IsBotPlayer(pPl))
        {
            *(char *)((char *)pPl + 0x9fc) = (char)(sSkill - 1);              // nivel de skill
            *(char **)((char *)pPl + 0xa00) = (char *)this + sSkill * 0x44 + 3884;   // tabela de skill (+0xf70 + (n-1)*0x44)
        }
    }
    if ((float)(sSkill - 1) != CVAR_GET_FLOAT("sv_botskill"))
        CVAR_SET_FLOAT("sv_botskill", (float)(sSkill - 1));

    static const char *aNames[] = { "Best", "Good", "Medium", "Weak", "Bad" };
    std::cout << "EVERY bot has now the skill " << aNames[sSkill - 1] << "\n";
}

// ---------------------------------------------------------------------------
// Think por frame / abertura do bot.cfg
// ---------------------------------------------------------------------------
extern int g_waypoint_on;
extern int PrintingInGameHelp;
extern void WaypointThink(edict_t *pEntity);
extern void UTIL_Printf(const char *szMsg, int iA, int iB);               // [?] funcao livre do ESF (args 1,0)

void CBotManager::Think(void)
{
    CalcMSec();
    BotFillThink();
    BotBalanceTeamsThink();
    SBotRulesThink();
    if (PrintingInGameHelp)
        ShowInGameBotHelpWindow();
    if (f_038 && 1.0f <= f_034 && f_034 <= gpGlobals->time)                   // arquivo bot.cfg aberto e proximo comando vencido
        BotCFGFileThink();
    if (g_waypoint_on)
    {
        CBasePlayer *pHost = GetHostPlayer(this);
        if (UTIL_IsValidPlayer(pHost, 0, 0))
            WaypointThink(pHost->pev->pContainingEntity);                     // pev+0x208
    }
    if (sv_bot_skill.value != (float)f_d2c)                                   // sv_botskill mudou (0..4)
    {
        ChangeBotSkill((short)(1.0f + sv_bot_skill.value));
        f_d2c = (short)sv_bot_skill.value;
    }
    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CBasePlayer *pPl = (CBasePlayer *)UTIL_PlayerByIndex(i);
        if (UTIL_IsValidPlayer(pPl, 0, 0) && IsBotPlayer(pPl))
        {
            ((CBot *)pPl)->BotPreThink();
            ((CBot *)pPl)->BotThink();
        }
    }
}

// Abre <mapa>_bot.cfg (em "maps"), senao bot.cfg; f_034 = proximo comando (+20 s no host, +5 s dedicado)
void CBotManager::OpenBotCFGFile(void)
{
    char szMsg[256], szPath[256], szMap[64];
    if (!f_03c)
        return;
    f_038 = 0;
    strcpy(szMap, STRING(gpGlobals->mapname));
    strcat(szMap, "_bot.cfg");
    BuildBotFileName(szPath, "maps", szMap);
    f_038 = (int)fopen(szPath, "r");
    if (f_038)
    {
        sprintf(szMsg, "Executing %s\n", szPath);
        ALERT(at_console, szMsg);
    }
    else
    {
        BuildBotFileName(szPath, "bot.cfg", 0);
        sprintf(szMsg, "Executing %s\n", szPath);
        ALERT(at_console, szMsg);
        f_038 = (int)fopen(szPath, "r");
        if (!f_038)
            ALERT(at_console, "bot.cfg file not found\n");
    }
    f_034 = gpGlobals->time + (g_engfuncs.pfnIsDedicatedServer() ? 5.0f : 20.0f);
}

// ---------------------------------------------------------------------------
// Executa uma linha do bot.cfg por vez (quando f_034 vence). Comandos: addbot, addsbot, botskill, shouldbotschat,
// botsusediscs, botshoot, min_bots, max_bots, pause, bot_fill, bot_balanceteams; o resto vai para o servidor.
// Argumentos separados por espaco (ate 5). Fim do arquivo: fecha e zera f_034/f_038.
// ---------------------------------------------------------------------------
void CBotManager::BotCFGFileThink(void)
{
    if (f_034 > gpGlobals->time)
        return;
    FILE *fp = (FILE *)f_038;
    if (!fp)
        return;

    // le uma linha: ignora espacos iniciais, tab -> espaco, colapsa espacos repetidos
    char szLine[256];
    int n = 0, c;
    while ((c = fgetc(fp)) == ' ')
        ;
    if (c != EOF && c != '\n' && c != '\r')
    {
        for (;;)
        {
            if (c == '\t')
                c = ' ';
            szLine[n++] = (char)c;
            c = fgetc(fp);
            if (szLine[n - 1] == ' ' && c == ' ')
                while ((c = fgetc(fp)) == ' ')
                    ;
            if (c == EOF || c == '\n')
                break;
            if (c == '\r')
            {
                c = fgetc(fp);                                                // consome o \n depois do \r
                break;
            }
            if (n >= 250)
                break;
        }
    }
    else if (c == '\r')
        c = fgetc(fp);
    if (c == EOF)
    {
        fclose(fp);
        f_038 = 0;
        f_034 = 0;
    }
    szLine[n] = 0;

    char szCmdLine[256];
    strcpy(szCmdLine, szLine);
    strcat(szCmdLine, "\n");

    // separa comando + argumentos
    char *pCmd = szLine;
    char *aArg[5] = { NULL, NULL, NULL, NULL, NULL };
    {
        char *p = szLine;
        int iArg = 0;
        while (*p && *p != ' ')
            p++;
        while (*p == ' ' && iArg < 5)
        {
            *p++ = 0;
            aArg[iArg++] = p;
            while (*p && *p != ' ')
                p++;
        }
    }
    if (*pCmd == '#' || !*pCmd)                                               // [?] comentarios/linha vazia
        return;

    if (!strcmp(pCmd, "addbot"))
    {
        short sTeam = -1, sClass = -1, sSkill = -1, sPers = -1;
        const char *szName = NULL;
        if (aArg[2] && *aArg[2] && *aArg[2] != '*')
            szName = aArg[2];
        if (aArg[0] && *aArg[0])
            sTeam = g_teamplay ? (short)strtol(aArg[0], NULL, 10) : (short)-1;
        if (aArg[1] && *aArg[1])
            sClass = (short)strtol(aArg[1], NULL, 10);
        if (aArg[3] && *aArg[3])
            sSkill = (short)strtol(aArg[3], NULL, 10);
        if (aArg[4] && *aArg[4])
            sPers = (short)strtol(aArg[4], NULL, 10);
        CreateBot(sTeam, sClass, szName, sSkill, sPers);
        f_034 = gpGlobals->time + 2.0f;
        f_010 = gpGlobals->time + 5.0f;
    }
    else if (!strcmp(pCmd, "addsbot"))
    {
        if (!g_teamplay)
        {
            std::cout << "Cannot create Super Bots in free fight!\n";
            return;
        }
        short sLevel = -1, sClass = -1, sSkill = -1;
        const char *szName = NULL;
        if (aArg[3] && *aArg[3] && *aArg[3] != '*')
            szName = aArg[3];
        if (aArg[0] && *aArg[0] && *aArg[0] != '*')
            sLevel = (short)strtol(aArg[0], NULL, 10);
        if (aArg[1] && *aArg[1] && *aArg[1] != '*')
            sClass = (short)strtol(aArg[1], NULL, 10);
        if (aArg[2] && *aArg[2] && *aArg[2] != '*')
            sSkill = (short)strtol(aArg[2], NULL, 10);
        CreateSuperBot(sClass, szName, sSkill, sLevel);
        f_034 = gpGlobals->time + 2.0f;
        f_010 = gpGlobals->time + 5.0f;
    }
    else if (!strcmp(pCmd, "botskill"))
    {
        long v = strtol(aArg[0] ? aArg[0] : "", NULL, 10);
        if ((unsigned long)(v - 1) <= 4)
            ChangeBotSkill((short)v);
    }
    else if (!strcmp(pCmd, "shouldbotschat"))
        *((char *)this + 3405) = aArg[0] && strtol(aArg[0], NULL, 10) ? 1 : 0;
    else if (!strcmp(pCmd, "botsusediscs"))
    {
        if (aArg[0] && *aArg[0])
            *((char *)this + 3401) = strtol(aArg[0], NULL, 10) ? 1 : 0;
    }
    else if (!strcmp(pCmd, "botshoot"))
        *((char *)this + 3399) = aArg[0] && strtol(aArg[0], NULL, 10) ? 1 : 0;
    else if (!strcmp(pCmd, "min_bots"))
    {
        f_01a = (short)strtol(aArg[0] ? aArg[0] : "", NULL, 10);
        if (f_01a > 31)
            f_01a = -1;
    }
    else if (!strcmp(pCmd, "max_bots"))
    {
        f_01c = (short)strtol(aArg[0] ? aArg[0] : "", NULL, 10);
        if (f_01c > 31)
            f_01c = -1;
    }
    else if (!strcmp(pCmd, "pause"))
    {
        if (aArg[0] && *aArg[0])
            f_034 = (float)strtod(aArg[0], NULL) + gpGlobals->time;
    }
    else if (!strcmp(pCmd, "bot_fill"))
    {
        const char *sz = aArg[0] ? aArg[0] : "";
        if (!strcmp(sz, "full"))
            FillServer();
        else if (!strcmp(sz, "half_good"))
            FillAHalfTeam(1);
        else if (!strcmp(sz, "half_evil"))
            FillAHalfTeam(2);
        else if (!strcmp(sz, "full_good"))
            FillATeam(1);
        else if (!strcmp(sz, "full_evil"))
            FillATeam(2);
    }
    else if (!strcmp(pCmd, "bot_balanceteams"))
    {
        if (aArg[0] && *aArg[0])
            f_d4c = strtol(aArg[0], NULL, 10) ? 1 : 0;
    }
    else
    {
        char szMsg[300];
        sprintf(szMsg, "executing server command: %s\n", szCmdLine);
        UTIL_Printf(szMsg, 1, 0);
        g_engfuncs.pfnServerCommand(szCmdLine);
    }
}

// ---------------------------------------------------------------------------
// MapInit / DisconnectPlayer
// ---------------------------------------------------------------------------
extern void WaypointInit(void);
extern int  WaypointLoad(edict_t *pEntity);                                   // [?] MapInit passa NULL (0)
extern int m_iSpriteTexture;

// Inicio de mapa: zera o estado, abre o bot.cfg (o caminho "esf\maps\<mapa>_bot.cfg\" do original nunca abre no Linux;
// quem abre de fato e OpenBotCFGFile), carrega waypoints e precacheia sons.
void CBotManager::MapInit(void)
{
    char szCfg[128], szPath[256];
    f_010 = gpGlobals->time + 30.0f;
    f_020 = 0;
    f_008 = 0;
    f_030 = 0;
    f_034 = 0;
    f_014 = f_015 = f_016 = f_017 = f_018 = 0;
    f_024 = 0;
    f_d24 = 1;
    strcpy(szCfg, STRING(gpGlobals->mapname));
    strcat(szCfg, "_bot.cfg");
    sprintf(szPath, "esf\\maps\\%s\\", szCfg);
    f_038 = (int)fopen(szPath, "r");
    if (f_038)
    {
        std::cout << "Executing " << szPath << "\n";
        bot_restore_list_s *pList = m_pRestoreList;
        while (pList->pHead)                                                  // esvazia a fila de restauracao
        {
            bot_restore_node_s *pNode = pList->pHead;
            bot_restore_entry_s *pEnt = pNode->pData;
            if (pNode == pList->pTail)
                pList->pTail = pNode->pNext;
            pList->pHead = pNode->pNext;
            if (pList->pHead)
                pList->pHead->pPrev = NULL;
            pNode->pNext = NULL;
            delete pNode;
            delete pEnt;
        }
        f_034 = gpGlobals->time + (g_engfuncs.pfnIsDedicatedServer() ? 5.0f : 20.0f);
    }
    else
    {
        OpenBotCFGFile();
        f_020 = gpGlobals->time + (g_engfuncs.pfnIsDedicatedServer() ? 5.0f : 30.0f);
    }
    WaypointInit();
    WaypointLoad(NULL);
    PRECACHE_SOUND("weapons/xbow_hit1.wav");
    PRECACHE_SOUND("weapons/mine_activate.wav");
    PRECACHE_SOUND("common/wpn_hudoff.wav");
    PRECACHE_SOUND("common/wpn_hudon.wav");
    PRECACHE_SOUND("common/wpn_moveselect.wav");
    PRECACHE_SOUND("common/wpn_denyselect.wav");
    PRECACHE_SOUND("weapons/basicbeam_chargeoriginal.wav");
    PRECACHE_MODEL("models/mechgibs.mdl");
    m_iSpriteTexture = PRECACHE_MODEL("sprites/lgtning.spr");
    f_025 = 0;
    f_005 = f_004;
    f_004 = 0;
}

// Um jogador saiu: se for bot, atualiza contadores e (se nao foi expulso) guarda seus dados na fila de restauracao
// para recria-lo no proximo mapa; depois libera combos, tarefa e listas do bot.
void CBotManager::DisconnectPlayer(edict_t *pEdict)
{
    f_d44--;
    edict_t *pEnt = pEdict ? pEdict : g_engfuncs.pfnPEntityOfEntOffset(0);
    CBasePlayer *pPl = pEnt ? (CBasePlayer *)pEnt->pvPrivateData : NULL;
    if (!pPl || !IsBotPlayer(pPl))
        return;
    CBot *pBot = (CBot *)pPl;
    f_004--;

    short sSBot = *(short *)((char *)pBot + 0xba4);
    if (sSBot > 0)
    {
        f_02c--;
        if (f_02c <= 0)                                                       // [?] ultimo SBot: restaura mp_plcatchup
            CVAR_SET_FLOAT("mp_plcatchup", (float)f_028);
    }

    if (!*(int *)((char *)pBot + 0xa08))                                      // nao foi expulso -> guardar para restaurar
    {
        void *pPers = *(void **)((char *)pBot + 0xa04);
        short sPersIdx = -1;
        if (pPers)
            for (int k = 0; k <= 8; k++)
                if ((char *)this + 3408 + k * 60 == (char *)pPers)            // 9 personalidades de 60 bytes
                {
                    sPersIdx = k;
                    break;
                }

        unsigned char *pE = (unsigned char *)operator new(52);
        pE[0] = *(unsigned char *)((char *)pBot + 0x9fc);                     // skill
        pE[1] = (unsigned char)sPersIdx;                                      // personalidade
        *(short *)(pE + 2) = *(short *)((char *)pBot + 0x9f0);                // classe
        *(short *)(pE + 4) = *(short *)((char *)pBot + 0x1060);               // time desejado
        strncpy((char *)pE + 6, (char *)pBot + 0xac4, 31);                    // nome
        pE[0x26] = 0;
        *(short *)(pE + 0x28) = sSBot;
        *(float *)(pE + 0x30) = gpGlobals->time;

        bot_restore_list_s *pList = m_pRestoreList;
        bot_restore_node_s *pNode = new bot_restore_node_s;
        pNode->pData = (bot_restore_entry_s *)pE;
        pNode->pNext = NULL;
        pNode->pPrev = NULL;
        if (!pList->pHead)
        {
            pList->pHead = pNode;
            pList->pTail = pNode;
        }
        else
        {
            pNode->pPrev = pList->pTail;
            pList->pTail->pNext = pNode;
            pList->pTail = pNode;
        }
    }

    pBot->DeleteCombos();
    pBot->KillCurrentTask();
    struct sllnode_s { void *pData; sllnode_s *pNext; sllnode_s *pPrev; };
    struct sll_s { sllnode_s *pHead; sllnode_s *pTail; };
    sll_s *pTaskList = (sll_s *)((char *)pBot + 0xb84);                       // [?] lista de 0xb84
    for (sllnode_s *p = pTaskList->pHead; p; )
    {
        sllnode_s *pNext = p->pNext;
        delete p;
        p = pNext;
    }
    pTaskList->pHead = NULL;
    pTaskList->pTail = NULL;
    pBot->ClearMeleeComboList();
}

// ---------------------------------------------------------------------------
// Comandos de console so para servidor nao dedicado (host): killbotinfront, waypoint, autowaypoint,
// pathwaypoint, dbgatherspot. f_d45 = 1 enquanto trata um comando conhecido.
// ---------------------------------------------------------------------------
extern int g_auto_waypoint, g_path_waypoint, DrawDBSpots;
extern void WaypointAdd(edict_t *pEntity);
extern void WaypointDelete(edict_t *pEntity);
extern void WaypointSave(void);
extern void WaypointPrintInfo(edict_t *pEntity);
extern void WaypointCreatePath(edict_t *pEntity, int iType);
extern void WaypointRemovePath(edict_t *pEntity, int iType);
extern void ClientKill(edict_t *pEntity);

void CBotManager::HandleNonDedBotCommands(void)
{
    CBasePlayer *pHost = GetHostPlayer(this);
    if (!pHost)
        return;
    const char *szCmd = g_engfuncs.pfnCmd_Argv(0);
    const char *szArg = g_engfuncs.pfnCmd_Argv(1);
    f_d45 = 1;
    edict_t *pHostEdict = pHost->pev->pContainingEntity;
    const char *szMsg = NULL;

    if (!strcmp(szCmd, "killbotinfront"))
    {
        UTIL_MakeVectors(pHost->pev->v_angle);
        Vector vecStart = pHost->pev->origin;
        Vector vecEnd = vecStart + gpGlobals->v_forward * 10000.0f;
        TraceResult tr;
        UTIL_TraceHull(vecStart, vecEnd, dont_ignore_monsters, head_hull, pHostEdict, &tr);
        edict_t *pHit = tr.pHit;
        if (FNullEnt(pHit))
            return;
        if ((pHit->v.flags & (FL_CLIENT | FL_FAKECLIENT)) == (FL_CLIENT | FL_FAKECLIENT))   // 0x2008
            ClientKill(pHit);
        return;
    }
    if (!strcmp(szCmd, "waypoint"))
    {
        if (!strcmp(szArg, "on"))
        {
            g_waypoint_on = 1;
            szMsg = "waypoints are ON\n";
        }
        else if (!strcmp(szArg, "off"))
        {
            g_waypoint_on = 0;
            szMsg = "waypoints are OFF\n";
        }
        else if (!strcmp(szArg, "add"))
        {
            g_waypoint_on = 1;
            WaypointAdd(pHostEdict);
            return;
        }
        else if (!strcmp(szArg, "delete"))
        {
            g_waypoint_on = 1;
            WaypointDelete(pHostEdict);
            return;
        }
        else if (!strcmp(szArg, "save"))
        {
            WaypointSave();
            szMsg = "waypoints saved\n";
        }
        else if (!strcmp(szArg, "load"))
            szMsg = WaypointLoad(pHostEdict) ? "waypoints loaded\n" : "Error loading waypoints for this map\n";
        else if (!strcmp(szArg, "info"))
        {
            WaypointPrintInfo(pHostEdict);
            return;
        }
        else
            szMsg = g_waypoint_on ? "waypoints are ON\n" : "waypoints are OFF\n";
    }
    else if (!strcmp(szCmd, "autowaypoint"))
    {
        if (!strcmp(szArg, "on"))
        {
            g_auto_waypoint = 1;
            g_waypoint_on = 1;
        }
        else if (!strcmp(szArg, "off"))
            g_auto_waypoint = 0;
        std::cout << "autowaypoint is ";
        szMsg = g_auto_waypoint ? "ON\n" : "OFF\n";
    }
    else if (!strcmp(szCmd, "pathwaypoint"))
    {
        if (!strcmp(szArg, "on"))
        {
            g_path_waypoint = 1;
            g_waypoint_on = 1;
            szMsg = "pathwaypoint is ON\n";
        }
        else if (!strcmp(szArg, "off"))
        {
            g_path_waypoint = 0;
            szMsg = "pathwaypoint is OFF\n";
        }
        else if (!strcmp(szArg, "create1")) { WaypointCreatePath(pHostEdict, 1); return; }
        else if (!strcmp(szArg, "create2")) { WaypointCreatePath(pHostEdict, 2); return; }
        else if (!strcmp(szArg, "remove1")) { WaypointRemovePath(pHostEdict, 1); return; }
        else if (!strcmp(szArg, "remove2")) { WaypointRemovePath(pHostEdict, 2); return; }
        else
            return;
    }
    else if (!strcmp(szCmd, "dbgatherspot"))
    {
        if (CVAR_GET_FLOAT("mp_gamemode") != 2.0f)
            szMsg = "Error: Cannot use dragonball commands when CPDB mode is off!\n";
        else if (!strcmp(szArg, "on"))
        {
            std::cout << "DB gather spots are being drawed\n";
            DrawDBSpots = 1;
            return;
        }
        else if (!strcmp(szArg, "off"))
        {
            std::cout << "DB gather spots are not being drawed\n";
            DrawDBSpots = 0;
            return;
        }
        else if (!strcmp(szArg, "add"))
        {
            std::cout << "Adding dragonball gather spot...\n";
            PlaceNewDBGatherSpot();
            return;
        }
        else if (!strcmp(szArg, "delete"))
        {
            std::cout << "Deleting dragonball gather spot...\n";
            DeleteDBGatherSpot();
            return;
        }
        else if (!strcmp(szArg, "save"))
        {
            SaveCustomGatherDBSpots();
            return;
        }
        else if (!strcmp(szArg, "load"))
        {
            InitCustomGatherDBSpots();
            return;
        }
        else
            return;
    }
    else
    {
        f_d45 = 0;                                                            // comando desconhecido
        return;
    }
    if (szMsg)
        std::cout << szMsg;
}

// ---------------------------------------------------------------------------
// dragonball/<mapa>.dbg : cabecalho de 36 bytes {float versao = 1.0; char mapa[32]} + 10 pontos Good + 10 pontos Evil (16 bytes)
// ---------------------------------------------------------------------------
struct dbg_header_s { float flVersion; char szMap[32]; };

void CBotManager::SaveCustomGatherDBSpots(void)
{
    if (!g_teamplay)
        return;
    if (CVAR_GET_FLOAT("mp_gamemode") != 2.0f)
        return;
    char szFileName[32] = { 0 };
    char szPath[256] = { 0 };
    strcpy(szFileName, STRING(gpGlobals->mapname));
    strcat(szFileName, ".dbg");
    BuildBotFileName(szPath, "dragonball", szFileName);
    std::cout << "Saving dragonball info file...";
    FILE *fp = fopen(szPath, "wb");
    if (!fp)
    {
        std::cout << " couldn't create file!\n";
        return;
    }
    dbg_header_s hdr;
    memset(&hdr, 0, sizeof(hdr));
    hdr.flVersion = 1.0f;
    strcpy(hdr.szMap, STRING(gpGlobals->mapname));
    fwrite(&hdr, 36, 1, fp);
    for (int i = 0; i <= 9; i++)
        fwrite(&GatherSpotsForTeamGood[i], 16, 1, fp);
    for (int i = 0; i <= 9; i++)
        fwrite(&GatherSpotsForTeamEvil[i], 16, 1, fp);
    fclose(fp);
    std::cout << " Done\n";
}

// Zera todos os pontos (marcados como apagados) e carrega o .dbg se existir e for do mesmo mapa/versao
void CBotManager::InitCustomGatherDBSpots(void)
{
    for (int i = 0; i <= 9; i++)
    {
        GatherSpotsForTeamGood[i].vecPos = g_vecZero;
        GatherSpotsForTeamGood[i].bDeleted = 1;
        GatherSpotsForTeamEvil[i].vecPos = g_vecZero;
        GatherSpotsForTeamEvil[i].bDeleted = 1;
    }
    char szFileName[32] = { 0 };
    char szPath[256] = { 0 };
    strcpy(szFileName, STRING(gpGlobals->mapname));
    strcat(szFileName, ".dbg");
    BuildBotFileName(szPath, "dragonball", szFileName);
    std::cout << "Reading dragonball info file...";
    FILE *fp = fopen(szPath, "rb");
    if (!fp)
    {
        std::cout << " file not found, db spawnpoints will be used as gather spots.\n";
        return;
    }
    dbg_header_s hdr;
    fread(&hdr, 36, 1, fp);
    if (hdr.flVersion != 1.0f || strcmp(STRING(gpGlobals->mapname), hdr.szMap))
    {
        fclose(fp);
        return;
    }
    for (int i = 0; i <= 9; i++)
        fread(&GatherSpotsForTeamGood[i], 16, 1, fp);
    for (int i = 0; i <= 9; i++)
        fread(&GatherSpotsForTeamEvil[i], 16, 1, fp);
    fclose(fp);
    std::cout << " Done\n";
}
