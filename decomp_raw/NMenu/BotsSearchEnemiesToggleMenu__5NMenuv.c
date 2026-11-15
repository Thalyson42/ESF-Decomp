// BotsSearchEnemiesToggleMenu__5NMenuv @0x16f140 size=90
extern int BotManager;
extern int BotManager+3398;
extern unsigned short _5NMenu.CurrentMenuChoice;

int BotsSearchEnemiesToggleMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 <= 1)
        CBotManager::ChangeBotBoolSetting(&BotManager, &BotManager+3398, (_5NMenu.CurrentMenuChoice == 1 | 0x5afa00) & 0xff, "botssearchenemies");
    return NMenu::ResetMenu(v0);
}

