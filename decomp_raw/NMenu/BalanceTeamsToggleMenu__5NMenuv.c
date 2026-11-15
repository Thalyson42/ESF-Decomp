// BalanceTeamsToggleMenu__5NMenuv @0x16f2c0 size=90
extern int BotManager;
extern int BotManager+3404;
extern unsigned short _5NMenu.CurrentMenuChoice;

int BalanceTeamsToggleMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 <= 1)
        CBotManager::ChangeBotBoolSetting(&BotManager, &BotManager+3404, (_5NMenu.CurrentMenuChoice == 1 | 0x5afa00) & 0xff, "bot_balanceteams");
    return NMenu::ResetMenu(v0);
}

