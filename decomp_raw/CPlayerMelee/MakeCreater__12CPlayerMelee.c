// MakeCreater__12CPlayerMelee @0x1015b0 size=651
typedef struct st_5015b0_4 {
    char padding_0[124];
    struct st_5015b0_2 *field_7c;
} st_5015b0_4;

typedef struct st_5015b0_3 {
    char padding_0[268];
    unsigned int field_10c;
} st_5015b0_3;

typedef struct st_5015b0_1 {
    char padding_0[64];
    float field_40;
    float field_44;
    float field_48;
    char padding_4c[24];
    unsigned int field_64;
    char padding_68[188];
    struct st_5015b0_2 *field_124;
} st_5015b0_1;

typedef struct st_5015b0_2 {
    struct st_5015b0_0 *field_0;
} st_5015b0_2;

typedef struct st_5015b0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[476];
    int field_208;
} st_5015b0_0;

typedef struct st_5015b0_5 {
    unsigned int field_0;
} st_5015b0_5;

extern st_5015b0_5 *g_6168d4;

float MakeCreater__12CPlayerMelee(st_5015b0_1 *a0)
{
    float v22;  // eax
    unsigned int *v23;  // esi
    double v32;  // mm7
    st_5015b0_0 **v33;  // ecx
    double v34;  // mm5
    double v35;  // mm5
    unsigned int *v36;  // edx
    st_5015b0_4 *v37;  // eax
    st_5015b0_3 **v38;  // eax
    double v24;  // mm7
    double v25;  // mm6
    double v26;  // mm7
    float v27;  // 112
    float v28;  // 112
    float v29;  // 112
    double v30;  // mm7
    double v31;  // mm6
    char v0;  // [bp-0xc4]
    float v1;  // [bp-0xb8]
    float v2;  // [bp-0xb4]
    float v3;  // [bp-0xa4]
    float v4;  // [bp-0xa0]
    float v5;  // [bp-0x9c]
    float v6;  // [bp-0x98]
    st_5015b0_4 *v7;  // [bp-0x94]
    float v8;  // [bp-0x8c]
    float v9;  // [bp-0x88]
    float v10;  // [bp-0x84]
    float v11;  // [bp-0x80]
    float v12;  // [bp-0x7c]
    float v13;  // [bp-0x78]
    float v14;  // [bp-0x64]
    float v15;  // [bp-0x60]
    float v16;  // [bp-0x5c]
    float v17;  // [bp-0x44]
    float v18;  // [bp-0x40]
    float v19;  // [bp-0x24]
    float v20;  // [bp-0x20]
    float v21;  // [bp-0x1c]

    if (a0->field_64 == 1)
    {
        v19 = a0->field_40;
        v20 = a0->field_44;
        v22 = a0->field_48;
    }
    else
    {
        v23 = *(int *)a0->field_124 + 32;
        v24 = *(float *)(*(int *)a0->field_124 + 32) * *(float *)(*(int *)a0->field_124 + 32) + *(float *)&v23[1] * *(float *)&v23[1] + *(float *)&v23[2] * *(float *)&v23[2];
        v25 = sqrt(v24);
        if (isnan(v25))
            sub_487dc0(*(unsigned int *)&v24);
        else
            v24 = v25;
        v6 = (float)v24;
        if (v6 == 0.0f)
        {
            v10 = 0.0f;
            v11 = 0.0f;
            v12 = 1.0;
        }
        else
        {
            v26 = 1.0 / v6;
            v10 = (float)(v26 * *(float *)v23);
            v11 = (float)(v26 * *(float *)&v23[1]);
            v12 = (float)(v26 * *(float *)&v23[2]);
        }
        v3 = 0;
        v4 = 0;
        v5 = -1.0f;
        v27 = v10 + v3;
        v14 = v27;
        v28 = v11 + v4;
        v15 = v28;
        v29 = v12 + v5;
        v16 = v29;
        v30 = v27 * v27 + v28 * v28 + v29 * v29;
        v31 = sqrt(v30);
        if (isnan(v31))
            sub_487dc0(*(unsigned int *)&v30);
        else
            v30 = v31;
        v1 = (float)v30;
        if (v1 == 0.0f)
        {
            v17 = 0.0f;
            v18 = 0.0f;
            v22 = 1.0;
        }
        else
        {
            v32 = 1.0 / v1;
            v17 = (float)(v32 * v14);
            v18 = (float)(v32 * v15);
            v22 = (float)(v32 * v16);
        }
        v19 = v17;
        v20 = v18;
    }
    v21 = v22;
    v33 = a0->field_124;
    v34 = 128.0 * v19;
    v11 = (float)v34;
    v35 = 128.0 * v20;
    v12 = (float)v35;
    v13 = (float)(128.0 * v21);
    v36 = &*v33->field_8;
    v8 = (float)(v34 + *v33->field_8);
    v9 = (float)(v35 + *(float *)&v36[1]);
    v10 = *(float *)&v36[2] + v13;
    sub_487b80(&*v33->field_8, &v8, 1, *v33->field_208, &v0);
    if (v2 == 1.0f)
        return v2;
    v37 = v7;
    if (v37 || (v37 = g_6168d4(0), v37))
        v38 = v37->field_7c;
    else
        v38 = NULL;
    if (*v38->field_10c != 4)
        return v2;
    sub_48d7a0(&v0, 36);
    return v2;
}

