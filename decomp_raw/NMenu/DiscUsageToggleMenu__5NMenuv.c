// DiscUsageToggleMenu__5NMenuv @0x16f260 size=90
extern int BotManager;
extern int BotManager+3401;
extern unsigned short _5NMenu.CurrentMenuChoice;

int DiscUsageToggleMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 <= 1)
        CBotManager::ChangeBotBoolSetting(&BotManager, &BotManager+3401, (_5NMenu.CurrentMenuChoice == 1 | 0x5afa00) & 0xff, "botsusediscs");
    return NMenu::ResetMenu(v0);
}

