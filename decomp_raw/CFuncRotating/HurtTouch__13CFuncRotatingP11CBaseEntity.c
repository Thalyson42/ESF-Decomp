// HurtTouch__13CFuncRotatingP11CBaseEntity @0x92080 size=426
typedef struct st_492080_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[320];
    float field_16c;
} st_492080_0;

typedef struct st_492080_2 {
    unsigned int field_0;
} st_492080_2;

typedef struct st_492080_4 {
    char padding_0[92];
    float field_5c;
    float field_60;
    float field_64;
    char padding_68[376];
    float field_1e0;
} st_492080_4;

typedef struct st_492080_1 {
    char padding_0[52];
    struct st_492080_2 *field_34;
} st_492080_1;

typedef struct st_492080_3 {
    struct st_492080_0 *field_0;
    char padding_4[92];
    struct st_492080_1 *field_60;
} st_492080_3;

float HurtTouch__13CFuncRotatingP11CBaseEntity(st_492080_4 **a0, st_492080_3 *a1)
{
    st_492080_0 *v14;  // esi
    unsigned int *v15;  // edx
    double v24;  // mm6
    double v25;  // mm7
    float v26;  // 128
    double v16;  // mm7
    double v17;  // mm6
    float *v18;  // eax
    unsigned int *v19;  // eax
    float v20;  // 112
    float v21;  // 112
    float v22;  // 112
    double v23;  // mm7
    float v0;  // [bp-0x78]
    char v1;  // [bp-0x64]
    float v2;  // [bp-0x64]
    float v3;  // [bp-0x60]
    float v4;  // [bp-0x5c]
    float v5;  // [bp-0x44]
    float v6;  // [bp-0x40]
    float v7;  // [bp-0x3c]
    float v8;  // [bp-0x24]
    float v9;  // [bp-0x20]
    float v10;  // [bp-0x1c]
    float v11;  // [bp-0x18]
    float v12;  // [bp-0x14]
    float v13;  // [bp-0x10]

    v14 = a1->field_0;
    if (v14->field_16c == 0.0f)
        return v14->field_16c;
    v15 = &*a0->field_5c;
    v16 = *a0->field_5c * *a0->field_5c + *(float *)&v15[1] * *(float *)&v15[1] + *(float *)&v15[2] * *(float *)&v15[2];
    v17 = sqrt(v16);
    if (isnan(v17))
        sqrt(*(unsigned int *)&v16);
    else
        v16 = v17;
    v11 = (float)v16;
    *a0->field_1e0 = (float)(v11 / 10.0);
    v18 = *a0;
    a1->field_60->field_34(a1, v18, v18, v18[120], 1);
    VecBModelOrigin(&v1, *a0);
    v19 = &v14->field_8;
    v20 = v14->field_8 - v2;
    v5 = v20;
    v21 = *(float *)&v19[1] - v3;
    v6 = v21;
    v22 = *(float *)&v19[2] - v4;
    v7 = v22;
    v23 = v20 * v20 + v21 * v21 + v22 * v22;
    v24 = sqrt(v23);
    if (isnan(v24))
        sqrt(*(unsigned int *)&v23);
    else
        v23 = v24;
    v0 = (float)v23;
    if (v0 == 0.0f)
    {
        v11 = 0.0f;
        v12 = 0.0f;
        v13 = 1.0;
    }
    else
    {
        v25 = 1.0 / v0;
        v11 = (float)(v25 * v5);
        v12 = (float)(v25 * v6);
        v13 = (float)(v25 * v7);
    }
    v26 = *a0->field_1e0;
    v8 = v26 * v11;
    v9 = v26 * v12;
    v10 = v26 * v13;
    *(float *)&v14->field_20 = v8;
    *(float *)&v14->field_24 = v9;
    *(float *)&v14->field_28 = v10;
    return v26 * v13;
}

