// ShootKiAttack__9CKiAttackP9entvars_sG6VectorT2isss @0xcbaf0 size=1274
typedef struct st_4cbaf0_4 {
    unsigned int field_0;
} st_4cbaf0_4;

typedef struct st_4cbaf0_2 {
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
} st_4cbaf0_2;

typedef struct st_4cbaf0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4cbaf0_0;

typedef struct st_4cbaf0_5 {
    struct st_4cbaf0_2 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_4cbaf0_3 *field_60;
    char padding_64[580];
    float field_2a8;
    char padding_2ac[24];
    unsigned int field_2c4;
    unsigned int field_2c8;
} st_4cbaf0_5;

typedef struct st_4cbaf0_3 {
    char padding_0[8];
    struct st_4cbaf0_4 *field_8;
} st_4cbaf0_3;

typedef struct st_4cbaf0_1 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4cbaf0_1;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char NormalThink__12CMagicAttack;
extern unsigned int gmsgFlare;
extern st_4cbaf0_4 *g_engfuncs.pfnSetModel;
extern st_4cbaf0_4 *g_engfuncs.pfnMessageBegin;
extern st_4cbaf0_4 *g_engfuncs.pfnMessageEnd;
extern st_4cbaf0_4 *g_engfuncs.pfnWriteShort;
extern st_4cbaf0_4 *g_engfuncs.pfnWriteLong;
extern st_4cbaf0_4 *g_engfuncs.pfnWriteCoord;
extern st_4cbaf0_4 *g_engfuncs.pfnIndexOfEdict;
extern st_4cbaf0_1 *gpGlobals;

