// NMenu -- menu do bot (comando "esf_bot menu"). [OK] estrutura/acoes conferidas no assembly (tabelas de salto lidas).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "bot.h"
#include "CBotManager.h"
#include "NMenu.h"
#include <iostream>

extern CBotManager BotManager;
extern int gmsgShowMenu;
extern void UTIL_Printf(const char *szMsg, int iA, edict_t *pEdict);   // [?] funcao livre (UTIL_Printf__FPCciP7edict_s)
#define BM_BOOL(off) (*(bool *)((char *)&BotManager + (off)))     // campos de configuracao do CBotManager por offset

// ---- textos dos menus (.rodata 0x1af140..) ----
static const char MainMenuText[] =
    "ESF-Bot Menu\n\n1: Add Random Bot\n2: Add Custom Bot\n3: Super Bot Menu\n4: Fill Server\n5: Advanced Options\n6: Chat Settings\n7: Kick Last Bot\n8: Kick Bots\n9: Debug Options\n\n0: Exit";
static const char CustomBotSkillMenuText[] =
    "Add Custom Bot - Select a Skill\n\n1: Best\n2: Good\n3: Medium\n4: Weak\n5: Bad\n6: Default\n7: Random\n\n0: Exit";
static const char CustomBotTeamMenuText[] =
    "Add Custom Bot - Select a Team\n\n1: Team Good\n2: Team Evil\n3: Random Team\n\n0: Exit";
static const char CustomBotClassMenuText[] =
    "Add Custom Bot - Select a Class\n\n1: Buu\n2: Goku\n3: Gohan\n4: Krillin\n5: Frieza\n6: Piccolo\n7: Trunks\n8: Vegeta\n9: Cell\n\n0: Exit";
static const char SuperBotMenuText[] =
    "Super Bot Menu\n\n1: Add a Super Bot\n2: Add a Mega Bot\n3: Add a Ultimate Bot\n4: Add Random Super Bot Type\n5: Change Super Bot Laser Percent\n\n0: Exit";
static const char FillServerMenuText[] =
    "Fill Server Menu\n\n1: Fill Server\n2: Fill Half Team Good\n3: Fill Half Team Evil\n4: Fill Team Good\n5: Fill Team Evil\n\n0. Exit";
static const char AdvancedMenuText[] =
    "Advanced Settings\n\n1: Set Bot Skill\n2: Percent settings\n3: Bot Team Balancing\n4: Bots Use discs\n5: Restore Bot Personalities\n6: Set Bot Aggression Level\n\n0: Exit";
static const char ChatMenuText[] =
    "Bot Chat Menu\n\n1: Chat On/Off\n2: Set Chat Percent\n3: Set Whine Percent\n4: Set Taunt Percent\n5: Set Swap Percent\n6: Set Lower Percent\n7: Set Drop Percent\n8: Set Tag Percent\n\n0: Exit";
static const char KickMenuText[] =
    "Kick Bots Menu\n\n1: Kick All Bots\n2: Kick Good Team Bots\n3: Kick Evil Team Bots\n\n0: Exit";
static const char DebugMenuText[] =
    "Debug Menu\n\n1: Bots Shoot\n2: Bots Search Enemies\n3: Bots Ignore Human Players\n4: Bots Move\n0: Exit";
static const char AIPercentMenuText[] =
    "Percent settings\n\n1: Set Melee Percent\n2: Set Teleport Percent\n3: Set Fly Percent\n4: Set Swoop Percent\n\n0: Exit";
static const char PercentMenuText[] =
    "Select Percent\n\n1: 100%\n2: 80% - 99%\n3: 60%-80%\n4: 40%-60%\n5: 20%-40%\n6: 1%-20%\n7: 0%\n8: Random\n\n0. exit";
static const char OnOffMenuText[] =
    "Enable Or Disable?\n\n1: Enable\n2: Disable\n\n0: Exit";
static const char BotSkillMenuText[] =
    "Select Skill\n\n1: Best\n2: Good\n3: Medium\n4: Weak\n5: Bad\n6: Default\n\n0: Exit";
