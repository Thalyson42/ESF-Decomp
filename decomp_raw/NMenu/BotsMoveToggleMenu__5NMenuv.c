// BotsMoveToggleMenu__5NMenuv @0x16f200 size=90
extern int BotManager;
extern int BotManager+3400;
extern unsigned short _5NMenu.CurrentMenuChoice;

int BotsMoveToggleMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 <= 1)
        CBotManager::ChangeBotBoolSetting(&BotManager, &BotManager+3400, (_5NMenu.CurrentMenuChoice == 1 | 0x5afa00) & 0xff, "botsmove");
    return NMenu::ResetMenu(v0);
}

