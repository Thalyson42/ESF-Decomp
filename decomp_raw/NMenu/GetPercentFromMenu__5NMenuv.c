// GetPercentFromMenu__5NMenuv @0x16f320 size=217
extern char _GLOBAL_OFFSET_TABLE_;
extern unsigned short _5NMenu.CurrentMenuChoice;

unsigned int GetPercentFromMenu__5NMenuv(void)
{
    if (_5NMenu.CurrentMenuChoice - 1 > 7)
        return 0;
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * _5NMenu.CurrentMenuChoice] - 673664)]));
}

