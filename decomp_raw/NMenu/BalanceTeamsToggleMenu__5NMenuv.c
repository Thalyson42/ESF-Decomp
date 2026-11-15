// BalanceTeamsToggleMenu__5NMenuv @0x16f2c0 size=90
extern int BotManager;
extern int g_6253cc;
extern unsigned short _5NMenu.CurrentMenuChoice;

int BalanceTeamsToggleMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 <= 1)
        sub_48c390(&BotManager, &g_6253cc, (_5NMenu.CurrentMenuChoice == 1 | 0x5afa00) & 0xff, "bot_balanceteams");
    return sub_48d6f0(v0);
}

