// ObserverToggleMenu__5NMenuv @0x16f1a0 size=90
extern int BotManager;
extern int g_6253ca;
extern unsigned short _5NMenu.CurrentMenuChoice;

int ObserverToggleMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 <= 1)
        sub_48c390(&BotManager, &g_6253ca, (_5NMenu.CurrentMenuChoice == 1 | 0x5afa00) & 0xff, "observer");
    return sub_48d6f0(v0);
}