static const char AggressionLevelMenuText[] =
    "Set Bot Aggression Level\n\n1: Defensive\n2: Normal\n3: Aggressive\n\n0: Exit";

// ---- mascaras de teclas (0x1af8c8..) ----
static short MainMenuKeys = 0x3ff, CustomBotSkillMenuKeys = 0x27f, CustomBotTeamMenuKeys = 0x207, CustomBotClassMenuKeys = 0x3ff,
    SuperBotMenuKeys = 0x21f, FillServerMenuKeys = 0x21f, AdvancedMenuKeys = 0x23f, ChatMenuKeys = 0x2ff, KickMenuKeys = 0x207,
    DebugMenuKeys = 0x20f, PercentMenuKeys = 0x2ff, AIPercentMenuKeys = 0x2ff, OnOffMenuKeys = 0x203, BotSkillMenuKeys = 0x23f,
    AggressionLevelMenuKeys = 0x207;

NMenu::MenuFunc NMenu::pCurrentMenuFunction = 0;
short NMenu::SBotType = 0, NMenu::BotTeam = 0, NMenu::BotSkill = 0;
short NMenu::CurrentMenuChoice = 0;
const char *NMenu::CurrentMenuText = 0;
short NMenu::CurrentKeySlots = 0;

NMenu::MenuInfo NMenu::MenuInfos[NMenu::MENU_COUNT] = {
    { MainMenuKeys, MainMenuText, NMenu::MainMenu },
    { CustomBotSkillMenuKeys, CustomBotSkillMenuText, NMenu::CustomBotSkillMenu },
    { CustomBotTeamMenuKeys, CustomBotTeamMenuText, NMenu::CustomBotTeamMenu },
    { CustomBotClassMenuKeys, CustomBotClassMenuText, NMenu::CustomBotClassMenu },
    { SuperBotMenuKeys, SuperBotMenuText, NMenu::SuperBotMenu },
    { FillServerMenuKeys, FillServerMenuText, NMenu::FillServerMenu },
    { AdvancedMenuKeys, AdvancedMenuText, NMenu::AdvancedMenu },
    { ChatMenuKeys, ChatMenuText, NMenu::ChatMenu },
    { KickMenuKeys, KickMenuText, NMenu::KickMenu },
    { DebugMenuKeys, DebugMenuText, NMenu::DebugMenu },
    { AIPercentMenuKeys, AIPercentMenuText, NMenu::AIPercentMenu },
    { PercentMenuKeys, PercentMenuText, NMenu::MeleePercentMenu },
    { PercentMenuKeys, PercentMenuText, NMenu::TeleportPercentMenu },
    { PercentMenuKeys, PercentMenuText, NMenu::SwoopPercentMenu },
    { PercentMenuKeys, PercentMenuText, NMenu::FlyPercentMenu },
    { PercentMenuKeys, PercentMenuText, NMenu::ChatPercentMenu },
    { PercentMenuKeys, PercentMenuText, NMenu::WhinePercentMenu },
    { PercentMenuKeys, PercentMenuText, NMenu::TauntPercentMenu },
    { PercentMenuKeys, PercentMenuText, NMenu::SwapPercentMenu },
    { PercentMenuKeys, PercentMenuText, NMenu::DropPercentMenu },
    { PercentMenuKeys, PercentMenuText, NMenu::TagPercentMenu },
    { PercentMenuKeys, PercentMenuText, NMenu::LowerPercentMenu },
    { PercentMenuKeys, PercentMenuText, NMenu::SBotLaserPercentMenu },
    { BotSkillMenuKeys, BotSkillMenuText, NMenu::BotSkillMenu },
    { AggressionLevelMenuKeys, AggressionLevelMenuText, NMenu::AggressionLevelMenu },
    { OnOffMenuKeys, OnOffMenuText, NMenu::ChatToggleMenu },
    { OnOffMenuKeys, OnOffMenuText, NMenu::BotsShootToggleMenu },
    { OnOffMenuKeys, OnOffMenuText, NMenu::BotsSearchEnemiesToggleMenu },
    { OnOffMenuKeys, OnOffMenuText, NMenu::ObserverToggleMenu },
    { OnOffMenuKeys, OnOffMenuText, NMenu::BotsMoveToggleMenu },
    { OnOffMenuKeys, OnOffMenuText, NMenu::DiscUsageToggleMenu },
    { OnOffMenuKeys, OnOffMenuText, NMenu::BalanceTeamsToggleMenu },
};

