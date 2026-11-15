// Clear__6CSound @0x11ed20 size=81
extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;

unsigned int * Clear__6CSound(unsigned int *a0)
{
    *a0 = g_vecZero;
    a0[1] = g_vecZero+4;
    a0[2] = g_vecZero+8;
    a0[3] = 0;
    a0[4] = 0;
    a0[5] = 0;
    a0[6] = 0xffffffff;
    a0[7] = 0;
    return a0;
}

