// UTIL_EntDir__FP11CBaseEntityG6Vector @0x17c4c0 size=1106
typedef struct st_57c4c0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_57c4c0_0;

typedef struct st_57c4c0_1 {
    float field_0;
    float field_4;
    unsigned int field_8;
} st_57c4c0_1;

typedef struct st_57c4c0_2 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[12];
    float field_40;
    float field_44;
    float field_48;
} st_57c4c0_2;

extern float g_vecZero;
extern float g_vecZero+4;
extern float g_vecZero+8;
extern st_57c4c0_2 *gpGlobals;

unsigned int UTIL_EntDir__FP11CBaseEntityG6Vector(st_57c4c0_0 **a0, st_57c4c0_1 *a1)
{
    float *v20;  // edx
    unsigned int *v21;  // eax
    double v30;  // mm7
    double v31;  // mm6
    float v32;  // 112
    float v33;  // 112
    float v34;  // 112
    double v35;  // mm7
    double v36;  // mm6
    unsigned int *v37;  // edx
    unsigned int *v38;  // edx
    double v39;  // mm5
    unsigned int v22;  // edi
    double v40;  // mm5
    float v41;  // 112
    float v42;  // 112
    float v43;  // 112
    double v44;  // mm7
    double v45;  // mm6
    float v46;  // 112
    float v47;  // 112
    float v48;  // 112
    double v49;  // mm7
    unsigned int *v23;  // edx
    double v50;  // mm6
    unsigned int *v24;  // edx
    double v25;  // mm5
    double v26;  // mm5
    float v27;  // 112
    float v28;  // 112
    float v29;  // 112
    float v0;  // [bp-0xa8]
    float v1;  // [bp-0xa4]
    float v2;  // [bp-0xa0]
    float v3;  // [bp-0x9c]
    float v4;  // [bp-0x98]
    float v5;  // [bp-0x94]
    float v6;  // [bp-0x90]
    float v7;  // [bp-0x8c]
    float v8;  // [bp-0x84]
    float v9;  // [bp-0x80]
    float v10;  // [bp-0x7c]
    float v11;  // [bp-0x64]
    float v12;  // [bp-0x60]
    float v13;  // [bp-0x5c]
    float v14;  // [bp-0x44]
    float v15;  // [bp-0x40]
    float v16;  // [bp-0x3c]
    float v17;  // [bp-0x24]
    float v18;  // [bp-0x20]
    float v19;  // [bp-0x1c]

    v20 = *a0;
    v21 = v20 + 2;
    v17 = v20[2];
    v18 = *(float *)&v21[1];
    v19 = *(float *)&v21[2];
    v22 = 0;
    v14 = g_vecZero;
    v15 = g_vecZero+4;
    v16 = g_vecZero+8;
    v11 = g_vecZero;
    v12 = g_vecZero+4;
    v13 = g_vecZero+8;
    UTIL_MakeVectors(v20 + 20);
    v23 = &gpGlobals->field_40;
    v1 = (float)(100.0 * gpGlobals->field_40);
    v2 = (float)(100.0 * *(float *)&v23[1]);
    v3 = (float)(100.0 * *(float *)&v23[2]);
    v8 = v17 - v1;
    v9 = v18 - v2;
    v10 = v19 - v3;
    v14 = v8;
    v15 = v9;
    v16 = v10;
    v24 = &gpGlobals->field_40;
    v25 = 100.0 * gpGlobals->field_40;
    v4 = (float)v25;
    v26 = 100.0 * *(float *)&v24[1];
    v5 = (float)v26;
    v6 = (float)(100.0 * *(float *)&v24[2]);
    v1 = (float)(v25 + v17);
    v2 = (float)(v26 + v18);
    v3 = v19 + v6;
    v11 = v1;
    v12 = v2;
    v13 = v3;
    v27 = a1->field_0 - v14;
    v1 = v27;
    v28 = a1->field_4 - v15;
    v2 = v28;
    v29 = *(float *)&a1->field_8 - v16;
    v3 = v29;
    v30 = v27 * v27 + v28 * v28 + v29 * v29;
    v31 = sqrt(v30);
    if (isnan(v31))
        sqrt(*(unsigned int *)&v30);
    else
        v30 = v31;
    v0 = (float)v30;
    v32 = a1->field_0 - v11;
    v1 = v32;
    v33 = a1->field_4 - v12;
    v2 = v33;
    v34 = *(float *)&a1->field_8 - v13;
    v3 = v34;
    v35 = v32 * v32 + v33 * v33 + v34 * v34;
    v36 = sqrt(v35);
    if (isnan(v36))
        sqrt(*(unsigned int *)&v35);
    else
        v35 = v36;
    v7 = (float)v35;
    if (v7 < v0)
    {
        v22 = 4;
    }
    else if (v7 > v0)
    {
        v22 = 2;
    }
    if (v19 > *(float *)&a1->field_8)
    {
        v22 |= 64;
    }
    else if (v19 < *(float *)&a1->field_8)
    {
        v22 |= 32;
    }
    v37 = &gpGlobals->field_28;
    v4 = (float)(100.0 * gpGlobals->field_28);
    v5 = (float)(100.0 * *(float *)&v37[1]);
    v6 = (float)(100.0 * *(float *)&v37[2]);
    v1 = v17 - v4;
    v2 = v18 - v5;
    v3 = v19 - v6;
    v14 = v1;
    v15 = v2;
    v16 = v3;
    v38 = &gpGlobals->field_28;
    v39 = 100.0 * gpGlobals->field_28;
    v4 = (float)v39;
    v40 = 100.0 * *(float *)&v38[1];
    v5 = (float)v40;
    v6 = (float)(100.0 * *(float *)&v38[2]);
    v1 = (float)(v39 + v17);
    v2 = (float)(v40 + v18);
    v3 = v19 + v6;
    v11 = v1;
    v12 = v2;
    v13 = v3;
    v41 = a1->field_0 - v14;
    v1 = v41;
    v42 = a1->field_4 - v15;
    v2 = v42;
    v43 = *(float *)&a1->field_8 - v16;
    v3 = v43;
    v44 = v41 * v41 + v42 * v42 + v43 * v43;
    v45 = sqrt(v44);
    if (isnan(v45))
        sqrt(*(unsigned int *)&v44);
    else
        v44 = v45;
    v0 = (float)v44;
    v46 = a1->field_0 - v11;
    v1 = v46;
    v47 = a1->field_4 - v12;
    v2 = v47;
    v48 = *(float *)&a1->field_8 - v13;
    v3 = v48;
    v49 = v46 * v46 + v47 * v47 + v48 * v48;
    v50 = sqrt(v49);
    if (isnan(v50))
        sqrt(*(unsigned int *)&v49);
    else
        v49 = v50;
    v7 = (float)v49;
    if (v7 < v0)
    {
        v22 |= 16;
    }
    else if (v7 > v0)
    {
        v22 |= 8;
    }
    return v22;
}

