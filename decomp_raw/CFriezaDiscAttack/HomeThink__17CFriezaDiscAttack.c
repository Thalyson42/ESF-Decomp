// HomeThink__17CFriezaDiscAttack @0xc02c0 size=625
typedef struct st_4c02c0_2 {
    char padding_0[376];
    unsigned int field_178;
} st_4c02c0_2;

typedef struct st_4c02c0_3 {
    char padding_0[400];
    unsigned int field_190;
} st_4c02c0_3;

typedef struct st_4c02c0_1 {
    char padding_0[408];
    unsigned int field_198;
} st_4c02c0_1;

typedef struct st_4c02c0_0 {
    float field_0;
} st_4c02c0_0;

extern char NormalThink__12CMagicAttack;
extern st_4c02c0_0 *gpGlobals;

double HomeThink__17CFriezaDiscAttack(float idx)
{
    st_4c02c0_1 *v21;  // eax
    float *v22;  // edx
    unsigned int v31;  // 128
    st_4c02c0_1 *v32;  // edx
    st_4c02c0_2 *v33;  // eax
    double v34;  // mm5
    double v35;  // mm5
    st_4c02c0_1 *v36;  // esi
    double v38;  // mm7
    unsigned int *v23;  // eax
    st_4c02c0_3 *v24;  // edx
    float v25;  // 112
    float v26;  // 112
    float v27;  // 112
    double v28;  // mm7
    double v29;  // mm6
    double v30;  // mm7
    float v0;  // [bp-0xa4]
    float v1;  // [bp-0xa0]
    float v2;  // [bp-0x9c]
    float v3;  // [bp-0x98]
    float v4;  // [bp-0x94]
    float v5;  // [bp-0x90]
    float v6;  // [bp-0x8c]
    float v7;  // [bp-0x88]
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

    v21 = *(int *)idx;
    if (v21->field_198)
    {
        v22 = (!v21->field_198 ? NULL : v21->field_198 + 128);
        v23 = v22 + 2;
        v17 = v22[2] + v22[93];
        v18 = *(float *)&v23[1] + v22[94];
        v19 = *(float *)&v23[2] + v22[95];
        v24 = *(int *)idx + 8;
        v25 = v17 - *(float *)(*(int *)idx + 8);
        v14 = v25;
        v26 = v18 - *(float *)&v24->padding_0[4];
        v15 = v26;
        v27 = v19 - *(float *)&v24->padding_0[8];
        v16 = v27;
        v28 = v25 * v25 + v26 * v26 + v27 * v27;
        v29 = sqrt(v28);
        if (isnan(v29))
            sqrt(*(unsigned int *)&v28);
        else
            v28 = v29;
        v3 = (float)v28;
        if (v3 == 0.0f)
        {
            v8 = 0.0f;
            v9 = 0.0f;
            v10 = 1.0;
        }
        else
        {
            v30 = 1.0 / v3;
            v8 = (float)(v30 * v14);
            v9 = (float)(v30 * v15);
            v10 = (float)(v30 * v16);
        }
        v31 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 680);
        v11 = __int_as_float(v31) * v8;
        v12 = __int_as_float(v31) * v9;
        v13 = __int_as_float(v31) * v10;
        v32 = *(int *)idx;
        v33 = &v32->padding_0[32];
        v3 = (float)(0.20000000298023224 * *(float *)&v32->padding_0[32]);
        v4 = (float)(0.20000000298023224 * *(float *)&v33->padding_0[4]);
        v5 = (float)(0.20000000298023224 * *(float *)&v33->padding_0[8]);
        v34 = 0.800000011920929 * v11;
        v6 = (float)v34;
        v35 = 0.800000011920929 * v12;
        v7 = (float)v35;
        v8 = (float)(0.800000011920929 * v13);
        v0 = (float)(v34 + v3);
        v1 = (float)(v35 + v4);
        v2 = v5 + v8;
        *(float *)&v32->padding_0[32] = v0;
        *(float *)&v32->padding_0[36] = v1;
        *(float *)&v32->padding_0[40] = v2;
        v36 = *(int *)idx;
        UTIL_VecToAngles(&v0, &v36->padding_0[32]);
        *(float *)&v36->padding_0[80] = v0;
        *(float *)&v36->padding_0[84] = v1;
        *(float *)&v36->padding_0[88] = v2;
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v21, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &NormalThink__12CMagicAttack;
    }
    CMagicAttack::DrawBubbles(idx);
    if (!(*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 156))(idx))
        CDiscAttack::Vaporize(idx);
    v38 = 0.3 + *(float *)gpGlobals;
    *(float *)(*(int *)idx + 260) = (float)v38;
    return v38;
}

