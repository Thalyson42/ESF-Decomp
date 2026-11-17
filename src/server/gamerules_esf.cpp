// gamerules_esf.cpp -- CHalfLifeMultiplay/Teamplay: funções que o ESF modificou. RECUPERADO À MÃO.
// [OK] conferido; [?] incerto. Campos de jogador ESF: include/player_esf.h.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"
#include "monsters.h"
#include "weapons.h"
#include "soundent.h"
#include "client.h"
#include "game.h"
#include "decals.h"
#include "esf_classes.h"
#include "voice_gamemgr.h"
#define MAX_INTERMISSION_TIME 120
extern CVoiceGameMgr g_VoiceGameMgr;
#include "func_break.h"
#include "explode.h"
#include "teamplay_gamerules.h"


void CHalfLifeMultiplay::ClientDisconnected(edict_t *pClient)
{
    if (!pClient) return;
    CBasePlayer *pPlayer = (CBasePlayer *)CBaseEntity::Instance(pClient);
    if (!pPlayer) return;

    FireTargets("game_playerleave", pPlayer, pPlayer, USE_TOGGLE, 0);
    if (g_teamplay)
        UTIL_LogPrintf("\"%s<%i><%s><%s>\" disconnected\n", STRING(pPlayer->pev->netname), GETPLAYERUSERID(pPlayer->edict()),
                       GETPLAYERAUTHID(pPlayer->edict()), g_engfuncs.pfnInfoKeyValue(g_engfuncs.pfnGetInfoKeyBuffer(pPlayer->edict()), "model"));
    else
        UTIL_LogPrintf("\"%s<%i><%s><%i>\" disconnected\n", STRING(pPlayer->pev->netname), GETPLAYERUSERID(pPlayer->edict()),
                       GETPLAYERAUTHID(pPlayer->edict()), GETPLAYERUSERID(pPlayer->edict()));
    pPlayer->RemoveAllItems(TRUE);

    MESSAGE_BEGIN(MSG_ALL, gmsgSpectator);                    // [OK] ESF: avisa que o jogador saiu do modo espectador
        WRITE_BYTE(ENTINDEX(pClient));
        WRITE_BYTE(0);
    MESSAGE_END();

    CBaseEntity *pEnt = NULL;                                 // [OK] quem observava o jogador que saiu volta ao modo livre
    while ((pEnt = UTIL_FindEntityByClassname(pEnt, "player")) != NULL)
    {
        if (FNullEnt(pEnt->edict())) break;
        CBasePlayer *pOther = (CBasePlayer *)pEnt;
        if (pOther->pev && pOther != pPlayer && pOther->m_hObserverTarget == pPlayer)
        {
            int iMode = pOther->pev->iuser1;
            pOther->pev->iuser1 = 0;
            pOther->m_hObserverTarget = NULL;
            pOther->Spectator_SetMode(iMode);
        }
    }
}

void CHalfLifeMultiplay::PlayerSpawn(CBasePlayer *pPlayer)    // ESF: sem armas/munição do SDK; define PL e vida do personagem
{
    pPlayer->pev->weapons |= (1 << WEAPON_SUIT);              // [OK]
    GiveBaseItems(pPlayer);                                   // [?] virtual +0xf0 do gamerules (equipamento inicial)

    int iPL;
    if (plcatchup.value == 1.0f)                              // [OK] "catch-up": novos jogadores nascem mais perto do PL médio
    {
        iPL = pPlayer->m_pClass->GetStartPowerLevel();                 // [?] vtable do personagem +0x14
        if (m_iAveragePL)                                     // [?] CHalfLifeMultiplay+4
        {
            int iDiff = m_iAveragePL - pPlayer->GetPotentialPL();
            iPL = (int)((double)pPlayer->m_iMaxPowerLevel + (double)iDiff * 0.1);   // [OK] 10% da diferença
            if (pPlayer->f_794 && iPL > pPlayer->m_iMaxPowerLevel)   // [?] f_794 = suicídio (ver Killed)
            {
                pPlayer->f_794 = 0;
                iPL = pPlayer->m_iMaxPowerLevel;
            }
        }
        pPlayer->SetMaxPowerLevel(iPL);
    }
    else
        iPL = pPlayer->m_iMaxPowerLevel;
    pPlayer->f_750 = -1;                                      // [?]
    pPlayer->SetPowerLevel(iPL);

    int v = pPlayer->m_pClass->GetStartSpeed();                     // [?] +0x74c
    int iHealth = pPlayer->m_pClass->GetStartHealth();              // [OK] vida inicial do personagem
    pPlayer->pev->fuser4 = 1000.0f;                           // [OK] ki cheio (+0x260)
    pPlayer->f_74c = v;
    pPlayer->f_24c = iHealth;
    pPlayer->SetMaxHealth(iHealth);
    pPlayer->pev->health = (float)iHealth;
}

