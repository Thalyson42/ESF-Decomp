// DrawExplosionFX__16CExplodingAttackiG6Vector @0xbaaa0 size=1487
typedef struct st_4baaa0_0 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[476];
    int field_208;
} st_4baaa0_0;

typedef struct st_4baaa0_1 {
    struct st_4baaa0_0 *field_0;
    char padding_4[720];
    unsigned int field_2d4;
} st_4baaa0_1;

typedef struct st_4baaa0_2 {
    unsigned int field_0;
} st_4baaa0_2;

extern unsigned int gmsgExplosion;
extern unsigned int gmsgAddEffect;
extern short g_sRockGibs;
extern st_4baaa0_2 *g_engfuncs.pfnMessageBegin;
extern st_4baaa0_2 *g_engfuncs.pfnMessageEnd;
extern st_4baaa0_2 *g_engfuncs.pfnWriteByte;
extern st_4baaa0_2 *g_engfuncs.pfnWriteShort;
extern st_4baaa0_2 *g_engfuncs.pfnWriteLong;
extern st_4baaa0_2 *g_engfuncs.pfnWriteCoord;
extern st_4baaa0_2 *g_engfuncs.pfnIndexOfEdict;
extern st_4baaa0_2 *g_engfuncs.pfnRandomFloat;

