// ShootDeathBall__16CDeathBallAttackP9entvars_sG6VectorT2ifs @0xa8d20 size=838
typedef struct st_4a8d20_4 {
    unsigned int field_0;
} st_4a8d20_4;

typedef struct st_4a8d20_2 {
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
    char padding_110[52];
    float field_144;
    char padding_148[80];
    unsigned int field_198;
    char padding_19c[68];
    float field_1e0;
    char padding_1e4[36];
    unsigned int field_208;
} st_4a8d20_2;

typedef struct st_4a8d20_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4a8d20_0;

typedef struct st_4a8d20_5 {
    struct st_4a8d20_2 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_4a8d20_3 *field_60;
    char padding_64[580];
    float field_2a8;
    char padding_2ac[36];
    unsigned int field_2d0;
    unsigned int field_2d4;
} st_4a8d20_5;

typedef struct st_4a8d20_3 {
    char padding_0[8];
    struct st_4a8d20_4 *field_8;
} st_4a8d20_3;

typedef struct st_4a8d20_1 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4a8d20_1;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char NormalThink__12CMagicAttack;
extern unsigned int gmsgBall;
extern st_4a8d20_4 *g_engfuncs.pfnSetModel;
extern st_4a8d20_4 *g_engfuncs.pfnMessageBegin;
extern st_4a8d20_4 *g_engfuncs.pfnMessageEnd;
extern st_4a8d20_4 *g_engfuncs.pfnWriteShort;
extern st_4a8d20_4 *g_engfuncs.pfnIndexOfEdict;
extern st_4a8d20_1 *gpGlobals;

short ShootDeathBall__16CDeathBallAttackP9entvars_sG6VectorT2ifs(st_4a8d20_0 *a0, float *a1, float *a2, unsigned int a3, float a4, short a5)
{
    unsigned int v16;  // eax
    st_4a8d20_5 *v17;  // ecx
    double v26;  // mm6
    double v27;  // mm7
    float *v28;  // edx
    float v29;  // 128
    double v30;  // mm7
    unsigned int v32;  // eax
    st_4a8d20_5 *v33;  // ecx
    st_4a8d20_5 *v35;  // ecx
    st_4a8d20_5 *v18;  // edx
    unsigned int *v19;  // edx
    float *v20;  // ecx
    double v21;  // mm7
    double v22;  // mm6
    st_4a8d20_5 *v23;  // edx
    unsigned int *v24;  // esi
    double v25;  // mm7
    unsigned int v0;  // [bp-0xac]
    float v1;  // [bp-0x7c]
    st_4a8d20_5 *v2;  // [bp-0x78]
    float v3;  // [bp-0x68]
    float v4;  // [bp-0x54]
    float v5;  // [bp-0x50]
    float v6;  // [bp-0x4c]
    float v7;  // [bp-0x24]
    unsigned int v8;  // [bp-0x24]
    float v9;  // [bp-0x20]
    unsigned int v10;  // [bp-0x20]
    float v11;  // [bp-0x1c]
    unsigned int v12;  // [bp-0x1c]
    float v13;  // [bp-0x18]
    float v14;  // [bp-0x14]
    float v15;  // [bp-0x10]

    v2 = GetClassPtr__H1Z16CDeathBallAttack_PX01_PX01(0);
    v2->field_60->field_8(v2);
    g_engfuncs.pfnMessageBegin(2, gmsgBall, 0, 0);
    v16 = g_engfuncs.pfnIndexOfEdict(v2->field_0->field_208);
    g_engfuncs.pfnWriteShort(v16);
    g_engfuncs.pfnWriteShort(a5);
    v0 = 26;
    g_engfuncs.pfnWriteShort(v0);
    g_engfuncs.pfnMessageEnd(v0);
    g_engfuncs.pfnSetModel(v2->field_0->field_208, "sprites/null.spr");
    v17 = v2;
    v17->field_2d0 = 5;
    v17->field_2d4 = 5;
    v17->field_0->field_198 = a0->field_208;
    v17->field_0->field_0 = -1 * gpGlobals->field_98 + 5883630;
    v18 = v2;
    v18->field_0->field_108 = 5;
    v18->field_0->field_10c = 1;
    if ((int)a3 > 9999)
        a3 = 9999;
    v8 = a3;
    v18->field_0->field_1e0 = (float)(int)v8;
    v19 = &v2->field_0->field_0;
    v20 = a2;
    *(float *)&v19[8] = *v20;
    *(float *)&v19[9] = v20[1];
    *(float *)&v19[10] = v20[2];
    v21 = *v20 * *v20 + v20[1] * v20[1] + v20[2] * v20[2];
    v22 = sqrt(v21);
    if (isnan(v22))
        sqrt(*(unsigned int *)&v21);
    else
        v21 = v22;
    v23 = v2;
    v23->field_2a8 = (float)v21;
    v24 = &v23->field_0->field_0;
    UTIL_VecToAngles(&v8, v24 + 8);
    v24[20] = v8;
    v24[21] = v10;
    v24[22] = v12;
    v2->field_0->field_144 = a4;
    v1 = (float)(80.0 * a4 * 0.5);
    v25 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v26 = sqrt(v25);
    if (isnan(v26))
        sqrt(*(unsigned int *)&v25);
    else
        v25 = v26;
    v3 = (float)v25;
    if (v3 == 0.0f)
    {
        v4 = 0.0f;
        v5 = 0.0f;
        v6 = 1.0;
    }
    else
    {
        v27 = 1.0 / v3;
        v28 = a2;
        v4 = (float)(v27 * *v28);
        v5 = (float)(v27 * v28[1]);
        v6 = (float)(v27 * v28[2]);
    }
    v13 = v1 * v4;
    v14 = v1 * v5;
    v15 = v1 * v6;
    v7 = *a1 + v13;
    v9 = a1[1] + v14;
    v11 = a1[2] + v15;
    *a1 = v7;
    a1[1] = v9;
    a1[2] = v11;
    UTIL_SetOrigin(v2->field_0, a1);
    v29 = v1;
    v7 = v29;
    v9 = v29;
    v11 = v29;
    v30 = -v29;
    v13 = (float)v30;
    v14 = (float)v30;
    v15 = (float)v30;
    v32 = _INSERT(UTIL_SetSize(v2->field_0, &v13, &v7), 0, 0) | 0xffff0000;
    v33 = v2;
    v33->field_14 = v32;
    v33->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    v35 = v2;
    v35->field_c = _INSERT(v32, 0, 0) | 0xffff0000;
    v35->field_10 = &NormalThink__12CMagicAttack;
    *(float *)&v35->field_0->field_104 = gpGlobals->field_0;
    return (unsigned short)v2;
}

