// BotsShootToggleMenu__5NMenuv @0x16f0e0 size=90
extern int BotManager;
extern int BotManager+3399;
extern unsigned short _5NMenu.CurrentMenuChoice;

int BotsShootToggleMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 <= 1)
        CBotManager::ChangeBotBoolSetting(&BotManager, &BotManager+3399, (_5NMenu.CurrentMenuChoice == 1 | 0x5afa00) & 0xff, "botsshoot");
    return NMenu::ResetMenu(v0);
}

