// Think__17CInfoIntermission @0xfeb30 size=368
typedef struct st_4feb30_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[96];
    float field_74;
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[328];
    unsigned int field_1c8;
} st_4feb30_0;

typedef struct st_4feb30_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4feb30_1;

typedef struct st_4feb30_2 {
    unsigned int field_0;
} st_4feb30_2;

extern st_4feb30_2 *g_6167f8;
extern st_4feb30_2 *g_6168d8;
extern st_4feb30_1 *gpGlobals;

double Think__17CInfoIntermission(st_4feb30_0 **a0)
{
    float *v12;  // esi
    unsigned int v13;  // edi
    double v22;  // mm7
    double v23;  // mm7
    double v24;  // mm7
    st_4feb30_0 *v14;  // edi
    unsigned int *v15;  // edx
    unsigned int *v16;  // eax
    float v17;  // 112
    float v18;  // 112
    float v19;  // 112
    double v20;  // mm7
    double v21;  // mm6
    char *v0;  // [bp-0x88]
    float v1;  // [bp-0x78]
    float v2;  // [bp-0x64]
    float v3;  // [bp-0x60]
    float v4;  // [bp-0x5c]
    float v5;  // [bp-0x44]
    float v6;  // [bp-0x40]
    float v7;  // [bp-0x3c], Other Possible Types: unsigned int
    char v8;  // [bp-0x24]
    unsigned int v10;  // [bp-0x20]
    unsigned int v11;  // [bp-0x1c]

    v12 = g_6167f8(0, "targetname", *a0->field_1c8 + gpGlobals->field_98);
    v13 = 0;
    if (!v12 || !g_6168d8(v12))
        v13 = 1;
    if (v13)
        return v24;
    v14 = *a0;
    v0 = &v8;
    v15 = v12 + 0x22;
    v16 = &v14->field_8;
    v17 = v12[0x22] - v14->field_8;
    v2 = v17;
    v18 = *(float *)&v15[1] - *(float *)&v16[1];
    v3 = v18;
    v19 = *(float *)&v15[2] - *(float *)&v16[2];
    v4 = v19;
    v20 = v17 * v17 + v18 * v18 + v19 * v19;
    v21 = sqrt(v20);
    if (isnan(v21))
        sub_487dc0(*(unsigned int *)&v20);
    else
        v20 = v21;
    v1 = (float)v20;
    if (v1 == 0.0f)
    {
        v5 = 0.0f;
        v6 = 0.0f;
        v7 = 0x3f800000;
    }
    else
    {
        v22 = 1.0 / v1;
        v5 = (float)(v22 * v2);
        v6 = (float)(v22 * v3);
        v7 = (float)(v22 * v4);
    }
    sub_488860(v0, &v5);
    *(unsigned int *)&v14->field_74 = v8;
    v14->field_78 = v10;
    v14->field_7c = v11;
    v23 = -*a0->field_74;
    *a0->field_74 = (float)v23;
    return v23;
}

