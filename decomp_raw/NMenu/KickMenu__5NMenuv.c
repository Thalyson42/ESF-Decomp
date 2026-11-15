// KickMenu__5NMenuv @0x16ea40 size=103
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int KickMenu__5NMenuv(void)
{
    unsigned int v0;  // [bp-0x28]

    if (_5NMenu.CurrentMenuChoice == 2)
    {
        v0 = 1;
    }
    else if (_5NMenu.CurrentMenuChoice <= 2)
    {
        if (_5NMenu.CurrentMenuChoice == 1)
            v0 = 0xffffffff;
        else
            return sub_48d6f0();
    }
    else
    {
        if (_5NMenu.CurrentMenuChoice == 3)
            v0 = 2;
        else
            return sub_48d6f0();
    }
    sub_488aa0(&BotManager);
    return sub_48d6f0();
}

