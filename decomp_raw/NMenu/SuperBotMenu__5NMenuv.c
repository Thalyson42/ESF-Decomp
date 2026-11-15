// SuperBotMenu__5NMenuv @0x16e760 size=158
typedef struct st_56e760_0 {
    unsigned int field_0;
} st_56e760_0;

extern unsigned short _5NMenu.SBotType;
extern st_56e760_0 *g_engfuncs.pfnRandomLong;
extern short _5NMenu.CurrentMenuChoice;

int SuperBotMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]

    if (_5NMenu.CurrentMenuChoice >= 1)
    {
        if (_5NMenu.CurrentMenuChoice <= 4)
        {
            if (_5NMenu.CurrentMenuChoice == 4)
                _5NMenu.SBotType = g_engfuncs.pfnRandomLong(1, 3);
            else
                _5NMenu.SBotType = _5NMenu.CurrentMenuChoice;
            return NMenu::SetNewMenu(3);
        }
        else if (_5NMenu.CurrentMenuChoice == 5)
        {
            return NMenu::SetNewMenu(22);
        }
    }
    return NMenu::ResetMenu(v0, v1);
}

