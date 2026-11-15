// SwoopPercentMenu__5NMenuv @0x16ec70 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int SwoopPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        CBotManager::ChangePersoPercentSetting(&BotManager, 41, (short)NMenu::GetPercentFromMenu("swoop_percent"));
    return NMenu::ResetMenu(v0);
}

