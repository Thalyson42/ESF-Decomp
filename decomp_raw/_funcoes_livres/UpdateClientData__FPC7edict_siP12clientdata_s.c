// UpdateClientData__FPC7edict_siP12clientdata_s @0xa2ef0 size=451
typedef struct st_4a2ef0_3 {
    unsigned int field_0;
} st_4a2ef0_3;

typedef struct st_4a2ef0_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
    unsigned int field_34;
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    char padding_44[4];
    unsigned int field_48;
    unsigned int field_4c;
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[28];
    unsigned int field_84;
    char padding_88[4];
    char field_8c;
    char padding_8d[255];
    unsigned int field_18c;
    unsigned int field_190;
    char padding_194[8];
    unsigned int field_19c;
    char padding_1a0[8];
    unsigned int field_1a8;
    char padding_1ac[36];
    unsigned int field_1d0;
    unsigned int field_1d4;
    unsigned int field_1d8;
} st_4a2ef0_0;

typedef struct st_4a2ef0_2 {
    char padding_0[12];
    struct st_4a2ef0_3 *field_c;
    char padding_10[468];
    struct st_4a2ef0_3 *field_1e4;
} st_4a2ef0_2;

typedef struct st_4a2ef0_1 {
    char padding_0[136];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
    char padding_94[12];
    unsigned int field_a0;
    unsigned int field_a4;
    unsigned int field_a8;
    char padding_ac[60];
    unsigned int field_e8;
    unsigned int field_ec;
    unsigned int field_f0;
    char padding_f4[72];
    unsigned int field_13c;
    char padding_140[160];
    float field_1e0;
    char padding_1e4[4];
    unsigned int field_1e8;
    char padding_1ec[8];
    unsigned int field_1f4;
    unsigned int field_1f8;
    unsigned int field_1fc;
    char padding_200[36];
    unsigned int field_224;
    char padding_228[12];
    float field_234;
    char padding_238[8];
    unsigned int field_240;
    unsigned int field_244;
    char padding_248[72];
    float field_290;
    float field_294;
    unsigned int field_298;
    unsigned int field_29c;
    char padding_2a0[4];
    unsigned int field_2a4;
    unsigned int field_2a8;
    unsigned int field_2ac;
    char padding_2b0[20];
    unsigned int field_2c4;
    unsigned int field_2c8;
    char padding_2cc[8];
    float field_2d4;
    char padding_2d8[8];
    float field_2e0;
    char padding_2e4[36];
    unsigned int field_308;
    unsigned int field_30c;
    unsigned int field_310;
} st_4a2ef0_1;

typedef struct st_4a2ef0_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4a2ef0_4;

extern st_4a2ef0_2 g_engfuncs;
extern st_4a2ef0_4 *gpGlobals;

unsigned int UpdateClientData__FPC7edict_siP12clientdata_s(st_4a2ef0_1 *a0, unsigned int a1, st_4a2ef0_0 *a2)
{
    unsigned int v5;  // eax
    st_4a2ef0_2 *v0;  // [bp-0x10]
    int v1;  // [bp-0xc]
    unsigned short v2;  // [bp-0x8]
    unsigned short v3;  // [bp-0x6]

    a2->field_28 = a0->field_224;
    *(float *)&a2->field_40 = a0->field_1e0;
    v0 = &g_engfuncs.padding_0[0];
    a2->field_18 = v0->field_c(a0->field_13c + gpGlobals->field_98);
    a2->field_2c = a0->field_240;
    a2->field_30 = a0->field_244;
    a2->field_48 = a0->field_1e8;
    a2->field_0 = a0->field_88;
    a2->field_4 = a0->field_8c;
    a2->field_8 = a0->field_90;
    a2->field_c = a0->field_a0;
    a2->field_10 = a0->field_a4;
    a2->field_14 = a0->field_a8;
    a2->field_34 = a0->field_1f4;
    a2->field_38 = a0->field_1f8;
    a2->field_3c = a0->field_1fc;
    a2->field_1c = a0->field_e8;
    a2->field_20 = a0->field_ec;
    a2->field_24 = a0->field_f0;
    a2->field_4c = a0->field_2a4;
    a2->field_50 = a0->field_2ac;
    a2->field_54 = a0->field_2a8;
    v3 = __fnstcw();
    v2 = v3 | 0xc00;
    v1 = (int)a0->field_234;
    a2->field_58 = v1;
    strcpy@GLIBC_2.0(&a2->field_8c, v0->field_1e4(a0));
    *(float *)&a2->field_5c = a0->field_290;
    *(float *)&a2->field_60 = a0->field_294;
    a2->field_64 = a0->field_298;
    a2->field_84 = a0->field_29c;
    a2->field_1d0 = a0->field_308;
    a2->field_1d4 = a0->field_30c;
    a2->field_1d8 = a0->field_310;
    a2->field_18c = a0->field_2c4;
    v5 = a0->field_2c8;
    a2->field_190 = v5;
    *(float *)&a2->field_1a8 = a0->field_2e0;
    *(float *)&a2->field_19c = a0->field_2d4;
    return v5;
}

