// FBoxVisible__FP9entvars_sT0R6Vectorf @0xc7ed0 size=444
typedef struct st_4c7ed0_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[200];
    float field_dc;
    float field_e0;
    float field_e4;
    float field_e8;
    float field_ec;
    float field_f0;
    char padding_f4[204];
    unsigned int field_1c0;
} st_4c7ed0_1;

typedef struct st_4c7ed0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[352];
    float field_174;
    float field_178;
    float field_17c;
    char padding_180[64];
    unsigned int field_1c0;
    char padding_1c4[68];
    int field_208;
} st_4c7ed0_0;

typedef struct st_4c7ed0_2 {
    unsigned int field_0;
} st_4c7ed0_2;

extern st_4c7ed0_2 *g_engfuncs.pfnRandomFloat;

unsigned int FBoxVisible__FP9entvars_sT0R6Vectorf(st_4c7ed0_0 *a0, st_4c7ed0_1 *a1, float *a2, float a3)
{
    unsigned int *v10;  // eax
    unsigned int *v11;  // edx
    float v12;  // 128
    float v13;  // 128
    float v14;  // 128
    unsigned int *v0;  // [bp-0x9c]
    int v1;  // [bp-0x98]
    float v2;  // [bp-0x84]
    float v3;  // [bp-0x80]
    float v4;  // [bp-0x7c]
    float v5;  // [bp-0x64]
    float v6;  // [bp-0x60]
    float v7;  // [bp-0x5c]
    char v8;  // [bp-0x44]
    float v9;  // [bp-0x34]

    if (a0->field_1c0 != 3)
    {
        if (a1->field_1c0 == 3)
            return 0;
        if (a0->field_1c0 != 3)
            goto LABEL_4c7f40;
    }
    if (!a1->field_1c0)
        return 0;
LABEL_4c7f40:
    v10 = &a0->field_8;
    v5 = a0->field_8 + a0->field_174;
    v6 = *(float *)&v10[1] + a0->field_178;
    v7 = *(float *)&v10[2] + a0->field_17c;
    v1 = 0;
    v0 = &a1->field_8;
    while (1)
    {
        v2 = a1->field_8;
        v11 = v0;
        v3 = *(float *)&v11[1];
        v4 = *(float *)&v11[2];
        v12 = a3 + a1->field_dc;
        g_engfuncs.pfnRandomFloat(v12, a1->field_e8 - a3);
        v2 += v12;
        v13 = a3 + a1->field_e0;
        g_engfuncs.pfnRandomFloat(v13, a1->field_ec - a3);
        v3 += v13;
        v14 = a3 + a1->field_e4;
        g_engfuncs.pfnRandomFloat(v14, a1->field_f0 - a3);
        v4 += v14;
        UTIL_TraceLine(&v5, &v2, 1, 1, a0->field_208, &v8);
        if (v9 == 1.0f)
        {
            *a2 = v2;
            a2[1] = v3;
            a2[2] = v4;
            return 1;
        }
        v1 += 1;
        if (v1 > 4)
            return 0;
    }
}

