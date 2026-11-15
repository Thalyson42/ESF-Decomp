// UTIL_ParametricRocket__FP9entvars_sG6VectorT1P7edict_s @0x131310 size=526
typedef struct st_531310_0 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_531310_0;

extern st_531310_0 *gpGlobals;

float UTIL_ParametricRocket__FP9entvars_sG6VectorT1P7edict_s(unsigned int *a0, unsigned int *a1, int a2, int a3)
{
    unsigned int *v13;  // edx
    double v14;  // mm5
    double v23;  // mm6
    float v24;  // 128
    double v15;  // mm5
    unsigned int *v16;  // esi
    unsigned int *v17;  // eax
    double v18;  // mm7
    double v19;  // mm6
    double v20;  // mm7
    double v21;  // mm6
    double v22;  // mm7
    float v0;  // [bp-0x8c]
    float v1;  // [bp-0x88]
    float v2;  // [bp-0x84]
    float v3;  // [bp-0x80]
    float v4;  // [bp-0x7c]
    float v5;  // [bp-0x6c]
    float v6;  // [bp-0x64]
    float v7;  // [bp-0x60]
    float v8;  // [bp-0x5c]
    char v9;  // [bp-0x44]
    unsigned int v10;  // [bp-0x30]
    unsigned int v11;  // [bp-0x2c]
    unsigned int v12;  // [bp-0x28]

    a0[35] = *a1;
    a0[36] = a1[1];
    a0[37] = a1[2];
    sub_48a800(a2);
    v13 = &gpGlobals->field_28;
    v14 = 8192.0 * gpGlobals->field_28;
    v2 = (float)v14;
    v15 = 8192.0 * *(float *)&v13[1];
    v3 = (float)v15;
    v4 = (float)(8192.0 * *(float *)&v13[2]);
    v16 = a0 + 35;
    v6 = (float)(v14 + *(float *)&a0[35]);
    v7 = (float)(v15 + *(float *)&v16[1]);
    v8 = *(float *)&v16[2] + v4;
    sub_487b80(v16, &v6, 1, a3, &v9);
    a0[32] = v10;
    a0[33] = v11;
    a0[0x22] = v12;
    v17 = a0 + 32;
    v2 = *(float *)&a0[32] - *(float *)&a0[35];
    v3 = *(float *)&v17[1] - *(float *)&v16[1];
    v4 = *(float *)&v17[2] - *(float *)&v16[2];
    v1 = 0;
    v18 = *(float *)&a0[8] * *(float *)&a0[8] + *(float *)&a0[9] * *(float *)&a0[9] + *(float *)&a0[10] * *(float *)&a0[10];
    v19 = sqrt(v18);
    if (isnan(v19))
        sub_487dc0(*(unsigned int *)&v18);
    else
        v18 = v19;
    v5 = (float)v18;
    if (0.0 < v5)
    {
        v20 = v2 * v2 + v3 * v3 + v4 * v4;
        v21 = sqrt(v20);
        if (isnan(v21))
            sub_487dc0(*(unsigned int *)&v20);
        else
            v20 = v21;
        v0 = (float)v20;
        v22 = *(float *)&a0[8] * *(float *)&a0[8] + *(float *)&a0[9] * *(float *)&a0[9] + *(float *)&a0[10] * *(float *)&a0[10];
        v23 = sqrt(v22);
        if (isnan(v23))
            sub_487dc0(*(unsigned int *)&v22);
        else
            v22 = v23;
        v5 = (float)v22;
        v1 = v0 / v5;
    }
    *(float *)&a0[39] = gpGlobals->field_0;
    v24 = v1 + gpGlobals->field_0;
    *(float *)&a0[38] = v24;
    return v24;
}

