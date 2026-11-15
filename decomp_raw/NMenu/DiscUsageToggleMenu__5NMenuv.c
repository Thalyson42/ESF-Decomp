// DiscUsageToggleMenu__5NMenuv @0x16f260 size=90
extern int BotManager;
extern int g_6253c9;
extern unsigned short _5NMenu.CurrentMenuChoice;

int DiscUsageToggleMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 <= 1)
        sub_48c390(&BotManager, &g_6253c9, (_5NMenu.CurrentMenuChoice == 1 | 0x5afa00) & 0xff, "botsusediscs");
    return sub_48d6f0(v0);
}

