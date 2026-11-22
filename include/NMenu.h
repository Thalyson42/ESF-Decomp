// NMenu -- menu do bot (esf_bot menu). Classe so com membros estaticos (singleton `_5NMenu` no binario).
#pragma once

class NMenu {
public:
    enum EMenuType {
        MENU_MAIN = 0, MENU_CUSTOM_SKILL, MENU_CUSTOM_TEAM, MENU_CUSTOM_CLASS, MENU_SUPERBOT, MENU_FILL_SERVER,
        MENU_ADVANCED, MENU_CHAT, MENU_KICK, MENU_DEBUG, MENU_AI_PERCENT,
        MENU_MELEE_PERCENT, MENU_TELEPORT_PERCENT, MENU_SWOOP_PERCENT, MENU_FLY_PERCENT, MENU_CHAT_PERCENT,
        MENU_WHINE_PERCENT, MENU_TAUNT_PERCENT, MENU_SWAP_PERCENT, MENU_DROP_PERCENT, MENU_TAG_PERCENT,
        MENU_LOWER_PERCENT, MENU_SBOT_LASER_PERCENT, MENU_BOT_SKILL, MENU_AGGRESSION, MENU_CHAT_TOGGLE,
        MENU_SHOOT_TOGGLE, MENU_SEARCH_TOGGLE, MENU_OBSERVER_TOGGLE, MENU_MOVE_TOGGLE, MENU_DISC_TOGGLE,
        MENU_BALANCE_TOGGLE, MENU_COUNT
    };
    typedef void (*MenuFunc)(void);
    struct MenuInfo { short sKeys; const char *szText; MenuFunc pFunc; };   // 12 bytes  [OK]

    static MenuFunc pCurrentMenuFunction;
    static short SBotType, BotTeam, BotSkill;
    static short CurrentMenuChoice;
    static const char *CurrentMenuText;
    static short CurrentKeySlots;
    static MenuInfo MenuInfos[MENU_COUNT];

    static void ExecuteMenuCommand(int iChoice);
    static void SetNewMenu(EMenuType eMenu);
    static void ShowMenu(void);
    static void ResetMenu(void);
    static short GetPercentFromMenu(const char *szName);

    static void MainMenu(void);   static void CustomBotSkillMenu(void); static void CustomBotTeamMenu(void);
    static void CustomBotClassMenu(void); static void SuperBotMenu(void); static void FillServerMenu(void);
    static void AdvancedMenu(void); static void ChatMenu(void); static void KickMenu(void); static void DebugMenu(void);
    static void AIPercentMenu(void);
    static void MeleePercentMenu(void); static void TeleportPercentMenu(void); static void SwoopPercentMenu(void);
    static void FlyPercentMenu(void); static void ChatPercentMenu(void); static void WhinePercentMenu(void);
    static void TauntPercentMenu(void); static void SwapPercentMenu(void); static void DropPercentMenu(void);
    static void TagPercentMenu(void); static void LowerPercentMenu(void); static void SBotLaserPercentMenu(void);
    static void BotSkillMenu(void); static void AggressionLevelMenu(void);
    static void ChatToggleMenu(void); static void BotsShootToggleMenu(void); static void BotsSearchEnemiesToggleMenu(void);
    static void ObserverToggleMenu(void); static void BotsMoveToggleMenu(void); static void DiscUsageToggleMenu(void);
    static void BalanceTeamsToggleMenu(void);
};
