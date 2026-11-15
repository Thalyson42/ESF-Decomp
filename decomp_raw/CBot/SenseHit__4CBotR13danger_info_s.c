// SenseHit__4CBotR13danger_info_s @0x176ba0 size=257
typedef struct st_576ba0_3 {
    float field_0;
    float field_4;
    char padding_8[4];
    float field_c;
    float field_10;
    char padding_14[4];
    short field_18;
} st_576ba0_3;

typedef struct st_576ba0_1 {
    char padding_0[2564];
    struct st_576ba0_0 *field_a04;
    char padding_a08[176];
    float field_ab8;
} st_576ba0_1;

typedef struct st_576ba0_0 {
    char padding_0[38];
    unsigned short field_26;
    unsigned short field_28;
    char padding_2a[4];
    unsigned short field_2e;
    unsigned short field_30;
    char padding_32[2];
    unsigned int field_34;
} st_576ba0_0;

typedef struct st_576ba0_2 {
    float field_0;
} st_576ba0_2;

extern st_576ba0_2 *gpGlobals;

st_576ba0_0 * SenseHit__4CBotR13danger_info_s(st_576ba0_1 *a0, st_576ba0_3 *a1)
{
    double v3;  // mm7
    st_576ba0_0 *v4;  // eax
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    if (*(float *)gpGlobals - 0.5 >= a0->field_ab8)
        return v4;
    a1->field_18 = 175;
    if (!a0->field_a04->field_34)
    {
        v3 = (double)a1->field_18 * 0.8500000238418579;
    }
    else if (a0->field_a04->field_34 == 2)
    {
        v3 = (double)a1->field_18 * 1.25;
    }
    else
    {
        a1->field_0 = (float)((double)a0->field_a04->field_26 * 1.75);
        a1->field_4 = (float)((double)a0->field_a04->field_28 * 0.20000000298023224);
        *(float *)a1->padding_8 = 0.009999999776482582f;
        a1->field_c = (float)((double)a0->field_a04->field_30 * 0.30000001192092896);
        v4 = a0->field_a04;
        a1->field_10 = (float)(0.30000001192092896 * (double)v4->field_2e);
        memset(a1 + 1, 0, 3);
        a0->field_ab8 = 0;
        return v4;
    }
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)v3;
    a1->field_18 = v0;
    a1->field_0 = (float)((double)a0->field_a04->field_26 * 1.75);
    a1->field_4 = (float)((double)a0->field_a04->field_28 * 0.20000000298023224);
    *(float *)a1->padding_8 = 0.009999999776482582f;
    a1->field_c = (float)((double)a0->field_a04->field_30 * 0.30000001192092896);
    v4 = a0->field_a04;
    a1->field_10 = (float)(0.30000001192092896 * (double)v4->field_2e);
    memset(a1 + 1, 0, 3);
    a0->field_ab8 = 0;
    return v4;
}

