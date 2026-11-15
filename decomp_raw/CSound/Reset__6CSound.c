// Reset__6CSound @0x11ed80 size=67
extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;

int Reset__6CSound(unsigned int *a0)
{
    *a0 = g_vecZero;
    a0[1] = g_616790;
    a0[2] = g_616794;
    a0[3] = 0;
    a0[4] = 0;
    a0[6] = 0xffffffff;
    return g_616794;
}