unsigned int DrawExplosionFX__16CExplodingAttackiG6Vector(st_4baaa0_1 *a0, int a1, float *a2)
{
    unsigned int *v27;  // esi
    double v28;  // mm7
    double v37;  // mm5
    double v38;  // mm5
    double v39;  // mm5
    double v40;  // mm5
    double v41;  // mm5
    unsigned int v42;  // eax
    double v43;  // mm7
    double v29;  // mm6
    double v30;  // mm7
    double v31;  // mm7
    unsigned int *v32;  // esi
    double v33;  // mm7
    double v34;  // mm6
    double v35;  // mm7
    double v36;  // mm5
    int v0;  // [bp-0xdc], Other Possible Types: unsigned int
    float v1;  // [bp-0xa4]
    float v2;  // [bp-0xa0]
    float v3;  // [bp-0x9c]
    float v4;  // [bp-0x98]
    float v5;  // [bp-0x94]
    float v6;  // [bp-0x90]
    float v7;  // [bp-0x8c]
    float v8;  // [bp-0x88]
    float v9;  // [bp-0x84]
    float v10;  // [bp-0x80]
    float v11;  // [bp-0x7c]
    float v12;  // [bp-0x78]
    float v13;  // [bp-0x74]
    float v14;  // [bp-0x70]
    float v15;  // [bp-0x6c]
    float v16;  // [bp-0x64]
    float v17;  // [bp-0x60]
    float v18;  // [bp-0x5c]
    char v19;  // [bp-0x44]
    float v20;  // [bp-0x34]
    float v21;  // [bp-0x30]
    float v22;  // [bp-0x2c]
    float v23;  // [bp-0x28]
    float v24;  // [bp-0x20]
    float v25;  // [bp-0x1c]
    float v26;  // [bp-0x18]

    v27 = &a0->field_0->field_20;
    v28 = a0->field_0->field_20 * a0->field_0->field_20 + *(float *)&v27[1] * *(float *)&v27[1] + *(float *)&v27[2] * *(float *)&v27[2];
    v29 = sqrt(v28);
    if (isnan(v29))
        sqrt(*(unsigned int *)&v28);
    else
        v28 = v29;
    v4 = (float)v28;
    if (v4 == 0.0f)
    {
        v9 = 0.0f;
        v10 = 0.0f;
        v11 = 1.0;
    }
    else
    {
        v30 = 1.0 / v4;
        v9 = (float)(v30 * *(float *)v27);
        v10 = (float)(v30 * *(float *)&v27[1]);
        v11 = (float)(v30 * *(float *)&v27[2]);
    }
    v31 = (double)a1;
    v16 = (float)(v31 * v9);
    v17 = (float)(v31 * v10);
    v18 = (float)(v31 * v11);
    v32 = &a0->field_0->field_20;
    v33 = a0->field_0->field_20 * a0->field_0->field_20 + *(float *)&v32[1] * *(float *)&v32[1] + *(float *)&v32[2] * *(float *)&v32[2];
    v34 = sqrt(v33);
    if (isnan(v34))
        sqrt(*(unsigned int *)&v33);
    else
        v33 = v34;
    v7 = (float)v33;
    if (v7 == 0.0f)
    {
        v1 = 0.0f;
        v2 = 0.0f;
        v3 = 1.0;
    }
    else
    {
        v35 = 1.0 / v7;
        v1 = (float)(v35 * *(float *)v32);
        v2 = (float)(v35 * *(float *)&v32[1]);
        v3 = (float)(v35 * *(float *)&v32[2]);
    }
    v36 = -20.0 * v1;
    v7 = (float)v36;
    v37 = -20.0 * v2;
    v8 = (float)v37;
    v9 = (float)(-20.0 * v3);
    v38 = v36 + *a2;
    v4 = (float)v38;
    v39 = v37 + a2[1];
    v5 = (float)v39;
    v6 = a2[2] + v9;
    v10 = (float)(v38 + v16);
    v11 = (float)(v39 + v17);
    v12 = v6 + v18;
    v40 = 30.0 * v1;
    v13 = (float)v40;
    v41 = 30.0 * v2;
    v14 = (float)v41;
    v15 = (float)(30.0 * v3);
    v7 = (float)(v40 + v10);
    v8 = (float)(v41 + v11);
    v9 = v12 + v15;
    UTIL_TraceLine(&v4, &v7, 1, a0->field_0->field_208, &v19);
    v7 = v21;
    v8 = v22;
    v9 = v23;
    if (1.0 <= v20)
    {
        v7 = *a2;
        v8 = a2[1];
        v9 = a2[2];
    }
    UTIL_ScreenShake(&v7, 12.0f, 100.0f, 5.0f, (float)a1);
    g_engfuncs.pfnMessageBegin(2, gmsgExplosion, 0, 0);
    g_engfuncs.pfnWriteCoord(v7);
    g_engfuncs.pfnWriteCoord(v8);
    g_engfuncs.pfnWriteCoord(v9);
    g_engfuncs.pfnWriteLong(a1);
    v0 = a0->field_2d4;
    g_engfuncs.pfnWriteByte(v0);
    g_engfuncs.pfnMessageEnd(v0);
    g_engfuncs.pfnMessageBegin(2, gmsgAddEffect, 0, 0);
    g_engfuncs.pfnWriteByte(2);
    v42 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
    g_engfuncs.pfnWriteShort(v42);
    g_engfuncs.pfnWriteCoord(v7);
    g_engfuncs.pfnWriteCoord(v8);
    g_engfuncs.pfnWriteCoord(v9);
    v0 = a1;
    g_engfuncs.pfnWriteShort(v0);
    g_engfuncs.pfnMessageEnd(v0);
    v43 = 1.0;
    if (1.0 > v20)
    {
        g_engfuncs.pfnMessageBegin(2, 23, 0, 0);
        g_engfuncs.pfnWriteByte(108);
        g_engfuncs.pfnWriteCoord(v7);
        g_engfuncs.pfnWriteCoord(v8);
        g_engfuncs.pfnWriteCoord(v9);
        g_engfuncs.pfnWriteCoord(0x42480000);
        g_engfuncs.pfnWriteCoord(0x42480000);
        g_engfuncs.pfnWriteCoord(0x42480000);
        g_engfuncs.pfnWriteCoord((float)(200.0 * v24));
        g_engfuncs.pfnWriteCoord((float)(200.0 * v25));
        v43 = 200.0f * v26;
        g_engfuncs.pfnWriteCoord((float)v43);
        g_engfuncs.pfnWriteByte(30);
        g_engfuncs.pfnWriteShort(g_sRockGibs);
        g_engfuncs.pfnWriteByte(20);
        g_engfuncs.pfnWriteByte(50);
        v0 = 0;
        g_engfuncs.pfnWriteByte(v0);
        g_engfuncs.pfnMessageEnd(v0);
    }
    g_engfuncs.pfnRandomFloat(0, 0x3f800000);
    return (v43 < 0.5 ? UTIL_DecalTrace(&v19, 11) : UTIL_DecalTrace(&v19, 12));
}

