// CustomBotTeamMenu__5NMenuv @0x16e640 size=120
typedef struct st_56e640_0 {
    unsigned int field_0;
} st_56e640_0;

extern unsigned short _5NMenu.BotTeam;
extern st_56e640_0 *g_engfuncs.pfnRandomLong;
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
            return NMenu::ResetMenu();
        _5NMenu.BotTeam = g_engfuncs.pfnRandomLong(1, 2);
    }
    return NMenu::SetNewMenu(3);
}

