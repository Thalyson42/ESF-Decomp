// ChaseThink__13CScatterSplit @0x10f740 size=737
typedef struct st_50f740_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_50f740_0;

typedef struct st_50f740_2 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
} st_50f740_2;

typedef struct st_50f740_1 {
    struct st_50f740_2 *field_0;
    char padding_4[676];
    float field_2a8;
} st_50f740_1;

typedef struct st_50f740_3 {
    char padding_0[32];
    char field_20;
    char padding_21[47];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
} st_50f740_3;

typedef struct st_50f740_4 {
    float field_0;
} st_50f740_4;

extern st_50f740_4 *gpGlobals;

double ChaseThink__13CScatterSplit(float a0)
{
    unsigned int v18;  // edi
    unsigned int v19;  // eax
    double v28;  // mm7
    st_50f740_1 *v29;  // edx
    float v30;  // 128
    float *v31;  // edx
    unsigned int *v32;  // eax
    double v33;  // mm5
    double v34;  // mm5
    unsigned int idx;  // edi
    unsigned int v36;  // esi
    double v37;  // mm7
    st_50f740_0 **v20;  // eax
    double v38;  // mm6
    double v39;  // mm7
    st_50f740_1 *v40;  // edx
    float v41;  // 128
    st_50f740_3 *v42;  // esi
    double v43;  // mm7
    unsigned int *v21;  // esi
    unsigned int index;  // edx
    float v23;  // 112
    float v24;  // 112
    float v25;  // 112
    double v26;  // mm7
    double v27;  // mm6
    float v0;  // [bp-0x84]
    float v1;  // [bp-0x80]
    float v2;  // [bp-0x7c]
    float v3;  // [bp-0x78]
    float v4;  // [bp-0x74]
    float v5;  // [bp-0x70]
    float v6;  // [bp-0x6c]
    float v7;  // [bp-0x68]
    float v8;  // [bp-0x64]
    float v9;  // [bp-0x60]
    float v10;  // [bp-0x5c]
    float v11;  // [bp-0x44]
    float v12;  // [bp-0x40]
    float v13;  // [bp-0x3c]
    float v14;  // [bp-0x24]
    float v15;  // [bp-0x20]
    float v16;  // [bp-0x1c]

    v18 = *(unsigned int *)&a0 + 732;
    if (EHANDLE::__opi(v18))
    {
        v19 = EHANDLE::__opP11CBaseEntity(v18);
        if ((*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 280))(a0, v19))
        {
            v20 = EHANDLE::__rf(v18);
            v21 = &*v20->field_8;
            index = *(int *)a0 + 8;
            v23 = *v20->field_8 - *(float *)(*(int *)a0 + 8);
            v14 = v23;
            v24 = *(float *)&v21[1] - *(float *)(index + 4);
            v15 = v24;
            v25 = *(float *)&v21[2] - *(float *)(index + 8);
            v16 = v25;
            v26 = v23 * v23 + v24 * v24 + v25 * v25;
            v27 = sqrt(v26);
            if (isnan(v27))
                sqrt(*(unsigned int *)&v26);
            else
                v26 = v27;
            v3 = (float)v26;
            if (v3 == 0.0f)
            {
                v8 = 0.0f;
                v9 = 0.0f;
                v10 = 1.0;
            }
            else
            {
                v28 = 1.0 / v3;
                v8 = (float)(v28 * v14);
                v9 = (float)(v28 * v15);
                v10 = (float)(v28 * v16);
            }
            v29 = (st_50f740_1 *)a0;
            v30 = v29->field_2a8;
            v11 = v30 * v8;
            v12 = v30 * v9;
            v13 = v30 * v10;
            v14 = v11;
            v15 = v12;
            v16 = v13;
            v31 = v29->field_0;
            v32 = v31 + 8;
            v3 = (float)(0.4000000059604645 * v31[8]);
            v4 = (float)(0.4000000059604645 * *(float *)&v32[1]);
            v5 = (float)(0.4000000059604645 * *(float *)&v32[2]);
            v33 = 0.6000000238418579 * v14;
            v6 = (float)v33;
            v34 = 0.6000000238418579 * v15;
            v7 = (float)v34;
            v8 = (float)(0.6000000238418579 * v16);
            v0 = (float)(v33 + v3);
            v1 = (float)(v34 + v4);
            v2 = v5 + v8;
            v31[8] = v0;
            v31[9] = v1;
            v31[10] = v2;
            idx = *(int *)a0;
            v36 = idx + 32;
            v37 = *(float *)(idx + 32) * *(float *)(idx + 32) + *(float *)(v36 + 4) * *(float *)(v36 + 4) + *(float *)(v36 + 8) * *(float *)(v36 + 8);
            v38 = sqrt(v37);
            if (isnan(v38))
                sqrt(*(unsigned int *)&v37);
            else
                v37 = v38;
            v9 = (float)v37;
            if (v9 == 0.0f)
            {
                v3 = 0.0f;
                v4 = 0.0f;
                v5 = 1.0;
            }
            else
            {
                v39 = 1.0 / v9;
                v3 = (float)(v39 * *(float *)v36);
                v4 = (float)(v39 * *(float *)(v36 + 4));
                v5 = (float)(v39 * *(float *)(v36 + 8));
            }
            v40 = (st_50f740_1 *)a0;
            v41 = v40->field_2a8;
            v0 = v41 * v3;
            v1 = v41 * v4;
            v2 = v41 * v5;
            *(float *)(idx + 32) = v0;
            *(float *)(idx + 36) = v1;
            *(float *)(idx + 40) = v2;
            v42 = v40->field_0;
            UTIL_VecToAngles(&v0, &v42->field_20);
            *(float *)&v42->field_50 = v0;
            *(float *)&v42->field_54 = v1;
            *(float *)&v42->field_58 = v2;
        }
    }
    CMagicAttack::DrawBubbles(a0);
    v43 = 0.2 + *(float *)gpGlobals;
    *(float *)(*(int *)a0 + 260) = (float)v43;
    return v43;
}

