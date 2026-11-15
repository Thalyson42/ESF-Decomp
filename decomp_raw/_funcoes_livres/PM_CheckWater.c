// PM_CheckWater @0x191210 size=479
typedef struct st_591210_1 {
    unsigned int field_0;
} st_591210_1;

typedef struct st_591210_0 {
    char padding_0[56];
    float field_38;
    float field_3c;
    float field_40;
    char padding_44[48];
    char field_74;
    char padding_75[19];
    float field_88;
    char padding_8c[48];
    unsigned int field_bc;
    char padding_c0[36];
    int field_e4;
    unsigned int field_e8;
    char padding_ec[324616];
    float field_4f4f4;
    float field_4f4f8;
    float field_4f4fc;
    char padding_4f500[36];
    float field_4f524;
    float field_4f528;
    float field_4f52c;
    char padding_4f530[68];
    struct st_591210_1 *field_4f574;
} st_591210_0;

extern st_591210_0 *pmove;
extern char current_table.283;

int PM_CheckWater(void)
{
    unsigned int v7;  // eax
    unsigned int v8;  // eax
    unsigned int v9;  // edx
    unsigned int v10;  // edx
    double v0;  // [bp-0x44]
    char v1;  // [bp-0x3c], Other Possible Types: unsigned int
    float v2;  // [bp-0x28]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v7 = pmove->field_bc * 3;
    v0 = 0.5;
    v3 = (float)(((&pmove->field_4f4f4)[v7] + (&pmove->field_4f524)[v7]) * 0.5 + pmove->field_38);
    v8 = pmove->field_bc * 3;
    v4 = (float)(0.5 * ((&pmove->field_4f4f8)[v8] + (&pmove->field_4f528)[v8]) + pmove->field_3c);
    v5 = (float)(pmove->field_40 + (&pmove->field_4f4fc)[3 * pmove->field_bc] + 1.0);
    pmove->field_e4 = 0;
    pmove->field_e8 = 0xffffffff;
    v9 = pmove->field_4f574(&v3, &v1);
    if (v9 + 14 > 11)
        return pmove->field_e4 > 1;
    pmove->field_e8 = v9;
    pmove->field_e4 = 1;
    v10 = pmove->field_bc * 3;
    v2 = (float)(((&pmove->field_4f4fc)[v10] + (&pmove->field_4f52c)[v10]) * v0);
    v5 = v2 + pmove->field_40;
    if (pmove->field_4f574(&v3, 0) + 14 <= 11)
    {
        pmove->field_e4 = 2;
        v5 = pmove->field_40 + pmove->field_88;
        if (pmove->field_4f574(&v3, 0) + 14 <= 11)
            pmove->field_e4 = 3;
    }
    if (v1 + 14 <= 5)
    {
        v2 = (float)((double)pmove->field_e4 * 50.0);
        sub_48c590(&pmove->field_74, v2, &(&current_table.283)[0xbffffff94 + -12 * v1], &pmove->field_74);
    }
    return pmove->field_e4 > 1;
}

