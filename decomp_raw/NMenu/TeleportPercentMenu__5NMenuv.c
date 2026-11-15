// TeleportPercentMenu__5NMenuv @0x16ec20 size=74
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int TeleportPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        sub_489f90(&BotManager, 39, (short)sub_48cb20("teleport_percent"));
    return sub_48d6f0(v0);
}

