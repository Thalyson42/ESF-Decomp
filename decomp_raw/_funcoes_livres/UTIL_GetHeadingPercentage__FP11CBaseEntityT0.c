// UTIL_GetHeadingPercentage__FP11CBaseEntityT0 @0x17ea20 size=619
typedef struct st_57ea20_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_57ea20_0;

typedef struct st_57ea20_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
} st_57ea20_1;

double UTIL_GetHeadingPercentage__FP11CBaseEntityT0(st_57ea20_0 **a0, st_57ea20_1 **a1)
{
    unsigned int *v26;  // edx
    double v27;  // mm7
    double v36;  // mm6
    unsigned int *v37;  // edx
    float v38;  // 112
    float v39;  // 112
    float v40;  // 112
    double v41;  // mm7
    double v42;  // mm6
    unsigned int *v43;  // edx
    double v44;  // mm7
    double v45;  // mm6
    double v28;  // mm6
    double v29;  // mm7
    unsigned int *v30;  // edx
    unsigned int *v31;  // edx
    float v32;  // 112
    float v33;  // 112
    float v34;  // 112
    double v35;  // mm7
    int v0;  // [bp-0xb0]
    float v1;  // [bp-0x94]
    float v2;  // [bp-0x90]
    int v3;  // [bp-0x8c]
    unsigned short v4;  // [bp-0x88]
    unsigned short v5;  // [bp-0x86]
    float v6;  // [bp-0x84]
    float v7;  // [bp-0x80]
    float v8;  // [bp-0x7c]
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    float v12;  // [bp-0x58]
    float v13;  // [bp-0x54]
    float v14;  // [bp-0x50]
    float v15;  // [bp-0x44]
    float v16;  // [bp-0x40]
    float v17;  // [bp-0x3c]
    float v18;  // [bp-0x24]
    char v19;  // [bp-0x24]
    float v20;  // [bp-0x20]
    float v21;  // [bp-0x1c]
    float v22;  // [bp-0x18]
    float v23;  // [bp-0x14]
    float v24;  // [bp-0x10]
    float v25;  // [bp-0xc]

    if (a0 && a1)
    {
        v26 = &*a1->field_20;
        v27 = *a1->field_20 * *a1->field_20 + *(float *)&v26[1] * *(float *)&v26[1] + *(float *)&v26[2] * *(float *)&v26[2];
        v28 = sqrt(v27);
        if (isnan(v28))
            sqrt(*(unsigned int *)&v27);
        else
            v27 = v28;
        v22 = (float)v27;
        v29 = v22;
        if (v29 != 0.0)
        {
            *(unsigned short *)&v0 = 0;
            PredictEntityPos(&v19, a1, 0.009999999776482582f, v0);
            v30 = &*a0->field_8;
            v22 = *a0->field_8;
            v23 = *(float *)&v30[1];
            v24 = *(float *)&v30[2];
            v31 = &*a1->field_8;
            v15 = *a1->field_8;
            v16 = *(float *)&v31[1];
            v17 = *(float *)&v31[2];
            v32 = v15 - v22;
            v9 = v32;
            v33 = v16 - v23;
            v10 = v33;
            v34 = v17 - v24;
            v11 = v34;
            v35 = v32 * v32 + v33 * v33 + v34 * v34;
            v36 = sqrt(v35);
            if (isnan(v36))
                sqrt(*(unsigned int *)&v35);
            else
                v35 = v36;
            v2 = (float)v35;
            v37 = &*a0->field_8;
            v22 = *a0->field_8;
            v23 = *(float *)&v37[1];
            v24 = *(float *)&v37[2];
            v6 = v18;
            v7 = v20;
            v8 = v21;
            v38 = v6 - v22;
            v12 = v38;
            v39 = v7 - v23;
            v13 = v39;
            v40 = v8 - v24;
            v14 = v40;
            v41 = v38 * v38 + v39 * v39 + v40 * v40;
            v42 = sqrt(v41);
            if (isnan(v42))
                sqrt(*(unsigned int *)&v41);
            else
                v41 = v42;
            v1 = (float)v41;
            v29 = v1;
            if (v29 <= v2)
            {
                v43 = &*a1->field_20;
                v44 = *a1->field_20 * *a1->field_20 + *(float *)&v43[1] * *(float *)&v43[1] + *(float *)&v43[2] * *(float *)&v43[2];
                v45 = sqrt(v44);
                if (isnan(v45))
                    sqrt(*(unsigned int *)&v44);
                else
                    v44 = v45;
                v25 = (float)v44;
                v5 = __fnstcw();
                v4 = v5 | 0xc00;
                v3 = (int)((v2 - v1) / (v25 * 0.009999999776482582) * 100.0);
                return (v2 - v1) / (v25 * 0.009999999776482582) * 100.0;
            }
        }
    }
    return v29;
}

