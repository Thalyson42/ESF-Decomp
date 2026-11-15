// ShootScatterSplit__13CScatterSplitP9entvars_sG6VectorT2isssfP11CBasePlayer @0x10f1b0 size=1104
typedef struct st_50f1b0_0 {
    unsigned int field_0;
} st_50f1b0_0;

typedef struct st_50f1b0_1 {
    unsigned int field_0;
    char padding_4[28];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[168];
    unsigned int field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[136];
    unsigned int field_198;
    char padding_19c[68];
    float field_1e0;
    char padding_1e4[36];
    unsigned int field_208;
} st_50f1b0_1;

typedef struct st_50f1b0_4 {
    char padding_0[520];
    unsigned int field_208;
} st_50f1b0_4;

typedef struct st_50f1b0_3 {
    struct st_50f1b0_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_50f1b0_2 *field_60;
    char padding_64[580];
    float field_2a8;
    char padding_2ac[36];
    unsigned int field_2d0;
    unsigned int field_2d4;
} st_50f1b0_3;

typedef struct st_50f1b0_2 {
    char padding_0[8];
    struct st_50f1b0_0 *field_8;
} st_50f1b0_2;

typedef struct st_50f1b0_5 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_50f1b0_5;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char ChaseThink__13CScatterSplit;
extern unsigned int gmsgFlare;
extern st_50f1b0_0 *g_engfuncs.pfnSetModel;
extern st_50f1b0_0 *g_engfuncs.pfnMessageBegin;
extern st_50f1b0_0 *g_engfuncs.pfnMessageEnd;
extern st_50f1b0_0 *g_engfuncs.pfnWriteShort;
extern st_50f1b0_0 *g_engfuncs.pfnWriteLong;
extern st_50f1b0_0 *g_engfuncs.pfnWriteCoord;
extern st_50f1b0_0 *g_engfuncs.pfnAlertMessage;
extern st_50f1b0_0 *g_engfuncs.pfnIndexOfEdict;
extern st_50f1b0_5 *gpGlobals;

st_50f1b0_3 * ShootScatterSplit__13CScatterSplitP9entvars_sG6VectorT2isssfP11CBasePlayer(st_50f1b0_4 *a0, float *a1, float *a2, unsigned int a3, short a4, short a5, short a6, float a7, int a8)
{
    st_50f1b0_3 *v19;  // edi
    st_50f1b0_1 *v20;  // edx
    float v29;  // 128
    double v30;  // mm7
    unsigned int v31;  // eax
    unsigned int v33;  // eax
    float *v21;  // ecx
    double v22;  // mm7
    double v23;  // mm6
    st_50f1b0_1 *v24;  // esi
    double v25;  // mm7
    double v26;  // mm6
    double v27;  // mm7
    float *v28;  // edx
    float v0;  // [bp-0xc0]
    float v1;  // [bp-0x8c]
    float v2;  // [bp-0x88]
    int v3;  // [bp-0x7c]
    unsigned short v4;  // [bp-0x78]
    unsigned short v5;  // [bp-0x76]
    float v6;  // [bp-0x68]
    float v7;  // [bp-0x54]
    float v8;  // [bp-0x50]
    float v9;  // [bp-0x4c]
    unsigned int v10;  // [bp-0x24]
    float v11;  // [bp-0x24]
    float v12;  // [bp-0x20]
    unsigned int v13;  // [bp-0x20]
    float v14;  // [bp-0x1c]
    unsigned int v15;  // [bp-0x1c]
    float v16;  // [bp-0x18]
    float v17;  // [bp-0x14]
    float v18;  // [bp-0x10]

    g_engfuncs.pfnAlertMessage(1, "split\n");
    v19 = GetClassPtr__H1Z13CScatterSplit_PX01_PX01(0);
    v19->field_60->field_8(v19);
    v19->field_0->field_108 = 5;
    v19->field_0->field_10c = 0;
    g_engfuncs.pfnSetModel(v19->field_0->field_208, "sprites/null.spr");
    v19->field_2d4 = 4;
    v19->field_2d0 = 2;
    if ((int)a3 > 9999)
        a3 = 9999;
    v10 = a3;
    v19->field_0->field_1e0 = (float)(int)v10;
    v20 = v19->field_0;
    v21 = a2;
    *(float *)&v20->field_20 = *v21;
    *(float *)&v20->field_24 = v21[1];
    *(float *)&v20->field_28 = v21[2];
    v22 = *v21 * *v21 + v21[1] * v21[1] + v21[2] * v21[2];
    v23 = sqrt(v22);
    if (isnan(v23))
        sqrt(*(unsigned int *)&v22);
    else
        v22 = v23;
    v19->field_2a8 = (float)v22;
    v24 = v19->field_0;
    UTIL_VecToAngles(&v10, &v24->field_20);
    v24->field_50 = v10;
    v24->field_54 = v13;
    v24->field_58 = v15;
    v19->field_0->field_198 = a0->field_208;
    v19->field_0->field_0 = -1 * gpGlobals->field_98 + 5927149;
    v2 = (float)(a7 * 50.0);
    v1 = (float)(0.25 * v2);
    v25 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v26 = sqrt(v25);
    if (isnan(v26))
        sqrt(*(unsigned int *)&v25);
    else
        v25 = v26;
    v6 = (float)v25;
    if (v6 == 0.0f)
    {
        v7 = 0.0f;
        v8 = 0.0f;
        v9 = 1.0;
    }
    else
    {
        v27 = 1.0 / v6;
        v28 = a2;
        v7 = (float)(v27 * *v28);
        v8 = (float)(v27 * v28[1]);
        v9 = (float)(v27 * v28[2]);
    }
    v16 = v1 * v7;
    v17 = v1 * v8;
    v18 = v1 * v9;
    v11 = *a1 + v16;
    v12 = a1[1] + v17;
    v14 = a1[2] + v18;
    *a1 = v11;
    a1[1] = v12;
    a1[2] = v14;
    UTIL_SetOrigin(v19->field_0, a1);
    v29 = v1;
    v11 = v29;
    v12 = v29;
    v14 = v29;
    v30 = -v29;
    v16 = (float)v30;
    v17 = (float)v30;
    v18 = (float)v30;
    UTIL_SetSize(v19->field_0, &v16, &v11);
    g_engfuncs.pfnMessageBegin(2, gmsgFlare, 0, 0);
    v31 = g_engfuncs.pfnIndexOfEdict(v19->field_0->field_208);
    g_engfuncs.pfnWriteLong(v31);
    g_engfuncs.pfnWriteShort(a4);
    g_engfuncs.pfnWriteShort(a5);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)(0.1 * v2);
    g_engfuncs.pfnWriteShort(v3);
    g_engfuncs.pfnWriteShort(a6);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)(a7 * 150.0);
    g_engfuncs.pfnWriteShort(v3);
    g_engfuncs.pfnWriteCoord(*a1);
    g_engfuncs.pfnWriteCoord(a1[1]);
    v0 = a1[2];
    g_engfuncs.pfnWriteCoord(v0);
    v33 = _INSERT(g_engfuncs.pfnMessageEnd(v0), 0, 0) | 0xffff0000;
    v19->field_c = v33;
    v19->field_10 = &ChaseThink__13CScatterSplit;
    v19->field_14 = _INSERT(v33, 0, 0) | 0xffff0000;
    v19->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    EHANDLE::__as(v19[1].padding_4, a8);
    *(float *)&v19->padding_64[260] = 0.5f;
    v19->field_0->field_10c = 1;
    *(float *)&v19->field_0->field_104 = gpGlobals->field_0;
    return v19;
}

