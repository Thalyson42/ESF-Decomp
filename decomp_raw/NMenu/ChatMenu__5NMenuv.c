// ChatMenu__5NMenuv @0x16e960 size=220
extern char _GLOBAL_OFFSET_TABLE_;
extern unsigned short _5NMenu.CurrentMenuChoice;

int ChatMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 > 7)
        return NMenu::ResetMenu(v0);
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * _5NMenu.CurrentMenuChoice] - 676160)]));
}

