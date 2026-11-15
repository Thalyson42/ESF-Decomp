// StartLay__12CPlayerMelee @0x1027c0 size=259
typedef struct st_5027c0_0 {
    struct st_5027c0_1 *field_0;
    char padding_4[1872];
    unsigned int field_754;
} st_5027c0_0;

typedef struct st_5027c0_2 {
    char padding_0[24];
    unsigned int field_18;
    char padding_1c[72];
    unsigned int field_64;
    char padding_68[188];
    struct st_5027c0_0 *field_124;
} st_5027c0_2;

typedef struct st_5027c0_1 {
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
} st_5027c0_1;

typedef struct st_5027c0_3 {
    float field_0;
} st_5027c0_3;

typedef struct st_5027c0_4 {
    unsigned int field_0;
} st_5027c0_4;

extern st_5027c0_4 *g_engfuncs.pfnIndexOfEdict;
extern st_5027c0_3 *gpGlobals;

int StartLay__12CPlayerMelee(st_5027c0_2 *a0)
{
    unsigned int *v7;  // ecx
    st_5027c0_0 *v8;  // ecx
    unsigned int *v9;  // edx
    char *v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]
    unsigned int v4;  // [bp-0x18]
    unsigned int v5;  // [bp-0x14]
    unsigned int v6;  // [bp-0x10]

    a0->field_124->field_0->field_108 = 0;
    a0->field_124->field_754 = 0;
    a0->field_124->field_0->field_120 = 0x3f800000;
    a0->field_124->field_0->field_11c = 0x3f800000;
    v7 = a0->field_124->field_0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v7[8] = v1;
    v7[9] = v2;
    v7[10] = v3;
    *(float *)&a0->field_18 = *(float *)gpGlobals;
    a0->field_64 = 4;
    v8 = a0->field_124;
    v9 = &v8->field_0->field_50;
    *(float *)&v1 = *(float *)&v8->field_0->field_50;
    *(float *)&v2 = *(float *)&v9[1];
    *(float *)&v3 = *(float *)&v9[2];
    v1 = 0;
    v4 = 0;
    *(float *)&v5 = *(float *)&v9[1];
    *(float *)&v6 = *(float *)&v9[2];
    v0 = &v4;
    return UTIL_Model_FixAngles(g_engfuncs.pfnIndexOfEdict(v8->field_0->field_208));
}

