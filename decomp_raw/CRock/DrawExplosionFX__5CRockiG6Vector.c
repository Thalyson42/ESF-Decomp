// DrawExplosionFX__5CRockiG6Vector @0x129890 size=1024
typedef struct st_529890_0 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[476];
    int field_208;
} st_529890_0;

typedef struct st_529890_1 {
    unsigned int field_0;
} st_529890_1;

extern short g_sRockGibs;
extern st_529890_1 *g_engfuncs.pfnMessageBegin;
extern st_529890_1 *g_engfuncs.pfnMessageEnd;
extern st_529890_1 *g_engfuncs.pfnWriteByte;
extern st_529890_1 *g_engfuncs.pfnWriteShort;
extern st_529890_1 *g_engfuncs.pfnWriteCoord;

double DrawExplosionFX__5CRockiG6Vector(st_529890_0 **a0, int a1, float *a2)
{
    unsigned int *v27;  // esi
    double v28;  // mm7
    double v37;  // mm5
    double v38;  // mm5
    double v39;  // mm5
    double v29;  // mm6
    double v30;  // mm7
    double v31;  // mm7
    unsigned int *v32;  // esi
    double v33;  // mm7
    double v34;  // mm6
    double v35;  // mm7
    double v36;  // mm5
    unsigned int v0;  // [bp-0xdc]
    float v1;  // [bp-0xa4]
    float v2;  // [bp-0xa0]
    float v3;  // [bp-0x9c]
    float v4;  // [bp-0x98]
    unsigned int v5;  // [bp-0x98]
    float v6;  // [bp-0x94]
    unsigned int v7;  // [bp-0x94]
    float v8;  // [bp-0x90]
    unsigned int v9;  // [bp-0x90]
    float v10;  // [bp-0x8c]
    float v11;  // [bp-0x88]
    float v12;  // [bp-0x84]
    float v13;  // [bp-0x80]
    float v14;  // [bp-0x7c]
    float v15;  // [bp-0x78]
    float v16;  // [bp-0x64]
    float v17;  // [bp-0x60]
    float v18;  // [bp-0x5c]
    char v19;  // [bp-0x44]
    float v20;  // [bp-0x34]
    unsigned int v21;  // [bp-0x30]
    unsigned int v22;  // [bp-0x2c]
    unsigned int v23;  // [bp-0x28]
    float v24;  // [bp-0x20]
    float v25;  // [bp-0x1c]
    float v26;  // [bp-0x18]

    v27 = &*a0->field_20;
    v28 = *a0->field_20 * *a0->field_20 + *(float *)&v27[1] * *(float *)&v27[1] + *(float *)&v27[2] * *(float *)&v27[2];
    v29 = sqrt(v28);
    if (isnan(v29))
        sqrt(*(unsigned int *)&v28);
    else
        v28 = v29;
    v4 = (float)v28;
    if (v4 == 0.0f)
    {
        v12 = 0.0f;
        v13 = 0.0f;
        v14 = 1.0;
    }
    else
    {
        v30 = 1.0 / v4;
        v12 = (float)(v30 * *(float *)v27);
        v13 = (float)(v30 * *(float *)&v27[1]);
        v14 = (float)(v30 * *(float *)&v27[2]);
    }
    v31 = (double)a1;
    v16 = (float)(v31 * v12);
    v17 = (float)(v31 * v13);
    v18 = (float)(v31 * v14);
    v32 = &*a0->field_20;
    v33 = *a0->field_20 * *a0->field_20 + *(float *)&v32[1] * *(float *)&v32[1] + *(float *)&v32[2] * *(float *)&v32[2];
    v34 = sqrt(v33);
    if (isnan(v34))
        sqrt(*(unsigned int *)&v33);
    else
        v33 = v34;
    v10 = (float)v33;
    if (v10 == 0.0f)
    {
        v1 = 0.0f;
        v2 = 0.0f;
        v3 = 1.0;
    }
    else
    {
        v35 = 1.0 / v10;
        v1 = (float)(v35 * *(float *)v32);
        v2 = (float)(v35 * *(float *)&v32[1]);
        v3 = (float)(v35 * *(float *)&v32[2]);
    }
    v36 = -20.0 * v1;
    v10 = (float)v36;
    v37 = -20.0 * v2;
    v11 = (float)v37;
    v12 = (float)(-20.0 * v3);
    v4 = (float)(v36 + *a2);
    v6 = (float)(v37 + a2[1]);
    v8 = a2[2] + v12;
    *a2 = v4;
    a2[1] = v6;
    a2[2] = v8;
    v10 = *a2 + v16;
    v11 = a2[1] + v17;
    v12 = a2[2] + v18;
    v38 = 30.0 * v1;
    v13 = (float)v38;
    v39 = 30.0 * v2;
    v14 = (float)v39;
    v15 = (float)(30.0 * v3);
    v4 = (float)(v38 + v10);
    v6 = (float)(v39 + v11);
    v8 = v12 + v15;
    UTIL_TraceLine(a2, &v4, 1, *a0->field_208, &v19);
    v5 = v21;
    v7 = v22;
    v9 = v23;
    if (1.0 <= v20)
        return 1.0;
    g_engfuncs.pfnMessageBegin(2, 23, 0, 0);
    g_engfuncs.pfnWriteByte(108);
    g_engfuncs.pfnWriteCoord(v5);
    g_engfuncs.pfnWriteCoord(v7);
    g_engfuncs.pfnWriteCoord(v9);
    g_engfuncs.pfnWriteCoord(0x42480000);
    g_engfuncs.pfnWriteCoord(0x42480000);
    g_engfuncs.pfnWriteCoord(0x42480000);
    g_engfuncs.pfnWriteCoord((float)(200.0 * v24));
    g_engfuncs.pfnWriteCoord((float)(200.0 * v25));
    g_engfuncs.pfnWriteCoord(200.0f * v26);
    g_engfuncs.pfnWriteByte(30);
    g_engfuncs.pfnWriteShort(g_sRockGibs);
    g_engfuncs.pfnWriteByte(20);
    g_engfuncs.pfnWriteByte(50);
    v0 = 0;
    g_engfuncs.pfnWriteByte(v0);
    g_engfuncs.pfnMessageEnd(v0);
    return 200.0f * v26;
}

