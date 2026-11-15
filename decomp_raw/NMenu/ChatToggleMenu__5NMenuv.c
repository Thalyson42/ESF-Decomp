// ChatToggleMenu__5NMenuv @0x16f080 size=90
extern int BotManager;
extern int BotManager+3405;
extern unsigned short _5NMenu.CurrentMenuChoice;

int ChatToggleMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 <= 1)
        CBotManager::ChangeBotBoolSetting(&BotManager, &BotManager+3405, (_5NMenu.CurrentMenuChoice == 1 | 0x5afa00) & 0xff, "shouldbotschat");
    return NMenu::ResetMenu(v0);
}

