// BotSkillMenu__5NMenuv @0x16ef90 size=101
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int BotSkillMenu__5NMenuv(void)
{
    short v1;  // ax

    if ((unsigned short)(_5NMenu.CurrentMenuChoice - 1) <= 4)
    {
        v1 = _5NMenu.CurrentMenuChoice;
    }
    else
    {
        if (_5NMenu.CurrentMenuChoice != 6)
            return NMenu::ResetMenu();
        v1 = 2;
    }
    CBotManager::ChangeBotSkill(&BotManager, v1);
    return NMenu::ResetMenu(&BotManager, v1);
}

