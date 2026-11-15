// ShootAtEnemy__12CBaseMonsterRC6Vector @0xd9b30 size=365
typedef struct st_4d9b30_3 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4d9b30_3;

typedef struct st_4d9b30_0 {
    char padding_0[216];
    struct st_4d9b30_1 *field_d8;
} st_4d9b30_0;

typedef struct st_4d9b30_1 {
    unsigned int field_0;
} st_4d9b30_1;

typedef struct st_4d9b30_4 {
    char padding_0[264];
    char field_108;
    char padding_109[327];
    float field_250;
    float field_254;
    float field_258;
} st_4d9b30_4;

typedef struct st_4d9b30_2 {
    struct st_4d9b30_3 *field_0;
    char padding_4[92];
    struct st_4d9b30_0 *field_60;
} st_4d9b30_2;

typedef struct st_4d9b30_5 {
    char padding_0[8];
    unsigned int field_8;
} st_4d9b30_5;

typedef struct st_4d9b30_6 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4d9b30_6;

extern st_4d9b30_6 *gpGlobals;

st_4d9b30_5 * ShootAtEnemy__12CBaseMonsterRC6Vector(void)
{
    st_4d9b30_2 *v17;  // esi
    unsigned int *v18;  // edx
    double v27;  // mm7
    unsigned int *v28;  // edx
    st_4d9b30_4 *v19;  // eax
    float *v20;  // ecx
    float v21;  // 112
    float v22;  // 112
    float v23;  // 112
    double v24;  // mm7
    double v25;  // mm6
    double v26;  // mm7
    float v0;  // [bp-0x98]
    char v1;  // [bp-0x84]
    float v2;  // [bp-0x84]
    float v3;  // [bp-0x80]
    float v4;  // [bp-0x7c]
    float v5;  // [bp-0x64]
    float v6;  // [bp-0x60]
    float v7;  // [bp-0x5c]
    float v8;  // [bp-0x44]
    float v9;  // [bp-0x40]
    float v10;  // [bp-0x3c]
    float v11;  // [bp-0x24]
    float v12;  // [bp-0x20]
    float v13;  // [bp-0x1c]
    st_4d9b30_5 *idx;  // [bp+0x4]
    st_4d9b30_4 *v15;  // [bp+0x8]
    float *v16;  // [bp+0xc]

    v17 = sub_488810(&v15->field_108);
    if (v17)
    {
        v17->field_60->field_d8(&v1, v17, v16);
        v18 = &v17->field_0->field_8;
        v5 = v2 - v17->field_0->field_8;
        v6 = v3 - *(float *)&v18[1];
        v7 = v4 - *(float *)&v18[2];
        v19 = v15;
        v8 = v5 + v19->field_250;
        v9 = v6 + v19->field_254;
        v10 = v7 + v19->field_258;
        v20 = v16;
        v21 = v8 - *v20;
        v11 = v21;
        v22 = v9 - v20[1];
        v12 = v22;
        v23 = v10 - v20[2];
        v13 = v23;
        v24 = v21 * v21 + v22 * v22 + v23 * v23;
        v25 = sqrt(v24);
        if (isnan(v25))
            sub_487dc0(*(unsigned int *)&v24);
        else
            v24 = v25;
        v0 = (float)v24;
        if (v0 == 0.0f)
        {
            *(float *)&idx->padding_0[0] = 0.0f;
            *(float *)&idx->padding_0[4] = 0.0f;
            idx->field_8 = 0x3f800000;
            return idx;
        }
        v26 = 1.0 / v0;
        *(float *)&idx->padding_0[0] = (float)(v26 * v11);
        v27 = v26 * v13;
        *(float *)&idx->padding_0[4] = (float)(v26 * v12);
    }
    else
    {
        v28 = &gpGlobals->field_28;
        *(float *)&idx->padding_0[0] = gpGlobals->field_28;
        *(float *)&idx->padding_0[4] = *(float *)&v28[1];
        v27 = *(float *)&v28[2];
    }
    *(float *)&idx->field_8 = (float)v27;
    return idx;
}

