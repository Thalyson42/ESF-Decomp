// TagPercentMenu__5NMenuv @0x16ee00 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int TagPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        CBotManager::ChangePersoPercentSetting(&BotManager, 31, (short)NMenu::GetPercentFromMenu("chat_tag_percent"));
    return NMenu::ResetMenu(v0);
}

