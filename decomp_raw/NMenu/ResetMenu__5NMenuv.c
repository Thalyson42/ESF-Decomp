// ResetMenu__5NMenuv @0x16e370 size=90
extern unsigned int _5NMenu.pCurrentMenuFunction;
extern unsigned short _5NMenu.SBotType;
extern unsigned short _5NMenu.BotTeam;
extern unsigned short _5NMenu.CurrentMenuChoice;
extern unsigned int _5NMenu.CurrentMenuText;
extern unsigned int _5NMenu.CurrentKeySlots;

unsigned short * ResetMenu__5NMenuv(void)
{
    _5NMenu.pCurrentMenuFunction = 0;
    _5NMenu.CurrentMenuChoice = 0;
    _5NMenu.CurrentMenuText = 0;
    _5NMenu.CurrentKeySlots = 0;
    _5NMenu.SBotType = 0;
    _5NMenu.BotTeam = 0;
    return &_5NMenu.BotTeam;
}

