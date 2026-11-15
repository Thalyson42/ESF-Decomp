// SpawnHeadGib__4CGibP9entvars_s @0xa3da0 size=1083
typedef struct st_4a3da0_5 {
    char padding_0[124];
    struct st_4a3da0_4 *field_7c;
} st_4a3da0_5;

typedef struct st_4a3da0_3 {
    unsigned int field_0;
} st_4a3da0_3;

typedef struct st_4a3da0_7 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[352];
    unsigned int field_16c;
    unsigned int field_170;
    unsigned int field_174;
    char padding_178[136];
    struct st_4a3da0_5 *field_200;
} st_4a3da0_7;

typedef struct st_4a3da0_6 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[352];
    float field_174;
    float field_178;
    float field_17c;
    char padding_180[136];
    struct st_4a3da0_5 *field_208;
} st_4a3da0_6;

typedef struct st_4a3da0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    float field_28;
    char padding_2c[232];
    unsigned int field_114;
    char padding_118[240];
    unsigned int field_208;
} st_4a3da0_0;

typedef struct st_4a3da0_2 {
    char padding_0[64];
    struct st_4a3da0_3 *field_40;
} st_4a3da0_2;

typedef struct st_4a3da0_1 {
    struct st_4a3da0_0 *field_0;
    char padding_4[676];
    unsigned int field_2a8;
} st_4a3da0_1;

typedef struct st_4a3da0_4 {
    char padding_0[96];
    struct st_4a3da0_2 *field_60;
} st_4a3da0_4;

extern unsigned int g_Language;
extern st_4a3da0_3 *g_engfuncs.pfnFindClientInPVS;
extern st_4a3da0_3 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4a3da0_3 *g_engfuncs.pfnRandomLong;
extern st_4a3da0_3 *g_engfuncs.pfnRandomFloat;

