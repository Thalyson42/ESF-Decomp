// client_esf.cpp -- partes de client.cpp do ESF que diferem do SDK.
// [OK] conferido contra o decompilado de hl_i386.so: ClientDisconnect, ServerActivate
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"
#include "soundent.h"
#include "esf_extras.h"
#include "CBotManager.h"

#include <ctype.h>
#define UE_FLOAT(p, off) (*(float *)((char *)(p) + (off)))
extern int gmsgSayText;
extern int g_serveractive;
extern CBotManager BotManager;
void LinkUserMessages(void);

// Igual ao SDK, com o que o ESF acrescenta: avisa o BotManager, zera power level (e o maximo) e modos especiais, e forca
// UpdateClientData (vtable +0x204 do jogador) antes de mandar a mensagem de saida.
void ClientDisconnect(edict_t *pEntity)
{
    if (g_fGameOver)
        return;

    BotManager.DisconnectPlayer(pEntity);                  // [OK]

    CBasePlayer *pPlayer = (CBasePlayer *)GET_PRIVATE(pEntity ? pEntity : INDEXENT(0));
    pPlayer->SetPowerLevel(0);                             // [OK]
    pPlayer->SetMaxPowerLevel(0);                          // [OK]
    pPlayer->UpdateClientData();                           // [?] vtable +0x204 (SDK: slot UpdateClientData)
    pPlayer->RemoveSpecialModes();                         // [OK]

    char text[256];
    sprintf(text, "- %s has left the game\n", STRING(pEntity->v.netname));
    MESSAGE_BEGIN(MSG_ALL, gmsgSayText, NULL);
        WRITE_BYTE(ENTINDEX(pEntity));
        WRITE_STRING(text);
    MESSAGE_END();

    CSound *pSound = CSoundEnt::SoundPointerForIndex(CSoundEnt::ClientSoundIndex(pEntity));
    if (pSound)
        pSound->Reset();

    pEntity->v.takedamage = DAMAGE_NO;                     // nao atrai autoaim
    pEntity->v.solid = SOLID_NOT;
    UTIL_SetOrigin(&pEntity->v, pEntity->v.origin);

    g_pGameRules->ClientDisconnected(pEntity);             // vtable do gamerules +0x34
}

// Igual ao SDK (Activate em todas as entidades nao-cliente, nao dormentes) + MapInit do BotManager no fim.
void ServerActivate(edict_t *pEdictList, int edictCount, int clientMax)
{
    g_serveractive = 1;

    for (int i = 0; i < edictCount; i++)
    {
        if (pEdictList[i].free)
            continue;
        if (i < clientMax || !pEdictList[i].pvPrivateData)
            continue;

        CBaseEntity *pClass = CBaseEntity::Instance(&pEdictList[i]);
        if (pClass && !(pClass->pev->flags & FL_DORMANT))
            pClass->Activate();
        else
            ALERT(at_console, "Can't instance %s\n", STRING(pEdictList[i].v.classname));
    }

    LinkUserMessages();
    BotManager.MapInit();
}

// ClientUserInfoChanged -- igual ao SDK, exceto: a mensagem "changed name" e enviada SEMPRE (sem o teste maxClients > 1).
extern int g_teamplay;

void ClientUserInfoChanged(edict_t *pEntity, char *infobuffer)
{
    if (!pEntity->pvPrivateData)
        return;

    if (pEntity->v.netname && STRING(pEntity->v.netname)[0] != 0 &&
        strcmp(STRING(pEntity->v.netname), g_engfuncs.pfnInfoKeyValue(infobuffer, "name")))
    {
        char sName[256];
        char *pName = g_engfuncs.pfnInfoKeyValue(infobuffer, "name");
        strncpy(sName, pName, sizeof(sName) - 1);
        sName[sizeof(sName) - 1] = '\0';

        // remove '%' do nome (troca por espaco)
        for (char *pApersand = sName; pApersand != NULL && *pApersand != 0; pApersand++)
        {
            if (*pApersand == '%')
                *pApersand = ' ';
        }

        g_engfuncs.pfnSetClientKeyValue(ENTINDEX(pEntity), infobuffer, "name", sName);

        char text[256];
        sprintf(text, "* %s changed name to %s\n", STRING(pEntity->v.netname), g_engfuncs.pfnInfoKeyValue(infobuffer, "name"));
        MESSAGE_BEGIN(MSG_ALL, gmsgSayText, NULL);
            WRITE_BYTE(ENTINDEX(pEntity));
            WRITE_STRING(text);
        MESSAGE_END();

        if (g_teamplay)
        {
            UTIL_LogPrintf("\"%s<%i><%s><%s>\" changed name to \"%s\"\n",
                STRING(pEntity->v.netname), GETPLAYERUSERID(pEntity), GETPLAYERAUTHID(pEntity),
                g_engfuncs.pfnInfoKeyValue(infobuffer, "model"), g_engfuncs.pfnInfoKeyValue(infobuffer, "name"));
        }
        else
        {
            UTIL_LogPrintf("\"%s<%i><%s><%i>\" changed name to \"%s\"\n",
                STRING(pEntity->v.netname), GETPLAYERUSERID(pEntity), GETPLAYERAUTHID(pEntity),
                GETPLAYERUSERID(pEntity), g_engfuncs.pfnInfoKeyValue(infobuffer, "name"));
        }
    }

    g_pGameRules->ClientUserInfoChanged(GetClassPtr((CBasePlayer *)&pEntity->v), infobuffer);   // vtable do gamerules +0x64
}

