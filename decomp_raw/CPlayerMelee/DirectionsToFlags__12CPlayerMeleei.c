// DirectionsToFlags__12CPlayerMeleei @0x1069a0 size=191
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int DirectionsToFlags__12CPlayerMeleei(unsigned int a0, int a1)
{
    unsigned int v1;  // ebx
    unsigned int v2;  // eax
    unsigned int v0;  // [bp-0x8]

    v0 = v1;
    if (a1 == 16)
        return 1;
    if (a1 == 0x11)
        return 0x800;
    v2 = 0x800;
    if (a1 <= 7)
        v2 = 1;
    if ((unsigned int)a1 > 15)
        return v2;
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a1] - 1102060)]));
}

