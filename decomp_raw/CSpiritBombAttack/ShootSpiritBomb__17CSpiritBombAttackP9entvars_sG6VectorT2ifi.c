// ShootSpiritBomb__17CSpiritBombAttackP9entvars_sG6VectorT2ifi @0x120810 size=784
typedef struct st_520810_2 {
    unsigned int field_0;
} st_520810_2;

typedef struct st_520810_0 {
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
    char padding_110[52];
    float field_144;
    char padding_148[80];
    unsigned int field_198;
    char padding_19c[68];
    float field_1e0;
    char padding_1e4[36];
    unsigned int field_208;
} st_520810_0;

typedef struct st_520810_4 {
    char padding_0[520];
    unsigned int field_208;
} st_520810_4;

typedef struct st_520810_3 {
    struct st_520810_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_520810_1 *field_60;
    char padding_64[580];
    float field_2a8;
    char padding_2ac[36];
    unsigned int field_2d0;
    unsigned int field_2d4;
} st_520810_3;

typedef struct st_520810_1 {
    char padding_0[8];
    struct st_520810_2 *field_8;
} st_520810_1;

typedef struct st_520810_5 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_520810_5;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char NormalThink__12CMagicAttack;
extern unsigned int gmsgBall;
extern st_520810_2 *g_6167c8;
extern st_520810_2 *g_616878;
extern st_520810_2 *g_61687c;
extern st_520810_2 *g_616888;
extern st_520810_2 *g_6168dc;
extern st_520810_5 *gpGlobals;

short ShootSpiritBomb__17CSpiritBombAttackP9entvars_sG6VectorT2ifi(st_520810_4 *a0, float *a1, float *a2, int a3, float a4, unsigned int a5)
{
    st_520810_3 *v15;  // edi
    unsigned int v16;  // eax
    float *v25;  // edx
    float v26;  // 128
    double v27;  // mm7
    unsigned int v29;  // eax
    st_520810_0 *v17;  // edx
    float *v18;  // ecx
    double v19;  // mm7
    double v20;  // mm6
    st_520810_0 *v21;  // esi
    double v22;  // mm7
    double v23;  // mm6
    double v24;  // mm7
    unsigned int v0;  // [bp-0x9c]
    float v1;  // [bp-0x78]
    float v2;  // [bp-0x68]
    float v3;  // [bp-0x54]
    float v4;  // [bp-0x50]
    float v5;  // [bp-0x4c]
    float v6;  // [bp-0x24]
    char v7;  // [bp-0x24], Other Possible Types: int, unsigned int
    float v8;  // [bp-0x20]
    unsigned int v9;  // [bp-0x20]
    float v10;  // [bp-0x1c]
    unsigned int v11;  // [bp-0x1c]
    float v12;  // [bp-0x18]
    float v13;  // [bp-0x14]
    float v14;  // [bp-0x10]

    v15 = sub_48d6c0(0);
    v15->field_60->field_8(v15);
    v15->field_0->field_108 = 5;
    v15->field_0->field_10c = 1;
    g_6167c8(v15->field_0->field_208, "sprites/null.spr");
    g_616878(2, gmsgBall, 0, 0);
    v16 = g_6168dc(v15->field_0->field_208);
    g_616888(v16);
    g_616888(a5);
    v0 = 26;
    g_616888(v0);
    g_61687c(v0);
    v15->field_2d0 = 5;
    v15->field_2d4 = 6;
    v17 = v15->field_0;
    v18 = a2;
    *(float *)&v17->field_20 = *v18;
    *(float *)&v17->field_24 = v18[1];
    *(float *)&v17->field_28 = v18[2];
    v19 = *v18 * *v18 + v18[1] * v18[1] + v18[2] * v18[2];
    v20 = sqrt(v19);
    if (isnan(v20))
        sub_487dc0(*(unsigned int *)&v19);
    else
        v19 = v20;
    v15->field_2a8 = (float)v19;
    v21 = v15->field_0;
    sub_488860(&v7, a2);
    v21->field_50 = v7;
    v21->field_54 = v9;
    v21->field_58 = v11;
    v15->field_0->field_198 = a0->field_208;
    v15->field_0->field_0 = -1 * gpGlobals->field_98 + 5935185;
    v15->field_0->field_144 = a4;
    v1 = (float)(256.0 * a4 * 0.5);
    v22 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v23 = sqrt(v22);
    if (isnan(v23))
        sub_487dc0(*(unsigned int *)&v22);
    else
        v22 = v23;
    v2 = (float)v22;
    if (v2 == 0.0f)
    {
        v3 = 0.0f;
        v4 = 0.0f;
        v5 = 1.0;
    }
    else
    {
        v24 = 1.0 / v2;
        v25 = a2;
        v3 = (float)(v24 * *v25);
        v4 = (float)(v24 * v25[1]);
        v5 = (float)(v24 * v25[2]);
    }
    v12 = v1 * v3;
    v13 = v1 * v4;
    v14 = v1 * v5;
    v6 = *a1 + v12;
    v8 = a1[1] + v13;
    v10 = a1[2] + v14;
    sub_48db50(v15->field_0, &v6);
    v26 = v1;
    v6 = v26;
    v8 = v26;
    v10 = v26;
    v27 = -v26;
    v12 = (float)v27;
    v13 = (float)v27;
    v14 = (float)v27;
    sub_48a0d0(v15->field_0, &v12, &v6);
    if (a3 > 9999)
        a3 = 9999;
    v7 = a3;
    v15->field_0->field_1e0 = (float)v7;
    v29 = _INSERT(a3, 0, 0) | 0xffff0000;
    v15->field_14 = v29;
    v15->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    v15->field_c = _INSERT(v29, 0, 0) | 0xffff0000;
    v15->field_10 = &NormalThink__12CMagicAttack;
    *(float *)&v15->field_0->field_104 = gpGlobals->field_0;
    *(float *)&v15->field_0->field_104 = gpGlobals->field_0;
    return (unsigned short)v15;
}

