// SetNewMenu__5NMenuQ25NMenu9EMenuType @0x16e3d0 size=74
extern unsigned int _5NMenu.pCurrentMenuFunction;
extern unsigned short _5NMenu.MenuInfos[4];
extern unsigned int g_626604[4];
extern unsigned int g_626608[4];
extern unsigned int _5NMenu.CurrentMenuText;
extern unsigned int _5NMenu.CurrentKeySlots;

int SetNewMenu__5NMenuQ25NMenu9EMenuType(unsigned int a0)
{
    unsigned int idx;  // eax

    idx = a0 * 12;
    _5NMenu.pCurrentMenuFunction = *(int *)(idx + (char *)&g_626608[0]);
    _5NMenu.CurrentMenuText = *(int *)(idx + (char *)&g_626604[0]);
    _5NMenu.CurrentKeySlots = *(short *)(idx + (char *)&_5NMenu.MenuInfos[0]);
    return _5NMenu.CurrentKeySlots;
}

