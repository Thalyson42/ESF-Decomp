// PM_WaterMove @0x190470 size=870
typedef struct st_590470_2 {
    unsigned int field_0;
} st_590470_2;

typedef struct st_590470_1 {
    char padding_0[16];
    float field_10;
    char padding_14[8];
    float field_1c;
    char padding_20[16];
    float field_30;
} st_590470_1;

typedef struct st_590470_0 {
    char padding_0[16];
    float field_10;
    char padding_14[36];
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    char padding_44[24];
    float field_5c;
    float field_60;
    float field_64;
    char padding_68[12];
    float field_74;
    float field_78;
    float field_7c;
    char padding_80[68];
    float field_c4;
    char padding_c8[300];
    float field_1f4;
    char padding_1f8[283248];
    float field_45468;
    float field_4546c;
    float field_45470;
    char padding_45474[41084];
    struct st_590470_1 *field_4f4f0;
    char padding_4f4f4[140];
    struct st_590470_2 *field_4f580;
} st_590470_0;

extern st_590470_0 *pmove;

double PM_WaterMove(void)
{
    int idx;  // ecx
    double v26;  // mm7
    float v27;  // 128
    float v28;  // 128
    float v29;  // 120
    double v30;  // mm7
    double v31;  // mm7
    int index;  // ecx
    unsigned int *v33;  // edx
    double v34;  // mm7
    float v0;  // [bp-0x120]
    float v1;  // [bp-0x11c]
    double v2;  // [bp-0x118], Other Possible Types: float
    char v3;  // [bp-0x104], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0x100]
    unsigned int v5;  // [bp-0xf0]
    unsigned int v6;  // [bp-0xec]
    double v7;  // [bp-0xe8]
    float v8;  // [bp-0xa4]
    float v9;  // [bp-0xa0]
    float v10;  // [bp-0x9c]
    char v11;  // [bp-0x84], Other Possible Types: unsigned int
    unsigned int v12;  // [bp-0x80]
    float v13;  // [bp-0x7c]
    unsigned int v14;  // [bp-0x64]
    unsigned int v15;  // [bp-0x60]
    float v16;  // [bp-0x5c]
    float v17;  // [bp-0x44]
    unsigned int v18;  // [bp-0x40]
    float v19;  // [bp-0x3c]
    char v20;  // [bp-0x24]
    float v21;  // [bp-0x24]
    unsigned int v22;  // [bp-0x20]
    float v23;  // [bp-0x1c]

    idx = 0;
    do
    {
        (&v21)[idx] = *(float *)&pmove->padding_14[4 * idx] * pmove->field_45468 + *(float *)&pmove->padding_14[12 + 4 * idx] * pmove->field_4546c;
        idx += 1;
    } while (idx <= 2);
    if (pmove->field_45468 == 0.0f && pmove->field_4546c == 0.0f)
    {
        if (pmove->field_45470 != 0.0f)
            goto LABEL_59050b;
        v26 = v23 - 60.0;
    }
    else
    {
LABEL_59050b:
        v26 = v23 + pmove->field_45470;
    }
    v23 = (float)v26;
    v17 = v21;
    v18 = v22;
    v19 = v23;
    VectorNormalize(&v17);
    v2 = v19;
    if (v19 > pmove->field_1f4)
    {
        VectorScale(&v20, pmove->field_1f4 / v19, &v20);
        v2 = pmove->field_1f4;
    }
    v2 = (float)(0.8 * v2);
    v27 = pmove->field_5c + pmove->field_74;
    pmove->field_5c = v27;
    pmove->field_60 = pmove->field_60 + pmove->field_78;
    pmove->field_64 = pmove->field_64 + pmove->field_7c;
    v8 = v27;
    v9 = pmove->field_60;
    v28 = pmove->field_64;
    v10 = v28;
    VectorNormalize(&v8);
    v29 = v28;
    if (v29 != 0.0f)
    {
        v1 = v29 - v28 * pmove->field_10 * pmove->field_4f4f0->field_1c * pmove->field_c4;
        if (v1 < 0.0f)
        {
            v30 = v29;
            v1 = 0.0f;
        }
        else
        {
            v30 = v29;
        }
        VectorScale(&pmove->field_5c, (float)(v1 / v30), &pmove->field_5c);
    }
    else
    {
        v1 = 0;
    }
    if (v2 < 0.10000000149011612f)
        return v2;
    v0 = (float)(v2 - v1);
    if (0.0 < v0)
    {
        VectorNormalize(&v20);
        v31 = v2 * pmove->field_4f4f0->field_10 * pmove->field_10 * pmove->field_c4;
        if (v31 > v0)
            v31 = v0;
        index = 0;
        do
        {
            v33 = &pmove->field_5c;
            *(float *)&v33[index] = (float)(v31 * (&v21)[index] + *(float *)&v33[index]);
            index += 1;
        } while (index <= 2);
    }
    VectorMA(&pmove->field_38, pmove->field_10, &pmove->field_5c, &v11);
    v14 = v11;
    v15 = v12;
    v16 = v13;
    v34 = 1.0 + pmove->field_4f4f0->field_30 + v16;
    v16 = (float)v34;
    pmove->field_4f580(&v3, &v14, &v11, 0, 0xffffffff);
    if (!v4 && !v3)
    {
        pmove->field_38 = v5;
        pmove->field_3c = v6;
        *(double *)&pmove->field_40 = v7;
        return v7;
    }
    PM_FlyMove();
    return v34;
}

