// AllocNodes__6CGraph @0xdf1f0 size=109
typedef struct st_4df1f0_0 {
    unsigned int field_0;
} st_4df1f0_0;

extern st_4df1f0_0 *g_engfuncs.pfnAlertMessage;
extern unsigned int WorldGraph+12;
extern unsigned int WorldGraph+24;

unsigned int AllocNodes__6CGraph(void)
{
    WorldGraph+12 = calloc@GLIBC_2.0(88, 0x400);
    if (!WorldGraph+12)
    {
        g_engfuncs.pfnAlertMessage(2, "**ERROR**\nCouldn't malloc %d nodes!\n", WorldGraph+24);
        return 0;
    }
    return 1;
}