void CHalfLifeMultiplay::InitHUD(CBasePlayer *pl)
{
    pl->StartObserving();                                     // [OK] ESF: entra como espectador até escolher o personagem
    MESSAGE_BEGIN(MSG_ONE, gmsgAllowSpec, NULL, pl->edict());
        WRITE_BYTE((int)allowspectator.value);
    MESSAGE_END();
    if (!g_teamplay)
    {
        MESSAGE_BEGIN(MSG_ONE, gmsgVGUIMenu, NULL, pl->edict());   // [OK] abre o menu de seleção de personagem
            WRITE_BYTE(3);
        MESSAGE_END();
    }

    UTIL_ClientPrintAll(HUD_PRINTNOTIFY, UTIL_VarArgs("%s has joined the game\n",
        (pl->pev->netname && STRING(pl->pev->netname)[0] != 0) ? STRING(pl->pev->netname) : "unconnected"));

    if (g_teamplay)
        UTIL_LogPrintf("\"%s<%i><%s><%s>\" entered the game\n", STRING(pl->pev->netname), GETPLAYERUSERID(pl->edict()),
                       GETPLAYERAUTHID(pl->edict()), g_engfuncs.pfnInfoKeyValue(g_engfuncs.pfnGetInfoKeyBuffer(pl->edict()), "model"));
    else
        UTIL_LogPrintf("\"%s<%i><%s><%i>\" entered the game\n", STRING(pl->pev->netname), GETPLAYERUSERID(pl->edict()),
                       GETPLAYERAUTHID(pl->edict()), GETPLAYERUSERID(pl->edict()));

    UpdateGameMode(pl);

    MESSAGE_BEGIN(MSG_ONE, gmsgScoreInfo, NULL, pl->edict());
        WRITE_BYTE(ENTINDEX(pl->edict()));
        WRITE_SHORT(0); WRITE_SHORT(0); WRITE_SHORT(0); WRITE_SHORT(0); WRITE_SHORT(0);   // [OK] 5 shorts (ESF: +PL/classe)
    MESSAGE_END();

    if (!(!pl->IsNetClient() && (pl->pev->flags & FL_FAKECLIENT)))   // [OK] bots não recebem o MOTD
        SendMOTDToClient(pl->edict());

    MESSAGE_BEGIN(MSG_ONE, gmsgFog, NULL, pl->edict());       // [OK] neblina do mapa (entidade "fog")
    edict_t *pFog = FIND_ENTITY_BY_CLASSNAME(NULL, "fog");
    if (!FNullEnt(pFog))
    {
        CFog *pF = (CFog *)CBaseEntity::Instance(pFog);       // [?] classe do env_fog do ESF
        WRITE_BYTE(pF->m_iR); WRITE_BYTE(pF->m_iG); WRITE_BYTE(pF->m_iB);
        WRITE_SHORT((int)pF->m_flStart); WRITE_SHORT((int)pF->m_flEnd);
    }
    else
    {
        WRITE_BYTE(0); WRITE_BYTE(0); WRITE_BYTE(0);
        WRITE_SHORT(-1); WRITE_SHORT(0);
    }
    MESSAGE_END();

    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CBasePlayer *plr = (CBasePlayer *)UTIL_PlayerByIndex(i);
        if (!plr) continue;
        MESSAGE_BEGIN(MSG_ONE, gmsgScoreInfo, NULL, pl->edict());
            WRITE_BYTE(i);
            WRITE_SHORT((int)plr->pev->frags);
            WRITE_SHORT(plr->m_iDeaths);
            WRITE_SHORT(plr->f_738);                          // [?] +0x738 (kills/"streak")
            WRITE_SHORT(plr->pev->team);                      // [?] +0x20c
            WRITE_SHORT(GetTeamIndex(plr->m_szTeamName) + 1);
        MESSAGE_END();
        MESSAGE_BEGIN(MSG_ONE, gmsgPowerLevel, NULL, pl->edict());   // [OK] ESF: PL de cada jogador
            WRITE_BYTE(ENTINDEX(plr->edict()));
            WRITE_LONG(plr->GetPowerLevel());
        MESSAGE_END();
        MESSAGE_BEGIN(MSG_ONE, gmsgSpectator, NULL, pl->edict());
            WRITE_BYTE(i);
            WRITE_BYTE(plr->pev->iuser1 != 0);
        MESSAGE_END();
    }
    pl->f_374 = 1;                                            // [?]
    if (g_fGameOver)
    {
        MESSAGE_BEGIN(MSG_ONE, SVC_INTERMISSION, NULL, pl->edict());
        MESSAGE_END();
    }
}

