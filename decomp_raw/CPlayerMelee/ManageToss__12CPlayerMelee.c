// ManageToss__12CPlayerMelee @0x101210 size=160
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int ManageToss__12CPlayerMelee(unsigned int *a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    if (!a0[10])
        return v1;
    v0 = a0[25] - 1;
    if (v0 > 5)
        return v0;
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v0] - 1124508)]));
}

