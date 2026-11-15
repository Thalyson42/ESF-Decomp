// TelePortPlayerToPlayer__FP7edict_sT0 @0x17c390 size=291
typedef struct st_57c390_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_57c390_0;

typedef struct st_57c390_1 {
    unsigned int field_0;
} st_57c390_1;

extern st_57c390_1 *g_engfuncs.pfnSetOrigin;
extern st_57c390_0 *gpGlobals;

unsigned int TelePortPlayerToPlayer__FP7edict_sT0(float a0)
{
    unsigned int *v18;  // eax
    unsigned int *v19;  // edx
    double v20;  // mm5
    double v21;  // mm5
    float v0;  // [bp-0xa4]
    float v1;  // [bp-0xa0]
    float v2;  // [bp-0x9c]
    float v4;  // [bp-0x84]
    float v5;  // [bp-0x80]
    float v6;  // [bp-0x7c]
    float v7;  // [bp-0x64]
    float v8;  // [bp-0x60]
    float v9;  // [bp-0x5c]
    float v10;  // [bp-0x44]
    float v11;  // [bp-0x40]
    float v12;  // [bp-0x3c]
    float v13;  // [bp-0x24]
    float v14;  // [bp-0x20]
    float v15;  // [bp-0x1c]
    unsigned int v17;  // [bp+0x8]

    UTIL_MakeVectors(*(unsigned int *)&a0 + 244);
    v18 = *(unsigned int *)&a0 + 0x88;
    v13 = *(float *)(*(unsigned int *)&a0 + 0x88);
    v14 = *(float *)&v18[1];
    v15 = *(float *)&v18[2];
    v4 = 0;
    v5 = 0;
    v6 = 20.0f;
    v7 = v13 + v4;
    v8 = v14 + v5;
    v9 = v15 + v6;
    v19 = &gpGlobals->field_28;
    v20 = 100.0 * gpGlobals->field_28;
    v0 = (float)v20;
    v21 = 100.0 * *(float *)&v19[1];
    v1 = (float)v21;
    v2 = (float)(100.0 * *(float *)&v19[2]);
    v10 = (float)(v20 + v7);
    v11 = (float)(v21 + v8);
    v12 = v9 + v2;
    UTIL_TraceHull(&v13, &v10, 0, 1, a0, &v0);
    return g_engfuncs.pfnSetOrigin(v17, &v10);
}

