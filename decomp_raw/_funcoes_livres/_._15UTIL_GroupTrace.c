// _._15UTIL_GroupTrace @0x131620 size=95
typedef struct st_531620_0 {
    unsigned int field_0;
} st_531620_0;

extern unsigned int g_groupmask;
extern unsigned int g_groupop;
extern st_531620_0 *g_engfuncs.pfnCreateInstancedBaseline;

int _._15UTIL_GroupTrace(unsigned int *a0, unsigned int a1)
{
    g_groupmask = *a0;
    g_groupop = a0[1];
    g_engfuncs.pfnCreateInstancedBaseline(g_groupmask, g_groupop);
    if (!((char)a1 & 1))
        return a1;
    return __builtin_delete(a0);
}

