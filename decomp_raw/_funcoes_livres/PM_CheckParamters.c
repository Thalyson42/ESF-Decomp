// PM_CheckParamters @0x193500 size=585
typedef struct st_593500_1 {
    char padding_0[100];
    float field_64;
    float field_68;
} st_593500_1;

typedef struct st_593500_0 {
    char padding_0[68];
    unsigned int field_44;
    float field_48;
    float field_4c;
    unsigned int field_50;
    float field_54;
    float field_58;
    char field_5c;
    char padding_5d[67];
    float field_a0;
    float field_a4;
    float field_a8;
    char padding_ac[12];
    unsigned int field_b8;
    char padding_bc[20];
    unsigned int field_d0;
    char padding_d4[288];
    float field_1f4;
    float field_1f8;
    char padding_1fc[283232];
    float field_4545c;
    float field_45460;
    float field_45464;
    float field_45468;
    float field_4546c;
    float field_45470;
    char padding_45474[41084];
    struct st_593500_1 *field_4f4f0;
} st_593500_0;

extern st_593500_0 *pmove;

double PM_CheckParamters(void)
{
    double v5;  // mm7
    double v6;  // mm6
    double v7;  // mm6
    float v8;  // 128
    double v9;  // mm7
    float v0;  // [bp-0x28]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]
    float v3;  // [bp-0x1c]

    v5 = pmove->field_45468 * pmove->field_45468 + pmove->field_4546c * pmove->field_4546c + pmove->field_45470 * pmove->field_45470;
    v6 = sqrt(v5);
    if (isnan(v6))
        sub_487dc0(*(unsigned int *)&v5);
    else
        v5 = v6;
    v0 = (float)v5;
    v7 = pmove->field_1f8;
    if (v7 >= pmove->field_1f4)
        v7 = pmove->field_1f4;
    pmove->field_1f4 = (float)v7;
    if (v0 > pmove->field_1f4)
    {
        v8 = pmove->field_1f4 / v0;
        pmove->field_45468 = v8 * pmove->field_45468;
        pmove->field_4546c = v8 * pmove->field_4546c;
        pmove->field_45470 = v8 * pmove->field_45470;
    }
    if (pmove->field_b8 & 0x1001000 || pmove->field_d0)
        memset(&pmove->field_45468, 0, 12);
    sub_48a260(&pmove->field_a0);
    if (!pmove->field_d0)
    {
        v1 = pmove->field_4545c;
        v2 = pmove->field_45460;
        v3 = pmove->field_45464;
        v1 += pmove->field_a0;
        v2 += pmove->field_a4;
        v3 += pmove->field_a8;
        sub_48b350(&v1, &pmove->field_5c, pmove->field_4f4f0->field_64, pmove->field_4f4f0->field_68);
        pmove->field_4c = (float)(pmove->field_4f4f0->field_64 * 4.0);
        *(float *)&pmove->field_44 = v1;
        pmove->field_48 = v2;
    }
    else
    {
        *(float *)&pmove->field_44 = *(float *)&pmove->field_50;
        pmove->field_48 = pmove->field_54;
        pmove->field_4c = pmove->field_58;
    }
    if (pmove->field_d0)
        *(float *)&pmove->padding_5d[43] = -8.0f;
    v9 = 180.0;
    if (180.0 < pmove->field_48)
    {
        v9 = pmove->field_48 - 360.0;
        pmove->field_48 = (float)v9;
    }
    return v9;
}

