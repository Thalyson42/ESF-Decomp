// CheckNODFile__6CGraphPc @0xe4340 size=294
typedef struct st_4e4340_0 {
    unsigned int field_0;
} st_4e4340_0;

extern st_4e4340_0 *g_engfuncs.pfnAlertMessage;
extern st_4e4340_0 *g_engfuncs.pfnCompareFileTime;

unsigned int CheckNODFile__6CGraphPc(unsigned int a0, int a1)
{
    char *v0;  // [bp-0x2010]
    char *v1;  // [bp-0x200c]
    char v2;  // [bp-0x2008], Other Possible Types: int
    char v3[4096];  // [bp-0x2004]
    char v4[4096];  // [bp-0x1004]

    strcpy(v4, "maps/");
    v1 = &v4[0];
    strcat@GLIBC_2.0(v4, a1);
    strcat@GLIBC_2.0(v1, ".bsp");
    strcpy(v3, "maps/graphs/");
    v0 = &v3[0];
    strcat@GLIBC_2.0(v3, a1);
    strcat@GLIBC_2.0(v0, ".nod");
    if (g_engfuncs.pfnCompareFileTime(v1, v0, &v2))
    {
        if (v2 > 0)
            g_engfuncs.pfnAlertMessage(2, ".NOD File will be updated\n\n");
        else
            return 1;
    }
    return 0;
}

