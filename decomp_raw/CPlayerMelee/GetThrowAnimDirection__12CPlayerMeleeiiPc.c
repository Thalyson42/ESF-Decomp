// GetThrowAnimDirection__12CPlayerMeleeiiPc @0x100bb0 size=274
extern char _GLOBAL_OFFSET_TABLE_;

int GetThrowAnimDirection__12CPlayerMeleeiiPc(unsigned int a0, unsigned int a1, unsigned int a2, char *a3)
{
    unsigned int v0;  // eax

    *(char *)&v0 = 0;
    *a3 = 0;
    if (a2 > 5)
        return v0;
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a2] - 1126124)]));
}

