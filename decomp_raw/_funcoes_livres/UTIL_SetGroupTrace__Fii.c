// UTIL_SetGroupTrace__Fii @0x131520 size=72
typedef struct st_531520_0 {
    unsigned int field_0;
} st_531520_0;

extern unsigned int g_groupmask;
extern unsigned int g_groupop;
extern st_531520_0 *g_engfuncs.pfnCreateInstancedBaseline;

int UTIL_SetGroupTrace__Fii(unsigned int a0, unsigned int a1)
{
    g_groupmask = a0;
    g_groupop = a1;
    return g_engfuncs.pfnCreateInstancedBaseline(g_groupmask, a1);
}

