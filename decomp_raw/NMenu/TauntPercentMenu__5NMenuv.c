// TauntPercentMenu__5NMenuv @0x16ed60 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int TauntPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        CBotManager::ChangePersoPercentSetting(&BotManager, 27, (short)NMenu::GetPercentFromMenu("taunt_percent"));
    return NMenu::ResetMenu(v0);
}