void NMenu::ExecuteMenuCommand(int iChoice)
{
    if (!pCurrentMenuFunction || !CurrentMenuText || iChoice == -1)
        SetNewMenu(MENU_MAIN);
    else
    {
        CurrentMenuChoice = (short)iChoice;
        pCurrentMenuFunction();
    }
    if (CurrentMenuText)
        ShowMenu();
}

void NMenu::SetNewMenu(EMenuType eMenu)
{
    pCurrentMenuFunction = MenuInfos[eMenu].pFunc;
    CurrentMenuText = MenuInfos[eMenu].szText;
    CurrentKeySlots = MenuInfos[eMenu].sKeys;
}

void NMenu::ResetMenu(void)
{
    pCurrentMenuFunction = 0;
    CurrentMenuChoice = 0;
    CurrentMenuText = 0;
    CurrentKeySlots = 0;
    SBotType = 0;
    BotTeam = 0;
}

void NMenu::ShowMenu(void)
{
    if (!g_engfuncs.pfnIsDedicatedServer())
    {
        // servidor com jogador local: o menu vai por mensagem ShowMenu para o host (BotManager+12 = edict do host)
        edict_t *pHost = *(edict_t **)((char *)&BotManager + 12);
        if (!pHost)
            pHost = g_engfuncs.pfnPEntityOfEntOffset(0);                      // [?] ordem do teste de fallback conforme o decompilado
        CBaseEntity *pEnt = pHost ? CBaseEntity::Instance(pHost) : NULL;
        if (!UTIL_IsValidPlayer(pEnt, 0, 0))                  // [?] argumentos de UTIL_IsValidPlayer (lixo de pilha no decompilado)
            return;
        if (!gmsgShowMenu)
            gmsgShowMenu = REG_USER_MSG("ShowMenu", -1);
        MESSAGE_BEGIN(MSG_ONE, gmsgShowMenu, NULL, pEnt->edict());
            WRITE_SHORT(CurrentKeySlots);
            WRITE_CHAR(-1);
            WRITE_BYTE(0);
            WRITE_STRING(CurrentMenuText);
        MESSAGE_END();
    }
    else
    {
        // servidor dedicado: imprime o texto no console, em pedacos de 128 caracteres
        if (strlen(CurrentMenuText) > 128)
        {
            char szFirst[129], szSecond[129];
            memset(szFirst, 0, sizeof(szFirst));
            memset(szSecond, 0, sizeof(szSecond));
            strncpy(szFirst, CurrentMenuText, 128);
            strncpy(szSecond, CurrentMenuText + 129, strlen(CurrentMenuText) - 129);   // [OK] pula o caractere 128 (comportamento do binario)
            szFirst[128] = 0;
            szSecond[128] = 0;
            UTIL_Printf(szFirst, 1, NULL);
            UTIL_Printf(szSecond, 1, NULL);
        }
        else
            UTIL_Printf(CurrentMenuText, 1, NULL);
        UTIL_Printf("\n\nTo make a choice type esf_bot menuselect X where X stands for the choice number\n", 1, NULL);
    }
}

short NMenu::GetPercentFromMenu(const char *szName)
{
    switch (CurrentMenuChoice)
    {
    case 1: return 100;
    case 2: return (short)RANDOM_LONG(80, 99);
    case 3: return (short)RANDOM_LONG(60, 80);
    case 4: return (short)RANDOM_LONG(40, 60);
    case 5: return (short)RANDOM_LONG(20, 40);
    case 6: return (short)RANDOM_LONG(1, 20);
    case 7: return 0;
    case 8: return (short)RANDOM_LONG(0, 100);
    }
    return 0;
}

