// AggressionLevelMenu__5NMenuv @0x16f000 size=115
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int AggressionLevelMenu__5NMenuv(void)
{
    int v1;  // eax

    if (_5NMenu.CurrentMenuChoice == 2)
    {
        v1 = 1;
    }
    else if (_5NMenu.CurrentMenuChoice <= 2)
    {
        if (_5NMenu.CurrentMenuChoice == 1)
            v1 = 2;
        else
            return sub_48d6f0();
    }
    else
    {
        if (_5NMenu.CurrentMenuChoice == 3)
            v1 = 0;
        else
            return sub_48d6f0();
    }
    sub_48be30(&BotManager, v1);
    return sub_48d6f0(&BotManager, v1);
}

