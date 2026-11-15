// CustomBotSkillMenu__5NMenuv @0x16e580 size=179
typedef struct st_56e580_0 {
    unsigned int field_0;
} st_56e580_0;

extern unsigned int g_teamplay;
extern unsigned short _5NMenu.BotSkill;
extern st_56e580_0 *g_engfuncs.pfnRandomLong;
extern unsigned short _5NMenu.CurrentMenuChoice;

unsigned int CustomBotSkillMenu__5NMenuv(void)
{
    if (_5NMenu.CurrentMenuChoice - 1 <= 4)
    {
        _5NMenu.BotSkill = _5NMenu.CurrentMenuChoice;
    }
    else if (_5NMenu.CurrentMenuChoice == 6)
    {
        _5NMenu.BotSkill = 2;
    }
    else
    {
        if (_5NMenu.CurrentMenuChoice != 7)
            return NMenu::ResetMenu();
        _5NMenu.BotSkill = g_engfuncs.pfnRandomLong(1, 5);
    }
    return (!g_teamplay ? NMenu::SetNewMenu(3) : NMenu::SetNewMenu(2));
}

