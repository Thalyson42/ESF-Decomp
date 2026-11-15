// UTIL_Bubbles__FG6VectorT0i @0x134450 size=408
typedef struct st_534450_0 {
    unsigned int field_0;
} st_534450_0;

extern st_534450_0 *g_engfuncs.pfnMessageBegin;
extern st_534450_0 *g_engfuncs.pfnMessageEnd;
extern st_534450_0 *g_engfuncs.pfnWriteByte;
extern st_534450_0 *g_engfuncs.pfnWriteShort;
extern st_534450_0 *g_engfuncs.pfnWriteCoord;
extern short g_sModelIndexBubbles;

int UTIL_Bubbles__FG6VectorT0i(double a0, float *a1, float *a2, unsigned int a3)
{
    double v7;  // mm7
    float v0;  // [bp-0x48]
    float v1;  // [bp-0x44]
    float v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]

    v1 = *a1 + *a2;
    v2 = a1[1] + a2[1];
    v3 = a1[2] + a2[2];
    v4 = (float)(0.5 * v1);
    v7 = 0.5 * v3;
    v5 = (float)(0.5 * v2);
    v6 = (float)v7;
    UTIL_WaterLevel(&v4, (float)v7, (float)(v7 + 1024.0));
    v0 = (float)(v7 - a1[2]);
    g_engfuncs.pfnMessageBegin(5, 23, &v4, 0);
    g_engfuncs.pfnWriteByte(113);
    g_engfuncs.pfnWriteCoord(*a1);
    g_engfuncs.pfnWriteCoord(a1[1]);
    g_engfuncs.pfnWriteCoord(a1[2]);
    g_engfuncs.pfnWriteCoord(*a2);
    g_engfuncs.pfnWriteCoord(a2[1]);
    g_engfuncs.pfnWriteCoord(a2[2]);
    g_engfuncs.pfnWriteCoord(v0);
    g_engfuncs.pfnWriteShort(g_sModelIndexBubbles);
    g_engfuncs.pfnWriteByte(a3);
    g_engfuncs.pfnWriteCoord(8.0f);
    return g_engfuncs.pfnMessageEnd(8.0f);
}

