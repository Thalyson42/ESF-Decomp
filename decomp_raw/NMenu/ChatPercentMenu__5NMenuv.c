// ChatPercentMenu__5NMenuv @0x16ed10 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int ChatPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        CBotManager::ChangePersoPercentSetting(&BotManager, 25, (short)NMenu::GetPercentFromMenu("chat_percent"));
    return NMenu::ResetMenu(v0);
}

