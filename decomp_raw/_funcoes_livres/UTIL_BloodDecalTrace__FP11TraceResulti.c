// UTIL_BloodDecalTrace__FP11TraceResulti @0x133890 size=131
typedef struct st_533890_0 {
    unsigned int field_0;
} st_533890_0;

extern st_533890_0 *g_engfuncs.pfnRandomLong;

unsigned int UTIL_BloodDecalTrace__FP11TraceResulti(int a0, int a1)
{
    unsigned int v0;  // eax

    v0 = UTIL_ShouldShowBlood(a1);
    if (!v0)
        return v0;
    return (a1 == 247 ? UTIL_DecalTrace(a0, g_engfuncs.pfnRandomLong(0, 5) + 13) : UTIL_DecalTrace(a0, g_engfuncs.pfnRandomLong(0, 5) + 19));
}

