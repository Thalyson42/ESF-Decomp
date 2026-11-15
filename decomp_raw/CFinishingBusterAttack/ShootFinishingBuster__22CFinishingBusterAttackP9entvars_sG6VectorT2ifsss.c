// ShootFinishingBuster__22CFinishingBusterAttackP9entvars_sG6VectorT2ifsss @0xbe600 size=1246
typedef struct st_4be600_2 {
    unsigned int field_0;
} st_4be600_2;

typedef struct st_4be600_0 {
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
} st_4be600_0;

typedef struct st_4be600_4 {
    char padding_0[520];
    unsigned int field_208;
} st_4be600_4;

typedef struct st_4be600_3 {
    struct st_4be600_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_4be600_1 *field_60;
    char padding_64[580];
    float field_2a8;
    char padding_2ac[36];
    unsigned int field_2d0;
    unsigned int field_2d4;
} st_4be600_3;

typedef struct st_4be600_1 {
    char padding_0[8];
    struct st_4be600_2 *field_8;
} st_4be600_1;

typedef struct st_4be600_5 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4be600_5;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char NormalThink__12CMagicAttack;
extern unsigned int gmsgFlare;
extern st_4be600_2 *g_engfuncs.pfnSetModel;
extern st_4be600_2 *g_engfuncs.pfnMessageBegin;
extern st_4be600_2 *g_engfuncs.pfnMessageEnd;
extern st_4be600_2 *g_engfuncs.pfnWriteShort;
extern st_4be600_2 *g_engfuncs.pfnWriteLong;
extern st_4be600_2 *g_engfuncs.pfnWriteCoord;
extern st_4be600_2 *g_engfuncs.pfnIndexOfEdict;
extern st_4be600_5 *gpGlobals;

