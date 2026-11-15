// BeamDamage__5CBeamP11TraceResult @0xb1810 size=478
typedef struct st_4b1810_5 {
    char padding_0[124];
    struct st_4b1810_4 *field_7c;
} st_4b1810_5;

typedef struct st_4b1810_2 {
    char padding_0[48];
    struct st_4b1810_3 *field_30;
    char padding_34[92];
    struct st_4b1810_3 *field_90;
} st_4b1810_2;

typedef struct st_4b1810_8 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[16];
    struct st_4b1810_5 *field_1c;
} st_4b1810_8;

typedef struct st_4b1810_3 {
    unsigned int field_0;
} st_4b1810_3;

typedef struct st_4b1810_7 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[396];
    char field_198;
    char padding_199[63];
    unsigned int field_1d8;
    unsigned int field_1dc;
} st_4b1810_7;

typedef struct st_4b1810_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[396];
    char field_1a0;
    char padding_1a1[63];
    float field_1e0;
    float field_1e4;
} st_4b1810_0;

typedef struct st_4b1810_6 {
    char padding_0[16];
    float field_10;
    float field_14;
    float field_18;
    float field_1c;
    char padding_20[16];
    struct st_4b1810_5 *field_30;
} st_4b1810_6;

typedef struct st_4b1810_4 {
    char padding_0[96];
    struct st_4b1810_2 *field_60;
} st_4b1810_4;

typedef struct st_4b1810_1 {
    float field_0;
} st_4b1810_1;

extern st_4b1810_3 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4b1810_3 *g_engfuncs.pfnRandomLong;
extern st_4b1810_1 *gpGlobals;

float BeamDamage__5CBeamP11TraceResult(st_4b1810_0 **a0, st_4b1810_6 *a1)
{
    st_4b1810_5 *v7;  // eax
    st_4b1810_4 *v8;  // eax
    double v17;  // mm7
    st_4b1810_0 *v18;  // edx
    float v20;  // 128
    st_4b1810_4 *v9;  // esi
    st_4b1810_8 *v10;  // ecx
    st_4b1810_7 *v11;  // edx
    float v12;  // 112
    float v13;  // 112
    float v14;  // 112
    double v15;  // mm7
    double v16;  // mm6
    float v0;  // [bp-0x68]
    float v1;  // [bp-0x54]
    float v2;  // [bp-0x50]
    float v3;  // [bp-0x4c]
    float v4;  // [bp-0x34]
    float v5;  // [bp-0x30]
    float v6;  // [bp-0x2c], Other Possible Types: unsigned int

    CBeam::RelinkBeam(a0);
    if (a1->field_10 != 1.0f && a1->field_30)
    {
        v7 = a1->field_30;
        if (a1->field_30 || (v7 = g_engfuncs.pfnPEntityOfEntOffset(0), v7))
            v8 = v7->field_7c;
        else
            v8 = NULL;
        v9 = v8;
        if (v9)
        {
            ClearMultiDamage();
            v10 = &a1->field_14;
            v11 = &*a0->field_8;
            v12 = a1->field_14 - *a0->field_8;
            v1 = v12;
            v13 = *(float *)&v10->field_4 - *(float *)&v11->field_4;
            v2 = v13;
            v14 = *(float *)&v10->field_8 - *(float *)&v11->field_8;
            v3 = v14;
            v15 = v12 * v12 + v13 * v13 + v14 * v14;
            v16 = sqrt(v15);
            if (isnan(v16))
                sqrt(*(unsigned int *)&v15);
            else
                v15 = v16;
            v0 = (float)v15;
            if (v0 == 0.0f)
            {
                v4 = 0.0f;
                v5 = 0.0f;
                v6 = 0x3f800000;
            }
            else
            {
                v17 = 1.0 / v0;
                v4 = (float)(v17 * v1);
                v5 = (float)(v17 * v2);
                v6 = (float)(v17 * v3);
            }
            v18 = *a0;
            v9->field_60->field_30(v9, v18, (*(float *)gpGlobals - v18->field_1e4) * v18->field_1e0, &v4, a1, 0x400);
            ApplyMultiDamage(*a0, *a0);
            if (*a0->field_1a0 & 64 && v9->field_60->field_90(v9))
                UTIL_DecalTrace(a1, g_engfuncs.pfnRandomLong(0, 4) + 28);
        }
    }
    v20 = *(float *)gpGlobals;
    *a0->field_1e4 = v20;
    return v20;
}