float ShootKiAttack__9CKiAttackP9entvars_sG6VectorT2isss(st_4cbaf0_0 *a0, float *a1, float *a2, int a3, short a4, short a5, short a6)
{
    st_4cbaf0_5 *v26;  // ecx
    int v27;  // eax
    double v36;  // mm7
    float *v37;  // edx
    float v38;  // 128
    double v39;  // mm7
    unsigned int *v40;  // edx
    double v41;  // mm7
    double v42;  // mm6
    st_4cbaf0_5 *v43;  // edx
    unsigned int *v44;  // esi
    st_4cbaf0_5 *v45;  // ecx
    double v28;  // mm7
    st_4cbaf0_5 *v46;  // eax
    st_4cbaf0_5 *v48;  // ecx
    unsigned int v49;  // eax
    st_4cbaf0_5 *v51;  // ecx
    float v52;  // 128
    double v29;  // mm6
    double v30;  // mm7
    double v31;  // mm5
    double v32;  // mm5
    float *v33;  // edx
    double v34;  // mm7
    double v35;  // mm6
    float v0;  // [bp-0xc0]
    float v1;  // [bp-0x90]
    float v2;  // [bp-0x8c]
    st_4cbaf0_5 *v3;  // [bp-0x88]
    int v4;  // [bp-0x7c]
    unsigned short v5;  // [bp-0x78]
    unsigned short v6;  // [bp-0x76]
    float v7;  // [bp-0x64]
    float v8;  // [bp-0x60]
    float v9;  // [bp-0x5c]
    float v10;  // [bp-0x58]
    float v11;  // [bp-0x54]
    float v12;  // [bp-0x50]
    float v13;  // [bp-0x4c]
    float v14;  // [bp-0x48]
    float v15;  // [bp-0x44]
    float v16;  // [bp-0x40]
    float v17;  // [bp-0x3c]
    float v18;  // [bp-0x34]
    float v19;  // [bp-0x24]
    int v20;  // [bp-0x24]
    float v21;  // [bp-0x20]
    float v22;  // [bp-0x1c]
    float v23;  // [bp-0x18]
    float v24;  // [bp-0x14]
    float v25;  // [bp-0x10]

    v3 = GetClassPtr__H1Z9CKiAttack_PX01_PX01(0);
    v3->field_60->field_8(v3);
    v26 = v3;
    v26->field_0->field_108 = 5;
    v26->field_0->field_10c = 1;
    g_engfuncs.pfnSetModel(v26->field_0->field_208, "sprites/null.spr");
    v27 = a3;
    if (v27 > 9999)
        v27 = 9999;
    v20 = v27;
    v3->field_0->field_1e0 = (float)v20;
    v28 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v29 = sqrt(v28);
    if (isnan(v29))
        sqrt(*(unsigned int *)&v28);
    else
        v28 = v29;
    v10 = (float)v28;
    if (v10 == 0.0f)
    {
        v15 = 0.0f;
        v16 = 0.0f;
        v17 = 1.0;
    }
    else
    {
        v30 = 1.0 / v10;
        v15 = (float)(v30 * *a2);
        v16 = (float)(v30 * a2[1]);
        v17 = (float)(v30 * a2[2]);
    }
    v31 = 8.0 * v15;
    v23 = (float)v31;
    v32 = 8.0 * v16;
    v24 = (float)v32;
    v25 = (float)(8.0 * v17);
    v33 = a1;
    v19 = (float)(v31 + *v33);
    v21 = (float)(v32 + v33[1]);
    v22 = v33[2] + v25;
    UTIL_SetOrigin(v3->field_0, &v19);
    v2 = 25.0f;
    v1 = (float)(0.25 * v2);
    v34 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v35 = sqrt(v34);
    if (isnan(v35))
        sqrt(*(unsigned int *)&v34);
    else
        v34 = v35;
    v18 = (float)v34;
    if (v18 == 0.0f)
    {
        v13 = 0.0f;
        v14 = 0.0f;
        v15 = 1.0;
    }
    else
    {
        v36 = 1.0 / v18;
        v13 = (float)(v36 * *a2);
        v14 = (float)(v36 * a2[1]);
        v15 = (float)(v36 * a2[2]);
    }
    v10 = v1 * v13;
    v11 = v1 * v14;
    v12 = v1 * v15;
    v37 = a1;
    v7 = *v37 + v10;
    v8 = v37[1] + v11;
    v9 = v37[2] + v12;
    UTIL_SetOrigin(v3->field_0, &v7);
    v38 = v1;
    v7 = v38;
    v8 = v38;
    v9 = v38;
    v39 = -v38;
    v10 = (float)v39;
    v11 = (float)v39;
    v12 = (float)v39;
    UTIL_SetSize(v3->field_0, &v10, &v7);
    v40 = &v3->field_0->field_0;
    *(float *)&v40[8] = *a2;
    *(float *)&v40[9] = a2[1];
    *(float *)&v40[10] = a2[2];
    v41 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v42 = sqrt(v41);
    if (isnan(v42))
        sqrt(*(unsigned int *)&v41);
    else
        v41 = v42;
    v43 = v3;
    v43->field_2a8 = (float)v41;
    v44 = &v43->field_0->field_0;
    UTIL_VecToAngles(&v7, v44 + 8);
    *(float *)&v44[20] = v7;
    *(float *)&v44[21] = v8;
    *(float *)&v44[22] = v9;
    v45 = v3;
    v45->field_0->field_198 = a0->field_208;
    v45->field_0->field_0 = -1 * gpGlobals->field_98 + 5902344;
    v46 = v3;
    v46->field_2c4 = 0;
    v46->field_2c8 = 1;
    v48 = v3;
    v48->field_14 = _INSERT(v46, 0, 0) | 0xffff0000;
    v48->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    g_engfuncs.pfnMessageBegin(2, gmsgFlare, 0, 0);
    v49 = g_engfuncs.pfnIndexOfEdict(v3->field_0->field_208);
    g_engfuncs.pfnWriteLong(v49);
    g_engfuncs.pfnWriteShort(a4);
    g_engfuncs.pfnWriteShort(a5);
    v6 = __fnstcw();
    v5 = v6 | 0xc00;
    v4 = (int)(0.1 * v2);
    g_engfuncs.pfnWriteShort(v4);
    g_engfuncs.pfnWriteShort(a6);
    g_engfuncs.pfnWriteShort(70);
    g_engfuncs.pfnWriteCoord(*a1);
    g_engfuncs.pfnWriteCoord(a1[1]);
    v0 = a1[2];
    g_engfuncs.pfnWriteCoord(v0);
    v51 = v3;
    v51->field_c = _INSERT(g_engfuncs.pfnMessageEnd(v0), 0, 0) | 0xffff0000;
    v51->field_10 = &NormalThink__12CMagicAttack;
    v52 = gpGlobals->field_0;
    *(float *)&v51->field_0->field_104 = v52;
    return v52;
}

