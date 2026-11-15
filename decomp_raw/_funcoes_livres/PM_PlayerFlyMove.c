// PM_PlayerFlyMove @0x1907e0 size=729
typedef struct st_5907e0_2 {
    unsigned int field_0;
} st_5907e0_2;

typedef struct st_5907e0_1 {
    char padding_0[16];
    float field_10;
    char padding_14[8];
    float field_1c;
    char padding_20[16];
    float field_30;
} st_5907e0_1;

typedef struct st_5907e0_0 {
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
    char padding_68[92];
    float field_c4;
    char padding_c8[300];
    unsigned int field_1f4;
    char padding_1f8[283248];
    float field_45468;
    float field_4546c;
    float field_45470;
    char padding_45474[41084];
    struct st_5907e0_1 *field_4f4f0;
    char padding_4f4f4[140];
    struct st_5907e0_2 *field_4f580;
} st_5907e0_0;

extern st_5907e0_0 *pmove;

double PM_PlayerFlyMove(void)
{
    int idx;  // ecx
    double v26;  // 128
    float v27;  // 128
    float v28;  // 120
    double v29;  // mm7
    double v30;  // mm7
    int index;  // ecx
    unsigned int *v32;  // edx
    double v33;  // mm7
    float v0;  // [bp-0x110]
    float v1;  // [bp-0x10c]
    double v2;  // [bp-0x108]
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
    double v19;  // [bp-0x3c]
    char v20;  // [bp-0x24]
    float v21;  // [bp-0x24]
    unsigned int v22;  // [bp-0x20]
    double v23;  // [bp-0x1c], Other Possible Types: float

    idx = 0;
    do
    {
        (&v21)[idx] = *(float *)&pmove->padding_14[4 * idx] * pmove->field_45468 + *(float *)&pmove->padding_14[12 + 4 * idx] * pmove->field_4546c;
        idx += 1;
    } while (idx <= 2);
    v26 = v23 + pmove->field_45470;
    v23 = v26;
    v17 = v21;
    v18 = v22;
    v19 = v26;
    sub_489290(&v17);
    v2 = v26;
    if (v26 > *(float *)&pmove->field_1f4)
    {
        sub_48d230(&v20, *(float *)&pmove->field_1f4 / v26, &v20);
        v2 = *(float *)&pmove->field_1f4;
    }
    v8 = pmove->field_5c;
    v9 = pmove->field_60;
    v27 = pmove->field_64;
    v10 = v27;
    sub_489290(&v8);
    v28 = v27;
    if (v28 != 0.0f)
    {
        v1 = v28 - v27 * pmove->field_10 * pmove->field_4f4f0->field_1c * pmove->field_c4;
        if (v1 < 0.0f)
        {
            v29 = v28;
            v1 = 0.0f;
        }
        else
        {
            v29 = v28;
        }
        sub_48d230(&pmove->field_5c, (float)(v1 / v29), &pmove->field_5c);
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
        sub_489290(&v20);
        v30 = v2 * pmove->field_4f4f0->field_10 * pmove->field_10 * pmove->field_c4;
        if (v30 > v0)
            v30 = v0;
        index = 0;
        do
        {
            v32 = &pmove->field_5c;
            *(float *)&v32[index] = (float)(v30 * (&v21)[index] + *(float *)&v32[index]);
            index += 1;
        } while (index <= 2);
    }
    sub_48c590(&pmove->field_38, pmove->field_10, &pmove->field_5c, &v11);
    v14 = v11;
    v15 = v12;
    v16 = v13;
    v33 = 1.0 + pmove->field_4f4f0->field_30 + v16;
    v16 = (float)v33;
    pmove->field_4f580(&v3, &v14, &v11, 0, 0xffffffff);
    if (!v4 && !v3)
    {
        pmove->field_38 = v5;
        pmove->field_3c = v6;
        *(double *)&pmove->field_40 = v7;
        return v7;
    }
    sub_48dbe0();
    return v33;
}

