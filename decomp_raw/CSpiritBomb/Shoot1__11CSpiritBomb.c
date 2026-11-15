// Shoot1__11CSpiritBomb @0x120ea0 size=924
typedef struct st_520ea0_3 {
    struct st_520ea0_0 *field_0;
    char padding_4[92];
    struct st_520ea0_1 *field_60;
    char padding_64[720];
    unsigned int field_334;
    char padding_338[48];
    unsigned int field_368;
    char padding_36c[1000];
    unsigned int field_754;
} st_520ea0_3;

typedef struct st_520ea0_7 {
    struct st_520ea0_0 *field_0;
    char padding_4[124];
    struct st_520ea0_3 *field_80;
    char padding_84[64];
    int field_c4;
    struct st_520ea0_6 *field_c8;
    unsigned int field_cc;
} st_520ea0_7;

typedef struct st_520ea0_2 {
    unsigned int field_0;
} st_520ea0_2;

typedef struct st_520ea0_1 {
    char padding_0[480];
    struct st_520ea0_2 *field_1e0;
} st_520ea0_1;

typedef struct st_520ea0_5 {
    char padding_0[508];
    struct st_520ea0_2 *field_1fc;
} st_520ea0_5;

typedef struct st_520ea0_0 {
    char padding_0[520];
    int field_208;
} st_520ea0_0;

typedef struct st_520ea0_4 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    unsigned int field_208;
} st_520ea0_4;

typedef struct st_520ea0_6 {
    struct st_520ea0_4 *field_0;
    char padding_4[92];
    struct st_520ea0_5 *field_60;
} st_520ea0_6;

typedef struct st_520ea0_8 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_520ea0_8;

extern unsigned int gmsgRemoveEffect;
extern st_520ea0_2 *g_616878;
extern st_520ea0_2 *g_61687c;
extern st_520ea0_2 *g_616888;
extern st_520ea0_2 *g_6168dc;
extern st_520ea0_8 *gpGlobals;

double Shoot1__11CSpiritBomb(st_520ea0_7 *a0)
{
    unsigned int *v21;  // edx
    double v22;  // mm5
    double v23;  // mm5
    unsigned int *v24;  // edx
    double v25;  // mm7
    double v26;  // mm6
    double v27;  // mm7
    unsigned int v0;  // [bp-0xec]
    float v1;  // [bp-0xc4]
    float v2;  // [bp-0xc0]
    float v3;  // [bp-0xbc]
    float v4;  // [bp-0xb8]
    float v5;  // [bp-0xb4]
    float v6;  // [bp-0xb0]
    float v7;  // [bp-0xa4]
    float v8;  // [bp-0xa0]
    float v9;  // [bp-0x9c]
    char v10;  // [bp-0x84]
    float v11;  // [bp-0x70]
    float v12;  // [bp-0x6c]
    float v13;  // [bp-0x68]
    char v14;  // [bp-0x44]
    float v15;  // [bp-0x44]
    float v16;  // [bp-0x40]
    float v17;  // [bp-0x3c]
    float v18;  // [bp-0x24]
    float v19;  // [bp-0x20]
    float v20;  // [bp-0x1c]

    a0->field_80->field_754 = 0x3f800000;
    a0->field_80->field_334 = 0;
    a0->field_80->field_368 = 0;
    a0->field_cc = 0;
    sub_48c680(a0->field_80, 0);
    g_616878(2, gmsgRemoveEffect, 0, 0);
    v0 = g_6168dc(a0->field_c8->field_0->field_208);
    g_616888(v0);
    g_61687c(v0);
    if (a0->field_c4 <= 29)
    {
        a0->field_c8->field_60->field_1fc(a0->field_c8);
        a0->field_c8 = NULL;
        sub_489390(a0->field_80->field_0->field_208, 2, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        return 0.800000011920929;
    }
    sub_48d4f0(a0->field_80, "spiritbomb_shoot.wav");
    sub_489390(a0->field_80->field_0->field_208, 1, "weapons/spiritbomb_fire.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    sub_48a800(&a0->field_80->field_0->padding_0[116]);
    v21 = &gpGlobals->field_28;
    v18 = gpGlobals->field_28;
    v19 = *(float *)&v21[1];
    v20 = *(float *)&v21[2];
    a0->field_80->field_60->field_1e0(&v14, a0->field_80);
    v22 = 8192.0 * v18;
    v1 = (float)v22;
    v23 = 8192.0 * v19;
    v2 = (float)v23;
    v3 = (float)(8192.0 * v20);
    v7 = (float)(v22 + v15);
    v8 = (float)(v23 + v16);
    v9 = v17 + v3;
    sub_487b80(&v14, &v7, 0, a0->field_0->field_208, &v10);
    v24 = &a0->field_c8->field_0->field_8;
    v1 = v11 - a0->field_c8->field_0->field_8;
    v2 = v12 - *(float *)&v24[1];
    v3 = v13 - *(float *)&v24[2];
    v18 = v1;
    v19 = v2;
    v20 = v3;
    sub_48d680(a0->field_80, 5);
    v25 = v18 * v18 + v19 * v19 + v20 * v20;
    v26 = sqrt(v25);
    if (isnan(v26))
        sub_487dc0(*(unsigned int *)&v25);
    else
        v25 = v26;
    v8 = (float)v25;
    if (v8 == 0.0f)
    {
        v4 = 0.0f;
        v5 = 0.0f;
        v6 = 1.0;
    }
    else
    {
        v27 = 1.0 / v8;
        v4 = (float)(v27 * v18);
        v5 = (float)(v27 * v19);
        v6 = (float)(v27 * v20);
    }
    v1 = (float)(1000.0 * v4);
    v2 = (float)(1000.0 * v5);
    v3 = (float)(1000.0 * v6);
    sub_4890b0(a0->field_c8, &v1, a0->field_c4 * 3);
    return 1000.0 * v6;
}

