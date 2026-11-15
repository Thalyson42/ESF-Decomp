// ShootSbc__24CSpecialBeamCannonAttackP9entvars_sG6VectorT2issssssi @0x11f520 size=1127
typedef struct st_51f520_1 {
    char padding_0[124];
    struct st_51f520_2 *field_7c;
} st_51f520_1;

typedef struct st_51f520_2 {
    struct st_51f520_0 *field_0;
} st_51f520_2;

typedef struct st_51f520_5 {
    unsigned int field_0;
} st_51f520_5;

typedef struct st_51f520_3 {
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
    struct st_51f520_1 *field_198;
    char padding_19c[68];
    float field_1e0;
    char padding_1e4[36];
    unsigned int field_208;
} st_51f520_3;

typedef struct st_51f520_0 {
    char padding_0[520];
    unsigned int field_208;
} st_51f520_0;

typedef struct st_51f520_7 {
    char padding_0[520];
    struct st_51f520_1 *field_208;
} st_51f520_7;

typedef struct st_51f520_6 {
    struct st_51f520_3 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_51f520_4 *field_60;
    char padding_64[580];
    float field_2a8;
    char padding_2ac[36];
    unsigned int field_2d0;
    unsigned int field_2d4;
} st_51f520_6;

typedef struct st_51f520_4 {
    char padding_0[8];
    struct st_51f520_5 *field_8;
} st_51f520_4;

typedef struct st_51f520_8 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_51f520_8;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char NormalThink__12CMagicAttack;
extern unsigned int gmsgSBCTrail;
extern st_51f520_5 *g_engfuncs.pfnSetModel;
extern st_51f520_5 *g_engfuncs.pfnMessageBegin;
extern st_51f520_5 *g_engfuncs.pfnMessageEnd;
extern st_51f520_5 *g_engfuncs.pfnWriteByte;
extern st_51f520_5 *g_engfuncs.pfnWriteShort;
extern st_51f520_5 *g_engfuncs.pfnWriteLong;
extern st_51f520_5 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_51f520_5 *g_engfuncs.pfnIndexOfEdict;
extern st_51f520_8 *gpGlobals;