int SpawnHeadGib__4CGibP9entvars_s(st_4a3da0_6 *a0)
{
    unsigned int *v21;  // edx
    st_4a3da0_7 *v22;  // eax
    float v31;  // 112
    double v32;  // mm7
    double v33;  // mm6
    double v34;  // mm7
    unsigned int *v35;  // edi
    double v36;  // mm0
    st_4a3da0_5 *v37;  // eax
    st_4a3da0_4 *v38;  // edx
    st_4a3da0_1 *v39;  // ecx
    unsigned int *v40;  // edx
    float v23;  // 128
    unsigned int *v41;  // eax
    double v42;  // mm7
    unsigned int *v43;  // eax
    double v44;  // mm6
    double v45;  // mm7
    float *v24;  // edi
    st_4a3da0_1 *v25;  // ecx
    unsigned int *v26;  // esi
    unsigned int *v27;  // eax
    unsigned int *v28;  // edx
    float v29;  // 112
    float v30;  // 112
    st_4a3da0_1 *v0;  // [bp-0xbc]
    int v1;  // [bp-0xb8]
    float v2;  // [bp-0x90]
    float v3;  // [bp-0x8c]
    st_4a3da0_1 *v4;  // [bp-0x88]
    float v5;  // [bp-0x84]
    float v6;  // [bp-0x80]
    float v7;  // [bp-0x7c]
    float v8;  // [bp-0x78]
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    float v12;  // [bp-0x44]
    float v13;  // [bp-0x40]
    float v14;  // [bp-0x3c]
    float v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    float v17;  // [bp-0x1c]
    float v18;  // [bp-0x18]
    float v19;  // [bp-0x14]
    float v20;  // [bp-0x10]

    v4 = GetClassPtr__H1Z4CGib_PX01_PX01(0);
    if (g_Language == 1)
    {
        v1 = "models/germangibs.mdl";
        v0 = v4;
    }
    else
    {
        v1 = "models/hgibs.mdl";
        v0 = v4;
    }
    CGib::Spawn(v0, v1);
    v4->field_0->field_114 = 0;
    if (!a0)
        return CGib::LimitVelocity(v4);
    v21 = v4->field_0;
    v22 = &a0->field_8;
    v23 = *(float *)&v22->field_8 + a0->field_17c;
    v15 = a0->field_8 + a0->field_174;
    v16 = *(float *)&v22->field_4 + a0->field_178;
    v17 = v23;
    *(float *)&v21[2] = v15;
    *(float *)&v21[3] = v16;
    *(float *)&v21[4] = v17;
    v24 = g_engfuncs.pfnFindClientInPVS(v4->field_0->field_208);
    if ((int)g_engfuncs.pfnRandomLong(0, 100) <= 5 && v24)
    {
        v25 = v4;
        v26 = v25->field_0;
        v27 = v24 + 0x22;
        v9 = v24[0x22] + v24[125];
        v10 = *(float *)&v27[1] + v24[126];
        v11 = *(float *)&v27[2] + v24[127];
        v28 = &v25->field_0->field_8;
        v29 = v9 - v25->field_0->field_8;
        v12 = v29;
        v30 = v10 - *(float *)&v28[1];
        v13 = v30;
        v31 = v11 - *(float *)&v28[2];
        v14 = v31;
        v32 = v29 * v29 + v30 * v30 + v31 * v31;
        v33 = sqrt(v32);
        if (isnan(v33))
            sqrt(*(unsigned int *)&v32);
        else
            v32 = v33;
        v8 = (float)v32;
        if (v8 == 0.0f)
        {
            v18 = 0.0f;
            v19 = 0.0f;
            v20 = 1.0;
        }
        else
        {
            v34 = 1.0 / v8;
            v18 = (float)(v34 * v12);
            v19 = (float)(v34 * v13);
            v20 = (float)(v34 * v14);
        }
        v15 = (float)(300.0 * v18);
        v16 = (float)(300.0 * v19);
        v17 = (float)(300.0 * v20);
        *(float *)&v26[8] = v15;
        *(float *)&v26[9] = v16;
        *(float *)&v26[10] = v17;
        v4->field_0->field_28 = (float)(v4->field_0->field_28 + 100.0);
    }
    else
    {
        v35 = v4->field_0;
        g_engfuncs.pfnRandomFloat(0xc2c80000, 0x42c80000);
        v3 = v23;
        g_engfuncs.pfnRandomFloat(0xc2c80000, 0x42c80000);
        v2 = v23;
        g_engfuncs.pfnRandomFloat(200.0f, 300.0f);
        v5 = v3;
        v6 = v2;
        v7 = (float)v36;
        *(float *)&v35[8] = v5;
        *(float *)&v35[9] = v6;
        *(float *)&v35[10] = v7;
    }
    g_engfuncs.pfnRandomFloat(0x42c80000, 200.0f);
    *(float *)&v4->field_0->padding_2c[48] = 200.0f;
    g_engfuncs.pfnRandomFloat(0x42c80000, 300.0f);
    *(float *)&v4->field_0->padding_2c[52] = 300.0f;
    v37 = a0->field_208;
    if (a0->field_208 || (v37 = g_engfuncs.pfnPEntityOfEntOffset(0), v37))
        v38 = v37->field_7c;
    else
        v38 = NULL;
    v39 = v4;
    v39->field_2a8 = v38->field_60->field_40(v38);
    if (-50.0f < *(float *)&a0->padding_14[332])
    {
        v40 = v39->field_0;
        v41 = v40 + 8;
        v42 = 0.699999988079071;
        goto LABEL_4a4191;
    }
    else if (-200.0f < *(float *)&a0->padding_14[332])
    {
        v40 = v4->field_0;
        v43 = v40 + 8;
        v44 = *(float *)&v43[1] + *(float *)&v43[1];
        v45 = *(float *)&v43[2] + *(float *)&v43[2];
        v5 = *(float *)&v40[8] + *(float *)&v40[8];
    }
    else
    {
        v40 = v4->field_0;
        v41 = v40 + 8;
        v42 = 4.0;
LABEL_4a4191:
        v5 = (float)(v42 * *(float *)&v40[8]);
        v44 = v42 * *(float *)&v41[1];
        v45 = v42 * *(float *)&v41[2];
    }
    v6 = (float)v44;
    v7 = (float)v45;
    *(float *)&v40[8] = v5;
    *(float *)&v40[9] = v6;
    *(float *)&v40[10] = v7;
    return CGib::LimitVelocity(v4);
}

