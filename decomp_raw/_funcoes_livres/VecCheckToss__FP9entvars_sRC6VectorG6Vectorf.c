// VecCheckToss__FP9entvars_sRC6VectorG6Vectorf @0xc8090 size=1421
typedef struct st_4c8090_1 {
    char padding_0[520];
    unsigned int field_208;
} st_4c8090_1;

typedef struct st_4c8090_4 {
    unsigned int field_0;
    unsigned int field_4;
    float field_8;
} st_4c8090_4;

typedef struct st_4c8090_3 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[12];
    float field_40;
    float field_44;
    float field_48;
} st_4c8090_3;

typedef struct st_4c8090_2 {
    unsigned int field_0;
} st_4c8090_2;

typedef struct st_4c8090_0 {
    char padding_0[12];
    float field_c;
} st_4c8090_0;

extern st_4c8090_0 *g_psv_gravity;
extern float g_vecZero;
extern float g_vecZero+4;
extern float g_vecZero+8;
extern st_4c8090_2 *g_engfuncs.pfnRandomFloat;
extern st_4c8090_3 *gpGlobals;

st_4c8090_4 * VecCheckToss__FP9entvars_sRC6VectorG6Vectorf(void)
{
    float v42;  // 128
    double v43;  // mm0
    float *v52;  // eax
    double v53;  // mm7
    double v54;  // mm7
    float *v55;  // edx
    double v56;  // mm1
    double v57;  // mm1
    double v58;  // mm0
    double v59;  // mm1
    double v60;  // mm0
    float *v61;  // eax
    double v44;  // mm0
    float v62;  // 120
    float *v63;  // ecx
    double v64;  // mm1
    unsigned int *v45;  // edx
    float *v46;  // ecx
    double v47;  // mm0
    double v48;  // mm1
    double v49;  // mm1
    unsigned int *v50;  // edx
    float *v51;  // ecx
    char *v0;  // [bp-0x178]
    unsigned int v1;  // [bp-0x174]
    unsigned int v2;  // [bp-0x170]
    char *v3;  // [bp-0x16c]
    float v4;  // [bp-0x148]
    float v5;  // [bp-0x144]
    float v6;  // [bp-0x140]
    float v7;  // [bp-0x13c]
    float v8;  // [bp-0x138]
    float v9;  // [bp-0x128]
    float v10;  // [bp-0x124]
    float v11;  // [bp-0x120]
    float v12;  // [bp-0x11c]
    float v13;  // [bp-0x118]
    float v14;  // [bp-0x114]
    float v15;  // [bp-0x110]
    float v16;  // [bp-0x10c]
    float v17;  // [bp-0x108]
    float v18;  // [bp-0x104]
    float v19;  // [bp-0x100]
    float v20;  // [bp-0xfc]
    float v21;  // [bp-0xc4]
    float v22;  // [bp-0xc0]
    float v23;  // [bp-0xbc]
    float v24;  // [bp-0x84]
    float v25;  // [bp-0x80]
    float v26;  // [bp-0x7c]
    float v27;  // [bp-0x64]
    unsigned int v28;  // [bp-0x64]
    float v29;  // [bp-0x60]
    unsigned int v30;  // [bp-0x60]
    float v31;  // [bp-0x5c]
    char v32;  // [bp-0x44]
    float v33;  // [bp-0x34]
    unsigned int v34;  // [bp-0x30]
    unsigned int v35;  // [bp-0x2c]
    float v36;  // [bp-0x28]
    st_4c8090_4 *idx;  // [bp+0x4]
    st_4c8090_1 *v38;  // [bp+0x8]
    float *v39;  // [bp+0xc]
    float *v40;  // [bp+0x10]
    float v41;  // [bp+0x14]

    v8 = v41 * g_psv_gravity->field_c;
    v42 = v40[2] - v39[2];
    if (v42 <= 500.0f)
    {
        UTIL_MakeVectors(&v38->padding_0[80]);
        g_engfuncs.pfnRandomFloat(0xc1000000, 0x41000000);
        v7 = v42;
        g_engfuncs.pfnRandomFloat(0xc1800000, 0x41800000);
        v44 = v43 + v7;
        v45 = &gpGlobals->field_40;
        v10 = (float)(v44 * gpGlobals->field_40);
        v11 = (float)(v44 * *(float *)&v45[1]);
        v12 = (float)(v44 * *(float *)&v45[2]);
        v46 = v40;
        v47 = v46[2] + v12;
        v18 = *v46 + v10;
        v19 = v46[1] + v11;
        v20 = (float)v47;
        *v46 = v18;
        v46[1] = v19;
        v46[2] = v20;
        g_engfuncs.pfnRandomFloat(0xc1000000, 0x41000000);
        v6 = (float)v47;
        g_engfuncs.pfnRandomFloat(0xc1800000, 0x41800000);
        v49 = v48 + v6;
        v50 = &gpGlobals->field_28;
        v13 = (float)(v49 * gpGlobals->field_28);
        v14 = (float)(v49 * *(float *)&v50[1]);
        v15 = (float)(v49 * *(float *)&v50[2]);
        v51 = v40;
        v10 = *v51 + v13;
        v11 = v51[1] + v14;
        v12 = v51[2] + v15;
        *v51 = v10;
        v51[1] = v11;
        v51[2] = v12;
        v52 = v39;
        v16 = *v51 - *v52;
        v17 = v51[1] - v52[1];
        v18 = v51[2] - v52[2];
        v53 = 0.5 * v16;
        v13 = (float)v53;
        v54 = 0.5 * v17;
        v14 = (float)v54;
        v15 = (float)(0.5 * v18);
        v55 = v39;
        v10 = (float)(v53 + *v55);
        v11 = (float)(v54 + v55[1]);
        v12 = v55[2] + v15;
        v27 = v10;
        v29 = v11;
        v31 = v12;
        v13 = 0;
        v14 = 0;
        v15 = 500.0f;
        v10 = v27 + v13;
        v11 = v29 + v14;
        v12 = v31 + v15;
        v3 = &v32;
        v2 = v38->field_208;
        v1 = 1;
        v0 = &v10;
        UTIL_TraceLine(&v27);
        v28 = v34;
        v30 = v35;
        v31 = v36;
        v56 = v31 - 15.0;
        v31 = (float)v56;
        if (v56 < v39[2])
            goto LABEL_4c85dd;
        if (v56 < v40[2])
            goto LABEL_4c85dd;
        v5 = v31 - v40[2];
        v57 = (v31 - v39[2]) / (0.5 * v8);
        v58 = sqrt(v57);
        if (isnan(v58))
            sqrt(*(unsigned int *)&v57);
        else
            v57 = v58;
        v4 = (float)v57;
        v59 = v5 / (0.5 * v8);
        v60 = sqrt(v59);
        if (isnan(v60))
            sqrt(*(unsigned int *)&v59);
        else
            v59 = v60;
        v9 = (float)v59;
        if (v4 < 0.1)
        {
            goto LABEL_4c85dd;
        }
        else
        {
            v61 = v39;
            v62 = v9 + v4;
            v10 = (*v40 - *v61) / v62;
            v11 = (v40[1] - v61[1]) / v62;
            v12 = (v40[2] - v61[2]) / v62;
            v21 = v10;
            v22 = v11;
            v23 = v12;
            v23 = v8 * v4;
            v13 = v4 * v21;
            v14 = v4 * v22;
            v15 = v4 * v23;
            v63 = v39;
            v10 = *v63 + v13;
            v11 = v63[1] + v14;
            v12 = v63[2] + v15;
            v24 = v10;
            v25 = v11;
            v26 = v12;
            v26 = v31;
            UTIL_TraceLine(v63, &v24, 0, v38->field_208, &v32);
            if (v33 != 1.0f || (UTIL_TraceLine(v40, &v24, 1, v38->field_208, &v32), v33 != 1.0f))
                goto LABEL_4c85dd;
            *(float *)&idx->field_0 = v21;
            *(float *)&idx->field_4 = v22;
            v64 = v23;
        }
    }
    else
    {
LABEL_4c85dd:
        *(float *)&idx->field_0 = g_vecZero;
        *(float *)&idx->field_4 = g_vecZero+4;
        v64 = g_vecZero+8;
    }
    idx->field_8 = (float)v64;
    return idx;
}

