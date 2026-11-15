// AllocNodes__6CGraph @0xdf1f0 size=109
typedef struct st_4df1f0_0 {
    unsigned int field_0;
} st_4df1f0_0;

extern st_4df1f0_0 *g_6168b4;
extern unsigned int g_61716c;
extern unsigned int g_617178;

unsigned int AllocNodes__6CGraph(void)
{
    g_61716c = sub_48ccc0(88, 0x400);
    if (!g_61716c)
    {
        g_6168b4(2, "**ERROR**\nCouldn't malloc %d nodes!\n", g_617178);
        return 0;
    }
    return 1;
}

