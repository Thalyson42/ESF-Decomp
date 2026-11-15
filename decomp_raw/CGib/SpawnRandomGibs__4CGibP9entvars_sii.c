// SpawnRandomGibs__4CGibP9entvars_sii @0xa41e0 size=974
typedef struct st_4a41e0_6 {
    char padding_0[124];
    struct st_4a41e0_5 *field_7c;
} st_4a41e0_6;

typedef struct st_4a41e0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[224];
    unsigned int field_10c;
    char padding_110[4];
    unsigned int field_114;
} st_4a41e0_0;

typedef struct st_4a41e0_3 {
    char padding_0[276];
    struct st_4a41e0_2 *field_114;
    char padding_118[84];
    struct st_4a41e0_2 *field_16c;
} st_4a41e0_3;

typedef struct st_4a41e0_2 {
    unsigned int field_0;
} st_4a41e0_2;

typedef struct st_4a41e0_7 {
    char padding_0[196];
    float field_c4;
    float field_c8;
    float field_cc;
    char padding_d0[36];
    float field_f4;
    float field_f8;
    float field_fc;
    char padding_100[96];
    float field_160;
    char padding_164[164];
    struct st_4a41e0_6 *field_208;
} st_4a41e0_7;

typedef struct st_4a41e0_4 {
    char padding_0[64];
    struct st_4a41e0_2 *field_40;
} st_4a41e0_4;

typedef struct st_4a41e0_1 {
    struct st_4a41e0_0 *field_0;
    char padding_4[676];
    unsigned int field_2a8;
} st_4a41e0_1;

typedef struct st_4a41e0_5 {
    char padding_0[96];
    struct st_4a41e0_4 *field_60;
} st_4a41e0_5;

extern float g_vecAttackDir;
extern float g_vecAttackDir+4;
extern float g_vecAttackDir+8;
extern unsigned int g_Language;
extern st_4a41e0_3 g_engfuncs;
extern st_4a41e0_2 *g_engfuncs.pfnRandomLong;
extern st_4a41e0_2 *g_engfuncs.pfnRandomFloat;

