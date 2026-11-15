// SBotLaserPercentMenu__5NMenuv @0x16ef40 size=68
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int SBotLaserPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        CBotManager::ChangeSBotLaserPercent(&BotManager, (short)NMenu::GetPercentFromMenu());
    return NMenu::ResetMenu(v0);
}

