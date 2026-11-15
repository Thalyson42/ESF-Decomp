// __15UTIL_GroupTraceii @0x1315c0 size=88
typedef struct st_5315c0_0 {
    unsigned int field_0;
} st_5315c0_0;

extern unsigned int g_groupmask;
extern unsigned int g_groupop;
extern st_5315c0_0 *g_engfuncs.pfnCreateInstancedBaseline;

unsigned int * __15UTIL_GroupTraceii(unsigned int *a0, unsigned int a1, unsigned int a2)
{
    *a0 = g_groupmask;
    a0[1] = g_groupop;
    g_groupmask = a1;
    g_groupop = a2;
    g_engfuncs.pfnCreateInstancedBaseline(g_groupmask, a2);
    return a0;
}

