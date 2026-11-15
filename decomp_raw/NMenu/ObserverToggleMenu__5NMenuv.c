// ObserverToggleMenu__5NMenuv @0x16f1a0 size=90
extern int BotManager;
extern int BotManager+3402;
extern unsigned short _5NMenu.CurrentMenuChoice;

int ObserverToggleMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 <= 1)
        CBotManager::ChangeBotBoolSetting(&BotManager, &BotManager+3402, (_5NMenu.CurrentMenuChoice == 1 | 0x5afa00) & 0xff, "observer");
    return NMenu::ResetMenu(v0);
}

