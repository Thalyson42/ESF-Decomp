// Setup__9CFuncPlat @0xe8b70 size=408
typedef struct st_4e8b70_1 {
    struct st_4e8b70_0 *field_0;
    char padding_4[144];
    unsigned int field_94;
    unsigned int field_98;
    unsigned int field_9c;
    unsigned int field_a0;
    unsigned int field_a4;
    unsigned int field_a8;
    unsigned int field_ac;
    float field_b0;
    char padding_b4[28];
    unsigned int field_d0;
    char padding_d4[52];
    unsigned int field_108;
} st_4e8b70_1;

typedef struct st_4e8b70_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[60];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[92];
    unsigned int field_b8;
    char padding_bc[32];
    char field_dc;
    char padding_dd[11];
    char field_e8;
    char padding_e9[19];
    unsigned int field_fc;
    char padding_100[8];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[232];
    unsigned int field_1f8;
    char padding_1fc[12];
    unsigned int field_208;
} st_4e8b70_0;

typedef struct st_4e8b70_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4e8b70_2;

typedef struct st_4e8b70_3 {
    unsigned int field_0;
} st_4e8b70_3;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;
extern st_4e8b70_3 *g_6167c8;
extern st_4e8b70_2 *gpGlobals;

char Setup__9CFuncPlat(st_4e8b70_1 *a0)
{
    st_4e8b70_0 *v0;  // ecx
    st_4e8b70_0 *v1;  // edx
    st_4e8b70_0 *v2;  // edx

    if (*(float *)&a0->field_98 == 0.0f)
        *(float *)&a0->field_98 = 80.0f;
    if (*(float *)&a0->field_94 == 0.0f)
        *(float *)&a0->field_94 = 10.0f;
    v0 = a0->field_0;
    v0->field_50 = g_vecZero;
    v0->field_54 = g_616790;
    v0->field_58 = g_616794;
    a0->field_0->field_10c = 4;
    a0->field_0->field_108 = 7;
    sub_48db50(a0->field_0, &a0->field_0->field_8);
    v1 = a0->field_0;
    sub_48a0d0(v1, &v1->field_dc, &v1->field_e8);
    g_6167c8(a0->field_0->field_208, a0->field_0->field_b8 + gpGlobals->field_98);
    v2 = a0->field_0;
    a0->field_9c = v2->field_8;
    a0->field_a0 = v2->field_c;
    a0->field_a4 = v2->field_10;
    a0->field_a8 = v2->field_8;
    a0->field_ac = v2->field_c;
    *(unsigned int *)&a0->field_b0 = v2->field_10;
    a0->field_b0 = (float)(0.0 == *(float *)&a0->field_d0 ? *(float *)&a0->field_0->field_10 - *(float *)&a0->field_0->field_fc + 8.0 : *(float *)&v2->field_10 - *(float *)&a0->field_d0);
    if (*(float *)&a0->field_0->field_1f8 == 0.0f)
        *(float *)&a0->field_0->field_1f8 = 150.0f;
    if (*(float *)&a0->field_108 == 0.0f)
        *(float *)&a0->field_108 = 0.8500000238418579f;
    return 0;
}

