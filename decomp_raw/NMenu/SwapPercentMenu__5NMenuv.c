// SwapPercentMenu__5NMenuv @0x16eea0 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int SwapPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        CBotManager::ChangePersoPercentSetting(&BotManager, 35, (short)NMenu::GetPercentFromMenu("chat_swap_percent"));
    return NMenu::ResetMenu(v0);
}