// ---- Host_Say ----
// Igual ao SDK (say / say_team / comando "puro" tratado como fala), com duas diferencas do ESF:
//   * o texto validado e guardado em ChatClass.StoreChatMsg (para as respostas dos bots) antes de ser enviado;
//   * o intervalo anti-flood fica no campo +0x9dc do jogador (SDK: m_flNextChatTime), 1 s entre mensagens.
#include "CChatClass.h"
#include "voice_gamemgr.h"
extern CChatClass ChatClass;
extern CVoiceGameMgr g_VoiceGameMgr;

void Host_Say(edict_t *pEntity, int teamonly)
{
    CBasePlayer *client;
    int j;
    char *p;
    char text[128];
    char szTemp[256];
    const char *cpSay = "say";
    const char *cpSayTeam = "say_team";
    const char *pcmd = CMD_ARGV(0);

    if (CMD_ARGC() == 0)
        return;

    client = (CBasePlayer *)GetClassPtr((CBasePlayer *)&pEntity->v);
    if (UE_FLOAT(client, 0x9dc) > gpGlobals->time)         // [?] nome do campo (m_flNextChatTime)
        return;

    if (!stricmp(pcmd, cpSay) || !stricmp(pcmd, cpSayTeam))
    {
        if (CMD_ARGC() <= 1)
            return;
        p = (char *)CMD_ARGS();
    }
    else
    {
        if (CMD_ARGC() >= 2)
            sprintf(szTemp, "%s %s", pcmd, CMD_ARGS());
        else
            sprintf(szTemp, "%s", pcmd);
        p = szTemp;
    }

    // remove as aspas de fora
    if (*p == '"')
    {
        p++;
        p[strlen(p) - 1] = 0;
    }

    // so mensagens com algum caractere imprimivel que nao seja espaco
    char *pc;
    for (pc = p; pc != NULL && *pc != 0; pc++)
    {
        if (isprint(*pc) && !isspace(*pc))
        {
            pc = NULL;
            break;
        }
    }
    if (pc != NULL)
        return;

    ChatClass.StoreChatMsg(pEntity, p);                    // [OK] ESF

    if (teamonly)
        sprintf(text, "%c(TEAM) %s: ", 2, STRING(pEntity->v.netname));
    else
        sprintf(text, "%c%s: ", 2, STRING(pEntity->v.netname));

    j = sizeof(text) - 2 - strlen(text);                   // -2: '\n' e o terminador
    if ((int)strlen(p) > j)
        p[j] = 0;

    strcat(text, p);
    strcat(text, "\n");

    UE_FLOAT(client, 0x9dc) = gpGlobals->time + 1.0f;      // CHAT_INTERVAL

    CBaseEntity *pReceiver = NULL;
    while ((pReceiver = UTIL_FindEntityByClassname(pReceiver, "player")) != NULL)
    {
        if (!pReceiver->pev)
            continue;
        if (pReceiver->edict() == pEntity)
            continue;
        if (!pReceiver->IsNetClient())                     // vtable +0xa4
            continue;
        if (g_VoiceGameMgr.PlayerHasBlockedPlayer((CBasePlayer *)pReceiver, client))
            continue;
        if (teamonly && g_pGameRules->PlayerRelationship(pReceiver, CBaseEntity::Instance(pEntity)) != GR_TEAMMATE)   // [?] vtable +0xc8
            continue;

        MESSAGE_BEGIN(MSG_ONE, gmsgSayText, NULL, pReceiver->pev);
            WRITE_BYTE(ENTINDEX(pEntity));
            WRITE_STRING(text);
        MESSAGE_END();
    }

    // e para o proprio jogador (e o console do servidor)
    MESSAGE_BEGIN(MSG_ONE, gmsgSayText, NULL, &pEntity->v);
        WRITE_BYTE(ENTINDEX(pEntity));
        WRITE_STRING(text);
    MESSAGE_END();

    g_engfuncs.pfnServerPrint(text);

    const char *temp = teamonly ? "say_team" : "say";
    if (g_teamplay)
    {
        UTIL_LogPrintf("\"%s<%i><%s><%s>\" %s \"%s\"\n", STRING(pEntity->v.netname), GETPLAYERUSERID(pEntity),
            GETPLAYERAUTHID(pEntity), g_engfuncs.pfnInfoKeyValue(g_engfuncs.pfnGetInfoKeyBuffer(pEntity), "model"), temp, p);
    }
    else
    {
        UTIL_LogPrintf("\"%s<%i><%s><%i>\" %s \"%s\"\n", STRING(pEntity->v.netname), GETPLAYERUSERID(pEntity),
            GETPLAYERAUTHID(pEntity), GETPLAYERUSERID(pEntity), temp, p);
    }
}

