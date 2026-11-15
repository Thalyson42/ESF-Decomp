// IsValidEnemy__4CBotP11CBasePlayer @0x1537e0 size=382
typedef struct st_5537e0_0 {
    char padding_0[208];
    struct st_5537e0_1 *field_d0;
} st_5537e0_0;

typedef struct st_5537e0_6 {
    struct st_5537e0_4 *field_0;
    char padding_4[92];
    struct st_5537e0_5 *field_60;
    char padding_64[2492];
    char field_a20;
    char padding_a21[131];
    unsigned int field_aa4;
    char padding_aa8[252];
    short field_ba4;
} st_5537e0_6;

typedef struct st_5537e0_1 {
    unsigned int field_0;
} st_5537e0_1;

typedef struct st_5537e0_4 {
    char padding_0[428];
    unsigned int field_1ac;
} st_5537e0_4;

typedef struct st_5537e0_5 {
    char padding_0[228];
    struct st_5537e0_1 *field_e4;
    char padding_e8[248];
    struct st_5537e0_1 *field_1e0;
} st_5537e0_5;

typedef struct st_5537e0_3 {
    char padding_0[428];
    unsigned int field_1ac;
    char padding_1b0[88];
    unsigned int field_208;
} st_5537e0_3;

typedef struct st_5537e0_2 {
    struct st_5537e0_3 *field_0;
    char padding_4[92];
    struct st_5537e0_0 *field_60;
} st_5537e0_2;

extern unsigned int g_teamplay;
extern st_5537e0_1 *g_engfuncs.pfnIndexOfEdict;

int IsValidEnemy__4CBotP11CBasePlayer(st_5537e0_6 *a0, st_5537e0_2 *a1)
{
    unsigned int v13;  // eax
    float v14;  // 120
    float v15;  // 120
    double v16;  // mm7
    double v17;  // mm6
    unsigned int v18;  // eax
    unsigned int v20;  // eax
    int v0;  // [bp-0x98]
    int v1;  // [bp-0x94]
    char v2;  // [bp-0x75]
    char v3;  // [bp-0x64]
    float v4;  // [bp-0x64]
    float v5;  // [bp-0x60]
    float v6;  // [bp-0x58]
    float v7;  // [bp-0x44]
    float v8;  // [bp-0x40]
    unsigned int v9;  // [bp-0x3c]
    char v10;  // [bp-0x24]
    float v11;  // [bp-0x24]
    float v12;  // [bp-0x20]

    *(unsigned short *)&v1 = 1;
    *(unsigned short *)&v0 = 1;
    v13 = UTIL_IsValidPlayer(a1, v0, v1);
    if ((char)v13 && (!g_teamplay || (v13 = a0->field_0->field_1ac, a0->field_0->field_1ac != a1->field_0->field_1ac)))
    {
        a1->field_60->field_d0(&v10, a1);
        a0->field_60->field_1e0(&v3, a0);
        v14 = v11 - v4;
        v7 = v14;
        v15 = v12 - v5;
        v8 = v15;
        v9 = 0;
        v16 = v14 * v14 + v15 * v15 + 0.0;
        v17 = sqrt(v16);
        if (isnan(v17))
            sqrt(*(unsigned int *)&v16);
        else
            v16 = v17;
        v6 = (float)v16;
        v2 = 0;
        if (v6 <= 2300.0f || a0->field_ba4 > 0)
            v2 = 1;
        v13 = EntIsInFieldOfView(a0, a1);
        if ((char)v13 || v2)
        {
            if (!a0->field_a20)
            {
                v18 = a0->field_60->field_e4(a0, &v10);
                return _INSERT(v18, 0, v18 == 1);
            }
            v20 = 1 << ((char)((g_engfuncs.pfnIndexOfEdict(a1->field_0->field_208) & 0xff) - 1) & 31);
            return _INSERT(v20 & a0->field_aa4, 0, (v20 & a0->field_aa4) != 0);
        }
    }
    return _INSERT(v13, 0, 0);
}

