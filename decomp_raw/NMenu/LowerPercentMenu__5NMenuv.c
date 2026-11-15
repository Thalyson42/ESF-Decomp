// LowerPercentMenu__5NMenuv @0x16eef0 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int LowerPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        CBotManager::ChangePersoPercentSetting(&BotManager, 37, (short)NMenu::GetPercentFromMenu("chat_lower_percent"));
    return NMenu::ResetMenu(v0);
}

