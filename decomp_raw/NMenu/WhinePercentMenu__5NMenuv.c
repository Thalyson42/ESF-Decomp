// WhinePercentMenu__5NMenuv @0x16edb0 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int WhinePercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        CBotManager::ChangePersoPercentSetting(&BotManager, 29, (short)NMenu::GetPercentFromMenu("whine_percent"));
    return NMenu::ResetMenu(v0);
}

