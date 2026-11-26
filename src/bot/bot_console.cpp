// Comando de servidor "esf_bot <comando> ..." (HandleNormalBotCommands) e FindPlayerByName.
// Registrado em CBotManager::GameInit com AddServerCommand("esf_bot", HandleNormalBotCommands).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"
#include "bot.h"
#include "CBotManager.h"
#include "NMenu.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

extern CBotManager BotManager;
extern int g_teamplay;
extern void ClientKill(edict_t *pEntity);
extern BOOL UTIL_IsValidPlayer(CBasePlayer *pPlayer, int a, int b);
extern CGameRules *g_pGameRules;
extern void Player_ChangeClass(CBasePlayer *pPlayer, const char *szClass) asm("ChangeClass__11CBasePlayerPCc");

// Igual ao SDK (voice_gamemgr), mas exportada: procura o jogador pelo netname, sem diferenciar maiusculas
CBasePlayer *FindPlayerByName(const char *pTestName)
{
    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        edict_t *pEdict = g_engfuncs.pfnPEntityOfEntIndex(i);
        if (pEdict)
        {
            CBaseEntity *pEnt = CBaseEntity::Instance(pEdict);
            if (pEnt && pEnt->IsPlayer())
            {
                if (strcasecmp(STRING(pEnt->pev->netname), pTestName) == 0)
                    return (CBasePlayer *)pEnt;
            }
        }
    }
    return NULL;
}

// bot de verdade: nao e cliente de rede e tem FL_FAKECLIENT (mesmo teste de IsBotPlayer em botmanager.cpp)
static bool IsBot(CBasePlayer *p)
{
    return !p->IsNetClient() && (*((unsigned char *)p->pev + 0x1a5) & 32) != 0;
}

// argumento presente e nao vazio
static inline bool HasArg(const char *s) { return s && *s; }
// argumento que nao e curinga "*"
static inline bool Given(const char *s) { return s && *s && *s != '*'; }

