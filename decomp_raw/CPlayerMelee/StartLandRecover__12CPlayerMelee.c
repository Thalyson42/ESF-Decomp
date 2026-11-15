// StartLandRecover__12CPlayerMelee @0x102250 size=266
typedef struct st_502250_0 {
    struct st_502250_1 *field_0;
    char padding_4[1872];
    unsigned int field_754;
} st_502250_0;

typedef struct st_502250_5 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    char padding_10[188];
    struct st_502250_0 *field_cc;
} st_502250_5;

typedef struct st_502250_2 {
    char padding_0[28];
    unsigned int field_1c;
    char padding_20[56];
    unsigned int field_58;
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[188];
    struct st_502250_0 *field_124;
} st_502250_2;

typedef struct st_502250_1 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[172];
    unsigned int field_108;
    char padding_10c[16];
    unsigned int field_11c;
    unsigned int field_120;
    char padding_124[228];
    unsigned int field_208;
} st_502250_1;

typedef struct st_502250_3 {
    float field_0;
} st_502250_3;

typedef struct st_502250_4 {
    unsigned int field_0;
} st_502250_4;

extern st_502250_4 *g_engfuncs.pfnIndexOfEdict;
extern st_502250_3 *gpGlobals;

int StartLandRecover__12CPlayerMelee(st_502250_2 *a0)
{
    unsigned int *v4;  // ecx
    st_502250_0 *v5;  // esi
    unsigned int *v6;  // ecx
    st_502250_5 *v7;  // edx
    char *v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]

    a0->field_124->field_0->field_108 = 0;
    a0->field_124->field_754 = 0;
    a0->field_124->field_0->field_120 = 0x3f800000;
    a0->field_124->field_0->field_11c = 0x3f800000;
    v4 = a0->field_124->field_0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4[8] = v1;
    v4[9] = v2;
    v4[10] = v3;
    *(float *)&a0->field_1c = *(float *)gpGlobals;
    a0->field_64 = 5;
    v5 = a0->field_124;
    v6 = v5->field_0;
    a0->field_58 = v6[20];
    a0->field_5c = v6[21];
    a0->field_60 = v6[22];
    a0->field_58 = 0;
    v7 = &a0->field_58;
    v1 = 0;
    *(float *)&v2 = *(float *)&v7->field_4;
    *(float *)&v3 = *(float *)&v7->field_8;
    v0 = &v1;
    return UTIL_Model_FixAngles(g_engfuncs.pfnIndexOfEdict(v5->field_0->field_208));
}