void NMenu::MainMenu(void)
{
    switch (CurrentMenuChoice)
    {
    case 1: BotManager.CreateBot(-1, -1, 0, -1, -1); ResetMenu(); break;
    case 2: SetNewMenu(MENU_CUSTOM_SKILL); break;
    case 3:
        if (g_teamplay)
            SetNewMenu(MENU_SUPERBOT);
        else
        {
            std::cout << "This option is NOT available in free fight\n";
            ResetMenu();
        }
        break;
    case 4: SetNewMenu(MENU_FILL_SERVER); break;
    case 5: SetNewMenu(MENU_ADVANCED); break;
    case 6: SetNewMenu(MENU_CHAT); break;
    case 7: BotManager.KickLastBot(true); ResetMenu(); break;
    case 8: SetNewMenu(MENU_KICK); break;
    case 9: SetNewMenu(MENU_DEBUG); break;
    default: ResetMenu(); break;
    }
}

void NMenu::CustomBotSkillMenu(void)
{
    if (CurrentMenuChoice >= 1 && CurrentMenuChoice <= 5)
        BotSkill = CurrentMenuChoice;
    else if (CurrentMenuChoice == 6)
        BotSkill = 2;
    else if (CurrentMenuChoice == 7)
        BotSkill = (short)RANDOM_LONG(1, 5);
    else
    {
        ResetMenu();
        return;
    }
    SetNewMenu(g_teamplay ? MENU_CUSTOM_TEAM : MENU_CUSTOM_CLASS);
}

void NMenu::CustomBotTeamMenu(void)
{
    if (CurrentMenuChoice == 1 || CurrentMenuChoice == 2)
        BotTeam = CurrentMenuChoice;
    else if (CurrentMenuChoice == 3)
        BotTeam = (short)RANDOM_LONG(1, 2);
    else
    {
        ResetMenu();
        return;
    }
    SetNewMenu(MENU_CUSTOM_CLASS);
}

void NMenu::CustomBotClassMenu(void)
{
    if (SBotType > 0)
    {
        BotManager.CreateSuperBot(CurrentMenuChoice, 0, -1, SBotType);
        SBotType = 0;
    }
    else
    {
        BotManager.CreateBot(BotTeam, CurrentMenuChoice, 0, BotSkill, -1);
        BotTeam = 0;
        BotSkill = 0;
    }
    ResetMenu();
}

void NMenu::SuperBotMenu(void)
{
    if (CurrentMenuChoice >= 1 && CurrentMenuChoice <= 4)
    {
        SBotType = (CurrentMenuChoice == 4) ? (short)RANDOM_LONG(1, 3) : CurrentMenuChoice;
        SetNewMenu(MENU_CUSTOM_CLASS);
    }
    else if (CurrentMenuChoice == 5)
        SetNewMenu(MENU_SBOT_LASER_PERCENT);
    else
        ResetMenu();
}

void NMenu::FillServerMenu(void)
{
    switch (CurrentMenuChoice)
    {
    case 1: BotManager.FillServer(); break;
    case 2: BotManager.FillAHalfTeam(1); break;
    case 3: BotManager.FillAHalfTeam(2); break;
    case 4: BotManager.FillATeam(1); break;
    case 5: BotManager.FillATeam(2); break;
    default: break;
    }
    ResetMenu();
}

void NMenu::AdvancedMenu(void)
{
    switch (CurrentMenuChoice)
    {
    case 1: SetNewMenu(MENU_BOT_SKILL); break;
    case 2: SetNewMenu(MENU_AI_PERCENT); break;
    case 3: SetNewMenu(MENU_BALANCE_TOGGLE); break;
    case 4: SetNewMenu(MENU_DISC_TOGGLE); break;
    case 5: BotManager.CreateBotPersonalities(); ResetMenu(); break;
    case 6: SetNewMenu(MENU_AGGRESSION); break;
    default: ResetMenu(); break;
    }
}

