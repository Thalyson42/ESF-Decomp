// DeadTakeDamage__12CBaseMonsterP9entvars_sT1fi @0xa5eb0 size=774
typedef struct st_4a5eb0_3 {
    char padding_0[124];
    struct st_4a5eb0_2 *field_7c;
} st_4a5eb0_3;

typedef struct st_4a5eb0_0 {
    char padding_0[204];
    struct st_4a5eb0_1 *field_cc;
} st_4a5eb0_0;

typedef struct st_4a5eb0_5 {
    char padding_0[60];
    struct st_4a5eb0_1 *field_3c;
    char padding_40[140];
    struct st_4a5eb0_1 *field_cc;
} st_4a5eb0_5;

typedef struct st_4a5eb0_1 {
    unsigned int field_0;
} st_4a5eb0_1;

typedef struct st_4a5eb0_4 {
    char padding_0[520];
    struct st_4a5eb0_3 *field_208;
} st_4a5eb0_4;

typedef struct st_4a5eb0_2 {
    char padding_0[96];
    struct st_4a5eb0_0 *field_60;
} st_4a5eb0_2;

typedef struct st_4a5eb0_6 {
    unsigned int field_0;
    char padding_4[92];
    struct st_4a5eb0_5 *field_60;
} st_4a5eb0_6;

extern unsigned int g_vecAttackDir;
extern unsigned int g_vecAttackDir+4;
extern unsigned int g_vecAttackDir+8;
extern st_4a5eb0_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4a5eb0_1 *g_engfuncs.pfnEntOffsetOfPEntity;

unsigned int DeadTakeDamage__12CBaseMonsterP9entvars_sT1fi(st_4a5eb0_6 *a0, st_4a5eb0_4 *a1, unsigned int a2, float a3, unsigned int a4)
{
    unsigned int v27;  // edi
    st_4a5eb0_3 *v28;  // eax
    double v37;  // mm6
    double v38;  // mm7
    st_4a5eb0_2 *v29;  // ecx
    float v30;  // 112
    float v31;  // 112
    float v32;  // 112
    double v33;  // mm7
    double v34;  // mm6
    double v35;  // mm7
    double v36;  // mm7
    float v0;  // [bp-0xd8]
    char v1;  // [bp-0xc4]
    float v2;  // [bp-0xc4]
    float v3;  // [bp-0xc0]
    float v4;  // [bp-0xbc]
    float v5;  // [bp-0xa4]
    float v6;  // [bp-0xa0]
    float v7;  // [bp-0x9c]
    float v8;  // [bp-0x84]
    char v9;  // [bp-0x84]
    float v10;  // [bp-0x80]
    float v11;  // [bp-0x7c]
    float v12;  // [bp-0x64]
    float v13;  // [bp-0x60]
    float v14;  // [bp-0x5c]
    float v15;  // [bp-0x44], Other Possible Types: unsigned int
    float v16;  // [bp-0x40], Other Possible Types: unsigned int
    float v17;  // [bp-0x3c], Other Possible Types: unsigned int
    float v18;  // [bp-0x38]
    float v19;  // [bp-0x34]
    float v20;  // [bp-0x30]
    float v21;  // [bp-0x24]
    unsigned int v22;  // [bp-0x24]
    float v23;  // [bp-0x20]
    unsigned int v24;  // [bp-0x20]
    float v25;  // [bp-0x1c]
    unsigned int v26;  // [bp-0x1c]

    v15 = 0;
    v16 = 0;
    v17 = 0;
    v22 = v15;
    v24 = v16;
    v26 = v17;
    v27 = 0;
    if (!a1 || !g_engfuncs.pfnEntOffsetOfPEntity(a1->field_208))
        v27 = 1;
    if (!v27)
    {
        v28 = a1->field_208;
        if (a1->field_208 || (v28 = g_engfuncs.pfnPEntityOfEntOffset(0), v28))
            v29 = v28->field_7c;
        else
            v29 = NULL;
        if (v29)
        {
            v29->field_60->field_cc(&v9, v29);
            v5 = 0;
            v6 = 0;
            v7 = 10.0f;
            v12 = v8 - v5;
            v13 = v10 - v6;
            v14 = v11 - v7;
            a0->field_60->field_cc(&v1, a0);
            v30 = v12 - v2;
            v18 = v30;
            v31 = v13 - v3;
            v19 = v31;
            v32 = v14 - v4;
            v20 = v32;
            v33 = v30 * v30 + v31 * v31 + v32 * v32;
            v34 = sqrt(v33);
            if (isnan(v34))
                sqrt(*(unsigned int *)&v33);
            else
                v33 = v34;
            v0 = (float)v33;
            if (v0 == 0.0f)
            {
                v15 = 0.0f;
                v16 = 0.0f;
                v17 = 1.0;
            }
            else
            {
                v35 = 1.0 / v0;
                v15 = (float)(v35 * v18);
                v16 = (float)(v35 * v19);
                v17 = (float)(v35 * v20);
            }
            v21 = v15;
            v23 = v16;
            v25 = v17;
            v36 = v21 * v21 + v23 * v23 + v25 * v25;
            v37 = sqrt(v36);
            if (isnan(v37))
                sqrt(*(unsigned int *)&v36);
            else
                v36 = v37;
            v0 = (float)v36;
            if (v0 == 0.0f)
            {
                v18 = 0.0f;
                v19 = 0.0f;
                v20 = 1.0;
            }
            else
            {
                v38 = 1.0 / v0;
                v18 = (float)(v38 * v21);
                v19 = (float)(v38 * v23);
                v20 = (float)(v38 * v25);
            }
            *(float *)&g_vecAttackDir = v18;
            *(float *)&g_vecAttackDir+4 = v19;
            *(float *)&g_vecAttackDir+8 = v20;
            v22 = g_vecAttackDir;
            v24 = g_vecAttackDir+4;
            v26 = g_vecAttackDir+8;
        }
    }
    if (a4 & 737)
    {
        if (a3 >= *(float *)(a0->field_0 + 352))
        {
            *(float *)(a0->field_0 + 352) = -50.0f;
            a0->field_60->field_3c(a0, a2, 2);
            return 0;
        }
        *(float *)(a0->field_0 + 352) = (float)(*(float *)(a0->field_0 + 352) - 0.1 * a3);
    }
    return 1;
}