int SpawnRandomGibs__4CGibP9entvars_sii(st_4a41e0_7 *a0, int a1, unsigned int a2)
{
    double v13;  // mm7
    double v22;  // mm7
    st_4a41e0_0 *v23;  // esi
    unsigned int *v24;  // edx
    st_4a41e0_6 *v25;  // eax
    st_4a41e0_5 *v26;  // edx
    st_4a41e0_0 *v27;  // edx
    unsigned int *v28;  // eax
    double v29;  // mm7
    unsigned int *v30;  // eax
    double v31;  // mm6
    st_4a41e0_1 *v14;  // edi
    int v32;  // eax
    int v15;  // eax
    unsigned int v16;  // eax
    double v17;  // mm7
    double v18;  // mm7
    st_4a41e0_0 *v19;  // edx
    double v20;  // mm7
    double v21;  // mm7
    unsigned int v0;  // [bp-0x6c]
    unsigned int v1;  // [bp-0x68]
    st_4a41e0_3 *v2;  // [bp-0x2c]
    int v3;  // [bp-0x28]
    float v4;  // [bp-0x24]
    unsigned int v5;  // [bp-0x24]
    float v6;  // [bp-0x20]
    unsigned int v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]
    unsigned int v9;  // [bp-0x1c]
    unsigned int v10;  // [bp-0x18]
    unsigned int v11;  // [bp-0x14]
    unsigned int v12;  // [bp-0x10]

    v3 = 0;
    if (v3 >= a1)
        return a1;
    do
    {
        v14 = GetClassPtr__H1Z4CGib_PX01_PX01(0);
        if (g_Language == 1)
        {
            v15 = "models/germangibs.mdl";
        }
        else if (a2)
        {
            CGib::Spawn(v14, "models/hgibs.mdl");
            v1 = 5;
            v0 = 1;
            goto LABEL_4a4272;
        }
        else
        {
            v15 = "models/agibs.mdl";
        }
        CGib::Spawn(v14, v15);
        v1 = 3;
        v0 = 0;
LABEL_4a4272:
        v16 = g_engfuncs.pfnRandomLong(v0, v1);
        v14->field_0->field_114 = v16;
        if (!a0)
            continue;
        v2 = &g_engfuncs.padding_0[0];
        g_engfuncs.pfnRandomFloat(0, 0x3f800000);
        v17 = v13 * a0->field_f4 + a0->field_c4;
        v14->field_0->field_8 = (float)v17;
        v2->field_16c(0, 0x3f800000);
        v18 = v17 * a0->field_f8 + a0->field_c8;
        v14->field_0->field_c = (float)v18;
        v2->field_16c(0, 0x3f800000);
        v14->field_0->field_10 = (float)(v18 * a0->field_fc + a0->field_cc + 1.0);
        v19 = v14->field_0;
        v4 = (float)(-1.0 * g_vecAttackDir);
        v20 = -1.0 * g_vecAttackDir+8;
        v6 = (float)(-1.0 * g_vecAttackDir+4);
        v8 = (float)v20;
        v19->field_20 = v4;
        v19->field_24 = v6;
        v19->field_28 = v8;
        v2->field_16c(0xbe800000, 1048576000);
        v21 = v20 + v14->field_0->field_20;
        v14->field_0->field_20 = (float)v21;
        v2->field_16c(0xbe800000, 1048576000);
        v22 = v21 + v14->field_0->field_24;
        v14->field_0->field_24 = (float)v22;
        v2->field_16c(0xbe800000, 1048576000);
        v14->field_0->field_28 = (float)(v22 + v14->field_0->field_28);
        v23 = v14->field_0;
        v2->field_16c(0x43960000, 400.0f);
        v24 = &v14->field_0->field_20;
        v4 = (float)(400.0 * v14->field_0->field_20);
        v6 = (float)(400.0 * *(float *)&v24[1]);
        v8 = (float)(400.0 * *(float *)&v24[2]);
        v23->field_20 = v4;
        v23->field_24 = v6;
        v23->field_28 = v8;
        v2->field_16c(0x42c80000, 200.0f);
        *(float *)&v14->field_0->padding_2c[48] = 200.0f;
        v2->field_16c(0x42c80000, 0x43960000);
        *(float *)&v14->field_0->padding_2c[52] = 200.0f;
        v25 = a0->field_208;
        if (a0->field_208 || (v25 = v2->field_114(0), v25))
            v26 = v25->field_7c;
        else
            v26 = NULL;
        v14->field_2a8 = v26->field_60->field_40(v26);
        if (-50.0f < a0->field_160)
        {
            v27 = v14->field_0;
            v28 = &v27->field_20;
            v29 = 0.699999988079071;
        }
        else if (-200.0f < a0->field_160)
        {
            v27 = v14->field_0;
            v30 = &v27->field_20;
            v31 = *(float *)&v30[1] + *(float *)&v30[1];
            v13 = *(float *)&v30[2] + *(float *)&v30[2];
            v4 = v27->field_20 + v27->field_20;
            goto LABEL_4a4525;
        }
        else
        {
            v27 = v14->field_0;
            v28 = &v27->field_20;
            v29 = 4.0;
        }
        v4 = (float)(v29 * v27->field_20);
        v31 = v29 * *(float *)&v28[1];
        v13 = v29 * *(float *)&v28[2];
LABEL_4a4525:
        v6 = (float)v31;
        v8 = (float)v13;
        v27->field_20 = v4;
        v27->field_24 = v6;
        v27->field_28 = v8;
        v14->field_0->field_10c = 2;
        v5 = 0;
        v7 = 0;
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        UTIL_SetSize(v14->field_0, &v10, &v5);
    } while ((v32 = CGib::LimitVelocity(v14), v3 += 1, v3 < a1));
    return CGib::LimitVelocity(v14);
}

