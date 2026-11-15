// DrawThink__11CNodeViewer @0xe6350 size=745
typedef struct st_4e6350_0 {
    float field_0;
} st_4e6350_0;

typedef struct st_4e6350_1 {
    unsigned int field_0;
} st_4e6350_1;

extern st_4e6350_1 *g_engfuncs.pfnMessageBegin;
extern st_4e6350_1 *g_engfuncs.pfnMessageEnd;
extern st_4e6350_1 *g_engfuncs.pfnWriteByte;
extern st_4e6350_1 *g_engfuncs.pfnWriteShort;
extern st_4e6350_1 *g_engfuncs.pfnWriteCoord;
extern st_4e6350_0 *gpGlobals;
extern st_4e6350_0 *WorldGraph+12;
extern short g_sModelIndexLaser;

unsigned int DrawThink__11CNodeViewer(float idx)
{
    unsigned int v7;  // eax
    unsigned int *v0;  // [bp-0x18]
    unsigned int *v1;  // [bp-0x14]
    int v2;  // [bp-0x10]
    int v3;  // [bp-0xc]
    unsigned short v4;  // [bp-0x8]
    unsigned short v5;  // [bp-0x6]

    *(float *)(*(int *)idx + 260) = *(float *)gpGlobals;
    v2 = 0;
    v1 = *(unsigned int *)&idx + 112;
    v0 = *(unsigned int *)&idx + 624;
    while (*(int *)(*(unsigned int *)&idx + 104) != *(int *)(*(unsigned int *)&idx + 108))
    {
        g_engfuncs.pfnMessageBegin(0, 23, 0, 0);
        g_engfuncs.pfnWriteByte(0);
        g_engfuncs.pfnWriteCoord(*(float *)&WorldGraph+12[22 * v1[*(int *)(*(unsigned int *)&idx + 104)]]);
        g_engfuncs.pfnWriteCoord(*(float *)&WorldGraph+12[1 + 22 * v1[*(int *)(*(unsigned int *)&idx + 104)]]);
        g_engfuncs.pfnWriteCoord((float)(8.0 + *(float *)&WorldGraph+12[2 + 22 * v1[*(int *)(*(unsigned int *)&idx + 104)]]));
        g_engfuncs.pfnWriteCoord(*(float *)&WorldGraph+12[22 * v0[*(int *)(*(unsigned int *)&idx + 104)]]);
        g_engfuncs.pfnWriteCoord(*(float *)&WorldGraph+12[1 + 22 * v0[*(int *)(*(unsigned int *)&idx + 104)]]);
        g_engfuncs.pfnWriteCoord((float)(8.0 + *(float *)&WorldGraph+12[2 + 22 * v0[*(int *)(*(unsigned int *)&idx + 104)]]));
        g_engfuncs.pfnWriteShort(g_sModelIndexLaser);
        g_engfuncs.pfnWriteByte(0);
        g_engfuncs.pfnWriteByte(0);
        g_engfuncs.pfnWriteByte(250);
        g_engfuncs.pfnWriteByte(40);
        g_engfuncs.pfnWriteByte(0);
        v5 = __fnstcw();
        v4 = v5 | 0xc00;
        v3 = (int)*(float *)(*(unsigned int *)&idx + 1144);
        g_engfuncs.pfnWriteByte(v3);
        v5 = __fnstcw();
        v4 = v5 | 0xc00;
        v3 = (int)*(float *)(*(unsigned int *)&idx + 1148);
        g_engfuncs.pfnWriteByte(v3);
        v5 = __fnstcw();
        v4 = v5 | 0xc00;
        v3 = (int)*(float *)(*(unsigned int *)&idx + 1152);
        g_engfuncs.pfnWriteByte(v3);
        g_engfuncs.pfnWriteByte(128);
        g_engfuncs.pfnWriteByte(0);
        v7 = g_engfuncs.pfnMessageEnd();
        *(unsigned int *)(*(unsigned int *)&idx + 104) = *(int *)(*(unsigned int *)&idx + 104) + 1;
        v2 += 1;
        if (v2 > 9)
            return v7;
    }
    return UTIL_Remove(idx);
}

