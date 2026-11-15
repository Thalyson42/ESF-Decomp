// TeleportPercentMenu__5NMenuv @0x16ec20 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int TeleportPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        CBotManager::ChangePersoPercentSetting(&BotManager, 39, (short)NMenu::GetPercentFromMenu("teleport_percent"));
    return NMenu::ResetMenu(v0);
}

