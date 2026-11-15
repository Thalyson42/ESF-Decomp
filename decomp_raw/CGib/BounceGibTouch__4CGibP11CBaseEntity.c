// BounceGibTouch__4CGibP11CBaseEntity @0xa5200 size=656
typedef struct st_4a5200_0 {
    char padding_0[408];
    struct st_4a5200_1 *field_198;
} st_4a5200_0;

typedef struct st_4a5200_1 {
    struct st_4a5200_0 *field_0;
} st_4a5200_1;

typedef struct st_4a5200_5 {
    unsigned int field_0;
    unsigned int field_4;
    struct st_4a5200_1 *field_8;
    char padding_c[36];
    unsigned int field_30;
    char padding_34[4];
    unsigned int field_38;
    unsigned int field_3c;
    char padding_40[4];
    unsigned int field_44;
    char padding_48[304];
    struct st_4a5200_1 *field_178;
    char padding_17c[9];
    char field_185;
    char padding_186[98];
    unsigned int field_1e8;
} st_4a5200_5;

typedef struct st_4a5200_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    struct st_4a5200_1 *field_28;
    char padding_2c[36];
    unsigned int field_50;
    char padding_54[4];
    unsigned int field_58;
    unsigned int field_5c;
    char padding_60[4];
    unsigned int field_64;
    char padding_68[304];
    struct st_4a5200_1 *field_198;
    char padding_19c[9];
    char field_1a5;
    char padding_1a6[98];
    int field_208;
} st_4a5200_2;

typedef struct st_4a5200_3 {
    struct st_4a5200_2 *field_0;
    char padding_4[676];
    int field_2a8;
    int field_2ac;
    int field_2b0;
} st_4a5200_3;

typedef struct st_4a5200_4 {
    unsigned int field_0;
} st_4a5200_4;

extern unsigned int g_Language;
extern st_4a5200_4 *g_engfuncs.pfnRandomLong;

st_4a5200_0 ** BounceGibTouch__4CGibP11CBaseEntity(st_4a5200_3 *a0, st_4a5200_0 **a1)
{
    st_4a5200_2 *v15;  // edx
    unsigned int *v16;  // eax
    int v17;  // 128
    st_4a5200_2 *v18;  // edx
    st_4a5200_5 *v19;  // eax
    st_4a5200_0 **v0;  // [bp-0xa8], Other Possible Types: float
    float v1;  // [bp-0xa4]
    float v2;  // [bp-0xa0]
    float v3;  // [bp-0x9c]
    st_4a5200_0 **v4;  // [bp-0x9c]
    float v5;  // [bp-0x98]
    float v6;  // [bp-0x94]
    float v7;  // [bp-0x90]
    float v8;  // [bp-0x84]
    float v9;  // [bp-0x80]
    float v10;  // [bp-0x7c]
    char v11;  // [bp-0x64]
    float v12;  // [bp-0x24]
    float v13;  // [bp-0x20]
    float v14;  // [bp-0x1c]

    if (a0->field_0->field_198)
    {
        if ((!a0->field_0->field_198 ? 0 : a0->field_0->field_198 + 32) == *a1)
        {
            return a1;
        }
        else if (*a1->field_198 == a0->field_0->field_198)
        {
            return *a1->field_198;
        }
    }
    if (a0->field_0->field_1a5 & 2)
    {
        a0->field_0->field_50 = 0;
        a0->field_0->field_58 = 0;
        a0->field_0->field_5c = 0;
        a0->field_0->field_64 = 0;
    }
    else
    {
        if (g_Language != 1 && a0->field_2ac > NULL && a0->field_2a8 != -0x1)
        {
            v1 = 0;
            v2 = 0;
            v3 = 8.0f;
            v15 = a0->field_0;
            v16 = &v15->field_8;
            v8 = *(float *)&v15->field_8 + v1;
            v9 = *(float *)&v16[1] + v2;
            v10 = *(float *)&v16[2] + v3;
            v12 = v8;
            v13 = v9;
            v14 = v10;
            v5 = 0;
            v6 = 0;
            v7 = -24.0f;
            v1 = v12 + v5;
            v2 = v13 + v6;
            v3 = v14 + v7;
            UTIL_TraceLine(&v12, &v1, 1, v15->field_208, &v11);
            UTIL_BloodDecalTrace(&v11, a0->field_2a8);
            a0->field_2ac = a0->field_2ac - 1;
        }
        if (a0->field_2b0 != 9 && !g_engfuncs.pfnRandomLong(0, 2))
        {
            v0 = (st_4a5200_0 **)fabsf(*(float *)&a0->field_0->field_28);
            if (1.0 < (double)v0 / 450.0)
            {
                v17 = -0x60000000;
            }
            else
            {
                v0 = (float)((double)v0 / 450.0 * 0.8);
                v17 = *(int *)&v0;
            }
            CBreakable::MaterialSoundRandom(a0->field_0->field_208, a0->field_2b0, v17);
        }
    }
    v18 = a0->field_0;
    v19 = &v18->field_20;
    v1 = (float)(0.800000011920929 * *(float *)&v18->field_20);
    v2 = (float)(0.800000011920929 * *(float *)&v19->field_4);
    v4 = (st_4a5200_0 **)(float)(0.800000011920929 * *(float *)&v19->field_8);
    *(float *)&v18->field_20 = v1;
    *(float *)&v18->field_24 = v2;
    v18->field_28 = v4;
    return v4;
}

