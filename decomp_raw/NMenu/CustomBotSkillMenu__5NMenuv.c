// CustomBotSkillMenu__5NMenuv @0x16e580 size=179
typedef struct st_56e580_0 {
    unsigned int field_0;
} st_56e580_0;

extern unsigned int g_teamplay;
extern unsigned short _5NMenu.BotSkill;
extern st_56e580_0 *g_616928;
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
            return sub_48d6f0();
        _5NMenu.BotSkill = g_616928(1, 5);
    }
    return (!g_teamplay ? sub_48c740(3) : sub_48c740(2));
}

