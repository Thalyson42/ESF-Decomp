// Spawn__7CShower @0xb9bb0 size=443
typedef struct st_4b9bb0_3 {
    char padding_0[8];
    struct st_4b9bb0_1 *field_8;
    char padding_c[352];
    struct st_4b9bb0_1 *field_16c;
} st_4b9bb0_3;

typedef struct st_4b9bb0_1 {
    unsigned int field_0;
} st_4b9bb0_1;

typedef struct st_4b9bb0_4 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[168];
    unsigned int field_b4;
    unsigned int field_b8;
    unsigned int field_bc;
    char padding_c0[8];
    char field_c8;
    char padding_c9[239];
    unsigned int field_1b8;
} st_4b9bb0_4;

typedef struct st_4b9bb0_0 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[36];
    float field_50;
    float field_54;
    float field_58;
    char padding_5c[168];
    float field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    char field_118;
    char padding_119[239];
    unsigned int field_208;
} st_4b9bb0_0;

typedef struct st_4b9bb0_2 {
    float field_0;
} st_4b9bb0_2;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;
extern st_4b9bb0_3 g_engfuncs;
extern st_4b9bb0_1 *g_61692c;
extern st_4b9bb0_2 *gpGlobals;

int Spawn__7CShower(double a0, double a1, double a2, double a3, st_4b9bb0_0 **a4)
{
    st_4b9bb0_0 *v6;  // esi
    st_4b9bb0_4 *v7;  // edx
    double v8;  // mm7
    double v9;  // mm7
    st_4b9bb0_0 *v10;  // edx
    st_4b9bb0_0 *v11;  // edx
    st_4b9bb0_3 *v0;  // [bp-0x40]
    float v1;  // [bp-0x3c]
    float v2;  // [bp-0x38]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v6 = *a4;
    v2 = 200.0f;
    g_61692c(200.0f, 300.0f);
    v7 = &*a4->field_50;
    v3 = (float)(200.0 * *a4->field_50);
    v8 = 200.0 * *(float *)&v7->field_8;
    v4 = (float)(200.0 * *(float *)&v7->field_4);
    v5 = (float)v8;
    v6->field_20 = v3;
    v6->field_24 = v4;
    v6->field_28 = v5;
    g_61692c(0xc2c80000, 0x42c80000);
    v9 = v8 + *a4->field_20;
    *a4->field_20 = (float)v9;
    g_61692c(0xc2c80000, 0x42c80000);
    *a4->field_24 = (float)(v9 + *a4->field_24);
    v10 = *a4;
    if (0.0 <= v10->field_28)
        v10->field_28 = v2 + v10->field_28;
    else
        *a4->field_28 = (float)(*a4->field_28 - 200.0);
    *a4->field_108 = 10;
    v1 = 0.5f;
    *(float *)&*a4->padding_119[3] = 0.5f;
    *a4->field_104 = (float)(0.1 + *(float *)gpGlobals);
    *a4->field_10c = 0;
    v0 = &g_engfuncs.padding_0[0];
    v0->field_8(*a4->field_208, "models/grenade.mdl");
    sub_48a0d0(*a4, &g_vecZero, &g_vecZero);
    *a4->field_118 = *a4->field_118 | 128;
    v0->field_16c(v1, 1.5f);
    *(float *)&*a4->padding_119[223] = 1.5f;
    v11 = *a4;
    *(unsigned int *)&v11->field_50 = g_vecZero;
    *(unsigned int *)&v11->field_54 = g_616790;
    *(unsigned int *)&v11->field_58 = g_616794;
    return g_616794;
}

