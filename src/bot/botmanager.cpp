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
