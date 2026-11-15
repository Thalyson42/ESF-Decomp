// CustomBotClassMenu__5NMenuv @0x16e6c0 size=157
extern short _5NMenu.SBotType;
extern short _5NMenu.BotTeam;
extern short _5NMenu.BotSkill;
extern int BotManager;
extern short _5NMenu.CurrentMenuChoice;

int CustomBotClassMenu__5NMenuv(void)
{
    if (_5NMenu.SBotType > 0)
    {
        sub_48e120(&BotManager, _5NMenu.CurrentMenuChoice, 0, -0x1, _5NMenu.SBotType);
        _5NMenu.SBotType = 0;
    }
    else
    {
        sub_4892c0(&BotManager, _5NMenu.BotTeam, _5NMenu.CurrentMenuChoice, 0, _5NMenu.BotSkill, -0x1);
        _5NMenu.BotTeam = 0;
        _5NMenu.BotSkill = 0;
    }
    return sub_48d6f0();
}

