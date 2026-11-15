// USENTENCEG_InitLRU__FPUci @0x11cc50 size=198
typedef struct st_51cc50_0 {
    unsigned int field_0;
} st_51cc50_0;

extern unsigned int fSentencesInit;
extern st_51cc50_0 *g_engfuncs.pfnRandomLong;

unsigned int * USENTENCEG_InitLRU__FPUci(unsigned int a0, char *a1)
{
    char *v2;  // edi
    char *v3;  // ecx
    char v4;  // 4127
    char *v0;  // [bp-0xc]
    char *iter;  // [bp-0x8], Other Possible Types: unsigned int

    if (!fSentencesInit)
        return &fSentencesInit;
    if (a1 > 0x20)
        a1 = 0x20;
    iter = NULL;
    if (iter < a1)
    {
        do
        {
            iter[a0] = (char)iter;
            iter += 1;
        } while (iter < a1);
    }
    iter = 0;
    if ((int)iter >= a1 * 4)
        return a1 * 4;
    v0 = a1 - 1;
    do
    {
        v2 = g_engfuncs.pfnRandomLong(0, v0);
        v3 = g_engfuncs.pfnRandomLong(0, v0);
        v4 = v2[a0];
        v2[a0] = v3[a0];
        v3[a0] = v4;
        iter += 1;
    } while ((int)iter < a1 * 4);
    return a1 * 4;
}

