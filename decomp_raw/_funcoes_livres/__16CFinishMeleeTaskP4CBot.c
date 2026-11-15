// __16CFinishMeleeTaskP4CBot @0x149c40 size=955
typedef struct st_549c40_3 {
    struct st_549c40_0 *field_0;
    char padding_4[2552];
    char field_9fc;
    char padding_9fd[3];
    struct st_549c40_1 *field_a00;
    struct st_549c40_2 *field_a04;
} st_549c40_3;

typedef struct st_549c40_5 {
    char padding_0[360];
    struct st_549c40_6 *field_168;
    struct st_549c40_6 *field_16c;
} st_549c40_5;

typedef struct st_549c40_6 {
    unsigned int field_0;
} st_549c40_6;

typedef struct st_549c40_2 {
    char padding_0[20];
    unsigned short field_14;
    char padding_16[30];
    char field_34;
} st_549c40_2;

typedef struct st_549c40_4 {
    unsigned int field_0;
    char padding_4[4];
    struct st_549c40_3 *field_8;
    char padding_c[8];
    unsigned int field_14;
    unsigned int field_18;
    unsigned int field_1c;
    float field_20;
    float field_24;
    unsigned short field_28;
    char field_2a;
    char padding_2b[1];
    unsigned int field_2c;
    unsigned int field_30;
    unsigned int field_34;
    unsigned int field_38;
    char field_3c;
} st_549c40_4;

typedef struct st_549c40_0 {
    char padding_0[608];
    unsigned int field_260;
} st_549c40_0;

typedef struct st_549c40_1 {
    char padding_0[63];
    char field_3f;
} st_549c40_1;

extern char __vt_16CFinishMeleeTask;
extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_549c40_5 g_engfuncs;
extern st_549c40_6 *g_engfuncs.pfnCVarGetFloat;
extern st_549c40_6 *g_engfuncs.pfnRandomLong;
extern st_549c40_6 *g_engfuncs.pfnRandomFloat;

st_549c40_4 * __16CFinishMeleeTaskP4CBot(st_549c40_4 *a0, int a1)
{
    st_549c40_3 *v14;  // edx
    unsigned short v15;  // di
    double v16;  // mm7
    char v17;  // cl
    char v18;  // al
    char v0[16];  // [bp-0x5c]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x37]
    char v3;  // [bp-0x36]
    char v4;  // [bp-0x35]
    st_549c40_5 *v5;  // [bp-0x34]
    char v6;  // [bp-0x2d]
    unsigned short v7;  // [bp-0x2c]
    unsigned short v8;  // [bp-0x2a]
    unsigned short v9;  // [bp-0x2a]
    int v10;  // [bp-0x28]
    int v11;  // [bp-0x24]
    unsigned short v12;  // [bp-0x20]
    unsigned short v13;  // [bp-0x1e]

    __9CBaseTaskP4CBot(a0, a1);
    a0->field_14 = &__vt_16CFinishMeleeTask;
    v14 = a0->field_8;
    v15 = v14->field_a04->field_14;
    v6 = 0;
    v13 = __fnstcw();
    v12 = v13 | 0xc00;
    v11 = (int)*(float *)&v14->field_0->field_260;
    if (v11 <= 399)
    {
        v13 = __fnstcw();
        v12 = v13 | 0xc00;
        v11 = (int)*(float *)&v14->field_0->field_260;
        v10 = v11;
        v9 = v14->field_a04->field_14;
        v8 = __fnstcw();
        v7 = v8 | 0xc00;
        v10 = (int)((double)v9 * (2.0 - ((double)v10 * 0.0010000000474974513 + (double)v10 * 0.0010000000474974513)));
        v15 = v10;
    }
    v5 = &g_engfuncs.padding_0[0];
    v0 = 1;
    if ((int)g_engfuncs.pfnRandomLong(v0, 100) <= v15)
    {
        a0->field_28 = 1;
        v5->field_16c(4.300000190734863f, 6.099999904632568f);
        a0->field_24 = (float)(4.300000190734863 + *(float *)&a0->field_0);
        if (a0->field_8->field_a00->field_3f && v5->field_168(0, 1))
            v6 = 1;
    }
    else
    {
        a0->field_28 = 2;
        strncpy(v0, "33s@", 4);
        g_engfuncs.pfnRandomFloat(v0, 4.599999904632568f);
        a0->field_24 = (float)(3.799999952316284 + *(float *)&a0->field_0);
    }
    g_engfuncs.pfnRandomFloat(1.5f, 2.4000000953674316f);
    v16 = 1.5 + *(float *)&a0->field_0;
    a0->field_20 = (float)v16;
    a0->field_18 = 1;
    a0->field_1c = 0;
    g_engfuncs.pfnCVarGetFloat("am_prepunch_maxstun");
    v8 = __fnstcw();
    v7 = v8 | 0xc00;
    v10 = (int)v16;
    v4 = v10;
    g_engfuncs.pfnCVarGetFloat("am_prepunch_mincombo");
    v8 = __fnstcw();
    v7 = v8 | 0xc00;
    v10 = (int)v16;
    v3 = v10;
    g_engfuncs.pfnCVarGetFloat("am_prepunch_max");
    v8 = __fnstcw();
    v7 = v8 | 0xc00;
    v10 = (int)v16;
    v2 = v10;
    v2 -= 1;
    v1 = v4 - (char)g_engfuncs.pfnRandomLong(0, (char)(a0->field_8->field_9fc + 1) >> 1);
    if (v6)
    {
        v17 = v4 + (char)g_engfuncs.pfnRandomLong(0, (char)(a0->field_8->field_9fc + 1) >> 1);
    }
    else
    {
        v18 = g_engfuncs.pfnRandomLong(0, a0->field_8->field_9fc);
        v17 = v2 - v18 - a0->field_8->field_a04->field_34;
    }
    if (v1 <= v3)
        v1 = v3 + 1;
    if (v17 <= v1)
        v17 = v3 + 1;
    if (a0->field_28 == 2 && v17 > 6)
        v17 = 6;
    a0->field_2a = g_engfuncs.pfnRandomLong(v1, v17);
    a0->field_2c = 0;
    a0->field_30 = g_vecZero;
    a0->field_34 = g_vecZero+4;
    a0->field_38 = g_vecZero+8;
    a0->field_3c = 0;
    if (!v6)
        return a0;
    CBot::MakeMeleeComboList(a0->field_8);
    return a0;
}

