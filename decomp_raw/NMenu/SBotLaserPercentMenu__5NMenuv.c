// SBotLaserPercentMenu__5NMenuv @0x16ef40 size=68
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int SBotLaserPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice <= 8)
        sub_48df00(&BotManager, (short)sub_48cb20());
    return sub_48d6f0(v0);
}

