// PM_Friction @0x190180 size=520
typedef struct st_590180_3 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[84];
    unsigned int field_60;
    char padding_64[4];
    unsigned int field_68;
    char padding_6c[4];
    unsigned int field_70;
    char padding_74[16];
    unsigned int field_84;
    char padding_88[324620];
    struct st_590180_4 *field_4f494;
} st_590180_3;

typedef struct st_590180_4 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[20];
    unsigned int field_1c;
    unsigned int field_20;
} st_590180_4;

typedef struct st_590180_2 {
    unsigned int field_0;
} st_590180_2;

typedef struct st_590180_1 {
    char padding_0[4];
    float field_4;
    char padding_8[20];
    float field_1c;
    float field_20;
} st_590180_1;

typedef struct st_590180_0 {
    char padding_0[16];
    float field_10;
    char padding_14[36];
    float field_38;
    float field_3c;
    float field_40;
    char padding_44[24];
    float field_5c;
    float field_60;
    float field_64;
    char padding_68[84];
    unsigned int field_bc;
    char padding_c0[4];
    float field_c4;
    char padding_c8[4];
    float field_cc;
    char padding_d0[16];
    unsigned int field_e0;
    char padding_e4[324620];
    struct st_590180_1 *field_4f4f0;
    char padding_4f4f4[8];
    float field_4f4fc;
    char padding_4f500[128];
    struct st_590180_2 *field_4f580;
} st_590180_0;

extern st_590180_0 *pmove;

float PM_Friction(void)
{
    st_590180_3 *v14;  // esi
    double v15;  // mm7
    double v16;  // mm6
    double v17;  // mm6
    double v18;  // mm7
    double v19;  // mm7
    double v20;  // mm7
    double v21;  // mm6
    float v0;  // [bp-0xdc]
    float v1;  // [bp-0xd8]
    char v2;  // [bp-0xd4]
    float v3;  // [bp-0xc4]
    float v4;  // [bp-0x74]
    float v5;  // [bp-0x70]
    float v6;  // [bp-0x6c]
    float v7;  // [bp-0x54]
    float v8;  // [bp-0x50]
    float v9;  // [bp-0x4c]
    float v10;  // [bp-0x24]
    float v11;  // [bp-0x20]
    float v12;  // [bp-0x1c]

    if (pmove->field_cc != 0.0f)
        return pmove->field_cc;
    v14 = &pmove->field_5c;
    v15 = pmove->field_5c * pmove->field_5c + *(float *)&v14->field_4 * *(float *)&v14->field_4 + *(float *)&v14->field_8 * *(float *)&v14->field_8;
    v16 = sqrt(v15);
    if (isnan(v16))
        sub_487dc0(*(unsigned int *)&v15);
    else
        v15 = v16;
    v1 = (float)v15;
    if (v1 < 0.10000000149011612f)
        return v1;
    v0 = 0;
    if (pmove->field_e0 != 0xffffffff)
    {
        v17 = *(float *)&v14->field_0 / v1 * 16.0 + pmove->field_38;
        v4 = (float)v17;
        v7 = (float)v17;
        v18 = 16.0 * *(float *)&v14->field_4 / v1 + pmove->field_3c;
        v5 = (float)v18;
        v8 = (float)v18;
        v9 = pmove->field_40 + (&pmove->field_4f4fc)[3 * pmove->field_bc];
        v6 = (float)(v9 - 34.0);
        pmove->field_4f580(&v2, &v7, &v4, 0, 0xffffffff);
        v0 = (float)((1.0 == v3 ? pmove->field_4f4f0->field_1c * pmove->field_4f4f0->field_20 : pmove->field_4f4f0->field_1c) * pmove->field_c4 * (v1 < pmove->field_4f4f0->field_4 ? pmove->field_4f4f0->field_4 : v1) * pmove->field_10 + v0);
    }
    v19 = v1 - v0;
    if (0.0 > v19)
        v19 = 0.0;
    v20 = v19 / v1;
    v21 = v20 * *(float *)&v14->field_0;
    v10 = (float)v21;
    v11 = (float)(v20 * *(float *)&v14->field_4);
    v12 = (float)(v20 * *(float *)&v14->field_8);
    pmove->field_5c = (float)v21;
    pmove->field_60 = v11;
    pmove->field_64 = v12;
    return v12;
}