// Think: igual ao SDK, mais envio de "allowspectator" e reação a "characterlimit". [OK] vs decomp 0xdb870
extern cvar_t timeleft, fragsleft, mp_chattime, allowspectator, characterlimit;
extern int gmsgAllowSpec;
#define ESF_GR_F(off) (*(float *)((char *)this + (off)))   // campos ESF da gamerules (+0x50 último allowspectator, +0x54 último characterlimit)

void CHalfLifeMultiplay::Think(void)
{
    g_VoiceGameMgr.Update(gpGlobals->frametime);

    static int last_frags;
    static int last_time;
    int frags_remaining = 0;
    int time_remaining = 0;

    if (ESF_GR_F(0x50) != allowspectator.value)               // [OK] ESF
    {
        MESSAGE_BEGIN(MSG_ALL, gmsgAllowSpec);
            WRITE_BYTE((int)allowspectator.value);
        MESSAGE_END();
        ESF_GR_F(0x50) = allowspectator.value;
    }
    if (ESF_GR_F(0x54) != characterlimit.value)               // [OK] ESF: slot 0x38/4-2 = 12 da vtable
    {
        ((void (*)(CGameRules *, int))(*(void ***)this)[(0x38 / 4)])(this, 0);   // [?] assinatura/slot a conferir
        ESF_GR_F(0x54) = characterlimit.value;
    }

    if (g_fGameOver)
    {
        int time = (int)CVAR_GET_FLOAT("mp_chattime");
        if (time < 1)
            CVAR_SET_STRING("mp_chattime", "1");
        else if (time > MAX_INTERMISSION_TIME)
            CVAR_SET_STRING("mp_chattime", UTIL_dtos1(MAX_INTERMISSION_TIME));

        m_flIntermissionEndTime = g_flIntermissionStartTime + mp_chattime.value;
        if (m_flIntermissionEndTime < gpGlobals->time)
        {
            if (m_iEndIntermissionButtonHit || ((g_flIntermissionStartTime + MAX_INTERMISSION_TIME) < gpGlobals->time))
                ChangeLevel();
        }
        return;
    }

    float flTimeLimit = timelimit.value * 60;
    float flFragLimit = fraglimit.value;
    time_remaining = (int)(flTimeLimit ? (flTimeLimit - gpGlobals->time) : 0);

    if (flTimeLimit != 0 && gpGlobals->time >= flTimeLimit)
    {
        GoToIntermission();
        return;
    }
    if (flFragLimit)
    {
        int bestfrags = 9999;
        for (int i = 1; i <= gpGlobals->maxClients; i++)
        {
            CBaseEntity *pPlayer = UTIL_PlayerByIndex(i);
            if (pPlayer && pPlayer->pev->frags >= flFragLimit)
            {
                GoToIntermission();
                return;
            }
            if (pPlayer)
            {
                int remain = flFragLimit - pPlayer->pev->frags;
                if (remain < bestfrags) bestfrags = remain;
            }
        }
        frags_remaining = bestfrags;
    }
    if (frags_remaining != last_frags)
        g_engfuncs.pfnCvar_DirectSet(&fragsleft, UTIL_VarArgs("%i", frags_remaining));
    if (timeleft.value != last_time)
        g_engfuncs.pfnCvar_DirectSet(&timeleft, UTIL_VarArgs("%i", time_remaining));
    last_frags = frags_remaining;
    last_time = time_remaining;
}

// ---- CHalfLifeTeamplay::Think (ESF) [OK] vs decomp 0x1278c0 ----

extern int team_scores[]; extern int num_teams;
extern char BotManager[];                                         // [?] objeto global; +44 = flag "bots ativos"
extern bool UTIL_IsValidPlayer(CBaseEntity *, int, int);          // [?] assinatura
#define ESF_TP_F(off) (*(float *)((char *)this + (off)))
#define ESF_ENT_RAW_INT(e, off) (*(int *)((char *)(e) + (off)))

