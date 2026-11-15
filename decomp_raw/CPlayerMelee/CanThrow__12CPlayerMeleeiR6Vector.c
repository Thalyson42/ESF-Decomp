// CanThrow__12CPlayerMeleeiR6Vector @0x10a230 size=665
typedef struct st_50a230_6 {
    char padding_0[124];
    struct st_50a230_2 *field_7c;
} st_50a230_6;

typedef struct st_50a230_5 {
    char padding_0[268];
    unsigned int field_10c;
} st_50a230_5;

typedef struct st_50a230_1 {
    char padding_0[292];
    struct st_50a230_2 *field_124;
} st_50a230_1;

typedef struct st_50a230_2 {
    struct st_50a230_0 *field_0;
} st_50a230_2;

typedef struct st_50a230_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[96];
    char field_74;
    char padding_75[403];
    int field_208;
} st_50a230_0;

typedef struct st_50a230_3 {
    float field_0;
    unsigned int field_4;
    float field_8;
} st_50a230_3;

typedef struct st_50a230_4 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_50a230_4;

typedef struct st_50a230_7 {
    unsigned int field_0;
} st_50a230_7;

extern st_50a230_7 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_50a230_4 *gpGlobals;

unsigned int CanThrow__12CPlayerMeleeiR6Vector(st_50a230_1 *a0, int a1, st_50a230_3 *a2)
{
    st_50a230_0 **v22;  // ecx
    unsigned int *v23;  // edx
    double v32;  // mm6
    double v33;  // mm7
    double v34;  // mm5
    double v35;  // mm7
    unsigned int *v36;  // edx
    double v37;  // mm6
    st_50a230_0 *v38;  // edx
    double v24;  // mm7
    unsigned int *v25;  // edx
    double v26;  // mm5
    double v27;  // mm5
    st_50a230_6 *v28;  // eax
    st_50a230_5 **v29;  // eax
    double v30;  // mm7
    double v31;  // mm6
    int v0;  // [bp-0xa8]
    float v1;  // [bp-0xa4]
    float v2;  // [bp-0xa0]
    float v3;  // [bp-0x9c]
    float v4;  // [bp-0x98]
    float v5;  // [bp-0x94]
    float v6;  // [bp-0x90]
    float v7;  // [bp-0x84]
    float v8;  // [bp-0x80]
    float v9;  // [bp-0x7c]
    float v10;  // [bp-0x64]
    float v11;  // [bp-0x60]
    float v12;  // [bp-0x5c]
    char v13;  // [bp-0x44]
    float v14;  // [bp-0x34]
    float v15;  // [bp-0x30]
    float v16;  // [bp-0x2c]
    float v17;  // [bp-0x28]
    float v18;  // [bp-0x20]
    float v19;  // [bp-0x1c]
    float v20;  // [bp-0x18]
    st_50a230_6 *v21;  // [bp-0x14]

    UTIL_MakeVectors(*(int *)a0->field_124 + 116);
    v22 = a0->field_124;
    v23 = &*v22->field_8;
    v10 = *v22->field_8;
    v11 = *(float *)&v23[1];
    v12 = *(float *)&v23[2];
    v0 = a1;
    v24 = (double)v0;
    v25 = &gpGlobals->field_28;
    v26 = v24 * gpGlobals->field_28;
    v1 = (float)v26;
    v27 = v24 * *(float *)&v25[1];
    v2 = (float)v27;
    v3 = (float)(v24 * *(float *)&v25[2]);
    v7 = (float)(v26 + v10);
    v8 = (float)(v27 + v11);
    v9 = v12 + v3;
    UTIL_TraceHull(&v10, &v7, 0, 1, *v22->field_208, &v13);
    a2->field_0 = v15;
    *(float *)&a2->field_4 = v16;
    a2->field_8 = v17;
    if (1.0 <= v14)
        return 1;
    v28 = v21;
    if (v28 || (v28 = g_engfuncs.pfnPEntityOfEntOffset(0), v28))
        v29 = v28->field_7c;
    else
        v29 = NULL;
    if (*v29->field_10c == 4)
    {
        v0 = a1;
        v30 = (double)v0 * (1.0 - v14);
        v4 = (float)(v30 * v18);
        v31 = v30 * v19;
        v5 = (float)v31;
        v6 = (float)(v30 * v20);
        v32 = v10 + v4;
        v33 = v31 + v11;
        v34 = v12 + v6;
    }
    else
    {
        v0 = a1;
        v35 = (double)v0 * (1.0 - v14);
        v36 = &gpGlobals->field_28;
        v4 = (float)(v35 * gpGlobals->field_28);
        v37 = v35 * *(float *)&v36[1];
        v5 = (float)v37;
        v6 = (float)(v35 * *(float *)&v36[2]);
        v32 = v10 - v4;
        v33 = v11 - v37;
        v34 = v12 - v6;
    }
    v1 = (float)v32;
    v2 = (float)v33;
    v3 = (float)v34;
    v7 = v1;
    v8 = v2;
    v9 = v3;
    UTIL_TraceHull(&v10, &v7, 0, 1, *(int *)(*(int *)a0->field_124 + 520), &v13);
    if (1.0 > v14)
        return 0;
    v38 = *(int *)a0->field_124;
    v38->field_8 = v15;
    v38->field_c = v16;
    v38->field_10 = v17;
    UTIL_SetOrigin(*(int *)a0->field_124, *(int *)a0->field_124 + 8);
    return 1;
}

