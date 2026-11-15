// CustomBotTeamMenu__5NMenuv @0x16e640 size=120
typedef struct st_56e640_0 {
    unsigned int field_0;
} st_56e640_0;

extern unsigned short _5NMenu.BotTeam;
extern st_56e640_0 *g_616928;
extern unsigned short _5NMenu.CurrentMenuChoice;

int CustomBotTeamMenu__5NMenuv(void)
{
    if (_5NMenu.CurrentMenuChoice - 1 <= 1)
    {
        _5NMenu.BotTeam = _5NMenu.CurrentMenuChoice;
    }
    else
    {
        if (_5NMenu.CurrentMenuChoice != 3)
            return sub_48d6f0();
        _5NMenu.BotTeam = g_616928(1, 2);
    }
    return sub_48c740(3);
}

