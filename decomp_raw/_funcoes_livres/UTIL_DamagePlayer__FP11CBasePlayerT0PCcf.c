// UTIL_DamagePlayer__FP11CBasePlayerT0PCcf @0x17f1e0 size=587
typedef struct st_57f1e0_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[364];
    unsigned int field_198;
} st_57f1e0_0;

typedef struct st_57f1e0_4 {
    unsigned int field_0;
} st_57f1e0_4;

typedef struct st_57f1e0_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[500];
    unsigned int field_208;
} st_57f1e0_2;

typedef struct st_57f1e0_3 {
    char padding_0[52];
    struct st_57f1e0_4 *field_34;
} st_57f1e0_3;

typedef struct st_57f1e0_6 {
    char padding_0[80];
    float field_50;
    float field_54;
    float field_58;
} st_57f1e0_6;

typedef struct st_57f1e0_5 {
    struct st_57f1e0_6 *field_0;
    char padding_4[92];
    struct st_57f1e0_3 *field_60;
} st_57f1e0_5;

typedef struct st_57f1e0_7 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[100];
    unsigned int field_98;
} st_57f1e0_7;

typedef struct st_57f1e0_1 {
    struct st_57f1e0_0 *field_0;
} st_57f1e0_1;

extern st_57f1e0_1 *pDamageEnt.2804;
extern st_57f1e0_7 *gpGlobals;

float UTIL_DamagePlayer__FP11CBasePlayerT0PCcf(st_57f1e0_2 **a0, st_57f1e0_5 *a1, unsigned int a2, float a3)
{
    float v19;  // mm7
    unsigned int *v20;  // edx
    unsigned int *v29;  // ecx
    unsigned int *v30;  // edx
    unsigned int *v21;  // edi
    unsigned int *v22;  // esi
    double v23;  // mm7
    double v24;  // mm6
    double v25;  // mm7
    unsigned int *v26;  // edx
    double v27;  // mm5
    double v28;  // mm5
    float v0;  // [bp-0x58]
    float v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x44]
    float v3;  // [bp-0x40]
    unsigned int v4;  // [bp-0x40]
    float v5;  // [bp-0x3c]
    unsigned int v6;  // [bp-0x3c]
    float v7;  // [bp-0x38]
    float v8;  // [bp-0x34]
    float v9;  // [bp-0x30]
    float v10;  // [bp-0x2c]
    float v11;  // [bp-0x28]
    unsigned int v12;  // [bp-0x24]
    float v13;  // [bp-0x24]
    unsigned int v14;  // [bp-0x20]
    float v15;  // [bp-0x20]
    float v16;  // [bp-0x1c]
    unsigned int v17;  // [bp-0x1c]
    float v18;  // [bp-0x18]

    if (!pDamageEnt.2804)
    {
        v12 = 0;
        v14 = 0;
        v17 = 0;
        v2 = 0;
        v4 = 0;
        v6 = 0;
        pDamageEnt.2804 = sub_48b6e0("info_target", &v2, &v12, 0);
        if (!pDamageEnt.2804)
            return v19;
    }
    v10 = 180.0f;
    v11 = 180.0f;
    v13 = 180.0f;
    v20 = &a1->field_0->field_50;
    v7 = a1->field_0->field_50 + v10;
    v8 = *(float *)&v20[1] + v11;
    v9 = *(float *)&v20[2] + v13;
    sub_489120(&v2, &v7);
    sub_48a800(&v2);
    v21 = *(int *)pDamageEnt.2804;
    v22 = v21 + 8;
    v23 = *(float *)&v21[8] * *(float *)&v21[8] + *(float *)&v22[1] * *(float *)&v22[1] + *(float *)&v22[2] * *(float *)&v22[2];
    v24 = sqrt(v23);
    if (isnan(v24))
        sub_487dc0(*(unsigned int *)&v23);
    else
        v23 = v24;
    v0 = (float)v23;
    if (v0 == 0.0f)
    {
        v10 = 0.0f;
        v11 = 0.0f;
        v13 = 1.0;
    }
    else
    {
        v25 = 1.0 / v0;
        v10 = (float)(v25 * *(float *)v22);
        v11 = (float)(v25 * *(float *)&v22[1]);
        v13 = (float)(v25 * *(float *)&v22[2]);
    }
    v7 = (float)(180.0 * v10);
    v8 = (float)(180.0 * v11);
    v9 = (float)(180.0 * v13);
    v26 = &gpGlobals->field_28;
    v27 = 10.0 * gpGlobals->field_28;
    v15 = (float)v27;
    v28 = 10.0 * *(float *)&v26[1];
    v16 = (float)v28;
    v18 = (float)(10.0 * *(float *)&v26[2]);
    v1 = (float)(v27 + v7);
    v3 = (float)(v28 + v8);
    v5 = v9 + v18;
    *(float *)&v21[8] = v1;
    *(float *)&v21[9] = v3;
    *(float *)&v21[10] = v5;
    v29 = *(int *)pDamageEnt.2804;
    v30 = *a0;
    v29[2] = v30[2];
    v29[3] = v30[3];
    v29[4] = v30[4];
    *(unsigned int *)(*(int *)pDamageEnt.2804 + 408) = *a0->field_208;
    *(unsigned int *)*(int *)pDamageEnt.2804 = a2 - gpGlobals->field_98;
    a1->field_60->field_34(a1, *(int *)pDamageEnt.2804, *a0, a3, 0);
    return a3;
}

