// SpreadThink__11CDragonBall @0xae4b0 size=619
typedef struct st_4ae4b0_0 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[216];
    float field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[248];
    unsigned int field_208;
} st_4ae4b0_0;

typedef struct st_4ae4b0_1 {
    struct st_4ae4b0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[92];
    short field_70;
    char padding_72[2];
    unsigned int field_74;
} st_4ae4b0_1;

typedef struct st_4ae4b0_3 {
    float field_0;
} st_4ae4b0_3;

typedef struct st_4ae4b0_2 {
    unsigned int field_0;
} st_4ae4b0_2;

extern char SUB_Remove__11CBaseEntity;
extern st_4ae4b0_2 *g_616878;
extern st_4ae4b0_2 *g_61687c;
extern st_4ae4b0_2 *g_616880;
extern st_4ae4b0_2 *g_616888;
extern st_4ae4b0_2 *g_6168dc;
extern st_4ae4b0_2 *g_61692c;
extern st_4ae4b0_3 *gpGlobals;

double SpreadThink__11CDragonBall(st_4ae4b0_1 *a0)
{
    float v10;  // 128
    st_4ae4b0_0 *v11;  // esi
    double v12;  // mm7
    double v13;  // mm6
    double v14;  // mm7
    unsigned int v15;  // eax
    double v17;  // mm7
    st_4ae4b0_0 *v18;  // edx
    double v19;  // mm7
    float v0;  // [bp-0x78]
    float v1;  // [bp-0x64]
    float v2;  // [bp-0x60]
    float v3;  // [bp-0x5c]
    float v4;  // [bp-0x44]
    float v5;  // [bp-0x40]
    float v6;  // [bp-0x3c]
    float v7;  // [bp-0x24]
    float v8;  // [bp-0x20]
    float v9;  // [bp-0x1c]

    v10 = *(float *)&a0->field_0->field_10;
    if (v10 >= *(float *)&a0->field_74)
    {
        v18 = a0->field_0;
        *(float *)&a0->field_74 = *(float *)&v18->field_10;
        v19 = 0.2 + *(float *)gpGlobals;
        v18->field_104 = (float)v19;
        return v19;
    }
    a0->field_0->field_108 = 8;
    a0->field_0->field_10c = 0;
    g_61692c(0xbf800000, 0x3f800000);
    v7 = v10;
    g_61692c(0xbf800000, 0x3f800000);
    v8 = v10;
    v9 = 0;
    v11 = a0->field_0;
    v12 = v7 * v7 + v10 * v10 + 0.0;
    v13 = sqrt(v12);
    if (isnan(v13))
        sub_487dc0(*(unsigned int *)&v12);
    else
        v12 = v13;
    v0 = (float)v12;
    if (v0 == 0.0f)
    {
        v1 = 0.0f;
        v2 = 0.0f;
        v3 = 1.0;
    }
    else
    {
        v14 = 1.0 / v0;
        v1 = (float)(v14 * v7);
        v2 = (float)(v14 * v8);
        v3 = (float)(v14 * v9);
    }
    v4 = (float)(1500.0 * v1);
    v5 = (float)(1500.0 * v2);
    v6 = (float)(1500.0 * v3);
    *(float *)&v11->field_20 = v4;
    *(float *)&v11->field_24 = v5;
    *(float *)&v11->field_28 = v6;
    g_616878(0, 23, 0, 0);
    g_616880(22);
    v15 = g_6168dc(a0->field_0->field_208);
    g_616888(v15);
    g_616888(a0->field_70);
    g_616880(50);
    g_616880(5);
    g_616880(200);
    g_616880(200);
    g_616880(200);
    g_616880(254);
    a0->field_c = _INSERT(g_61687c(), 0, 0) | 0xffff0000;
    a0->field_10 = &SUB_Remove__11CBaseEntity;
    v17 = *(float *)gpGlobals + 30.0;
    a0->field_0->field_104 = (float)v17;
    return v17;
}

