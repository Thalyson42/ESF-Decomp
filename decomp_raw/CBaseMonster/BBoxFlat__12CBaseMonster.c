// BBoxFlat__12CBaseMonster @0xd9f90 size=1109
typedef struct st_4d9f90_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[224];
    float field_f4;
    float field_f8;
    char padding_fc[268];
    int field_208;
} st_4d9f90_0;

unsigned int BBoxFlat__12CBaseMonster(st_4d9f90_0 **a0)
{
    st_4d9f90_0 *v20;  // edx
    double v21;  // mm6
    float v30;  // 112
    double v31;  // mm7
    double v32;  // mm6
    st_4d9f90_0 *v33;  // edx
    float v34;  // 112
    float v35;  // 112
    float v36;  // 112
    double v37;  // mm7
    double v38;  // mm6
    st_4d9f90_0 *v39;  // edx
    float v22;  // 112
    float v40;  // 112
    float v41;  // 112
    float v42;  // 112
    double v43;  // mm7
    double v44;  // mm6
    float v23;  // 112
    float v24;  // 112
    double v25;  // mm7
    double v26;  // mm6
    st_4d9f90_0 *v27;  // edx
    float v28;  // 112
    float v29;  // 112
    float v0;  // [bp-0xb0]
    float v1;  // [bp-0xac]
    float v2;  // [bp-0xa8]
    float v3;  // [bp-0xa4]
    float v4;  // [bp-0xa0]
    float v5;  // [bp-0x9c]
    float v6;  // [bp-0x98]
    float v7;  // [bp-0x94]
    float v8;  // [bp-0x90]
    float v9;  // [bp-0x8c]
    float v10;  // [bp-0x84]
    float v11;  // [bp-0x80]
    float v12;  // [bp-0x7c]
    float v13;  // [bp-0x64]
    float v14;  // [bp-0x60]
    float v15;  // [bp-0x5c]
    char v16;  // [bp-0x44]
    float v17;  // [bp-0x30]
    float v18;  // [bp-0x2c]
    float v19;  // [bp-0x28]

    v20 = *a0;
    v21 = v20->field_f4 * 0.5;
    v2 = (float)v21;
    v1 = (float)(0.5 * v20->field_f8);
    v13 = (float)(v21 + v20->field_8);
    v14 = v1 + v20->field_c;
    v15 = v20->field_10;
    v3 = 0;
    v4 = 0;
    v5 = 100.0f;
    v10 = v13 - v3;
    v11 = v14 - v4;
    v12 = v15 - v5;
    UTIL_TraceLine(&v13, &v10, 1, v20->field_208, &v16);
    v22 = v13 - v17;
    v3 = v22;
    v23 = v14 - v18;
    v4 = v23;
    v24 = v15 - v19;
    v5 = v24;
    v25 = v22 * v22 + v23 * v23 + v24 * v24;
    v26 = sqrt(v25);
    if (isnan(v26))
        sqrt(*(unsigned int *)&v25);
    else
        v25 = v26;
    v0 = (float)v25;
    v27 = *a0;
    v13 = v27->field_8 - v2;
    v14 = v27->field_c - v1;
    v6 = 0;
    v7 = 0;
    v8 = 100.0f;
    v3 = v13 - v6;
    v4 = v14 - v7;
    v5 = v15 - v8;
    UTIL_TraceLine(&v13, &v3, 1, v27->field_208, &v16);
    v28 = v13 - v17;
    v3 = v28;
    v29 = v14 - v18;
    v4 = v29;
    v30 = v15 - v19;
    v5 = v30;
    v31 = v28 * v28 + v29 * v29 + v30 * v30;
    v32 = sqrt(v31);
    if (isnan(v32))
        sqrt(*(unsigned int *)&v31);
    else
        v31 = v32;
    v9 = (float)v31;
    if (v9 <= v0)
    {
        v0 = v9;
        v33 = *a0;
        v13 = v33->field_8 - v2;
        v14 = v1 + v33->field_c;
        v6 = 0;
        v7 = 0;
        v8 = 100.0f;
        v3 = v13 - v6;
        v4 = v14 - v7;
        v5 = v15 - v8;
        UTIL_TraceLine(&v13, &v3, 1, v33->field_208, &v16);
        v34 = v13 - v17;
        v3 = v34;
        v35 = v14 - v18;
        v4 = v35;
        v36 = v15 - v19;
        v5 = v36;
        v37 = v34 * v34 + v35 * v35 + v36 * v36;
        v38 = sqrt(v37);
        if (isnan(v38))
            sqrt(*(unsigned int *)&v37);
        else
            v37 = v38;
        v9 = (float)v37;
        if (v9 > v0)
            goto LABEL_4da3d5;
        v0 = v9;
        v39 = *a0;
        v13 = v2 + v39->field_8;
        v14 = v39->field_c - v1;
        v6 = 0;
        v7 = 0;
        v8 = 100.0f;
        v3 = v13 - v6;
        v4 = v14 - v7;
        v5 = v15 - v8;
        UTIL_TraceLine(&v13, &v3, 1, v39->field_208, &v16);
        v40 = v13 - v17;
        v3 = v40;
        v41 = v14 - v18;
        v4 = v41;
        v42 = v15 - v19;
        v5 = v42;
        v43 = v40 * v40 + v41 * v41 + v42 * v42;
        v44 = sqrt(v43);
        if (isnan(v44))
            sqrt(*(unsigned int *)&v43);
        else
            v43 = v44;
        v9 = (float)v43;
        if (v9 <= v0)
            return 1;
    }
    else
    {
LABEL_4da3d5:
    }
    return 0;
}