// Comandos: addbot team class name skill personality | addsbot level class skill name | idlebots/botsmove/... 0|1 | bot_*_percent N |
// bot_aggression_level | botskill | bot_fill | min_bots | max_bots | killbot | botteam | botclass | botkick* | bot_menu | menuselect.
// BotManager.f_d45 = 1 enquanto o comando for conhecido; comando desconhecido (ou addsbot sem teamplay) deixa em 0.
void HandleNormalBotCommands(void)
{
    int iBase = g_engfuncs.pfnIsDedicatedServer() != 0;     // servidor dedicado: argv[0] e "esf_bot"
    const char *cmd   = g_engfuncs.pfnCmd_Argv(iBase);
    const char *arg1  = g_engfuncs.pfnCmd_Argv(iBase + 1);
    const char *arg2  = g_engfuncs.pfnCmd_Argv(iBase + 2);
    const char *arg3  = g_engfuncs.pfnCmd_Argv(iBase + 3);
    const char *arg4  = g_engfuncs.pfnCmd_Argv(iBase + 4);
    const char *arg5  = g_engfuncs.pfnCmd_Argv(iBase + 5);

    BotManager.f_d45 = 1;

    if (!strcmp(cmd, "addbot"))
    {
        short sTeam = -1, sClass = -1, sSkill = -1, sPers = -1;
        const char *szName = Given(arg3) ? arg3 : NULL;
        if (Given(arg1))
            sTeam = g_teamplay ? (short)strtol(arg1, NULL, 10) : (short)-1;
        if (Given(arg2))
            sClass = (short)strtol(arg2, NULL, 10);
        if (Given(arg4))
            sSkill = (short)strtol(arg4, NULL, 10);
        if (Given(arg5))
            sPers = (short)strtol(arg5, NULL, 10);
        BotManager.CreateBot(sTeam, sClass, szName, sSkill, sPers);
        return;
    }

    if (!strcmp(cmd, "addsbot"))
    {
        if (!g_teamplay)
        {
            std::cout << "Cannot create Super Bots in free fight!\n";
            BotManager.f_d45 = 0;
            return;
        }
        short sLevel = -1, sClass = -1, sSkill = -1;
        const char *szName = Given(arg4) ? arg4 : NULL;
        if (Given(arg1))
            sLevel = (short)strtol(arg1, NULL, 10);
        if (Given(arg2))
            sClass = (short)strtol(arg2, NULL, 10);
        if (Given(arg3))
            sSkill = (short)strtol(arg3, NULL, 10);
        BotManager.CreateSuperBot(sClass, szName, sSkill, sLevel);
        return;
    }

    // ---- ligar/desligar (strtol != 0): ChangeBotBoolSetting(flag, valor, nome do comando) ----
    static const struct { const char *name; int off; } bools[] = {
        { "idlebots", 3403 }, { "botsmove", 3400 }, { "botsusediscs", 3401 }, { "shouldbotschat", 3405 },
        { "bot_balanceteams", 3404 }, { "observer", 3402 }, { "botsshoot", 3399 }, { "botssearchenemies", 3398 },
    };
    for (unsigned i = 0; i < sizeof(bools) / sizeof(bools[0]); i++)
    {
        if (!strcmp(cmd, bools[i].name))
        {
            if (!HasArg(arg1))
                return;
            BotManager.ChangeBotBoolSetting(*(bool *)((char *)&BotManager + bools[i].off),
                                            (short)(strtol(arg1, NULL, 10) != 0), bools[i].name);
            return;
        }
    }

    if (!strcmp(cmd, "bot_aggression_level"))
    {
        if (!HasArg(arg1))
            return;
        int iLevel;
        if (!strcmp(arg1, "defensive"))
            iLevel = 2;
        else if (!strcmp(arg1, "normal"))
            iLevel = 1;
        else if (!strcmp(arg1, "aggressive"))
            iLevel = 0;
        else
        {
            std::cout << "Invalid aggression level\n";
            return;
        }
        BotManager.ChangeAggressionLevel(iLevel);
        return;
    }

    if (!strcmp(cmd, "botskill"))
    {
        if (HasArg(arg1))
            BotManager.ChangeBotSkill((short)strtol(arg1, NULL, 10));
        return;
    }

    // ---- porcentagens de personalidade: deslocamento do membro, nome mostrado ----
    static const struct { const char *name; int off; const char *shown; } percents[] = {
        { "bot_chat_percent", 25, "chat_percent" },         { "bot_taunt_percent", 27, "taunt_percent" },
        { "bot_whine_percent", 29, "whine_percent" },       { "bot_chat_tag_percent", 31, "chat_tag_percent" },
        { "bot_chat_drop_percent", 33, "chat_drop_percent" }, { "bot_chat_swap_percent", 35, "chat_swap_percent" },
        { "bot_chat_lower_percent", 37, "chat_lower_percent" }, { "bot_melee_percent", 1, "melee_percent" },
        { "bot_meleecombo_percent", 21, "meleecombo_percent" }, { "bot_meleekick_percent", 23, "meleekick_percent" },
        { "bot_teleport_percent", 39, "teleport_percent" }, { "bot_swoop_percent", 41, "swoop_percent" },
        { "bot_block_percent", 51, "block_percent" },       { "bot_fly_percent", 45, "fly_percent" },
    };
    for (unsigned i = 0; i < sizeof(percents) / sizeof(percents[0]); i++)
    {
        if (!strcmp(cmd, percents[i].name))
        {
            if (!HasArg(arg1))
                return;
            BotManager.ChangePersoPercentSetting(percents[i].off, (short)strtol(arg1, NULL, 10), percents[i].shown);
            return;
        }
    }

    if (!strcmp(cmd, "sbot_laser_percent"))
    {
        if (HasArg(arg1))
            BotManager.ChangeSBotLaserPercent((short)strtol(arg1, NULL, 10));
        return;
    }

    if (!strcmp(cmd, "restorebotpersonalities"))
    {
        BotManager.CreateBotPersonalities();
        return;
    }

    if (!strcmp(cmd, "bot_fill"))
    {
        if (HasArg(arg1))
        {
            if (!strcmp(arg1, "full"))
            {
                BotManager.FillServer();
                return;
            }
            if (g_teamplay)
            {
                if (!strcmp(arg1, "half_good")) { BotManager.FillAHalfTeam(1); return; }
                if (!strcmp(arg1, "half_evil")) { BotManager.FillAHalfTeam(2); return; }
                if (!strcmp(arg1, "full_good")) { BotManager.FillATeam(1); return; }
                if (!strcmp(arg1, "full_evil")) { BotManager.FillATeam(2); return; }
            }
        }
        std::cout << "Fill arguments:\n\n";
        std::cout << "\"full\" : fills the whole server with bots\n\n";
        std::cout << "Teamplay only arguments:\n\n";
        std::cout << "\"half_good\" : fills half team good with bots\n";
        std::cout << "\"half_evil\" : fills half team evil with bots\n";
        std::cout << "\"full_good\" : fills team good with bots\n";
        std::cout << "\"full_evil\" : fills team evil with bots\n";
        return;
    }

    if (!strcmp(cmd, "min_bots"))
    {
        if (HasArg(arg1))
            BotManager.SetMinBots((short)strtol(arg1, NULL, 10));
        return;
    }
    if (!strcmp(cmd, "max_bots"))
    {
        if (HasArg(arg1))
            BotManager.SetMaxBots((short)strtol(arg1, NULL, 10));
        return;
    }

    if (!strcmp(cmd, "killbot"))
    {
        if (!HasArg(arg1))
            return;
        CBasePlayer *pBot = FindPlayerByName(arg1);
        if (UTIL_IsValidPlayer(pBot, 1, 1) && IsBot(pBot))
            ClientKill(pBot->pev->pContainingEntity);
        else
            std::cout << "Error, invalid bot\n";
        return;
    }

    if (!strcmp(cmd, "botteam"))
    {
        if (!HasArg(arg1) || !HasArg(arg2))
            return;
        if (!g_teamplay)
        {
            std::cout << "Error, no teamplay\n";
            return;
        }
        CBasePlayer *pBot = FindPlayerByName(arg1);
        if (!UTIL_IsValidPlayer(pBot, 1, 1))
        {
            std::cout << "Error, invalid bot\n";
            return;
        }
        int iTeam;
        if (!strcmp(arg2, "good"))
            iTeam = 1;
        else if (!strcmp(arg2, "evil"))
            iTeam = 2;
        else
        {
            std::cout << "Error, invalid team\n";
            return;
        }
        if (IsBot(pBot))
        {
            *(int *)((char *)pBot + 0x1060) = iTeam;                // [?] time escolhido, lido por "jointeam"
            g_pGameRules->ClientCommand(pBot, "jointeam");
        }
        else
            std::cout << "Error, invalid bot\n";
        return;
    }

    if (!strcmp(cmd, "botclass"))
    {
        if (!HasArg(arg1) || !HasArg(arg2))
            return;
        CBasePlayer *pBot = FindPlayerByName(arg1);
        if (UTIL_IsValidPlayer(pBot, 1, 1) && IsBot(pBot))
            Player_ChangeClass(pBot, arg2);
        else
            std::cout << "Error, invalid bot\n";
        return;
    }

    if (!strcmp(cmd, "botkicklast"))
    {
        BotManager.KickLastBot(true);
        return;
    }
    if (!strcmp(cmd, "botkickall"))      { BotManager.KickBots(-1); return; }
    if (!strcmp(cmd, "botkickallgood"))  { BotManager.KickBots(1);  return; }
    if (!strcmp(cmd, "botkickallevil"))  { BotManager.KickBots(2);  return; }

    if (!strcmp(cmd, "bot_menu"))
    {
        NMenu::ExecuteMenuCommand(-1);
        return;
    }
    if (!strcmp(cmd, "menuselect"))
    {
        if (HasArg(arg1))
            NMenu::ExecuteMenuCommand((int)strtol(arg1, NULL, 10));
        return;
    }

    BotManager.f_d45 = 0;       // comando desconhecido: o CBotManager tenta tratar como comando de jogo
}
