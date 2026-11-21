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