void CHalfLifeTeamplay::Think(void)
{
    if (ESF_TP_F(0x50) != allowspectator.value)
    {
        MESSAGE_BEGIN(MSG_ALL, gmsgAllowSpec);
            WRITE_BYTE((int)allowspectator.value);
        MESSAGE_END();
        ESF_TP_F(0x50) = allowspectator.value;
    }
    if (ESF_TP_F(0x54) != characterlimit.value)
    {
        ((void (*)(CGameRules *, int))(*(void ***)this)[(0x38 / 4)])(this, 0);   // [?]
        ESF_TP_F(0x54) = characterlimit.value;
    }
    g_VoiceGameMgr.Update(gpGlobals->frametime);

    static int last_frags;
    static int last_time;
    static float flLastSBotTeamCheck;
    int frags_remaining = 0;
    int time_remaining = 0;

    if (g_fGameOver)
    {
        CHalfLifeMultiplay::Think();
        return;
    }
    float flTimeLimit = CVAR_GET_FLOAT("mp_timelimit") * 60;
    time_remaining = (int)(flTimeLimit ? (flTimeLimit - gpGlobals->time) : 0);
    if (flTimeLimit != 0 && gpGlobals->time >= flTimeLimit)
    {
        GoToIntermission();
        return;
    }
    float flFragLimit = fraglimit.value;
    if (flFragLimit)
    {
        int bestfrags = 9999;
        for (int i = 0; i < num_teams; i++)
        {
            if (team_scores[i] >= flFragLimit) { GoToIntermission(); return; }
            int remain = flFragLimit - team_scores[i];
            if (remain < bestfrags) bestfrags = remain;
        }
        frags_remaining = bestfrags;
    }
    if (frags_remaining != last_frags)
        g_engfuncs.pfnCvar_DirectSet(&fragsleft, UTIL_VarArgs("%i", frags_remaining));
    if (timeleft.value != last_time)
        g_engfuncs.pfnCvar_DirectSet(&timeleft, UTIL_VarArgs("%i", time_remaining));
    last_frags = frags_remaining;
    last_time = time_remaining;

    // ESF: a cada 0.75 s coloca bots sem time no time "Good"
    if (flLastSBotTeamCheck >= gpGlobals->time) return;
    if (!*(int *)(BotManager + 44)) return;
    flLastSBotTeamCheck = gpGlobals->time + 0.75;
    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CBaseEntity *plr = UTIL_PlayerByIndex(i);
        if (UTIL_IsValidPlayer(plr, 1, 0))
        {
            BOOL fake = FALSE;
            if (!ESF_ENT_RAW_INT(plr, 0))                         // [?] vfunc +0xa4 do pev (decomp ambíguo); aqui só FL_FAKECLIENT
                fake = (plr->pev->flags & FL_FAKECLIENT) != 0;
            if (!fake && plr->pev->team == 2)
                ((void (*)(CGameRules *, CBaseEntity *, const char *))(*(void ***)this)[0x114 / 4])(this, plr, "Good");   // [?] slot 0x114 = ChangePlayerTeam?
        }
    }
}

// ---- CHalfLifeTeamplay: ChangePlayerTeam, InitHUD, ClientCommand (ESF) [OK] vs decomp 0x128360/0x1281a0/0x127dd0 ----
extern int gmsgTeamInfo, gmsgScoreInfo, gmsgTeamNames, gmsgVGUIMenu;
#define ESF_PL_INT(p, off)   (*(int *)((char *)(p) + (off)))
#define ESF_PL_FLOAT(p, off) (*(float *)((char *)(p) + (off)))
#define ESF_GR_INT(off)      (*(int *)((char *)this + (off)))

