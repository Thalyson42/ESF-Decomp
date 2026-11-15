// ButtonSound__Fi @0x96de0 size=331
extern char _GLOBAL_OFFSET_TABLE_;

int ButtonSound__Fi(unsigned int a0)
{
    if (a0 > 25)
        return "buttons/button9.wav";
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0] - 1559756)]));
}