// ---- UTIL_HostSay ----
// "Fala" de um jogador/bot feita pelo servidor (usada pelo CChatClass dos bots). Como Host_Say, mas sem anti-flood, sem log e sem
// bloqueio de voz: o texto valido vai para o ChatClass, depois para todos (ou so para o mesmo pev->team se teamonly) e para o console.
void UTIL_HostSay(CBasePlayer *pPlayer, int teamonly, char *pMessage)
{
    if (!pMessage || !*pMessage)
        return;

    // so mensagens com algum caractere imprimivel que nao seja espaco
    char *pc;
    for (pc = pMessage; pc != NULL && *pc != 0; pc++)
    {
        if (isprint(*pc) && !isspace(*pc))
        {
            pc = NULL;
            break;
        }
    }
    if (pc != NULL)
        return;

    char text[128];
    if (teamonly)
        sprintf(text, "%c(TEAM) %s: ", 2, STRING(pPlayer->pev->netname));
    else
        sprintf(text, "%c%s: ", 2, STRING(pPlayer->pev->netname));

    int j = sizeof(text) - 2 - strlen(text);
    if ((int)strlen(pMessage) > j)
        pMessage[j] = 0;

    ChatClass.StoreChatMsg(pPlayer->pev->pContainingEntity, pMessage);

    strcat(text, pMessage);
    strcat(text, "\n");

    if (!gmsgSayText)
        gmsgSayText = REG_USER_MSG("SayText", -1);

    CBaseEntity *pReceiver = NULL;
    while ((pReceiver = UTIL_FindEntityByClassname(pReceiver, "player")) != NULL)
    {
        if (FNullEnt(pReceiver->pev->pContainingEntity))       // [OK] break (como no SDK), nao continue
            break;

        if (pReceiver != (CBaseEntity *)pPlayer && (!teamonly || pPlayer->pev->team == pReceiver->pev->team))
        {
            MESSAGE_BEGIN(MSG_ONE, gmsgSayText, NULL, pReceiver->pev);
                WRITE_BYTE(ENTINDEX(pPlayer->pev->pContainingEntity));
                WRITE_STRING(text);
            MESSAGE_END();
        }
    }

    MESSAGE_BEGIN(MSG_ONE, gmsgSayText, NULL, pPlayer->pev);
        WRITE_BYTE(ENTINDEX(pPlayer->pev->pContainingEntity));
        WRITE_STRING(text);
    MESSAGE_END();

    g_engfuncs.pfnServerPrint(text);
}

// ---- CreateBaseline ----
// Igual ao SDK, exceto: no ramo de entidade comum (player == 0) o ESF NAO copia v.friction (o SDK copia; aqui o campo fica como esta).
// Retorna 0 no SDK; o binario devolve o ultimo valor calculado (irrelevante: a engine ignora o retorno).
#include "entity_state.h"

int CreateBaseline(int player, int eindex, struct entity_state_s *baseline, struct edict_s *entity, int playermodelindex,
                   vec3_t player_mins, vec3_t player_maxs)
{
    baseline->origin = entity->v.origin;
    baseline->angles = entity->v.angles;
    baseline->frame = entity->v.frame;
    baseline->skin = (short)entity->v.skin;

    // informacao de render
    baseline->rendermode = (byte)entity->v.rendermode;
    baseline->renderamt = (byte)entity->v.renderamt;
    baseline->rendercolor.r = (byte)entity->v.rendercolor.x;
    baseline->rendercolor.g = (byte)entity->v.rendercolor.y;
    baseline->rendercolor.b = (byte)entity->v.rendercolor.z;
    baseline->renderfx = (byte)entity->v.renderfx;

    if (player)
    {
        baseline->mins = player_mins;
        baseline->maxs = player_maxs;
        baseline->colormap = eindex;
        baseline->modelindex = playermodelindex;
        baseline->friction = 1.0f;
        baseline->movetype = MOVETYPE_WALK;
        baseline->scale = entity->v.scale;
        baseline->solid = SOLID_SLIDEBOX;
        baseline->framerate = 1.0f;
        baseline->gravity = 1.0f;
    }
    else
    {
        baseline->mins = entity->v.mins;
        baseline->maxs = entity->v.maxs;
        baseline->colormap = 0;
        baseline->modelindex = entity->v.modelindex;
        baseline->movetype = entity->v.movetype;
        baseline->scale = entity->v.scale;
        baseline->solid = entity->v.solid;
        baseline->framerate = entity->v.framerate;
        baseline->gravity = entity->v.gravity;
        // [OK] sem baseline->friction (diferenca em relacao ao SDK)
    }
    return 0;
}

