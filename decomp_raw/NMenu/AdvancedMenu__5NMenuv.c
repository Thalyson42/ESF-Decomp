// AdvancedMenu__5NMenuv @0x16e8b0 size=174
extern char _GLOBAL_OFFSET_TABLE_;
extern unsigned short _5NMenu.CurrentMenuChoice;

int AdvancedMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 > 5)
        return NMenu::ResetMenu(v0);
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * _5NMenu.CurrentMenuChoice] - 0xa5200)]));
}

