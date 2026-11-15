// FTriangulate__12CBaseMonsterRC6VectorT1fP11CBaseEntityP6Vector @0xd6380 size=2619
typedef struct st_4d6380_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[224];
    float field_f4;
    char padding_f8[4];
    float field_fc;
    char padding_100[8];
    unsigned int field_108;
} st_4d6380_0;

typedef struct st_4d6380_1 {
    char padding_0[288];
    struct st_4d6380_2 *field_120;
} st_4d6380_1;

typedef struct st_4d6380_2 {
    unsigned int field_0;
} st_4d6380_2;

typedef struct st_4d6380_3 {
    struct st_4d6380_0 *field_0;
    char padding_4[92];
    struct st_4d6380_1 *field_60;
    char padding_64[304];
    unsigned int field_194;
    unsigned int field_198;
    unsigned int field_19c;
    char padding_1a0[120];
    unsigned int field_218;
} st_4d6380_3;

unsigned int FTriangulate__12CBaseMonsterRC6VectorT1fP11CBaseEntityP6Vector(st_4d6380_3 *a0, float *a1, float *a2, float a3, unsigned int a4, unsigned int *a5)
{
    double v44;  // mm7
    float v45;  // 112
    float v54;  // 128
    unsigned int *v55;  // esi
    unsigned int *v56;  // ecx
    double v57;  // mm5
    double v58;  // mm7
    double v59;  // mm3
    double v60;  // mm3
    st_4d6380_3 *v61;  // eax
    unsigned int *v62;  // edx
    float v63;  // eax
    float v46;  // 112
    unsigned int *v64;  // ecx
    unsigned int *v65;  // ecx
    float v47;  // 112
    double v48;  // mm7
    double v49;  // mm6
    double v50;  // mm7
    float v51;  // 128
    float v52;  // 120
    float v53;  // 104
    char *v0;  // [bp-0x164]
    unsigned int v1;  // [bp-0x160]
    float v2;  // [bp-0x15c]
    int v3;  // [bp-0x158]
    float v4;  // [bp-0x154]
    float v5;  // [bp-0x150]
    float v6;  // [bp-0x14c]
    float v7;  // [bp-0x148]
    float v8;  // [bp-0x144]
    float v9;  // [bp-0x140]
    float v10;  // [bp-0x13c]
    float v11;  // [bp-0x138]
    float v12;  // [bp-0x134]
    float v13;  // [bp-0x130]
    float v14;  // [bp-0x12c]
    float v15;  // [bp-0x128]
    float v16;  // [bp-0x124]
    float v17;  // [bp-0x120]
    float v18;  // [bp-0x11c]
    float v19;  // [bp-0x118]
    float v20;  // [bp-0x114]
    float v21;  // [bp-0x110], Other Possible Types: unsigned int
    float v22;  // [bp-0x10c]
    unsigned int v23;  // [bp-0xe4]
    unsigned int v24;  // [bp-0xe0]
    unsigned int v25;  // [bp-0xdc]
    float v26;  // [bp-0xc4]
    float v27;  // [bp-0xc0]
    float v28;  // [bp-0xbc]
    float v29;  // [bp-0xa4]
    float v30;  // [bp-0xa0]
    float v31;  // [bp-0x9c]
    float v32;  // [bp-0x84]
    float v33;  // [bp-0x80]
    float v34;  // [bp-0x7c]
    float v35;  // [bp-0x64]
    float v36;  // [bp-0x60]
    float v37;  // [bp-0x5c]
    float v38;  // [bp-0x44]
    float v39;  // [bp-0x40]
    float v40;  // [bp-0x3c]
    float v41;  // [bp-0x24]
    float v42;  // [bp-0x20]
    float v43;  // [bp-0x1c]

    v2 = a0->field_0->field_f4;
    if (a0->field_0->field_f4 < 24.0f)
    {
        v44 = 24.0;
    }
    else
    {
        if (v2 <= 48.0f)
            goto LABEL_4d63e6;
        v44 = 48.0;
    }
    v2 = (float)v44;
LABEL_4d63e6:
    *(float *)&v1 = a0->field_0->field_fc;
    v45 = *a2 - *a1;
    v12 = v45;
    v46 = a2[1] - a1[1];
    v13 = v46;
    v47 = a2[2] - a1[2];
    v14 = v47;
    v48 = v45 * v45 + v46 * v46 + v47 * v47;
    v49 = sqrt(v48);
    if (isnan(v49))
        sub_487dc0(*(unsigned int *)&v48);
    else
        v48 = v49;
    v7 = (float)v48;
    if (v7 == 0.0f)
    {
        v20 = 0.0f;
        v21 = 0.0f;
        v22 = 1.0;
    }
    else
    {
        v50 = 1.0 / v7;
        v20 = (float)(v50 * v12);
        v21 = (float)(v50 * v13);
        v22 = (float)(v50 * v14);
    }
    v38 = v20;
    v39 = v21;
    v40 = v22;
    v4 = 0;
    v5 = 0;
    v6 = 1.0;
    v51 = v39;
    v52 = v40;
    v53 = v38;
    v7 = v51 - v52 * v5;
    v8 = v52 * v4 - v53;
    v9 = v53 * v5 - v51 * v4;
    v41 = v7;
    v42 = v8;
    v43 = v9;
    v54 = a3 + v2;
    v13 = v54 * v38;
    v14 = v54 * v39;
    v15 = v54 * v40;
    v55 = a0->field_0;
    v56 = v55 + 2;
    v10 = *(float *)&v55[2] + v13;
    v11 = *(float *)&v56[1] + v14;
    v12 = *(float *)&v56[2] + v15;
    v57 = v2 * 3.0;
    v16 = (float)(v57 * v41);
    v17 = (float)(v57 * v42);
    v18 = (float)(v57 * v43);
    v7 = v10 - v16;
    v8 = v11 - v17;
    v9 = v12 - v18;
    v35 = v7;
    v36 = v8;
    v37 = v9;
    v13 = v54 * v38;
    v14 = v54 * v39;
    v15 = v54 * v40;
    v10 = v13 + *(float *)&v55[2];
    v11 = v14 + *(float *)&v56[1];
    v58 = v57;
    v12 = *(float *)&v56[2] + v15;
    v59 = v58 * v41;
    v16 = (float)v59;
    v60 = v58 * v42;
    v17 = (float)v60;
    v18 = (float)(v58 * v43);
    v7 = (float)(v59 + v10);
    v8 = (float)(v60 + v11);
    v9 = v12 + v18;
    v32 = v7;
    v33 = v8;
    v34 = v9;
    if (v55[66] == 5)
    {
        v13 = a3 * v38;
        v14 = a3 * v39;
        v15 = a3 * v40;
        v10 = *(float *)&v55[2] + v13;
        v11 = *(float *)&v56[1] + v14;
        v12 = *(float *)&v56[2] + v15;
        v19 = *(float *)&v1 * v4;
        v20 = *(float *)&v1 * v5;
        v21 = v1;
        v16 = (float)(3.0 * v19);
        v17 = (float)(3.0 * v20);
        v18 = (float)(3.0 * *(float *)&v21);
        v7 = v10 + v16;
        v8 = v11 + v17;
        v9 = v12 + v18;
        v29 = v7;
        v30 = v8;
        v31 = v9;
        v13 = a3 * v38;
        v14 = a3 * v39;
        v15 = a3 * v40;
        v10 = *(float *)&v55[2] + v13;
        v11 = *(float *)&v56[1] + v14;
        v12 = *(float *)&v56[2] + v15;
        v19 = *(float *)&v1 * v4;
        v20 = *(float *)&v1 * v5;
        v21 = v1;
        v16 = (float)(3.0 * v19);
        v17 = (float)(3.0 * v20);
        v18 = (float)(3.0 * *(float *)&v21);
        v7 = v10 - v16;
        v8 = v11 - v17;
        v9 = v12 - v18;
        v26 = v7;
        v27 = v8;
        v28 = v9;
    }
    v61 = &(&a0->field_0)[4 * a0->field_218];
    v23 = v61->field_194;
    v24 = v61->field_198;
    v25 = v61->field_19c;
    v10 = v2 * v41;
    v11 = v2 * v42;
    v12 = v2 * v43;
    v7 = v10 + v10;
    v8 = v11 + v11;
    v9 = v12 + v12;
    v41 = v7;
    v42 = v8;
    v43 = v9;
    if (a0->field_0->field_108 == 5)
    {
        v10 = *(float *)&v1 * v4;
        v11 = *(float *)&v1 * v5;
        v12 = *(float *)&v1 * v6;
        v7 = v10 + v10;
        v8 = v11 + v11;
        v9 = v12 + v12;
        v4 = v7;
        v5 = v8;
        v6 = v9;
    }
    v3 = 0;
    v0 = &v32;
    while (1)
    {
        if (a0->field_60->field_120(a0, &a0->field_0->field_8, v0, a4, 0) == 2 && a0->field_60->field_120(a0, v0, &v23, a4, 0) == 2)
        {
            if (!a5)
                break;
            v62 = a5;
            *(float *)v62 = v32;
            *(float *)&v62[1] = v33;
            v63 = v34;
            goto LABEL_4d6c3f;
        }
        else
        {
            if (a0->field_60->field_120(a0, &a0->field_0->field_8, &v35, a4, 0) == 2 && a0->field_60->field_120(a0, &v35, &v23, a4, 0) == 2 && a5)
            {
                v64 = a5;
                *(float *)v64 = v35;
                *(float *)&v64[1] = v36;
                *(float *)&v64[2] = v37;
                break;
            }
            if (a0->field_0->field_108 == 5)
            {
                if (a0->field_60->field_120(a0, &a0->field_0->field_8, &v29, a4, 0) == 2 && a0->field_60->field_120(a0, &v29, &v23, a4, 0) == 2 && a5)
                {
                    v65 = a5;
                    *(float *)v65 = v29;
                    *(float *)&v65[1] = v30;
                    *(float *)&v65[2] = v31;
                    break;
                }
                if (a0->field_60->field_120(a0, &a0->field_0->field_8, &v26, a4, 0) != 2 || a0->field_60->field_120(a0, &v26, &v23, a4, 0) != 2)
                    goto LABEL_4d6c50;
                if (!a5)
                    break;
                v62 = a5;
                *(float *)v62 = v26;
                *(float *)&v62[1] = v27;
                v63 = v28;
LABEL_4d6c3f:
                *(float *)&v62[2] = v63;
                break;
            }
            else
            {
LABEL_4d6c50:
                v7 = v32 + v41;
                v8 = v33 + v42;
                v9 = v34 + v43;
                v32 = v7;
                v33 = v8;
                v34 = v9;
                v7 = v35 - v41;
                v8 = v36 - v42;
                v9 = v37 - v43;
                v35 = v7;
                v36 = v8;
                v37 = v9;
                if (a0->field_0->field_108 == 5)
                {
                    v7 = v29 + v4;
                    v8 = v30 + v5;
                    v9 = v31 + v6;
                    v29 = v7;
                    v30 = v8;
                    v31 = v9;
                    v7 = v26 - v4;
                    v8 = v27 - v5;
                    v9 = v28 - v6;
                    v26 = v7;
                    v27 = v8;
                    v28 = v9;
                }
                v3 += 1;
                if (v3 > 7)
                    return 0;
            }
        }
    }
    return 1;
}

