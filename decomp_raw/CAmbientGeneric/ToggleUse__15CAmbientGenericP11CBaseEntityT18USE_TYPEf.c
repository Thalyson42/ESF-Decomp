// ToggleUse__15CAmbientGenericP11CBaseEntityT18USE_TYPEf @0x11b170 size=630
typedef struct st_51b170_1 {
    unsigned int field_0;
    char field_1;
    char padding_2[150];
    unsigned int field_98;
} st_51b170_1;

typedef struct st_51b170_0 {
    float field_0;
    char field_1;
    char padding_2[150];
    unsigned int field_98;
} st_51b170_0;

typedef struct st_51b170_3 {
    struct st_51b170_2 *field_0;
    char padding_4[96];
    unsigned int field_64;
    char padding_68[4];
    int field_6c;
    unsigned int field_70;
    unsigned int field_74;
    unsigned int field_78;
    char padding_7c[8];
    unsigned int field_84;
    unsigned int field_88;
    char padding_8c[16];
    struct st_51b170_1 *field_9c;
    struct st_51b170_1 *field_a0;
    int field_a4;
    unsigned int field_a8;
    unsigned int field_ac;
    char padding_b0[4];
    int field_b4;
    char padding_b8[4];
    unsigned int field_bc;
    char padding_c0[12];
    unsigned int field_cc;
    unsigned int field_d0;
} st_51b170_3;

typedef struct st_51b170_4 {
    char padding_0[252];
    unsigned int field_fc;
    char padding_100[152];
    char field_198;
    char padding_199[51];
    struct st_51b170_1 *field_1cc;
    char padding_1d0[48];
    unsigned int field_200;
} st_51b170_4;

typedef struct st_51b170_2 {
    char padding_0[8];
    char field_8;
    char padding_9[251];
    float field_104;
    char padding_108[152];
    char field_1a0;
    char padding_1a1[51];
    struct st_51b170_1 *field_1d4;
    char padding_1d8[48];
    unsigned int field_208;
} st_51b170_2;

extern st_51b170_0 *gpGlobals;

st_51b170_1 * ToggleUse__15CAmbientGenericP11CBaseEntityT18USE_TYPEf(st_51b170_3 *a0, unsigned int a1, unsigned int a2, unsigned int a3, float a4)
{
    st_51b170_1 *v11;  // eax
    int v12;  // edi
    double v13;  // mm7
    unsigned int v15;  // eax
    int v16;  // eax
    st_51b170_4 *v0;  // [bp-0x68]
    int v1;  // [bp-0x64]
    unsigned int v2;  // [bp-0x60]
    unsigned int v3;  // [bp-0x5c]
    unsigned int v4;  // [bp-0x58]
    int v5;  // [bp-0x54], Other Possible Types: unsigned int
    st_51b170_0 *v6;  // [bp-0x20]
    int v7;  // [bp-0x1c]
    unsigned short v8;  // [bp-0x18]
    unsigned short v9;  // [bp-0x16]
    float v10;  // [bp-0x8]

    v6 = gpGlobals;
    v11 = a0->field_0->field_1d4;
    v12 = *(int *)&v6->padding_2[147] + (char *)v11;
    if (a3 != 3)
    {
        if (a0->field_cc)
        {
            if (a3 == 1)
                return v11;
            if (!a0->field_cc)
                goto LABEL_51b1c9;
        }
        else
        {
LABEL_51b1c9:
            if (!a3)
                return v11;
        }
    }
    if (a3 == 2)
    {
        if (a0->field_cc)
        {
            v13 = a4;
            if (1.0 < v13)
                v13 = 1.0;
            if (0.0 > v13)
                v13 = 0.009999999776482582;
            v9 = __fnstcw();
            v8 = v9 | 0xc00;
            v7 = (int)(v13 * 255.0);
            a0->field_a4 = v7;
            v5 = v7;
            v4 = 128;
            v3 = 0;
            v2 = 0;
            v1 = v12;
            v0 = &a0->field_0->field_8;
            return UTIL_EmitAmbientSound(a0->field_0->field_208);
        }
LABEL_51b343:
        if (a0->field_d0)
            a0->field_cc = 1;
        else
            UTIL_EmitAmbientSound(a0->field_0->field_208, &a0->field_0->field_8, v12, 0, 0, 32, 0);
        CAmbientGeneric::InitModulationParms(a0);
        v10 = (float)((double)a0->field_b4 * 0.01);
        UTIL_EmitAmbientSound(a0->field_0->field_208, &a0->field_0->field_8, v12, v10, *(float *)&a0->field_64, 0, a0->field_a4);
    }
    else
    {
        if (!a0->field_cc)
            goto LABEL_51b343;
        if (!a0->field_9c)
        {
            a0->field_cc = 0;
            a0->field_0->field_1a0 = a0->field_0->field_1a0 | 16;
            if (!a0->field_ac && !a0->field_bc)
            {
                v5 = 0;
                v4 = 32;
                v3 = 0;
                v2 = 0;
                v1 = v12;
                v0 = &a0->field_0->field_8;
                return UTIL_EmitAmbientSound(a0->field_0->field_208);
            }
            a0->field_78 = a0->field_ac;
            a0->field_74 = 0;
            a0->field_88 = a0->field_bc;
            a0->field_84 = 0;
        }
        else if (a0->field_a0 <= a0->field_9c)
        {
            a0->field_a0 = (char *)&a0->field_a0->field_0 + 1;
            v15 = (0xff - a0->field_70) / a0->field_9c;
            a0->field_74 = a0->field_a8;
            a0->field_78 = 0;
            v16 = a0->field_a0 * v15 + a0->field_70;
            a0->field_6c = v16;
            if (v16 > 0xff)
                a0->field_6c = 0xff;
        }
        else
        {
            return a0->field_a0;
        }
    }
    a0->field_0->field_104 = (float)(0.1 + gpGlobals->field_0);
    return gpGlobals;
}