void NMenu::ChatMenu(void)
{
    switch (CurrentMenuChoice)
    {
    case 1: case 2: SetNewMenu(MENU_CHAT_TOGGLE); break;                      // [OK] as opcoes 1 e 2 caem no mesmo destino (binario)
    case 3: SetNewMenu(MENU_CHAT_PERCENT); break;
    case 4: SetNewMenu(MENU_WHINE_PERCENT); break;
    case 5: SetNewMenu(MENU_TAUNT_PERCENT); break;
    case 6: SetNewMenu(MENU_SWAP_PERCENT); break;
    case 7: SetNewMenu(MENU_LOWER_PERCENT); break;
    case 8: SetNewMenu(MENU_DROP_PERCENT); break;
    default: ResetMenu(); break;
    }
}

void NMenu::KickMenu(void)
{
    short sTeam;
    if (CurrentMenuChoice == 1) sTeam = -1;
    else if (CurrentMenuChoice == 2) sTeam = 1;
    else if (CurrentMenuChoice == 3) sTeam = 2;
    else { ResetMenu(); return; }
    BotManager.KickBots(sTeam);
    ResetMenu();
}

void NMenu::DebugMenu(void)
{
    switch (CurrentMenuChoice)
    {
    case 1: SetNewMenu(MENU_SHOOT_TOGGLE); break;
    case 2: SetNewMenu(MENU_SEARCH_TOGGLE); break;
    case 3: SetNewMenu(MENU_OBSERVER_TOGGLE); break;
    case 4: SetNewMenu(MENU_MOVE_TOGGLE); break;
    default: ResetMenu(); break;
    }
}

void NMenu::AIPercentMenu(void)
{
    switch (CurrentMenuChoice)
    {
    case 1: SetNewMenu(MENU_MELEE_PERCENT); break;
    case 2: SetNewMenu(MENU_TELEPORT_PERCENT); break;
    case 3: SetNewMenu(MENU_FLY_PERCENT); break;
    case 4: SetNewMenu(MENU_SWOOP_PERCENT); break;
    default: ResetMenu(); break;
    }
}

void NMenu::MeleePercentMenu(void)
{
    if (CurrentMenuChoice <= 8)
        BotManager.ChangePersoPercentSetting(1, GetPercentFromMenu("melee_percent"), "melee_percent");
    ResetMenu();
}

void NMenu::TeleportPercentMenu(void)
{
    if (CurrentMenuChoice <= 8)
        BotManager.ChangePersoPercentSetting(39, GetPercentFromMenu("teleport_percent"), "teleport_percent");
    ResetMenu();
}

void NMenu::SwoopPercentMenu(void)
{
    if (CurrentMenuChoice <= 8)
        BotManager.ChangePersoPercentSetting(41, GetPercentFromMenu("swoop_percent"), "swoop_percent");
    ResetMenu();
}

void NMenu::FlyPercentMenu(void)
{
    if (CurrentMenuChoice <= 8)
        BotManager.ChangePersoPercentSetting(45, GetPercentFromMenu("fly_percent"), "fly_percent");
    ResetMenu();
}

void NMenu::ChatPercentMenu(void)
{
    if (CurrentMenuChoice <= 8)
        BotManager.ChangePersoPercentSetting(25, GetPercentFromMenu("chat_percent"), "chat_percent");
    ResetMenu();
}

void NMenu::WhinePercentMenu(void)
{
    if (CurrentMenuChoice <= 8)
        BotManager.ChangePersoPercentSetting(29, GetPercentFromMenu("whine_percent"), "whine_percent");
    ResetMenu();
}

void NMenu::TauntPercentMenu(void)
{
    if (CurrentMenuChoice <= 8)
        BotManager.ChangePersoPercentSetting(27, GetPercentFromMenu("taunt_percent"), "taunt_percent");
    ResetMenu();
}

void NMenu::SwapPercentMenu(void)
{
    if (CurrentMenuChoice <= 8)
        BotManager.ChangePersoPercentSetting(35, GetPercentFromMenu("chat_swap_percent"), "chat_swap_percent");
    ResetMenu();
}

