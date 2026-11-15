// PM_AirMove @0x191090 size=324
typedef struct st_591090_0 {
    char padding_0[20];
    float field_14;
} st_591090_0;

typedef struct st_591090_1 {
    char padding_0[20];
    char field_14;
    char padding_15[7];
    unsigned int field_1c;
    char field_20;
    char padding_21[7];
    unsigned int field_28;
    char padding_2c[48];
    float field_5c;
    float field_60;
    float field_64;
    char padding_68[12];
    float field_74;
    float field_78;
    float field_7c;
    char padding_80[372];
    float field_1f4;
    char padding_1f8[283248];
    float field_45468;
    float field_4546c;
    char padding_45470[41088];
    struct st_591090_0 *field_4f4f0;
} st_591090_1;

extern st_591090_1 *pmove;

int PM_AirMove(double a0, double a1, double a2)
{
    int idx;  // ecx
    float v11;  // 128
    float v0;  // [bp-0x64]
    float v1;  // [bp-0x4c]
    float v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x44]
    unsigned int v4;  // [bp-0x40]
    unsigned int v5;  // [bp-0x3c]
    char v6;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v7;  // [bp-0x20]
    unsigned int v8;  // [bp-0x1c]

    v2 = pmove->field_45468;
    v1 = pmove->field_4546c;
    pmove->field_1c = 0;
    pmove->field_28 = 0;
    sub_489290(&pmove->field_14);
    sub_489290(&pmove->field_20);
    idx = 0;
    do
    {
        *(float *)&(&v6)[idx] = v2 * *(float *)&(&pmove->field_14)[4 * idx] + v1 * *(float *)&(&pmove->field_20)[4 * idx];
        idx += 1;
    } while (idx <= 1);
    v8 = 0;
    v3 = v6;
    v11 = *(float *)&v7;
    *(float *)&v4 = v11;
    v5 = 0;
    sub_489290(&v3);
    if (v11 > pmove->field_1f4)
    {
        sub_48d230(&v6, pmove->field_1f4 / v11, &v6);
        v11 = pmove->field_1f4;
    }
    v0 = pmove->field_4f4f0->field_14;
    sub_48c800(&v3, v11, v0);
    pmove->field_5c = pmove->field_5c + pmove->field_74;
    pmove->field_60 = pmove->field_60 + pmove->field_78;
    pmove->field_64 = pmove->field_64 + pmove->field_7c;
    return sub_48dbe0(&v3, v11, v0);
}

