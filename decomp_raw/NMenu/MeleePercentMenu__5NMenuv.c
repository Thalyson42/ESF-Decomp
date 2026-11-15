// MeleePercentMenu__5NMenuv @0x16ebd0 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int MeleePercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        CBotManager::ChangePersoPercentSetting(&BotManager, 1, (short)NMenu::GetPercentFromMenu("melee_percent"));
    return NMenu::ResetMenu(v0);
}

