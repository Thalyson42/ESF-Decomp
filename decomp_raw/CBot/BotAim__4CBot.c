// BotAim__4CBot @0x16fe40 size=1011
typedef struct st_56fe40_0 {
    float field_0;
} st_56fe40_0;

typedef struct st_56fe40_1 {
    unsigned int field_0;
} st_56fe40_1;

extern st_56fe40_1 *g_engfuncs.pfnRandomLong;
extern st_56fe40_1 *g_engfuncs.pfnRandomFloat;
extern st_56fe40_0 *gpGlobals;

double BotAim__4CBot(float idx)
{
    unsigned int *v25;  // edx
    unsigned int *v26;  // esi
    float v27;  // 128
    float v28;  // 128
    double v29;  // mm7
    float v0;  // [bp-0x9c]
    float v1;  // [bp-0x98]
    unsigned int v2;  // [bp-0x94]
    float v3;  // [bp-0x94]
    unsigned int v4;  // [bp-0x90]
    float v5;  // [bp-0x90]
    float v6;  // [bp-0x8c]
    float v7;  // [bp-0x88]
    float v8;  // [bp-0x84]
    float v9;  // [bp-0x80]
    unsigned int v10;  // [bp-0x7c]
    unsigned int v11;  // [bp-0x78]
    unsigned int v12;  // [bp-0x64]
    unsigned int v13;  // [bp-0x60]
    unsigned int v14;  // [bp-0x5c]
    float v15;  // [bp-0x58]
    float v16;  // [bp-0x54]
    unsigned int v17;  // [bp-0x50]
    char v18;  // [bp-0x44], Other Possible Types: float, int
    float v19;  // [bp-0x40], Other Possible Types: int
    unsigned int v20;  // [bp-0x3c]
    unsigned int v21;  // [bp-0x24]
    unsigned int v22;  // [bp-0x20]
    unsigned int v23;  // [bp-0x1c]

    if (*(float *)(*(unsigned int *)&idx + 0xc00) > *(float *)gpGlobals)
        return *(float *)(*(unsigned int *)&idx + 0xc00);
    v25 = *(int *)idx + 8;
    *(float *)&v21 = *(float *)(*(int *)idx + 8);
    *(float *)&v22 = *(float *)&v25[1];
    *(float *)&v23 = *(float *)&v25[2];
    *(float *)&v12 = *(float *)(*(unsigned int *)&idx + 3088);
    *(float *)&v13 = *(float *)(*(unsigned int *)&idx + 3092);
    *(float *)&v14 = *(float *)(*(unsigned int *)&idx + 3096);
    WrapAngles(&v18, &v12);
    if (180.0f < v19)
        v19 = (float)(v19 - 360.0);
    if (180.0f < v18)
        v18 = (float)(v18 - 360.0);
    if (*(short *)(*(unsigned int *)&idx + 2980) > 1)
    {
        v26 = *(int *)idx;
        v15 = v18;
        v16 = v19;
        v17 = v20;
        WrapAngles(&v12, &v15);
        v26[29] = v12;
        v26[30] = v13;
        v26[31] = v14;
    }
    else
    {
        g_engfuncs.pfnRandomFloat(*(float *)(*(int *)(*(unsigned int *)&idx + 0xa00) + 8), *(float *)(*(int *)(*(unsigned int *)&idx + 0xa00) + 12));
        *(float *)&v11 = *(float *)(*(int *)(*(unsigned int *)&idx + 0xa00) + 8);
        g_engfuncs.pfnRandomFloat(*(float *)(*(int *)(*(unsigned int *)&idx + 0xa00) + 16), *(float *)(*(int *)(*(unsigned int *)&idx + 0xa00) + 20));
        *(float *)&v10 = *(float *)(*(int *)(*(unsigned int *)&idx + 0xa00) + 16);
        g_engfuncs.pfnRandomFloat(*(float *)(*(int *)(*(unsigned int *)&idx + 0xa00) + 24), *(float *)(*(int *)(*(unsigned int *)&idx + 0xa00) + 28));
        v9 = *(float *)(*(int *)(*(unsigned int *)&idx + 0xa00) + 24);
        g_engfuncs.pfnRandomFloat(*(float *)(*(int *)(*(unsigned int *)&idx + 0xa00) + 32), *(float *)(*(int *)(*(unsigned int *)&idx + 0xa00) + 36));
        v8 = *(float *)(*(int *)(*(unsigned int *)&idx + 0xa00) + 32);
        v4 = v11;
        v2 = v10;
        v1 = fabsf(v18 + *(float *)(*(int *)idx + 116));
        v0 = fabsf(v19 - *(float *)(*(int *)idx + 120));
        v7 = (v9 == 0.0f ? 0 : !g_engfuncs.pfnRandomLong(0, 1) ? (float)-(v9 / 100.0 * v1) : (float)(v9 / 100.0 * v1));
        v6 = (v8 == 0.0f ? 0 : !g_engfuncs.pfnRandomLong(0, 1) ? (float)-(v8 / 100.0 * v0) : (float)(v8 / 100.0 * v0));
        v5 = (float)(1.0 <= v1 ? v1 / 70.0 * *(float *)&v4 : *(float *)&v4 * 0.009999999776482582);
        v3 = (float)(1.0 <= v0 ? v0 / 60.0 * *(float *)&v2 : *(float *)&v2 * 0.014999999664723873);
        v27 = v7 + v18;
        UTIL_WrapAngle(v27);
        *(float *)&v18 = v27;
        v28 = v6 + v19;
        UTIL_WrapAngle(v28);
        *(float *)&v19 = v28;
        *(float *)(*(unsigned int *)&idx + 3124) = *(float *)(*(unsigned int *)&idx + 3116);
        *(float *)(*(unsigned int *)&idx + 3120) = *(float *)(*(unsigned int *)&idx + 3112);
        CBot::BotChangePitch(idx, v5, v18);
        *(int *)(*(unsigned int *)&idx + 3116) = v18;
        CBot::BotChangeYaw(idx, v3, v19);
        *(int *)(*(unsigned int *)&idx + 3112) = v19;
    }
    *(float *)(*(int *)idx + 80) = (float)(*(float *)(*(int *)idx + 116) / 3.0);
    *(float *)(*(int *)idx + 84) = *(float *)(*(int *)idx + 120);
    *(unsigned int *)(*(int *)idx + 88) = 0;
    v29 = -*(float *)(*(int *)idx + 116);
    *(float *)(*(int *)idx + 116) = (float)v29;
    return v29;
}

