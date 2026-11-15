// PredictEntityPos__FP11CBaseEntityfb @0x17c920 size=550
typedef struct st_57c920_0 {
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
} st_57c920_0;

typedef struct st_57c920_1 {
    unsigned int field_0;
    unsigned int field_4;
    float field_8;
} st_57c920_1;

st_57c920_1 * PredictEntityPos__FP11CBaseEntityfb(void)
{
    unsigned int *v22;  // edx
    double v23;  // mm7
    unsigned int *v32;  // esi
    double v33;  // mm7
    double v34;  // mm6
    double v35;  // mm7
    double v24;  // mm6
    unsigned int *v25;  // edx
    double v26;  // mm7
    unsigned int *v27;  // edx
    double v28;  // mm7
    double v29;  // mm6
    st_57c920_0 *v30;  // eax
    unsigned int *v31;  // edx
    float v0;  // [bp-0x98]
    char v1;  // [bp-0x94]
    float v2;  // [bp-0x88]
    float v3;  // [bp-0x80]
    float v4;  // [bp-0x7c]
    float v5;  // [bp-0x78]
    float v6;  // [bp-0x74]
    float v7;  // [bp-0x70]
    float v8;  // [bp-0x6c]
    float v9;  // [bp-0x54]
    float v10;  // [bp-0x50]
    float v11;  // [bp-0x4c]
    float v12;  // [bp-0x24]
    float v13;  // [bp-0x20]
    float v14;  // [bp-0x1c]
    float v15;  // [bp-0x18]
    float v16;  // [bp-0x14]
    float v17;  // [bp-0x10]
    st_57c920_1 *idx;  // [bp+0x4]
    st_57c920_0 **v19;  // [bp+0x8]
    float v20;  // [bp+0xc]
    char v21;  // [bp+0x10]

    v22 = &*v19->field_20;
    v23 = *v19->field_20 * *v19->field_20 + *(float *)&v22[1] * *(float *)&v22[1] + *(float *)&v22[2] * *(float *)&v22[2];
    v24 = sqrt(v23);
    if (isnan(v24))
        sub_487dc0(*(unsigned int *)&v23);
    else
        v23 = v24;
    v15 = (float)v23;
    if (v15 < 10.0f)
    {
        v25 = &*v19->field_8;
        *(float *)&idx->field_0 = *v19->field_8;
        *(float *)&idx->field_4 = *(float *)&v25[1];
        v26 = *(float *)&v25[2];
    }
    else
    {
        v27 = &*v19->field_20;
        v28 = *v19->field_20 * *v19->field_20 + *(float *)&v27[1] * *(float *)&v27[1] + *(float *)&v27[2] * *(float *)&v27[2];
        v29 = sqrt(v28);
        if (isnan(v29))
            sub_487dc0(*(unsigned int *)&v28);
        else
            v28 = v29;
        v15 = (float)v28;
        v0 = v15 * v20;
        v30 = *v19;
        v31 = &v30->field_8;
        v12 = v30->field_8;
        v13 = *(float *)&v31[1];
        v14 = *(float *)&v31[2];
        v32 = &v30->field_20;
        v33 = v30->field_20 * v30->field_20 + *(float *)&v32[1] * *(float *)&v32[1] + *(float *)&v32[2] * *(float *)&v32[2];
        v34 = sqrt(v33);
        if (isnan(v34))
            sub_487dc0(*(unsigned int *)&v33);
        else
            v33 = v34;
        v2 = (float)v33;
        if (v2 == 0.0f)
        {
            v6 = 0.0f;
            v7 = 0.0f;
            v8 = 1.0;
        }
        else
        {
            v35 = 1.0 / v2;
            v6 = (float)(v35 * *(float *)v32);
            v7 = (float)(v35 * *(float *)&v32[1]);
            v8 = (float)(v35 * *(float *)&v32[2]);
        }
        v9 = v0 * v6;
        v10 = v0 * v7;
        v11 = v0 * v8;
        v15 = v12 + v9;
        v16 = v13 + v10;
        v17 = v14 + v11;
        if (v21)
        {
            sub_488460(&v12, &v15, 0, 1, *v19->field_208, &v1);
            *(float *)&idx->field_0 = v3;
            *(float *)&idx->field_4 = v4;
            v26 = v5;
        }
        else
        {
            *(float *)&idx->field_0 = v15;
            *(float *)&idx->field_4 = v16;
            v26 = v17;
        }
    }
    idx->field_8 = (float)v26;
    return idx;
}

