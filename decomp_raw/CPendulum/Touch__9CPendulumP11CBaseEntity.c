// Touch__9CPendulumP11CBaseEntity @0x93340 size=421
typedef struct st_493340_0 {
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
} st_493340_0;

typedef struct st_493340_2 {
    unsigned int field_0;
} st_493340_2;

typedef struct st_493340_4 {
    char padding_0[480];
    float field_1e0;
    char padding_1e4[20];
    float field_1f8;
} st_493340_4;

typedef struct st_493340_1 {
    char padding_0[52];
    struct st_493340_2 *field_34;
} st_493340_1;

typedef struct st_493340_3 {
    struct st_493340_0 *field_0;
    char padding_4[92];
    struct st_493340_1 *field_60;
} st_493340_3;

float Touch__9CPendulumP11CBaseEntity(st_493340_4 **a0, st_493340_3 *a1)
{
    st_493340_0 *v15;  // esi
    float v16;  // 128
    unsigned int *v17;  // eax
    float v18;  // 112
    float v19;  // 112
    float v20;  // 112
    double v21;  // mm7
    double v22;  // mm6
    double v23;  // mm7
    float v0;  // [bp-0xb8]
    float v1;  // [bp-0xa8]
    char v2;  // [bp-0x94]
    float v3;  // [bp-0x94]
    float v4;  // [bp-0x90]
    float v5;  // [bp-0x8c]
    float v6;  // [bp-0x74]
    float v7;  // [bp-0x70]
    float v8;  // [bp-0x6c]
    float v9;  // [bp-0x54]
    float v10;  // [bp-0x50]
    float v11;  // [bp-0x4c]
    float v12;  // [bp-0x34]
    float v13;  // [bp-0x30]
    float v14;  // [bp-0x2c]

    v15 = a1->field_0;
    v16 = *a0->field_1e0;
    if (0.0 >= v16 || v15->field_16c == 0.0f)
        return v16;
    v0 = (float)(v16 * *a0->field_1f8 * 0.01);
    if (0.0 > v0)
        v0 = -v0;
    a1->field_60->field_34(a1, *a0, *a0, v0, 1);
    VecBModelOrigin(&v2, *a0);
    v17 = &v15->field_8;
    v18 = v15->field_8 - v3;
    v6 = v18;
    v19 = *(float *)&v17[1] - v4;
    v7 = v19;
    v20 = *(float *)&v17[2] - v5;
    v8 = v20;
    v21 = v18 * v18 + v19 * v19 + v20 * v20;
    v22 = sqrt(v21);
    if (isnan(v22))
        sqrt(*(unsigned int *)&v21);
    else
        v21 = v22;
    v1 = (float)v21;
    if (v1 == 0.0f)
    {
        v9 = 0.0f;
        v10 = 0.0f;
        v11 = 1.0;
    }
    else
    {
        v23 = 1.0 / v1;
        v9 = (float)(v23 * v6);
        v10 = (float)(v23 * v7);
        v11 = (float)(v23 * v8);
    }
    v12 = v0 * v9;
    v13 = v0 * v10;
    v14 = v0 * v11;
    *(float *)&v15->field_20 = v12;
    *(float *)&v15->field_24 = v13;
    *(float *)&v15->field_28 = v14;
    return v0 * v11;
    return v16;
}

