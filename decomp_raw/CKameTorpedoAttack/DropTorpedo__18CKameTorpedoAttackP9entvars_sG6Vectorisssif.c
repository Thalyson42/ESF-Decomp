// DropTorpedo__18CKameTorpedoAttackP9entvars_sG6Vectorisssif @0xc9b10 size=900
typedef struct st_4c9b10_5 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[100];
    unsigned int field_98;
} st_4c9b10_5;

typedef struct st_4c9b10_2 {
    unsigned int field_0;
} st_4c9b10_2;

typedef struct st_4c9b10_0 {
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
} st_4c9b10_0;

typedef struct st_4c9b10_4 {
    char padding_0[520];
    unsigned int field_208;
} st_4c9b10_4;

typedef struct st_4c9b10_3 {
    struct st_4c9b10_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[76];
    struct st_4c9b10_1 *field_60;
    char padding_64[612];
    unsigned int field_2c8;
    char padding_2cc[4];
    unsigned int field_2d0;
    unsigned int field_2d4;
} st_4c9b10_3;

typedef struct st_4c9b10_1 {
    char padding_0[8];
    struct st_4c9b10_2 *field_8;
} st_4c9b10_1;

extern char NormalThink__12CMagicAttack;
extern unsigned int gmsgFlare;
extern st_4c9b10_2 *g_engfuncs.pfnSetModel;
extern st_4c9b10_2 *g_engfuncs.pfnMessageBegin;
extern st_4c9b10_2 *g_engfuncs.pfnMessageEnd;
extern st_4c9b10_2 *g_engfuncs.pfnWriteShort;
extern st_4c9b10_2 *g_engfuncs.pfnWriteLong;
extern st_4c9b10_2 *g_engfuncs.pfnWriteCoord;
extern st_4c9b10_2 *g_engfuncs.pfnIndexOfEdict;
extern st_4c9b10_5 *gpGlobals;

short DropTorpedo__18CKameTorpedoAttackP9entvars_sG6Vectorisssif(st_4c9b10_4 *a0, float *a1, int a2, short a3, short a4, short a5, unsigned int a6, float a7)
{
    st_4c9b10_3 *v21;  // edi
    st_4c9b10_0 *v22;  // edx
    st_4c9b10_0 *v23;  // esi
    float v24;  // 128
    double v25;  // mm7
    unsigned int *v26;  // edx
    float *v27;  // eax
    float *v28;  // edx
    unsigned int v29;  // eax
    float v0;  // [bp-0x90]
    double v1;  // [bp-0x5c]
    float v2;  // [bp-0x54]
    st_4c9b10_5 **v3;  // [bp-0x50]
    char *v4;  // [bp-0x4c]
    char *v5;  // [bp-0x48]
    int v6;  // [bp-0x3c]
    unsigned short v7;  // [bp-0x38]
    unsigned short v8;  // [bp-0x36]
    int v9;  // [bp-0x24], Other Possible Types: unsigned int
    float v10;  // [bp-0x24]
    float v11;  // [bp-0x20]
    unsigned int v12;  // [bp-0x20]
    float v13;  // [bp-0x1c]
    unsigned int v14;  // [bp-0x1c]
    float v15;  // [bp-0x18]
    unsigned int v16;  // [bp-0x18]
    float v17;  // [bp-0x14]
    unsigned int v18;  // [bp-0x14]
    float v19;  // [bp-0x10]
    unsigned int v20;  // [bp-0x10]

    v21 = GetClassPtr__H1Z18CKameTorpedoAttack_PX01_PX01(0);
    v21->field_60->field_8(v21);
    v21->field_2c8 = 0;
    v21->field_0->field_108 = 5;
    v21->field_0->field_10c = 0;
    g_engfuncs.pfnSetModel(v21->field_0->field_208, "sprites/null.spr");
    v21->field_2d0 = a6;
    v21->field_2d4 = 0;
    *(float *)&v21->padding_64[260] = 0.5f;
    if (a2 > 9999)
        a2 = 9999;
    v9 = a2;
    v21->field_0->field_1e0 = (float)v9;
    v22 = v21->field_0;
    v9 = 0;
    v12 = 0;
    v14 = 0;
    v22->field_20 = v9;
    v22->field_24 = v12;
    v22->field_28 = v14;
    *(float *)&v21->padding_64[580] = 1000.0f;
    v23 = v21->field_0;
    v5 = &v9;
    v16 = 0;
    v18 = 0;
    v20 = 0x3f800000;
    v4 = &v16;
    UTIL_VecToAngles(&v9, &v16);
    v23->field_50 = v9;
    v23->field_54 = v12;
    v23->field_58 = v14;
    v21->field_0->field_198 = a0->field_208;
    v3 = &gpGlobals;
    v21->field_0->field_0 = -1 * gpGlobals->field_98 + 5901766;
    v1 = a7 * 64.0;
    v2 = (float)(v1 * 0.25);
    v24 = v2;
    v10 = v24;
    v11 = v24;
    v13 = v24;
    v25 = -v24;
    v15 = (float)v25;
    v17 = (float)v25;
    v19 = (float)v25;
    UTIL_SetSize(v21->field_0, v4, v5);
    UTIL_MakeVectors(&a0->padding_0[80]);
    v26 = &*v3->field_28;
    v15 = v2 * *v3->field_28;
    v17 = v2 * *(float *)&v26[1];
    v19 = v2 * *(float *)&v26[2];
    v27 = a1;
    v10 = *v27 + v15;
    v11 = v27[1] + v17;
    v13 = v27[2] + v19;
    v28 = a1;
    *v28 = v10;
    v28[1] = v11;
    v28[2] = v13;
    UTIL_SetOrigin(v21->field_0, v28);
    g_engfuncs.pfnMessageBegin(2, gmsgFlare, 0, 0);
    v29 = g_engfuncs.pfnIndexOfEdict(v21->field_0->field_208);
    g_engfuncs.pfnWriteLong(v29);
    g_engfuncs.pfnWriteShort(a3);
    g_engfuncs.pfnWriteShort(a4);
    v8 = __fnstcw();
    v7 = v8 | 0xc00;
    v6 = (int)(v1 * 0.1);
    g_engfuncs.pfnWriteShort(v6);
    g_engfuncs.pfnWriteShort(a5);
    v8 = __fnstcw();
    v7 = v8 | 0xc00;
    v6 = (int)(a7 * 80.0);
    g_engfuncs.pfnWriteShort(v6);
    g_engfuncs.pfnWriteCoord(*a1);
    g_engfuncs.pfnWriteCoord(a1[1]);
    v0 = a1[2];
    g_engfuncs.pfnWriteCoord(v0);
    v21->field_c = _INSERT(g_engfuncs.pfnMessageEnd(v0), 0, 0) | 0xffff0000;
    v21->field_10 = &NormalThink__12CMagicAttack;
    *(float *)&v21->field_0->field_104 = *v3->field_0;
    return (unsigned short)v21;
}

