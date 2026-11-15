// ShootScatterBeam__14CScatterAttackP9entvars_sG6VectorT2isssf @0x10fa30 size=1262
typedef struct st_50fa30_2 {
    unsigned int field_0;
} st_50fa30_2;

typedef struct st_50fa30_0 {
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
    float field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[136];
    unsigned int field_198;
    char padding_19c[68];
    float field_1e0;
    char padding_1e4[36];
    unsigned int field_208;
} st_50fa30_0;

typedef struct st_50fa30_4 {
    char padding_0[520];
    unsigned int field_208;
} st_50fa30_4;

typedef struct st_50fa30_3 {
    struct st_50fa30_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_50fa30_1 *field_60;
    char padding_64[580];
    float field_2a8;
    char padding_2ac[36];
    unsigned int field_2d0;
    unsigned int field_2d4;
    char padding_2d8[4];
    short field_2dc;
    short field_2de;
    short field_2e0;
    char padding_2e2[2];
    float field_2e4;
    char padding_2e8[200];
    unsigned int field_3b0;
} st_50fa30_3;

typedef struct st_50fa30_1 {
    char padding_0[8];
    struct st_50fa30_2 *field_8;
} st_50fa30_1;

typedef struct st_50fa30_5 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_50fa30_5;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char SplitThink__14CScatterAttack;
extern unsigned int gmsgFlare;
extern st_50fa30_2 *g_6167c8;
extern st_50fa30_2 *g_616878;
extern st_50fa30_2 *g_61687c;
extern st_50fa30_2 *g_616888;
extern st_50fa30_2 *g_61688c;
extern st_50fa30_2 *g_616894;
extern st_50fa30_2 *g_6168dc;
extern st_50fa30_5 *gpGlobals;

double ShootScatterBeam__14CScatterAttackP9entvars_sG6VectorT2isssf(st_50fa30_4 *a0, float *a1, float *a2, unsigned int a3, short a4, short a5, short a6, float a7)
{
    st_50fa30_3 *v21;  // ecx
    st_50fa30_3 *v22;  // edx
    double v31;  // mm7
    float *v32;  // edx
    float v33;  // 128
    double v34;  // mm7
    st_50fa30_3 *v36;  // ecx
    unsigned int v37;  // eax
    st_50fa30_3 *v39;  // ecx
    st_50fa30_0 *v23;  // edx
    float *v24;  // ecx
    double v25;  // mm7
    double v26;  // mm6
    st_50fa30_3 *v27;  // edx
    st_50fa30_3 *v28;  // ecx
    double v29;  // mm7
    double v30;  // mm6
    float v0;  // [bp-0xc0]
    float v1;  // [bp-0x98]
    float v2;  // [bp-0x94]
    st_50fa30_0 *v3;  // [bp-0x90]
    st_50fa30_3 *v4;  // [bp-0x8c]
    int v5;  // [bp-0x7c]
    unsigned short v6;  // [bp-0x78]
    unsigned short v7;  // [bp-0x76]
    float v8;  // [bp-0x68]
    float v9;  // [bp-0x54]
    float v10;  // [bp-0x50]
    float v11;  // [bp-0x4c]
    float v12;  // [bp-0x24]
    unsigned int v13;  // [bp-0x24]
    float v14;  // [bp-0x20]
    unsigned int v15;  // [bp-0x20]
    float v16;  // [bp-0x1c]
    unsigned int v17;  // [bp-0x1c]
    float v18;  // [bp-0x18]
    float v19;  // [bp-0x14]
    float v20;  // [bp-0x10]

    v4 = sub_48d750(0);
    v4->field_60->field_8(v4);
    v21 = v4;
    v21->field_3b0 = 0;
    v21->field_2dc = a6;
    v21->field_2de = a4;
    v21->field_2e0 = a5;
    v21->field_0->field_108 = 5;
    v21->field_0->field_10c = 1;
    g_6167c8(v21->field_0->field_208, "sprites/null.spr");
    v22 = v4;
    v22->field_2d4 = 4;
    v22->field_2d0 = 2;
    if ((int)a3 > 9999)
        a3 = 9999;
    v13 = a3;
    v22->field_0->field_1e0 = (float)(int)v13;
    v23 = v4->field_0;
    v24 = a2;
    *(float *)&v23->field_20 = *v24;
    *(float *)&v23->field_24 = v24[1];
    *(float *)&v23->field_28 = v24[2];
    v25 = *v24 * *v24 + v24[1] * v24[1] + v24[2] * v24[2];
    v26 = sqrt(v25);
    if (isnan(v26))
        sub_487dc0(*(unsigned int *)&v25);
    else
        v25 = v26;
    v27 = v4;
    v27->field_2a8 = (float)v25;
    v3 = v27->field_0;
    sub_488860(&v13, &v27->field_0->field_20);
    v3->field_50 = v13;
    v3->field_54 = v15;
    v3->field_58 = v17;
    v28 = v4;
    v28->field_0->field_198 = a0->field_208;
    v28->field_0->field_0 = -1 * gpGlobals->field_98 + 5927216;
    v4->field_2e4 = a7;
    v2 = (float)(a7 * 80.0);
    v1 = (float)(0.25 * v2);
    v29 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v30 = sqrt(v29);
    if (isnan(v30))
        sub_487dc0(*(unsigned int *)&v29);
    else
        v29 = v30;
    v8 = (float)v29;
    if (v8 == 0.0f)
    {
        v9 = 0.0f;
        v10 = 0.0f;
        v11 = 1.0;
    }
    else
    {
        v31 = 1.0 / v8;
        v32 = a2;
        v9 = (float)(v31 * *v32);
        v10 = (float)(v31 * v32[1]);
        v11 = (float)(v31 * v32[2]);
    }
    v18 = v1 * v9;
    v19 = v1 * v10;
    v20 = v1 * v11;
    v12 = *a1 + v18;
    v14 = a1[1] + v19;
    v16 = a1[2] + v20;
    *a1 = v12;
    a1[1] = v14;
    a1[2] = v16;
    sub_48db50(v4->field_0, a1);
    v33 = v1;
    v12 = v33;
    v14 = v33;
    v16 = v33;
    v34 = -v33;
    v18 = (float)v34;
    v19 = (float)v34;
    v20 = (float)v34;
    v36 = v4;
    v36->field_14 = _INSERT(sub_48a0d0(v4->field_0, &v18, &v12), 0, 0) | 0xffff0000;
    v36->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    g_616878(2, gmsgFlare, 0, 0);
    v37 = g_6168dc(v4->field_0->field_208);
    g_61688c(v37);
    g_616888(a4);
    g_616888(a5);
    v7 = __fnstcw();
    v6 = v7 | 0xc00;
    v5 = (int)(0.1 * v2);
    g_616888(v5);
    g_616888(a6);
    v7 = __fnstcw();
    v6 = v7 | 0xc00;
    v5 = (int)(a7 * 300.0);
    g_616888(v5);
    g_616894(*a1);
    g_616894(a1[1]);
    v0 = a1[2];
    g_616894(v0);
    v39 = v4;
    v39->field_c = _INSERT(g_61687c(v0), 0, 0) | 0xffff0000;
    v39->field_10 = &SplitThink__14CScatterAttack;
    v39->field_0->field_104 = (float)(0.3 + gpGlobals->field_0);
    *(float *)&v39->padding_64[260] = 0.5f;
    return 0.5;
}