void NMenu::DropPercentMenu(void)
{
    if (CurrentMenuChoice <= 8)
        BotManager.ChangePersoPercentSetting(33, GetPercentFromMenu("chat_drop_percent"), "chat_drop_percent");
    ResetMenu();
}

void NMenu::TagPercentMenu(void)
{
    if (CurrentMenuChoice <= 8)
        BotManager.ChangePersoPercentSetting(31, GetPercentFromMenu("chat_tag_percent"), "chat_tag_percent");
    ResetMenu();
}

void NMenu::LowerPercentMenu(void)
{
    if (CurrentMenuChoice <= 8)
        BotManager.ChangePersoPercentSetting(37, GetPercentFromMenu("chat_lower_percent"), "chat_lower_percent");
    ResetMenu();
}

void NMenu::SBotLaserPercentMenu(void)
{
    if (CurrentMenuChoice <= 8)
        BotManager.ChangeSBotLaserPercent(GetPercentFromMenu(0));
    ResetMenu();
}

void NMenu::BotSkillMenu(void)
{
    short sSkill;
    if (CurrentMenuChoice >= 1 && CurrentMenuChoice <= 5)
        sSkill = CurrentMenuChoice;
    else if (CurrentMenuChoice == 6)
        sSkill = 2;
    else
    {
        ResetMenu();
        return;
    }
    BotManager.ChangeBotSkill(sSkill);
    ResetMenu();
}

void NMenu::AggressionLevelMenu(void)
{
    int iLevel;
    if (CurrentMenuChoice == 1) iLevel = 2;          // Defensive
    else if (CurrentMenuChoice == 2) iLevel = 1;     // Normal
    else if (CurrentMenuChoice == 3) iLevel = 0;     // Aggressive
    else { ResetMenu(); return; }
    BotManager.ChangeAggressionLevel(iLevel);
    ResetMenu();
}

void NMenu::ChatToggleMenu(void)
{
    if (CurrentMenuChoice == 1 || CurrentMenuChoice == 2)
        BotManager.ChangeBotBoolSetting(BM_BOOL(3405), (CurrentMenuChoice == 1) ? 1 : 0, "shouldbotschat");
    ResetMenu();
}

void NMenu::BotsShootToggleMenu(void)
{
    if (CurrentMenuChoice == 1 || CurrentMenuChoice == 2)
        BotManager.ChangeBotBoolSetting(BM_BOOL(3399), (CurrentMenuChoice == 1) ? 1 : 0, "botsshoot");
    ResetMenu();
}

void NMenu::BotsSearchEnemiesToggleMenu(void)
{
    if (CurrentMenuChoice == 1 || CurrentMenuChoice == 2)
        BotManager.ChangeBotBoolSetting(BM_BOOL(3398), (CurrentMenuChoice == 1) ? 1 : 0, "botssearchenemies");
    ResetMenu();
}

void NMenu::ObserverToggleMenu(void)
{
    if (CurrentMenuChoice == 1 || CurrentMenuChoice == 2)
        BotManager.ChangeBotBoolSetting(BM_BOOL(3402), (CurrentMenuChoice == 1) ? 1 : 0, "observer");
    ResetMenu();
}

void NMenu::BotsMoveToggleMenu(void)
{
    if (CurrentMenuChoice == 1 || CurrentMenuChoice == 2)
        BotManager.ChangeBotBoolSetting(BM_BOOL(3400), (CurrentMenuChoice == 1) ? 1 : 0, "botsmove");
    ResetMenu();
}

void NMenu::DiscUsageToggleMenu(void)
{
    if (CurrentMenuChoice == 1 || CurrentMenuChoice == 2)
        BotManager.ChangeBotBoolSetting(BM_BOOL(3401), (CurrentMenuChoice == 1) ? 1 : 0, "botsusediscs");
    ResetMenu();
}

void NMenu::BalanceTeamsToggleMenu(void)
{
    if (CurrentMenuChoice == 1 || CurrentMenuChoice == 2)
        BotManager.ChangeBotBoolSetting(BM_BOOL(3404), (CurrentMenuChoice == 1) ? 1 : 0, "bot_balanceteams");
    ResetMenu();
}

