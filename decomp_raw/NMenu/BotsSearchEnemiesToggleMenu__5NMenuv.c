// BotsSearchEnemiesToggleMenu__5NMenuv @0x16f140 size=90
extern int BotManager;
extern int g_6253c6;
extern unsigned short _5NMenu.CurrentMenuChoice;

int BotsSearchEnemiesToggleMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 <= 1)
        sub_48c390(&BotManager, &g_6253c6, (_5NMenu.CurrentMenuChoice == 1 | 0x5afa00) & 0xff, "botssearchenemies");
    return sub_48d6f0(v0);
}