short ShootFinishingBuster__22CFinishingBusterAttackP9entvars_sG6VectorT2ifsss(st_4be600_4 *a0, float *a1, float *a2, unsigned int a3, float a4, short a5, short a6, short a7)
{
    st_4be600_3 *v23;  // edi
    unsigned int v24;  // eax
    float *v33;  // edx
    float *v34;  // ecx
    float v35;  // 128
    double v36;  // mm7
    double v38;  // mm7
    double v39;  // mm6
    double v40;  // mm7
    float *v41;  // edx
    float *v42;  // ecx
    st_4be600_0 *v25;  // edx
    unsigned int v43;  // eax
    float *v26;  // ecx
    double v27;  // mm7
    double v28;  // mm6
    st_4be600_0 *v29;  // esi
    double v30;  // mm7
    double v31;  // mm6
    double v32;  // mm7
    float v0;  // [bp-0xc0]
    float v1;  // [bp-0x8c]
    float v2;  // [bp-0x88]
    int v3;  // [bp-0x7c]
    unsigned short v4;  // [bp-0x78]
    unsigned short v5;  // [bp-0x76]
    float v6;  // [bp-0x74]
    float v7;  // [bp-0x70]
    float v8;  // [bp-0x6c]
    float v9;  // [bp-0x68]
    float v10;  // [bp-0x5c]
    float v11;  // [bp-0x54]
    float v12;  // [bp-0x50]
    float v13;  // [bp-0x4c]
    unsigned int v14;  // [bp-0x24]
    float v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    unsigned int v17;  // [bp-0x20]
    float v18;  // [bp-0x1c]
    unsigned int v19;  // [bp-0x1c]
    float v20;  // [bp-0x18]
    float v21;  // [bp-0x14]
    float v22;  // [bp-0x10]

    v23 = GetClassPtr__H1Z22CFinishingBusterAttack_PX01_PX01(0);
    v23->field_60->field_8(v23);
    v23->field_0->field_108 = 5;
    v23->field_0->field_10c = 1;
    g_engfuncs.pfnSetModel(v23->field_0->field_208, "sprites/null.spr");
    v23->field_2d4 = 0;
    v23->field_2d0 = 6;
    v24 = a3;
    if ((int)v24 > 9999)
        v24 = 9999;
    v14 = v24;
    v23->field_0->field_1e0 = (float)(int)v14;
    v25 = v23->field_0;
    v26 = a2;
    *(float *)&v25->field_20 = *v26;
    *(float *)&v25->field_24 = v26[1];
    *(float *)&v25->field_28 = v26[2];
    v27 = *v26 * *v26 + v26[1] * v26[1] + v26[2] * v26[2];
    v28 = sqrt(v27);
    if (isnan(v28))
        sqrt(*(unsigned int *)&v27);
    else
        v27 = v28;
    v23->field_2a8 = (float)v27;
    v29 = v23->field_0;
    UTIL_VecToAngles(&v14, &v29->field_20);
    v29->field_50 = v14;
    v29->field_54 = v17;
    v29->field_58 = v19;
    v23->field_0->field_198 = a0->field_208;
    v23->field_0->field_0 = -1 * gpGlobals->field_98 + 5891750;
    v2 = (float)(a4 * 50.0);
    v1 = (float)(0.25 * v2);
    v30 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v31 = sqrt(v30);
    if (isnan(v31))
        sqrt(*(unsigned int *)&v30);
    else
        v30 = v31;
    v9 = (float)v30;
    if (v9 == 0.0f)
    {
        v11 = 0.0f;
        v12 = 0.0f;
        v13 = 1.0;
    }
    else
    {
        v32 = 1.0 / v9;
        v33 = a2;
        v11 = (float)(v32 * *v33);
        v12 = (float)(v32 * v33[1]);
        v13 = (float)(v32 * v33[2]);
    }
    v20 = v1 * v11;
    v21 = v1 * v12;
    v22 = v1 * v13;
    v34 = a1;
    v15 = *v34 + v20;
    v16 = v34[1] + v21;
    v18 = v34[2] + v22;
    UTIL_SetOrigin(v23->field_0, &v15);
    v35 = v1;
    v15 = v35;
    v16 = v35;
    v18 = v35;
    v36 = -v35;
    v20 = (float)v36;
    v21 = (float)v36;
    v22 = (float)v36;
    v23->field_14 = _INSERT(UTIL_SetSize(v23->field_0, &v20, &v15), 0, 0) | 0xffff0000;
    v23->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    v38 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v39 = sqrt(v38);
    if (isnan(v39))
        sqrt(*(unsigned int *)&v38);
    else
        v38 = v39;
    v10 = (float)v38;
    if (v10 == 0.0f)
    {
        v6 = 0.0f;
        v7 = 0.0f;
        v8 = 1.0;
    }
    else
    {
        v40 = 1.0 / v10;
        v41 = a2;
        v6 = (float)(v40 * *v41);
        v7 = (float)(v40 * v41[1]);
        v8 = (float)(v40 * v41[2]);
    }
    v20 = v1 * v6;
    v21 = v1 * v7;
    v22 = v1 * v8;
    v42 = a1;
    v15 = *v42 + v20;
    v16 = v42[1] + v21;
    v18 = v42[2] + v22;
    UTIL_SetOrigin(v23->field_0, &v15);
    g_engfuncs.pfnMessageBegin(2, gmsgFlare, 0, 0);
    v43 = g_engfuncs.pfnIndexOfEdict(v23->field_0->field_208);
    g_engfuncs.pfnWriteLong(v43);
    g_engfuncs.pfnWriteShort(a5);
    g_engfuncs.pfnWriteShort(a6);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)(0.1 * v2);
    g_engfuncs.pfnWriteShort(v3);
    g_engfuncs.pfnWriteShort(a7);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)(a4 * 80.0);
    g_engfuncs.pfnWriteShort(v3);
    g_engfuncs.pfnWriteCoord(*a1);
    g_engfuncs.pfnWriteCoord(a1[1]);
    v0 = a1[2];
    g_engfuncs.pfnWriteCoord(v0);
    v23->field_c = _INSERT(g_engfuncs.pfnMessageEnd(v0), 0, 0) | 0xffff0000;
    v23->field_10 = &NormalThink__12CMagicAttack;
    *(float *)&v23->field_0->field_104 = gpGlobals->field_0;
    return (unsigned short)v23;
}

