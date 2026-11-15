// CreateSpiritBomb__17CSpiritBombAttackP9entvars_sG6Vectori @0x120670 size=406
typedef struct st_520670_1 {
    unsigned int field_0;
} st_520670_1;

typedef struct st_520670_3 {
    unsigned int field_0;
    char padding_4[28];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[216];
    unsigned int field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[136];
    unsigned int field_198;
    char padding_19c[68];
    unsigned int field_1e0;
    char padding_1e4[36];
    unsigned int field_208;
} st_520670_3;

typedef struct st_520670_4 {
    char padding_0[520];
    unsigned int field_208;
} st_520670_4;

typedef struct st_520670_2 {
    struct st_520670_3 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_520670_0 *field_60;
    char padding_64[620];
    unsigned int field_2d0;
    unsigned int field_2d4;
} st_520670_2;

typedef struct st_520670_0 {
    char padding_0[8];
    struct st_520670_1 *field_8;
} st_520670_0;

typedef struct st_520670_5 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_520670_5;

extern char NormalThink__12CMagicAttack;
extern unsigned int gmsgBall;
extern st_520670_1 *g_6167c8;
extern st_520670_1 *g_616878;
extern st_520670_1 *g_61687c;
extern st_520670_1 *g_616888;
extern st_520670_1 *g_6168dc;
extern st_520670_5 *gpGlobals;

st_520670_2 * CreateSpiritBomb__17CSpiritBombAttackP9entvars_sG6Vectori(st_520670_4 *a0, int a1, unsigned int a2)
{
    st_520670_2 *v4;  // edi
    unsigned int v5;  // eax
    unsigned int *v6;  // edx
    unsigned int *v7;  // eax
    unsigned int v0;  // [bp-0x4c]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]

    v4 = sub_48d6c0(0);
    v4->field_60->field_8(v4);
    v4->field_0->field_108 = 5;
    v4->field_0->field_10c = 0;
    g_6167c8(v4->field_0->field_208, "sprites/null.spr");
    g_616878(2, gmsgBall, 0, 0);
    v5 = g_6168dc(v4->field_0->field_208);
    g_616888(v5);
    g_616888(a2);
    v0 = 26;
    g_616888(v0);
    g_61687c(v0);
    v4->field_2d0 = 5;
    v4->field_2d4 = 6;
    sub_48db50(v4->field_0, a1);
    v6 = &v4->field_0->field_0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v6[8] = v1;
    v6[9] = v2;
    v6[10] = v3;
    v4->field_0->field_198 = a0->field_208;
    v4->field_0->field_0 = -1 * gpGlobals->field_98 + 5935185;
    *(float *)&v4->field_0->padding_110[52] = 0.009999999776482582f;
    v7 = &v4->field_0->field_0;
    v7[120] = 0;
    v4->field_14 = 0;
    v4->field_18 = 0;
    v4->field_c = _INSERT(v7, 0, 0) | 0xffff0000;
    v4->field_10 = &NormalThink__12CMagicAttack;
    *(float *)&v4->field_0->field_104 = gpGlobals->field_0;
    return v4;
}

