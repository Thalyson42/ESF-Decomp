// TakeDamage__11CBaseEntityP9entvars_sT1fi @0x9cee0 size=938
typedef struct st_49cee0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[200];
    float field_f4;
    float field_f8;
    float field_fc;
    char padding_100[8];
    unsigned int field_108;
    char padding_10c[84];
    float field_160;
    char padding_164[8];
    float field_16c;
} st_49cee0_0;

typedef struct st_49cee0_2 {
    unsigned int field_0;
} st_49cee0_2;

typedef struct st_49cee0_4 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[176];
    float field_c4;
    float field_c8;
    float field_cc;
    float field_d0;
    float field_d4;
    float field_d8;
    char padding_dc[48];
    unsigned int field_10c;
    char padding_110[248];
    unsigned int field_208;
} st_49cee0_4;

typedef struct st_49cee0_1 {
    char padding_0[60];
    struct st_49cee0_2 *field_3c;
} st_49cee0_1;

typedef struct st_49cee0_3 {
    struct st_49cee0_0 *field_0;
    char padding_4[92];
    struct st_49cee0_1 *field_60;
} st_49cee0_3;

extern unsigned int g_vecAttackDir;
extern unsigned int g_vecAttackDir+4;
extern unsigned int g_vecAttackDir+8;
extern st_49cee0_2 *g_engfuncs.pfnEntOffsetOfPEntity;

unsigned int TakeDamage__11CBaseEntityP9entvars_sT1fi(st_49cee0_3 *a0, st_49cee0_4 *a1, st_49cee0_4 *a2, float a3)
{
    unsigned int *v16;  // eax
    float v17;  // eax
    double v26;  // mm5
    double v27;  // mm5
    unsigned int *v28;  // eax
    double v29;  // mm5
    double v30;  // mm5
    float v31;  // 112
    double v32;  // mm7
    double v33;  // mm6
    double v34;  // mm7
    st_49cee0_0 *v35;  // eax
    unsigned int *v18;  // eax
    double v36;  // mm7
    st_49cee0_0 *v37;  // edx
    unsigned int *v38;  // eax
    double v19;  // mm7
    double v20;  // mm6
    double v21;  // mm7
    unsigned int v22;  // esi
    st_49cee0_0 *v23;  // ecx
    unsigned int *v24;  // edx
    unsigned int *v25;  // eax
    float v0;  // [bp-0x68]
    char v1;  // [bp-0x64], Other Possible Types: float
    float v2;  // [bp-0x60]
    float v3;  // [bp-0x5c]
    char v4;  // [bp-0x58]
    float v5;  // [bp-0x58]
    float v6;  // [bp-0x54]
    float v7;  // [bp-0x50]
    float v8;  // [bp-0x4c]
    float v9;  // [bp-0x48]
    float v10;  // [bp-0x44]
    float v11;  // [bp-0x40]
    float v12;  // [bp-0x3c]
    float v13;  // [bp-0x24]
    float v14;  // [bp-0x20]
    float v15;  // [bp-0x1c]

    if (a0->field_0->field_16c == 0.0f)
        return 0;
    if (a2 == a1)
    {
        VecBModelOrigin(&v1, a0->field_0);
        v16 = &a2->field_8;
        v10 = a2->field_8 - v1;
        v11 = *(float *)&v16[1] - v2;
        v12 = *(float *)&v16[2] - v3;
        v13 = v10;
        v14 = v11;
        v17 = v12;
    }
    else
    {
        VecBModelOrigin(&v4, a0->field_0);
        v18 = &a1->field_8;
        v1 = a1->field_8 - v5;
        v2 = *(float *)&v18[1] - v6;
        v3 = *(float *)&v18[2] - v7;
        v13 = v1;
        v14 = v2;
        v17 = v3;
    }
    v15 = v17;
    v19 = v13 * v13 + v14 * v14 + v15 * v15;
    v20 = sqrt(v19);
    if (isnan(v20))
        sqrt(*(unsigned int *)&v19);
    else
        v19 = v20;
    v8 = (float)v19;
    if (v8 == 0.0f)
    {
        v1 = 0.0f;
        v2 = 0.0f;
        v3 = 1.0;
    }
    else
    {
        v21 = 1.0 / v8;
        v1 = (float)(v21 * v13);
        v2 = (float)(v21 * v14);
        v3 = (float)(v21 * v15);
    }
    *(float *)&g_vecAttackDir = v1;
    *(float *)&g_vecAttackDir+4 = v2;
    *(float *)&g_vecAttackDir+8 = v3;
    v22 = 0;
    if (!a1 || !g_engfuncs.pfnEntOffsetOfPEntity(a1->field_208))
        v22 = 1;
    if (!v22)
    {
        v23 = a0->field_0;
        if (v23->field_108 - 3 <= 1 && a2->field_10c != 1)
        {
            v24 = &a1->field_c4;
            v25 = &a1->field_d0;
            v8 = a1->field_c4 + a1->field_d0;
            v9 = *(float *)&v24[1] + *(float *)&v25[1];
            v10 = *(float *)&v24[2] + *(float *)&v25[2];
            v26 = 0.5 * v8;
            v5 = (float)v26;
            v27 = 0.5 * v9;
            v6 = (float)v27;
            v7 = (float)(0.5 * v10);
            v28 = &v23->field_8;
            v29 = v23->field_8 - v26;
            v1 = (float)v29;
            v30 = *(float *)&v28[1] - v27;
            v2 = (float)v30;
            v31 = *(float *)&v28[2] - v7;
            v3 = v31;
            v32 = v29 * v29 + v30 * v30 + v31 * v31;
            v33 = sqrt(v32);
            if (isnan(v33))
                sqrt(*(unsigned int *)&v32);
            else
                v32 = v33;
            v11 = (float)v32;
            if (v11 == 0.0f)
            {
                v5 = 0.0f;
                v6 = 0.0f;
                v7 = 1.0;
            }
            else
            {
                v34 = 1.0 / v11;
                v5 = (float)(v34 * v1);
                v6 = (float)(v34 * v2);
                v7 = (float)(v34 * v3);
            }
            v1 = v5;
            v2 = v6;
            v3 = v7;
            v35 = a0->field_0;
            v0 = (float)(73728.0 / (v35->field_f4 * v35->field_f8 * v35->field_fc) * a3 * 5.0);
            v36 = v0;
            if (v36 > 1000.0)
                v36 = 1000.0;
            v37 = a0->field_0;
            v8 = (float)(v36 * v1);
            v9 = (float)(v36 * v2);
            v10 = (float)(v36 * v3);
            v38 = &v37->field_20;
            v5 = v37->field_20 + v8;
            v6 = *(float *)&v38[1] + v9;
            v7 = *(float *)&v38[2] + v10;
            v37->field_20 = v5;
            v37->field_24 = v6;
            v37->field_28 = v7;
        }
    }
    a0->field_0->field_160 = a0->field_0->field_160 - a3;
    if (0.0 < a0->field_0->field_160)
        return 1;
    a0->field_60->field_3c(a0, a2, 0);
    return 0;
}

