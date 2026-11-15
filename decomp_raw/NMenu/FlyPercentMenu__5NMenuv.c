// FlyPercentMenu__5NMenuv @0x16ecc0 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int FlyPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        CBotManager::ChangePersoPercentSetting(&BotManager, 45, (short)NMenu::GetPercentFromMenu("fly_percent"));
    return NMenu::ResetMenu(v0);
}

