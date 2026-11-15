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
            return sub_48d6f0();
        v1 = 2;
    }
    sub_48d3f0(&BotManager, v1);
    return sub_48d6f0(&BotManager, v1);
}

