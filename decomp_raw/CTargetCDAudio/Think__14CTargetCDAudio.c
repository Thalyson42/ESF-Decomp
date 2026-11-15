// Think__14CTargetCDAudio @0x12c450 size=230
typedef struct st_52c450_2 {
    char padding_0[316];
    unsigned int field_13c;
} st_52c450_2;

typedef struct st_52c450_1 {
    float field_0;
} st_52c450_1;

typedef struct st_52c450_0 {
    unsigned int field_0;
} st_52c450_0;

extern st_52c450_0 *g_6168e0;
extern st_52c450_1 *gpGlobals;

float Think__14CTargetCDAudio(float a0)
{
    float *v5;  // esi
    unsigned int *v6;  // ecx
    st_52c450_2 *v7;  // edx
    float v8;  // 104
    float v9;  // 104
    float v10;  // 104
    double v11;  // mm6
    double v12;  // mm5
    unsigned long long v13;  // mm7
    unsigned long long v14;  // mm7
    float v0;  // [bp-0x48]
    float v1;  // [bp-0x34]
    float v2;  // [bp-0x30]
    float v3;  // [bp-0x2c]

    v5 = g_6168e0(1);
    if (!v5)
        return v14;
    *(float *)(*(int *)a0 + 260) = (float)(0.5 + *(float *)gpGlobals);
    v6 = v5 + 0x22;
    v7 = *(int *)a0 + 8;
    v8 = v5[0x22] - *(float *)(*(int *)a0 + 8);
    v1 = v8;
    v9 = *(float *)&v6[1] - *(float *)&v7->padding_0[4];
    v2 = v9;
    v10 = *(float *)&v6[2] - *(float *)&v7->padding_0[8];
    v3 = v10;
    v11 = v8 * v8 + v9 * v9 + v10 * v10;
    v12 = sqrt(v11);
    if (isnan(v12))
        sub_487dc0(*(unsigned int *)&v11);
    else
        v11 = v12;
    v0 = (float)v11;
    if (v0 > *(float *)(*(int *)a0 + 324))
        return v13;
    sub_488880(a0);
    return v13;
}

