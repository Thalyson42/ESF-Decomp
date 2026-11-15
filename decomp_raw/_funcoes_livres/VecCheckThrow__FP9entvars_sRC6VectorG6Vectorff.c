// VecCheckThrow__FP9entvars_sRC6VectorG6Vectorff @0xc8620 size=514
typedef struct st_4c8620_2 {
    char padding_0[520];
    int field_208;
} st_4c8620_2;

typedef struct st_4c8620_1 {
    unsigned int field_0;
    unsigned int field_4;
    float field_8;
} st_4c8620_1;

typedef struct st_4c8620_0 {
    char padding_0[12];
    float field_c;
} st_4c8620_0;

extern st_4c8620_0 *g_psv_gravity;
extern float g_vecZero;
extern float g_616790;
extern float g_616794;

st_4c8620_1 * VecCheckThrow__FP9entvars_sRC6VectorG6Vectorff(void)
{
    float *v22;  // edi
    float *v23;  // eax
    double v32;  // mm3
    double v33;  // mm3
    double v34;  // mm7
    float v24;  // 112
    float v25;  // 112
    float v26;  // 112
    double v27;  // mm7
    double v28;  // mm6
    float v29;  // 120
    float v30;  // 112
    float *v31;  // edx
    float v0;  // [bp-0xb8]
    char v1;  // [bp-0xb4]
    float v2;  // [bp-0xa4]
    float v3;  // [bp-0x74]
    float v4;  // [bp-0x70]
    float v5;  // [bp-0x6c]
    float v6;  // [bp-0x48]
    float v7;  // [bp-0x44]
    float v8;  // [bp-0x40]
    float v9;  // [bp-0x3c]
    float v10;  // [bp-0x38]
    float v11;  // [bp-0x34]
    float v12;  // [bp-0x30]
    float v13;  // [bp-0x24]
    float v14;  // [bp-0x20]
    float v15;  // [bp-0x1c]
    st_4c8620_1 *idx;  // [bp+0x4]
    st_4c8620_2 *v17;  // [bp+0x8]
    float *v18;  // [bp+0xc]
    float *v19;  // [bp+0x10]
    float v20;  // [bp+0x14]
    float v21;  // [bp+0x18]

    v22 = v18;
    v0 = v21 * g_psv_gravity->field_c;
    v23 = v19;
    v24 = *v23 - *v22;
    v13 = v24;
    v25 = v23[1] - v22[1];
    v14 = v25;
    v26 = v23[2] - v22[2];
    v15 = v26;
    v27 = v24 * v24 + v25 * v25 + v26 * v26;
    v28 = sqrt(v27);
    if (isnan(v28))
        sub_487dc0(*(unsigned int *)&v27);
    else
        v27 = v28;
    v10 = (float)v27;
    v29 = v10 / v20;
    v6 = (float)(1.0 / v29);
    v30 = v6;
    v7 = v30 * v13;
    v8 = v30 * v14;
    v9 = v30 * v15;
    v13 = v7;
    v14 = v8;
    v15 = v9;
    v15 = (float)(v29 * v0 * 0.5 + v15);
    v31 = v19;
    v3 = *v31 - *v22;
    v4 = v31[1] - v22[1];
    v5 = v31[2] - v22[2];
    v32 = 0.5 * v3;
    v10 = (float)v32;
    v33 = 0.5 * v4;
    v11 = (float)v33;
    v12 = (float)(0.5 * v5);
    v7 = (float)(v32 + *v22);
    v8 = (float)(v33 + v22[1]);
    v9 = (float)(0.5 * v29 * 0.5 * v0 * 0.5 * v29 + v22[2] + v12);
    sub_487b80(v22, &v7, 0, v17->field_208, &v1);
    if (v2 != 1.0f || (sub_487b80(v19, &v7, 1, v17->field_208, &v1), v2 != 1.0f))
    {
        *(float *)&idx->field_0 = g_vecZero;
        *(float *)&idx->field_4 = g_616790;
        v34 = g_616794;
    }
    else
    {
        *(float *)&idx->field_0 = v13;
        *(float *)&idx->field_4 = v14;
        v34 = v15;
    }
    idx->field_8 = (float)v34;
    return idx;
}

