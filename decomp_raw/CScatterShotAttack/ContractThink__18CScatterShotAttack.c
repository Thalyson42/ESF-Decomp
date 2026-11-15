// ContractThink__18CScatterShotAttack @0x110a00 size=700
typedef struct st_510a00_2 {
    char padding_0[24];
    unsigned int field_18;
} st_510a00_2;

typedef struct st_510a00_1 {
    char padding_0[8];
    char field_8;
    char padding_9[23];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
} st_510a00_1;

typedef struct st_510a00_0 {
    float field_0;
} st_510a00_0;

extern st_510a00_0 *gpGlobals;

double ContractThink__18CScatterShotAttack(float idx)
{
    st_510a00_1 *v21;  // eax
    unsigned int *v22;  // edx
    double v31;  // mm7
    double v32;  // mm7
    double v33;  // mm6
    st_510a00_1 *v34;  // edx
    unsigned int v35;  // 128
    double v36;  // mm5
    double v37;  // mm5
    unsigned int v38;  // 128
    double v39;  // mm5
    double v40;  // mm5
    st_510a00_2 *v23;  // edx
    st_510a00_1 *v41;  // esi
    double v42;  // mm7
    float v24;  // 112
    float v25;  // 112
    float v26;  // 112
    double v27;  // mm7
    double v28;  // mm6
    double v29;  // mm7
    double v30;  // mm6
    double v0;  // [bp-0x98]
    float v1;  // [bp-0x84]
    float v2;  // [bp-0x80]
    float v3;  // [bp-0x7c]
    float v4;  // [bp-0x78]
    float v5;  // [bp-0x74]
    float v6;  // [bp-0x70]
    float v7;  // [bp-0x6c]
    float v8;  // [bp-0x68]
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    float v12;  // [bp-0x58]
    float v13;  // [bp-0x4c]
    float v14;  // [bp-0x44]
    float v15;  // [bp-0x40]
    float v16;  // [bp-0x3c]
    unsigned int v17;  // [bp-0x24]
    unsigned int v18;  // [bp-0x20]
    unsigned int v19;  // [bp-0x1c]

    v21 = *(int *)idx;
    v22 = &v21->field_20;
    *(float *)&v17 = *(float *)&v21->field_20;
    *(float *)&v18 = *(float *)&v22[1];
    *(float *)&v19 = *(float *)&v22[2];
    v23 = &v21->field_8;
    v24 = *(float *)(*(unsigned int *)&idx + 772) - *(float *)&v21->field_8;
    v14 = v24;
    v25 = *(float *)(*(unsigned int *)&idx + 776) - *(float *)&v23->padding_0[4];
    v15 = v25;
    v26 = *(float *)(*(unsigned int *)&idx + 780) - *(float *)&v23->padding_0[8];
    v16 = v26;
    v27 = v24 * v24 + v25 * v25 + v26 * v26;
    v28 = sqrt(v27);
    if (isnan(v28))
        sub_487dc0(*(unsigned int *)&v27);
    else
        v27 = v28;
    v0 = (float)v27;
    if (v0 > *(float *)(*(unsigned int *)&idx + 784))
    {
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 0x200))(idx);
        return v0;
    }
    v29 = v14 * v14 + v15 * v15 + v16 * v16;
    v30 = sqrt(v29);
    if (isnan(v30))
        sub_487dc0(*(unsigned int *)&v29);
    else
        v29 = v30;
    v4 = (float)v29;
    if (v4 == 0.0f)
    {
        v9 = 0.0f;
        v10 = 0.0f;
        v11 = 1.0;
    }
    else
    {
        v31 = 1.0 / v4;
        v9 = (float)(v31 * v14);
        v10 = (float)(v31 * v15);
        v11 = (float)(v31 * v16);
    }
    v14 = v9;
    v15 = v10;
    v16 = v11;
    v32 = *(float *)&v17 * *(float *)&v17 + *(float *)&v18 * *(float *)&v18 + *(float *)&v19 * *(float *)&v19;
    v33 = sqrt(v32);
    if (isnan(v33))
        sub_487dc0(*(unsigned int *)&v32);
    else
        v32 = v33;
    v13 = (float)v32;
    if (v13 > *(float *)(*(unsigned int *)&idx + 680))
    {
        v34 = *(int *)idx;
        v35 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 680);
        v36 = __int_as_float(v35) * v15;
        v37 = __int_as_float(v35) * v16;
        v1 = __int_as_float(v35) * v14;
    }
    else
    {
        v34 = *(int *)idx;
        v38 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 680);
        v7 = __int_as_float(v38) * v14;
        v8 = __int_as_float(v38) * v15;
        v9 = __int_as_float(v38) * v16;
        v4 = (float)(0.699999988079071 * v7);
        v5 = (float)(0.699999988079071 * v8);
        v6 = (float)(0.699999988079071 * v9);
        v39 = 0.30000001192092896 * *(float *)&v17;
        v10 = (float)v39;
        v40 = 0.30000001192092896 * *(float *)&v18;
        v11 = (float)v40;
        v12 = (float)(0.30000001192092896 * *(float *)&v19);
        v36 = v40 + v5;
        v37 = v6 + v12;
        v1 = (float)(v39 + v4);
    }
    v2 = (float)v36;
    v3 = (float)v37;
    *(float *)&v34->field_20 = v1;
    *(float *)&v34->field_24 = v2;
    *(float *)&v34->field_28 = v3;
    v41 = *(int *)idx;
    sub_488860(&v1, &v41->field_20);
    *(float *)&v41[1].field_24 = v1;
    *(float *)&v41[1].field_28 = v2;
    *(float *)&v41[2].padding_0[0] = v3;
    sub_487d50(idx);
    *(double *)(*(unsigned int *)&idx + 784) = v0;
    v42 = 0.3 + *(float *)gpGlobals;
    *(float *)(*(int *)idx + 260) = (float)v42;
    return v42;
}