// ---- SetupVisibility ----
// Como o SDK, mas: (1) se o jogador esta em modo observador (pev->iuser1 != 0) e tem alvo (EHANDLE em CBasePlayer+0x788),
// a visao passa a ser a do alvo; (2) nao ha ajuste de agachamento; (3) clientes FL_PROXY (HLTV) ficam sem PVS/PAS.
void SetupVisibility(edict_t *pViewEntity, edict_t *pClient, unsigned char **pvs, unsigned char **pas)
{
    edict_t *pView = pClient;
    if (pViewEntity)
        pView = pViewEntity;

    edict_t *pClientEdict = pClient ? pClient : INDEXENT(0);
    CBaseEntity *pPlayer = pClientEdict ? (CBaseEntity *)pClientEdict->pvPrivateData : NULL;

    if (pPlayer->pev->iuser1)                              // [?] campo de observador (entvars+0x248)
    {
        EHANDLE *phTarget = (EHANDLE *)((char *)pPlayer + 0x788);   // [?] nome do campo (m_hObserverTarget)
        if (*phTarget)
            pView = ((CBaseEntity *)(*phTarget))->pev->pContainingEntity;
    }

    if (!(pClient->v.flags & FL_PROXY))
    {
        Vector org = pView->v.origin + pView->v.view_ofs;
        *pvs = ENGINE_SET_PVS((float *)&org);
        *pas = ENGINE_SET_PAS((float *)&org);
    }
    else
    {
        *pvs = NULL;
        *pas = NULL;
    }
}

// ---- ClientKill ----
// Comando "kill". ATENCAO: diferente do SDK, o binario chama Killed() SEMPRE; a verificacao (flag +0x310, FL 0x4000000, intervalo
// de 1 s, campo +0x4c4) so decide se health vira 0 e se o intervalo e renovado.
void ClientKill(edict_t *pEntity)
{
    entvars_t *pev = &pEntity->v;
    CBasePlayer *pl = (CBasePlayer *)CBasePlayer::Instance(pev);

    if (!(*((char *)pl + 0x310) & 32) &&                   // [?] nomes dos campos desconhecidos
        !(pl->pev->flags & 0x4000000) &&
        *(float *)((char *)pl + 0x314) <= gpGlobals->time &&   // [?] m_fNextSuicideTime
        !*(int *)((char *)pl + 0x4c4))
    {
        *(float *)((char *)pl + 0x314) = gpGlobals->time + 1.0f;
        pev->health = 0;
    }

    pl->Killed(pev, GIB_NEVER);
}

// ---- GetHullBounds ----
// Hulls minusculos do ESF (jogadores voam): 0 = (-4,-4,-9)..(4,4,9); 1 = (-4,-4,-4)..(4,4,5); 2 = ponto. Outros: retorna 0.
int GetHullBounds(int hullnumber, float *mins, float *maxs)
{
    switch (hullnumber)
    {
    case 0:
        mins[0] = -4; mins[1] = -4; mins[2] = -9;
        maxs[0] = 4;  maxs[1] = 4;  maxs[2] = 9;
        return 1;
    case 1:
        mins[0] = -4; mins[1] = -4; mins[2] = -4;
        maxs[0] = 4;  maxs[1] = 4;  maxs[2] = 5;
        return 1;
    case 2:
        mins[0] = 0; mins[1] = 0; mins[2] = 0;
        maxs[0] = 0; maxs[1] = 0; maxs[2] = 0;
        return 1;
    }
    return 0;
}

// ---- StartFrame ----
// SDK + BotManager.Think() no inicio, e gpGlobals->teamplay vem do cvar mp_gamemode (truncado para int).
extern unsigned long g_ulFrameCount;

void StartFrame(void)
{
    BotManager.Think();

    if (g_pGameRules)
        g_pGameRules->Think();

    if (g_fGameOver)
        return;

    gpGlobals->teamplay = (float)(int)CVAR_GET_FLOAT("mp_gamemode");
    g_ulFrameCount++;
}