void CHalfLifeTeamplay::ChangePlayerTeam(CBasePlayer *pPlayer, const char *pTeamName, int bKill, int bGib)
{
    int clientIndex = pPlayer->entindex();
    if (bKill)
    {
        ESF_GR_INT(0x58) = 1;                                 // [?] flag "morte por troca de time" lida em PlayerKilled
        pPlayer->TakeDamage(VARS(INDEXENT(0)), VARS(INDEXENT(0)), 900, bGib ? DMG_ALWAYSGIB : DMG_NEVERGIB);   // 0x2000/0x1000
        ESF_GR_INT(0x58) = 0;
        ESF_GR_INT(0x5c) = 0;
    }
    strncpy(pPlayer->m_szTeamName, pTeamName, TEAM_NAME_LENGTH);
    g_engfuncs.pfnSetClientKeyValue(clientIndex, g_engfuncs.pfnGetInfoKeyBuffer(pPlayer->edict()), "team", pPlayer->m_szTeamName);
    pPlayer->pev->team = (strcmp(pTeamName, "Evil") == 0) ? 1 : 2;   // [OK] ESF: 1 = Evil, 2 = Good

    MESSAGE_BEGIN(MSG_ALL, gmsgTeamInfo);
        WRITE_BYTE(clientIndex);
        WRITE_STRING(pPlayer->m_szTeamName);
    MESSAGE_END();
    MESSAGE_BEGIN(MSG_ALL, gmsgScoreInfo);
        WRITE_BYTE(clientIndex);
        WRITE_SHORT((int)pPlayer->pev->frags);
        WRITE_SHORT(ESF_PL_INT(pPlayer, 0x984));              // deaths
        WRITE_SHORT(ESF_PL_INT(pPlayer, 0x738));
        WRITE_SHORT(pPlayer->pev->team);
        WRITE_SHORT(g_pGameRules->GetTeamIndex(pPlayer->m_szTeamName) + 1);
    MESSAGE_END();
}

void CHalfLifeTeamplay::InitHUD(CBasePlayer *pPlayer)
{
    CHalfLifeMultiplay::InitHUD(pPlayer);

    MESSAGE_BEGIN(MSG_ONE, gmsgTeamNames, NULL, pPlayer->edict());
        WRITE_BYTE(2);                                        // [OK] ESF: só 2 times fixos
        WRITE_STRING("Good");
        WRITE_STRING("Evil");
    MESSAGE_END();
    MESSAGE_BEGIN(MSG_ONE, gmsgVGUIMenu, NULL, pPlayer->edict());
        WRITE_BYTE(2);                                        // menu de times
    MESSAGE_END();

    RecountTeams(FALSE);
    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CBaseEntity *plr = UTIL_PlayerByIndex(i);
        if (plr)
        {
            MESSAGE_BEGIN(MSG_ONE, gmsgTeamInfo, NULL, pPlayer->edict());
                WRITE_BYTE(plr->entindex());
                WRITE_STRING(plr->TeamID());
            MESSAGE_END();
        }
    }
}

BOOL CHalfLifeTeamplay::ClientCommand(CBasePlayer *pPlayer, const char *pcmd)
{
    if (g_VoiceGameMgr.ClientCommand(pPlayer, pcmd))
        return TRUE;

    if (FStrEq(pcmd, "menuselect"))
    {
        CMD_ARGC();                                           // [OK] ESF: ignorado
        return TRUE;
    }
    if (!FStrEq(pcmd, "jointeam"))
        return CHalfLifeMultiplay::ClientCommand(pPlayer, pcmd);

    // não troca de time durante power struggle / block struggle  [?] nomes dos campos
    if (ESF_PL_INT(pPlayer, 0x4c4) || ESF_PL_INT(pPlayer, 0x3e4) || ESF_PL_INT(pPlayer, 0x354) ||
        ESF_PL_INT(pPlayer, 0x35c) || ESF_PL_INT(pPlayer, 0x358))
        return TRUE;

    typedef void (*JoinTeamFn)(CGameRules *, CBasePlayer *, const char *);   // [?] vtable +0x114 (ESF: ChangePlayerTeam simplificado)
    JoinTeamFn JoinTeam = (JoinTeamFn)(*(void ***)this)[0x114 / 4];

    BOOL bBot = FALSE;                                        // bot: usa o time salvo em +0x1060
    if (!ESF_PL_INT(pPlayer, 0) /* [?] vfunc +0xa4 */)
        bBot = (pPlayer->pev->flags & FL_FAKECLIENT) != 0;
    int team;
    if (bBot)
        team = *(short *)((char *)pPlayer + 0x1060);
    else
    {
        if (ESF_PL_FLOAT(pPlayer, 0x79c) + 10.0 >= gpGlobals->time && pPlayer->pev->team)
            return CHalfLifeMultiplay::ClientCommand(pPlayer, pcmd);   // limite de 10 s entre trocas
        team = atoi(CMD_ARGV(1));
    }
    switch (team)
    {
    case 1: JoinTeam(this, pPlayer, "Good"); break;
    case 2: JoinTeam(this, pPlayer, "Evil"); break;
    case 5: JoinTeam(this, pPlayer, WeakestTeam(pPlayer)); break;   // auto-assign
    default: break;
    }
    ESF_PL_FLOAT(pPlayer, 0x79c) = gpGlobals->time;
    return TRUE;
}
