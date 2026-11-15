// ShootScatterShotAttack__18CScatterShotAttackP9entvars_sG6VectorT2isss @0x110cc0 size=993
typedef struct st_510cc0_5 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_510cc0_5;

typedef struct st_510cc0_2 {
    unsigned int field_0;
} st_510cc0_2;

typedef struct st_510cc0_0 {
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
} st_510cc0_0;

typedef struct st_510cc0_4 {
    char padding_0[520];
    unsigned int field_208;
} st_510cc0_4;

typedef struct st_510cc0_3 {
    struct st_510cc0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_510cc0_1 *field_60;
    char padding_64[580];
    float field_2a8;
    char padding_2ac[28];
    unsigned int field_2c8;
    char padding_2cc[72];
    unsigned int field_314;
} st_510cc0_3;

typedef struct st_510cc0_1 {
    char padding_0[8];
    struct st_510cc0_2 *field_8;
} st_510cc0_1;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char NormalThink__12CMagicAttack;
extern unsigned int gmsgFlare;
extern st_510cc0_2 *g_engfuncs.pfnSetModel;
extern st_510cc0_2 *g_engfuncs.pfnMessageBegin;
extern st_510cc0_2 *g_engfuncs.pfnMessageEnd;
extern st_510cc0_2 *g_engfuncs.pfnWriteShort;
extern st_510cc0_2 *g_engfuncs.pfnWriteLong;
extern st_510cc0_2 *g_engfuncs.pfnWriteCoord;
extern st_510cc0_2 *g_engfuncs.pfnIndexOfEdict;
extern st_510cc0_5 *gpGlobals;

short ShootScatterShotAttack__18CScatterShotAttackP9entvars_sG6VectorT2isss(st_510cc0_4 *a0, float *a1, float *a2, int a3, short a4, short a5, short a6)
{
    st_510cc0_3 *v18;  // edi
    int v19;  // eax
    double v28;  // mm7
    double v29;  // mm6
    st_510cc0_0 *v30;  // esi
    unsigned int v31;  // eax
    unsigned int v33;  // eax
    double v20;  // mm7
    double v21;  // mm6
    double v22;  // mm7
    float *v23;  // edx
    float v24;  // 128
    double v25;  // mm7
    st_510cc0_0 *v26;  // edx
    float *v27;  // ecx
    float v0;  // [bp-0xc0]
    st_510cc0_5 **v1;  // [bp-0x90]
    float v2;  // [bp-0x8c]
    float v3;  // [bp-0x88]
    int v4;  // [bp-0x7c]
    unsigned short v5;  // [bp-0x78]
    unsigned short v6;  // [bp-0x76]
    float v7;  // [bp-0x68]
    float v8;  // [bp-0x54]
    float v9;  // [bp-0x50]
    float v10;  // [bp-0x4c]
    int v11;  // [bp-0x24]
    float v12;  // [bp-0x24]
    float v13;  // [bp-0x20]
    float v14;  // [bp-0x1c]
    float v15;  // [bp-0x18]
    float v16;  // [bp-0x14]
    float v17;  // [bp-0x10]

    v18 = GetClassPtr__H1Z18CScatterShotAttack_PX01_PX01(0);
    v18->field_60->field_8(v18);
    v18->field_0->field_108 = 5;
    v18->field_0->field_10c = 1;
    g_engfuncs.pfnSetModel(v18->field_0->field_208, "sprites/null.spr");
    v19 = a3;
    if (v19 > 9999)
        v19 = 9999;
    v11 = v19;
    v18->field_0->field_1e0 = (float)v11;
    v3 = 25.0f;
    v2 = (float)(0.25 * v3);
    v20 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v21 = sqrt(v20);
    if (isnan(v21))
        sqrt(*(unsigned int *)&v20);
    else
        v20 = v21;
    v7 = (float)v20;
    if (v7 == 0.0f)
    {
        v8 = 0.0f;
        v9 = 0.0f;
        v10 = 1.0;
    }
    else
    {
        v22 = 1.0 / v7;
        v23 = a2;
        v8 = (float)(v22 * *v23);
        v9 = (float)(v22 * v23[1]);
        v10 = (float)(v22 * v23[2]);
    }
    v15 = v2 * v8;
    v16 = v2 * v9;
    v17 = v2 * v10;
    v12 = *a1 + v15;
    v13 = a1[1] + v16;
    v14 = a1[2] + v17;
    UTIL_SetOrigin(v18->field_0, &v12);
    v24 = v2;
    v12 = v24;
    v13 = v24;
    v14 = v24;
    v25 = -v24;
    v15 = (float)v25;
    v16 = (float)v25;
    v17 = (float)v25;
    UTIL_SetSize(v18->field_0, &v15, &v12);
    v26 = v18->field_0;
    v27 = a2;
    *(float *)&v26->field_20 = *v27;
    *(float *)&v26->field_24 = v27[1];
    *(float *)&v26->field_28 = v27[2];
    v28 = *v27 * *v27 + v27[1] * v27[1] + v27[2] * v27[2];
    v29 = sqrt(v28);
    if (isnan(v29))
        sqrt(*(unsigned int *)&v28);
    else
        v28 = v29;
    v18->field_2a8 = (float)v28;
    v30 = v18->field_0;
    UTIL_VecToAngles(&v12, &v30->field_20);
    *(float *)&v30->field_50 = v12;
    *(float *)&v30->field_54 = v13;
    *(float *)&v30->field_58 = v14;
    v18->field_0->field_198 = a0->field_208;
    v1 = &gpGlobals;
    v18->field_0->field_0 = -1 * gpGlobals->field_98 + 5927881;
    g_engfuncs.pfnMessageBegin(2, gmsgFlare, 0, 0);
    v31 = g_engfuncs.pfnIndexOfEdict(v18->field_0->field_208);
    g_engfuncs.pfnWriteLong(v31);
    g_engfuncs.pfnWriteShort(a4);
    g_engfuncs.pfnWriteShort(a5);
    v6 = __fnstcw();
    v5 = v6 | 0xc00;
    v4 = (int)(0.1 * v3);
    g_engfuncs.pfnWriteShort(v4);
    g_engfuncs.pfnWriteShort(a6);
    g_engfuncs.pfnWriteShort(40);
    g_engfuncs.pfnWriteCoord(*a1);
    g_engfuncs.pfnWriteCoord(a1[1]);
    v0 = a1[2];
    g_engfuncs.pfnWriteCoord(v0);
    v33 = _INSERT(g_engfuncs.pfnMessageEnd(v0), 0, 0) | 0xffff0000;
    v18->field_14 = v33;
    v18->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    v18->field_c = _INSERT(v33, 0, 0) | 0xffff0000;
    v18->field_10 = &NormalThink__12CMagicAttack;
    *(float *)&v18->field_0->field_104 = *v1->field_0;
    v18->field_314 = 0;
    v18->field_2c8 = 0;
    return (unsigned short)v18;
}

