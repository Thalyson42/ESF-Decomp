// AIPercentMenu__5NMenuv @0x16eb40 size=140
extern char _GLOBAL_OFFSET_TABLE_;
extern unsigned short _5NMenu.CurrentMenuChoice;

int AIPercentMenu__5NMenuv(void)
{
    int v0;  // [bp-0x1c]

    if (_5NMenu.CurrentMenuChoice - 1 > 3)
        return sub_48d6f0(v0);
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * _5NMenu.CurrentMenuChoice] - 675696)]));
}

