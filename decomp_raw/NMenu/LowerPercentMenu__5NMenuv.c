// LowerPercentMenu__5NMenuv @0x16eef0 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int LowerPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        sub_489f90(&BotManager, 37, (short)sub_48cb20("chat_lower_percent"));
    return sub_48d6f0(v0);
}

