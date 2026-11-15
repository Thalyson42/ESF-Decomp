// CreateBaseline__FiiP14entity_state_sP7edict_siG6VectorT5 @0xa2450 size=527
typedef struct st_4a2450_0 {
    char padding_0[16];
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[4];
    unsigned int field_30;
    unsigned int field_34;
    unsigned short field_38;
    unsigned short field_3a;
    char padding_3c[4];
    unsigned int field_40;
    char padding_44[4];
    unsigned int field_48;
    unsigned int field_4c;
    char field_50;
    char field_51;
    char field_52;
    char padding_53[1];
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[4];
    unsigned int field_60;
    char padding_64[24];
    unsigned int field_7c;
    unsigned int field_80;
    unsigned int field_84;
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
    char padding_94[8];
    unsigned int field_9c;
    unsigned int field_a0;
} st_4a2450_0;

typedef struct st_4a2450_1 {
    char padding_0[136];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
    char padding_94[60];
    unsigned int field_d0;
    unsigned int field_d4;
    unsigned int field_d8;
    char padding_dc[88];
    unsigned int field_134;
    char padding_138[36];
    unsigned int field_15c;
    unsigned int field_160;
    unsigned int field_164;
    unsigned int field_168;
    unsigned int field_16c;
    unsigned int field_170;
    char padding_174[20];
    unsigned int field_188;
    unsigned short field_18c;
    char padding_18e[2];
    unsigned short field_190;
    char padding_192[10];
    float field_19c;
    char padding_1a0[16];
    float field_1b0;
    char padding_1b4[4];
    float field_1b8;
    char padding_1bc[8];
    float field_1c4;
    char field_1c8;
    char padding_1c9[3];
    float field_1cc;
    float field_1d0;
    float field_1d4;
    float field_1d8;
    char field_1dc;
} st_4a2450_1;

int CreateBaseline__FiiP14entity_state_sP7edict_siG6VectorT5(unsigned int a0, unsigned int a1, st_4a2450_0 *a2, st_4a2450_1 *a3, unsigned int a4, unsigned int *a5, unsigned int *a6)
{
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    int v0;  // [bp-0x10]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    a2->field_10 = a3->field_88;
    a2->field_14 = a3->field_8c;
    a2->field_18 = a3->field_90;
    a2->field_1c = a3->field_d0;
    a2->field_20 = a3->field_d4;
    a2->field_24 = a3->field_d8;
    *(float *)&a2->field_30 = a3->field_1b0;
    a2->field_38 = a3->field_190;
    a2->field_48 = a3->field_1c8;
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)a3->field_1cc;
    a2->field_4c = (char)v0;
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)a3->field_1d0;
    a2->field_50 = v0;
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)a3->field_1d4;
    a2->field_51 = v0;
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)a3->field_1d8;
    a2->field_52 = v0;
    a2->field_54 = a3->field_1dc;
    if (!a0)
    {
        a2->field_7c = a3->field_15c;
        a2->field_80 = a3->field_160;
        a2->field_84 = a3->field_164;
        a2->field_88 = a3->field_168;
        a2->field_8c = a3->field_16c;
        a2->field_90 = a3->field_170;
        a2->field_34 = 0;
        a2->field_28 = a3->field_134;
        v3 = a3->field_188;
        a2->field_58 = v3;
        *(float *)&a2->field_40 = a3->field_1c4;
        v4 = _INSERT(v3, 0, a3->field_18c);
        a2->field_3a = v4;
        *(float *)&a2->field_60 = a3->field_1b8;
        *(float *)&a2->field_a0 = a3->field_19c;
        return v4;
    }
    a2->field_7c = *a5;
    a2->field_80 = a5[1];
    a2->field_84 = a5[2];
    a2->field_88 = *a6;
    a2->field_8c = a6[1];
    a2->field_90 = a6[2];
    a2->field_34 = a1;
    a2->field_28 = a4;
    a2->field_9c = 0x3f800000;
    a2->field_58 = 3;
    *(float *)&a2->field_40 = a3->field_1c4;
    a2->field_3a = 3;
    a2->field_60 = 0x3f800000;
    a2->field_a0 = 0x3f800000;
    return a4;
}

