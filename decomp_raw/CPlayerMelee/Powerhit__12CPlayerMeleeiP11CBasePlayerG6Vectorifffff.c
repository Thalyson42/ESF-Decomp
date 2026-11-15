// Powerhit__12CPlayerMeleeiP11CBasePlayerG6Vectorifffff @0x10c310 size=724
typedef struct st_50c310_4 {
    char padding_0[52];
    struct st_50c310_5 *field_34;
    char padding_38[84];
    struct st_50c310_5 *field_8c;
} st_50c310_4;

typedef struct st_50c310_8 {
    char padding_0[156];
    unsigned int field_9c;
    unsigned int field_a0;
} st_50c310_8;

typedef struct st_50c310_1 {
    char padding_0[136];
    unsigned int field_88;
    char padding_8c[16];
    unsigned int field_9c;
    unsigned int field_a0;
} st_50c310_1;

typedef struct st_50c310_0 {
    unsigned int field_0;
    char padding_4[2404];
    struct st_50c310_1 *field_968;
} st_50c310_0;

typedef struct st_50c310_6 {
    struct st_50c310_7 *field_0;
    char padding_4[92];
    struct st_50c310_4 *field_60;
    char padding_64[796];
    char field_380;
    char padding_381[1511];
    struct st_50c310_8 *field_968;
} st_50c310_6;

typedef struct st_50c310_2 {
    char padding_0[292];
    struct st_50c310_0 *field_124;
} st_50c310_2;

typedef struct st_50c310_5 {
    unsigned int field_0;
} st_50c310_5;

typedef struct st_50c310_7 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
} st_50c310_7;

typedef struct st_50c310_3 {
    float field_0;
} st_50c310_3;

extern unsigned int g_400000;
extern st_50c310_3 *gpGlobals;

unsigned int Powerhit__12CPlayerMeleeiP11CBasePlayerG6Vectorifffff(st_50c310_2 *a0, unsigned int a1, st_50c310_6 *a2, float *a3, int a4, float a5, float a6, float a7, float a8, float a9)
{
    double v10;  // mm7
    st_50c310_4 *v11;  // esi
    float v12;  // 128
    float *v13;  // eax
    unsigned int *v14;  // edx
    float *v15;  // eax
    unsigned int *v16;  // edx
    float *v17;  // eax
    unsigned int *v18;  // edx
    unsigned int *v19;  // eax
    unsigned int v0;  // [bp-0x6c]
    unsigned int *v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    float v3;  // [bp-0x30]
    float v4;  // [bp-0x2c]
    float v5;  // [bp-0x28]
    float v6;  // [bp-0x10]
    int v7;  // [bp-0xc]
    unsigned short v8;  // [bp-0x8]
    unsigned short v9;  // [bp-0x6]

    if (!a0->field_124)
        return 0;
    v2 = 0;
    v1 = NULL;
    if (a0->field_124->field_968)
        v1 = a0->field_124->field_968;
    if (!v1 || v1[0x22] != 1 || !(v10 = *(float *)&v1[40], v10 > *(float *)gpGlobals))
    {
        if (a4 != 4)
        {
            v11 = a2->field_60;
            v0 = &g_400000;
            sub_48c080(a0, a2);
            v9 = __fnstcw();
            v8 = v9 | 0xc00;
            v7 = (int)(v10 * a5);
            v6 = (float)((double)v7 * 1.4);
            v12 = v6;
        }
        else
        {
            v11 = a2->field_60;
            v0 = &g_400000;
            sub_48c080(a0, a2);
            v9 = __fnstcw();
            v8 = v9 | 0xc00;
            v7 = (int)(v10 * a5);
            v12 = __int_as_float((unsigned int)__double_as_longlong((double)v7));
        }
        v11->field_34(a2, a0->field_124->field_0, a0->field_124->field_0, v12);
        sub_48dc30(a0);
        if (a1)
        {
            v13 = a3;
            v3 = *v13;
            v4 = v13[1];
            v5 = v13[2];
            sub_487e10(a0, &v3, a4);
        }
        if (!a2->field_60->field_8c(a2))
        {
            v16 = a2->field_0;
            v17 = a3;
            v3 = a6 * *v17;
            v4 = a6 * v17[1];
            v5 = a6 * v17[2];
            *(float *)&v16[8] = v3;
            *(float *)&v16[9] = v4;
            *(float *)&v16[10] = v5;
        }
        else if (!sub_489e20(a0, a2) || !sub_48c980(a2, 75))
        {
            v15 = a3;
            v3 = *v15;
            v4 = v15[1];
            v5 = v15[2];
            sub_48c240(&a2->field_380, a0->field_124, 1, &v3, a6, a7, a8, a9);
        }
        else
        {
            v2 = 1;
            if (a2->field_968)
            {
                v14 = a2->field_968;
                v6 = (float)(0.8 + *(float *)gpGlobals);
                *(float *)&v14[40] = v6;
                *(float *)&v14[39] = v6;
            }
        }
        if (!v1)
            return v2;
        if (v2)
        {
            v6 = (float)(1.0 + *(float *)gpGlobals);
            v18 = v1;
            *(float *)&v18[40] = v6;
            *(float *)&v18[39] = v6;
        }
        else
        {
            v6 = (float)(0.65 + *(float *)gpGlobals);
            v19 = v1;
            *(float *)&v19[40] = v6;
            *(float *)&v19[39] = v6;
        }
        return v2;
    }
    return 0;
}

