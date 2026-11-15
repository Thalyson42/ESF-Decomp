// TauntPercentMenu__5NMenuv @0x16ed60 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int TauntPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        sub_489f90(&BotManager, 27, (short)sub_48cb20("taunt_percent"));
    return sub_48d6f0(v0);
}

