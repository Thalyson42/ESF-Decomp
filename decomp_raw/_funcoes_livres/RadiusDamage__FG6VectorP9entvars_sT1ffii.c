// RadiusDamage__FG6VectorP9entvars_sT1ffii @0xa6220 size=825
typedef struct st_4a6220_1 {
    char padding_0[40];
    struct st_4a6220_2 *field_28;
    char padding_2c[4];
    struct st_4a6220_2 *field_30;
    struct st_4a6220_2 *field_34;
    char padding_38[160];
    struct st_4a6220_2 *field_d8;
} st_4a6220_1;

typedef struct st_4a6220_2 {
    unsigned int field_0;
} st_4a6220_2;

typedef struct st_4a6220_5 {
    char padding_0[520];
    int field_208;
} st_4a6220_5;

typedef struct st_4a6220_0 {
    char padding_0[364];
    float field_16c;
    char padding_170[80];
    unsigned int field_1c0;
    char padding_1c4[68];
    unsigned int field_208;
} st_4a6220_0;

typedef struct st_4a6220_3 {
    struct st_4a6220_0 *field_0;
    char padding_4[92];
    struct st_4a6220_1 *field_60;
} st_4a6220_3;

typedef struct st_4a6220_4 {
    unsigned int field_0;
    unsigned int field_4;
    float field_8;
} st_4a6220_4;

st_4a6220_3 * RadiusDamage__FG6VectorP9entvars_sT1ffii(st_4a6220_4 *a0, st_4a6220_5 *a1, st_4a6220_5 *a2, float a3, float a4, unsigned int a5, unsigned int a6)
{
    st_4a6220_3 *v23;  // esi
    float v24;  // 112
    double v33;  // mm6
    double v34;  // mm7
    float v25;  // 112
    float v26;  // 112
    double v27;  // mm7
    double v28;  // mm6
    float v29;  // 112
    float v30;  // 112
    float v31;  // 112
    double v32;  // mm7
    char *v0;  // [bp-0xc4]
    unsigned int v1;  // [bp-0xc0]
    float v2;  // [bp-0xbc]
    float v3;  // [bp-0xb8]
    float v4;  // [bp-0xa8]
    char v5;  // [bp-0x84]
    float v6;  // [bp-0x84]
    float v7;  // [bp-0x80]
    float v8;  // [bp-0x7c]
    float v9;  // [bp-0x78]
    float v10;  // [bp-0x74]
    float v11;  // [bp-0x70]
    float v12;  // [bp-0x6c]
    float v13;  // [bp-0x64]
    float v14;  // [bp-0x60]
    float v15;  // [bp-0x5c]
    char v16;  // [bp-0x44]
    unsigned int v17;  // [bp-0x40]
    float v18;  // [bp-0x34]
    float v19;  // [bp-0x30]
    float v20;  // [bp-0x2c]
    float v21;  // [bp-0x28]
    unsigned int v22;  // [bp-0x14]

    v23 = NULL;
    v2 = 1.0;
    if (a4 != 0.0f)
        v2 = a3 / a4;
    v1 = sub_48ae20(a0) == 0xfffffffd;
    a0->field_8 = (float)(1.0 + a0->field_8);
    if (!a2)
        a2 = a1;
    v0 = &v5;
    while (1)
    {
        v23 = sub_48bba0(v23, a0, a4);
        if (!v23)
            break;
        if (v23->field_0->field_16c == 0.0f || a5 && v23->field_60->field_28(v23) == a5)
            continue;
        if (v1)
        {
            if (!v23->field_0->field_1c0)
                continue;
        }
        else
        {
            if (v23->field_0->field_1c0 == 3)
                continue;
        }
        v23->field_60->field_d8(v0, v23, a0);
        v13 = v6;
        v14 = v7;
        v15 = v8;
        sub_487b80(a0, &v13, 0, a1->field_208, &v16);
        if (v18 == 1.0f || v22 == v23->field_0->field_208)
        {
            if (v17)
            {
                *(unsigned int *)&v19 = a0->field_0;
                *(unsigned int *)&v20 = a0->field_4;
                v21 = a0->field_8;
                v18 = 0;
            }
            v24 = *(float *)&a0->field_0 - v19;
            v6 = v24;
            v25 = *(float *)&a0->field_4 - v20;
            v7 = v25;
            v26 = a0->field_8 - v21;
            v8 = v26;
            v27 = v24 * v24 + v25 * v25 + v26 * v26;
            v28 = sqrt(v27);
            if (isnan(v28))
                sub_487dc0(*(unsigned int *)&v27);
            else
                v27 = v28;
            v12 = (float)v27;
            v3 = a3 - v12 * v2;
            if (0.0 > v3)
                v3 = 0.0f;
            if (v18 != 1.0f)
            {
                sub_48a370();
                v29 = v19 - *(float *)&a0->field_0;
                v9 = v29;
                v30 = v20 - *(float *)&a0->field_4;
                v10 = v30;
                v31 = v21 - a0->field_8;
                v11 = v31;
                v32 = v29 * v29 + v30 * v30 + v31 * v31;
                v33 = sqrt(v32);
                if (isnan(v33))
                    sub_487dc0(*(unsigned int *)&v32);
                else
                    v32 = v33;
                v4 = (float)v32;
                if (v4 == 0.0f)
                {
                    v6 = 0.0f;
                    v7 = 0.0f;
                    v8 = 1.0;
                }
                else
                {
                    v34 = 1.0 / v4;
                    v6 = (float)(v34 * v9);
                    v7 = (float)(v34 * v10);
                    v8 = (float)(v34 * v11);
                }
                v23->field_60->field_30(v23, a1, v3, v0, &v16, a6);
                sub_48d630(a1, a2);
            }
            else
            {
                v23->field_60->field_34(v23, a1, a2, v3, a6);
            }
        }
    }
    return v23;
}

