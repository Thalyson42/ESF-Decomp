// ShootBigBang__14CBigBangAttackP9entvars_sG6VectorT2ifsss @0x90450 size=1026
typedef struct st_490450_2 {
    unsigned int field_0;
} st_490450_2;

typedef struct st_490450_0 {
    unsigned int field_0;
    char padding_4[28];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[168];
    unsigned int field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[136];
    unsigned int field_198;
    char padding_19c[68];
    float field_1e0;
    char padding_1e4[36];
    unsigned int field_208;
} st_490450_0;

typedef struct st_490450_4 {
    char padding_0[520];
    unsigned int field_208;
} st_490450_4;

typedef struct st_490450_3 {
    struct st_490450_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_490450_1 *field_60;
    char padding_64[580];
    float field_2a8;
    char padding_2ac[36];
    unsigned int field_2d0;
    unsigned int field_2d4;
} st_490450_3;

typedef struct st_490450_1 {
    char padding_0[8];
    struct st_490450_2 *field_8;
} st_490450_1;

typedef struct st_490450_5 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_490450_5;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char NormalThink__12CMagicAttack;
extern unsigned int gmsgFlare;
extern st_490450_2 *g_6167c8;
extern st_490450_2 *g_616878;
extern st_490450_2 *g_61687c;
extern st_490450_2 *g_616888;
extern st_490450_2 *g_61688c;
extern st_490450_2 *g_616894;
extern st_490450_2 *g_6168dc;
extern st_490450_5 *gpGlobals;

short ShootBigBang__14CBigBangAttackP9entvars_sG6VectorT2ifsss(st_490450_4 *a0, float *a1, float *a2, unsigned int a3, float a4, short a5, short a6, short a7)
{
    st_490450_3 *v19;  // edi
    unsigned int v20;  // eax
    float *v29;  // edx
    float v30;  // 128
    double v31;  // mm7
    unsigned int v33;  // eax
    st_490450_0 *v21;  // edx
    float *v22;  // ecx
    double v23;  // mm7
    double v24;  // mm6
    st_490450_0 *v25;  // esi
    double v26;  // mm7
    double v27;  // mm6
    double v28;  // mm7
    float v0;  // [bp-0xc0]
    float v1;  // [bp-0x8c]
    float v2;  // [bp-0x88]
    int v3;  // [bp-0x7c]
    unsigned short v4;  // [bp-0x78]
    unsigned short v5;  // [bp-0x76]
    float v6;  // [bp-0x68]
    float v7;  // [bp-0x54]
    float v8;  // [bp-0x50]
    float v9;  // [bp-0x4c]
    unsigned int v10;  // [bp-0x24]
    float v11;  // [bp-0x24]
    float v12;  // [bp-0x20]
    unsigned int v13;  // [bp-0x20]
    float v14;  // [bp-0x1c]
    unsigned int v15;  // [bp-0x1c]
    float v16;  // [bp-0x18]
    float v17;  // [bp-0x14]
    float v18;  // [bp-0x10]

    v19 = sub_4888b0(0);
    v19->field_60->field_8(v19);
    v19->field_0->field_108 = 5;
    v19->field_0->field_10c = 1;
    g_6167c8(v19->field_0->field_208, "sprites/null.spr");
    v19->field_2d4 = 0;
    v19->field_2d0 = 6;
    v20 = a3;
    if ((int)v20 > 9999)
        v20 = 9999;
    v10 = v20;
    v19->field_0->field_1e0 = (float)(int)v10;
    v21 = v19->field_0;
    v22 = a2;
    *(float *)&v21->field_20 = *v22;
    *(float *)&v21->field_24 = v22[1];
    *(float *)&v21->field_28 = v22[2];
    v23 = *v22 * *v22 + v22[1] * v22[1] + v22[2] * v22[2];
    v24 = sqrt(v23);
    if (isnan(v24))
        sub_487dc0(*(unsigned int *)&v23);
    else
        v23 = v24;
    v19->field_2a8 = (float)v23;
    v25 = v19->field_0;
    sub_488860(&v10, &v25->field_20);
    v25->field_50 = v10;
    v25->field_54 = v13;
    v25->field_58 = v15;
    v19->field_0->field_198 = a0->field_208;
    v19->field_0->field_0 = -1 * gpGlobals->field_98 + 5870438;
    v2 = (float)(a4 * 70.0);
    v1 = (float)(0.25 * v2);
    v26 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v27 = sqrt(v26);
    if (isnan(v27))
        sub_487dc0(*(unsigned int *)&v26);
    else
        v26 = v27;
    v6 = (float)v26;
    if (v6 == 0.0f)
    {
        v7 = 0.0f;
        v8 = 0.0f;
        v9 = 1.0;
    }
    else
    {
        v28 = 1.0 / v6;
        v29 = a2;
        v7 = (float)(v28 * *v29);
        v8 = (float)(v28 * v29[1]);
        v9 = (float)(v28 * v29[2]);
    }
    v16 = v1 * v7;
    v17 = v1 * v8;
    v18 = v1 * v9;
    v11 = *a1 + v16;
    v12 = a1[1] + v17;
    v14 = a1[2] + v18;
    sub_48db50(v19->field_0, &v11);
    v30 = v1;
    v11 = v30;
    v12 = v30;
    v14 = v30;
    v31 = -v30;
    v16 = (float)v31;
    v17 = (float)v31;
    v18 = (float)v31;
    v19->field_14 = _INSERT(sub_48a0d0(v19->field_0, &v16, &v11), 0, 0) | 0xffff0000;
    v19->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    g_616878(2, gmsgFlare, 0, 0);
    v33 = g_6168dc(v19->field_0->field_208);
    g_61688c(v33);
    g_616888(a5);
    g_616888(a6);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)(0.1 * v2);
    g_616888(v3);
    g_616888(a7);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)(a4 * 80.0);
    g_616888(v3);
    g_616894(*a1);
    g_616894(a1[1]);
    v0 = a1[2];
    g_616894(v0);
    v19->field_c = _INSERT(g_61687c(v0), 0, 0) | 0xffff0000;
    v19->field_10 = &NormalThink__12CMagicAttack;
    *(float *)&v19->field_0->field_104 = gpGlobals->field_0;
    return (unsigned short)v19;
}

