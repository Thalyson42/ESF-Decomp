// FlyPercentMenu__5NMenuv @0x16ecc0 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int FlyPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        sub_489f90(&BotManager, 45, (short)sub_48cb20("fly_percent"));
    return sub_48d6f0(v0);
}

