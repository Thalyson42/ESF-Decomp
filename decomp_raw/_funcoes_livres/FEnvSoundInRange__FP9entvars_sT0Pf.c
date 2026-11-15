// FEnvSoundInRange__FP9entvars_sT0Pf @0x11c7f0 size=407
typedef struct st_51c7f0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[352];
    float field_174;
    float field_178;
    float field_17c;
    char padding_180[136];
    int field_208;
} st_51c7f0_0;

typedef struct st_51c7f0_1 {
    char padding_0[100];
    float field_64;
} st_51c7f0_1;

unsigned int FEnvSoundInRange__FP9entvars_sT0Pf(st_51c7f0_0 *a0, float *a1, unsigned int *a2)
{
    unsigned int *v21;  // eax
    unsigned int *v22;  // eax
    double v23;  // mm7
    double v24;  // mm6
    st_51c7f0_1 *v0;  // [bp-0xc8]
    float v1;  // [bp-0xc4]
    float v2;  // [bp-0xc0]
    float v3;  // [bp-0xbc]
    float v4;  // [bp-0xb8]
    char v5;  // [bp-0xa4]
    unsigned int v6;  // [bp-0x9c]
    unsigned int v7;  // [bp-0x98]
    float v8;  // [bp-0x94]
    float v9;  // [bp-0x90]
    float v10;  // [bp-0x8c]
    float v11;  // [bp-0x88]
    float v12;  // [bp-0x64]
    float v13;  // [bp-0x60]
    float v14;  // [bp-0x5c]
    float v15;  // [bp-0x44]
    float v16;  // [bp-0x40]
    float v17;  // [bp-0x3c]
    float v18;  // [bp-0x24]
    float v19;  // [bp-0x20]
    float v20;  // [bp-0x1c]

    v0 = GetClassPtr__H1Z9CEnvSound_PX01_PX01(a0);
    v21 = &a0->field_8;
    v18 = a0->field_8 + a0->field_174;
    v19 = *(float *)&v21[1] + a0->field_178;
    v20 = *(float *)&v21[2] + a0->field_17c;
    v22 = a1 + 2;
    v15 = a1[2] + a1[93];
    v16 = *(float *)&v22[1] + a1[94];
    v17 = *(float *)&v22[2] + a1[95];
    UTIL_TraceLine(&v18, &v15, 1, a0->field_208, &v5);
    if (v6 && v7 || v8 != 1.0f)
        return 0;
    v1 = v9 - v18;
    v2 = v10 - v19;
    v3 = v11 - v20;
    v12 = v1;
    v13 = v2;
    v14 = v3;
    v23 = v12 * v12 + v13 * v13 + v14 * v14;
    v24 = sqrt(v23);
    if (isnan(v24))
        sqrt(*(unsigned int *)&v23);
    else
        v23 = v24;
    v4 = (float)v23;
    if (v4 <= v0->field_64)
    {
        if (!a2)
            return 1;
        *(float *)a2 = v4;
        return 1;
    }
    return 0;
}

