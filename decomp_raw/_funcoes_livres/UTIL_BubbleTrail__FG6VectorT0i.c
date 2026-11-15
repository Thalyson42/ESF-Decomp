// UTIL_BubbleTrail__FG6VectorT0i @0x1345f0 size=465
typedef struct st_5345f0_0 {
    unsigned int field_0;
} st_5345f0_0;

extern st_5345f0_0 *g_engfuncs.pfnMessageBegin;
extern st_5345f0_0 *g_engfuncs.pfnMessageEnd;
extern st_5345f0_0 *g_engfuncs.pfnWriteByte;
extern st_5345f0_0 *g_engfuncs.pfnWriteShort;
extern st_5345f0_0 *g_engfuncs.pfnWriteCoord;
extern short g_sModelIndexBubbles;

double UTIL_BubbleTrail__FG6VectorT0i(float *a0, float *a1, int a2)
{
    float v0;  // [bp-0x3c]
    double v1;  // [bp-0x10]
    float v2;  // [bp-0xc]
    double v3;  // [bp-0x8]

    v2 = 256.0f;
    UTIL_WaterLevel(a0, a0[2], (float)(256.0 + a0[2]));
    v3 = a0[2] - a0[2];
    v1 = 8.0f;
    if (v3 < v1)
    {
        UTIL_WaterLevel(a1, a1[2], v2 + a1[2]);
        v3 = a1[2] - a1[2];
        if (v3 < v1)
            return v3;
        v3 = v3 + a1[2] - a0[2];
    }
    if (a2 > 0xff)
        a2 = 0xff;
    g_engfuncs.pfnMessageBegin(0, 23, 0, 0);
    g_engfuncs.pfnWriteByte(114);
    g_engfuncs.pfnWriteCoord(*a0);
    g_engfuncs.pfnWriteCoord(a0[1]);
    g_engfuncs.pfnWriteCoord(a0[2]);
    g_engfuncs.pfnWriteCoord(*a1);
    g_engfuncs.pfnWriteCoord(a1[1]);
    g_engfuncs.pfnWriteCoord(a1[2]);
    g_engfuncs.pfnWriteCoord(v3);
    g_engfuncs.pfnWriteShort(g_sModelIndexBubbles);
    g_engfuncs.pfnWriteByte(a2);
    v0 = 8.0f;
    g_engfuncs.pfnWriteCoord(v0);
    g_engfuncs.pfnMessageEnd(v0);
    return 8.0;
}

