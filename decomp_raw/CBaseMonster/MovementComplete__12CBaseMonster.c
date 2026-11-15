// MovementComplete__12CBaseMonster @0xd7a00 size=157
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int MovementComplete__12CBaseMonster(unsigned int *a0)
{
    unsigned int v0;  // eax

    v0 = a0[98];
    if (v0 > 4)
    {
        a0[133] = 0;
        return v0;
    }
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v0] - 1294508)]));
}

