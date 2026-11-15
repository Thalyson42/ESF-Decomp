// ChargeDestructoDisc__20CDestructoDiscAttackP9entvars_sG6Vectorf @0xa9da0 size=398
typedef struct st_4a9da0_2 {
    unsigned int field_0;
} st_4a9da0_2;

typedef struct st_4a9da0_0 {
    unsigned int field_0;
    char padding_4[28];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[216];
    unsigned int field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    char field_118;
    char padding_119[15];
    char field_128;
    char padding_129[27];
    float field_144;
    char padding_148[8];
    float field_150;
    char padding_154[68];
    unsigned int field_198;
    char padding_19c[108];
    unsigned int field_208;
} st_4a9da0_0;

typedef struct st_4a9da0_4 {
    char padding_0[520];
    unsigned int field_208;
} st_4a9da0_4;

typedef struct st_4a9da0_3 {
    struct st_4a9da0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_4a9da0_1 *field_60;
    char padding_64[584];
    unsigned int field_2ac;
} st_4a9da0_3;

typedef struct st_4a9da0_1 {
    char padding_0[8];
    struct st_4a9da0_2 *field_8;
} st_4a9da0_1;

typedef struct st_4a9da0_5 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4a9da0_5;

extern char AuraCheck__11CDiscAttack;
extern st_4a9da0_2 *g_6167c8;
extern st_4a9da0_2 *g_6168dc;
extern st_4a9da0_5 *gpGlobals;

st_4a9da0_3 * ChargeDestructoDisc__20CDestructoDiscAttackP9entvars_sG6Vectorf(st_4a9da0_4 *a0, int a1, float a2)
{
    st_4a9da0_3 *v4;  // edi
    st_4a9da0_0 *v5;  // edx
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    int v3;  // [bp-0x8]

    v4 = sub_48b7a0(0);
    v4->field_60->field_8(v4);
    v4->field_0->field_108 = 8;
    v4->field_0->field_10c = 1;
    v4->field_0->field_118 = v4->field_0->field_118 & 251;
    g_6167c8(v4->field_0->field_208, "models/w_destructodisc.mdl");
    v4->field_0->field_144 = a2;
    *(float *)&v4->field_0->padding_19c[0x44] = 999.0f;
    sub_48db50(v4->field_0, a1);
    v4->field_0->field_198 = a0->field_208;
    v3 = g_6168dc(a0->field_208);
    v4->field_0->field_150 = (float)v3;
    v5 = v4->field_0;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v5->field_20 = v0;
    v5->field_24 = v1;
    v5->field_28 = v2;
    v4->field_0->field_0 = -1 * gpGlobals->field_98 + 5884880;
    memset(&v4->field_0->field_128, 0, 12);
    v6 = sub_488850(v4);
    v4->field_2ac = 0;
    v4->field_14 = 0;
    v4->field_18 = 0;
    v7 = _INSERT(v6, 0, 0);
    v4->field_c = v7 | 0xffff0000;
    v4->field_10 = &AuraCheck__11CDiscAttack;
    *(float *)&v4->field_0->field_104 = gpGlobals->field_0;
    sub_48d9d0(v4);
    return v4;
}

