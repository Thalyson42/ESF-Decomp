// DropPercentMenu__5NMenuv @0x16ee50 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int DropPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        sub_489f90(&BotManager, 33, (short)sub_48cb20("chat_drop_percent"));
    return sub_48d6f0(v0);
}