short ShootSbc__24CSpecialBeamCannonAttackP9entvars_sG6VectorT2issssssi(st_51f520_7 *a0, float *a1, float *a2, int a3, short a4, short a5, short a6, short a7, short a8, short a9, unsigned int a10)
{
    st_51f520_6 *v21;  // ecx
    st_51f520_6 *v22;  // eax
    st_51f520_6 *v31;  // edx
    st_51f520_6 *v32;  // ecx
    st_51f520_1 *v33;  // eax
    st_51f520_0 **v34;  // eax
    unsigned int v35;  // eax
    unsigned int v36;  // eax
    unsigned int v38;  // eax
    st_51f520_6 *v39;  // ecx
    double v23;  // mm7
    st_51f520_6 *v41;  // ecx
    double v24;  // mm6
    double v25;  // mm7
    double v26;  // mm5
    double v27;  // mm5
    st_51f520_3 *v28;  // edx
    double v29;  // mm7
    double v30;  // mm6
    st_51f520_3 *v0;  // [bp-0x78]
    st_51f520_6 *v1;  // [bp-0x74]
    char v2;  // [bp-0x64], Other Possible Types: unsigned int
    float v3;  // [bp-0x64]
    unsigned int v4;  // [bp-0x60]
    float v5;  // [bp-0x60]
    unsigned int v6;  // [bp-0x5c]
    float v7;  // [bp-0x5c]
    float v8;  // [bp-0x58]
    float v9;  // [bp-0x54]
    float v10;  // [bp-0x50]
    float v11;  // [bp-0x44]
    float v12;  // [bp-0x40]
    float v13;  // [bp-0x3c]
    float v14;  // [bp-0x24]
    int v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    float v17;  // [bp-0x1c]
    float v18;  // [bp-0x18]
    float v19;  // [bp-0x14]
    float v20;  // [bp-0x10]

    v1 = GetClassPtr__H1Z24CSpecialBeamCannonAttack_PX01_PX01(0);
    v1->field_60->field_8(v1);
    v21 = v1;
    v21->field_0->field_108 = 5;
    v21->field_0->field_10c = 1;
    g_engfuncs.pfnSetModel(v21->field_0->field_208, "sprites/null.spr");
    v22 = v1;
    v22->field_2d0 = a10;
    v22->field_2d4 = 2;
    if (a3 > 9999)
        a3 = 9999;
    v15 = a3;
    v22->field_0->field_1e0 = (float)v15;
    v23 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v24 = sqrt(v23);
    if (isnan(v24))
        sqrt(*(unsigned int *)&v23);
    else
        v23 = v24;
    v8 = (float)v23;
    if (v8 == 0.0f)
    {
        v11 = 0.0f;
        v12 = 0.0f;
        v13 = 1.0;
    }
    else
    {
        v25 = 1.0 / v8;
        v11 = (float)(v25 * *a2);
        v12 = (float)(v25 * a2[1]);
        v13 = (float)(v25 * a2[2]);
    }
    v26 = 32.0 * v11;
    v18 = (float)v26;
    v27 = 32.0 * v12;
    v19 = (float)v27;
    v20 = (float)(32.0 * v13);
    v14 = (float)(v26 + *a1);
    v16 = (float)(v27 + a1[1]);
    v17 = a1[2] + v20;
    UTIL_SetOrigin(v1->field_0, &v14);
    v28 = v1->field_0;
    *(float *)&v28->field_20 = *a2;
    *(float *)&v28->field_24 = a2[1];
    *(float *)&v28->field_28 = a2[2];
    v29 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v30 = sqrt(v29);
    if (isnan(v30))
        sqrt(*(unsigned int *)&v29);
    else
        v29 = v30;
    v31 = v1;
    v31->field_2a8 = (float)v29;
    v0 = v31->field_0;
    UTIL_VecToAngles(&v2, &v31->field_0->field_20);
    v0->field_50 = v2;
    v0->field_54 = v4;
    v0->field_58 = v6;
    v32 = v1;
    v32->field_0->field_198 = a0->field_208;
    v32->field_0->field_0 = -1 * gpGlobals->field_98 + 5934314;
    v3 = 32.0f;
    v5 = 32.0f;
    v7 = 32.0f;
    v8 = -32.0f;
    v9 = -32.0f;
    v10 = -32.0f;
    UTIL_SetSize(v1->field_0, &v8, &v3);
    g_engfuncs.pfnMessageBegin(2, gmsgSBCTrail, 0, 0);
    v33 = a0->field_208;
    if (a0->field_208 || (v33 = g_engfuncs.pfnPEntityOfEntOffset(0), v33))
        v34 = v33->field_7c;
    else
        v34 = NULL;
    v35 = g_engfuncs.pfnIndexOfEdict(*v34->field_208);
    g_engfuncs.pfnWriteByte(v35);
    v36 = g_engfuncs.pfnIndexOfEdict(v1->field_0->field_208);
    g_engfuncs.pfnWriteLong(v36);
    g_engfuncs.pfnWriteByte(1);
    g_engfuncs.pfnWriteShort(a5);
    g_engfuncs.pfnWriteShort(a6);
    g_engfuncs.pfnWriteShort(a4);
    g_engfuncs.pfnWriteByte(2);
    g_engfuncs.pfnWriteShort(a8);
    g_engfuncs.pfnWriteShort(a9);
    g_engfuncs.pfnWriteShort(a7);
    g_engfuncs.pfnWriteByte(1);
    v38 = _INSERT(g_engfuncs.pfnMessageEnd(), 0, 0) | 0xffff0000;
    v39 = v1;
    v39->field_14 = v38;
    v39->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    v41 = v1;
    v41->field_c = _INSERT(v38, 0, 0) | 0xffff0000;
    v41->field_10 = &NormalThink__12CMagicAttack;
    *(float *)&v41->field_0->field_104 = gpGlobals->field_0;
    return (unsigned short)v1;
}

