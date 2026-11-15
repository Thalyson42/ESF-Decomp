// WhinePercentMenu__5NMenuv @0x16edb0 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int WhinePercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        sub_489f90(&BotManager, 29, (short)sub_48cb20("whine_percent"));
    return sub_48d6f0(v0);
}

