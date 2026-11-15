// PM_LadderMove @0x191f00 size=1041
typedef struct st_591f00_1 {
    unsigned int field_0;
} st_591f00_1;

typedef struct st_591f00_0 {
    char padding_0[56];
    float field_38;
    float field_3c;
    float field_40;
    char field_44;
    char padding_45[23];
    char field_5c;
    char padding_5d[95];
    unsigned int field_bc;
    unsigned int field_c0;
    char padding_c4[24];
    unsigned int field_dc;
    char padding_e0[283542];
    char field_45476;
    char field_45477;
    char padding_45478[41092];
    float field_4f4fc;
    char padding_4f500[116];
    struct st_591f00_1 *field_4f574;
    char padding_4f578[28];
    struct st_591f00_1 *field_4f594;
    char padding_4f598[4];
    struct st_591f00_1 *field_4f59c;
} st_591f00_0;

extern st_591f00_0 *pmove;

double PM_LadderMove(float a0)
{
    double v43;  // mm7
    char *v0;  // [bp-0x1c8]
    float v1;  // [bp-0x1c4]
    float v2;  // [bp-0x1c0]
    float v3;  // [bp-0x1bc]
    unsigned int v4;  // [bp-0x1b8]
    unsigned int v5;  // [bp-0x1b4]
    unsigned int v6;  // [bp-0x1b0]
    unsigned int v7;  // [bp-0x1ac]
    float v8;  // [bp-0x194]
    float v9;  // [bp-0x190]
    float v10;  // [bp-0x18c]
    char v11;  // [bp-0x174]
    float v12;  // [bp-0x174]
    float v13;  // [bp-0x170]
    float v14;  // [bp-0x16c]
    char v15;  // [bp-0x154]
    char v16;  // [bp-0x134]
    float v17;  // [bp-0x134]
    float v18;  // [bp-0x130]
    float v19;  // [bp-0x12c]
    char v20;  // [bp-0x114]
    char v21;  // [bp-0xf4]
    char v22;  // [bp-0xc4]
    float v23;  // [bp-0xc4]
    float v24;  // [bp-0xc0]
    float v25;  // [bp-0xbc]
    char v26;  // [bp-0xa4]
    float v27;  // [bp-0xa4]
    float v28;  // [bp-0xa0]
    float v29;  // [bp-0x9c]
    float v30;  // [bp-0x84]
    float v31;  // [bp-0x80]
    float v32;  // [bp-0x7c]
    char v33;  // [bp-0x64]
    double v34;  // [bp-0x54]
    char v35;  // [bp-0x44]
    float v36;  // [bp-0x44]
    float v37;  // [bp-0x40]
    float v38;  // [bp-0x3c]
    float v39;  // [bp-0x24]
    float v40;  // [bp-0x20]
    float v41;  // [bp-0x1c]

    if (pmove->field_dc == 8)
        return v43;
    pmove->field_4f594(*(int *)(*(unsigned int *)&a0 + 48), &v26, &v22);
    v39 = v27 + v23;
    v40 = v28 + v24;
    v41 = v29 + v25;
    VectorScale(&v39, 0.5f, &v39);
    pmove->field_dc = 5;
    v30 = pmove->field_38;
    v31 = pmove->field_3c;
    v32 = pmove->field_40;
    v32 = (float)((&pmove->field_4f4fc)[3 * pmove->field_bc] - 1.0 + v32);
    v4 = pmove->field_4f574(&v30, 0) == 0xfffffffe;
    pmove->field_c0 = 0;
    pmove->field_4f59c(a0, &pmove->field_38, &v39, &v33);
    if (v34 == 1.0f)
        return v34;
    v3 = 0;
    v2 = 0;
    AngleVectors(&pmove->field_44, &v21, &v20, 0);
    if (pmove->field_45476 & 16)
        v3 = (float)(v2 - 200.0);
    if (pmove->field_45476 & 8)
        v3 = (float)(v3 + 200.0);
    if (pmove->field_45477 & 2)
        v2 = (float)(v2 - 200.0);
    if (pmove->field_45477 & 4)
        v2 = (float)(v2 + 200.0);
    if (pmove->field_45476 & 2)
    {
        pmove->field_dc = 3;
        VectorScale(&v35, 270.0f, &pmove->field_5c);
        return 270.0;
    }
    if (v3 == 0.0f && v2 == 0.0f)
    {
        memset(&pmove->field_5c, 0, 12);
        return 0.0;
    }
    VectorScale(&v21, v3, &v16);
    VectorMA(&v16, v2, &v20, &v16);
    v5 = 0;
    v6 = 0;
    v7 = 0x3f800000;
    v0 = &v36;
    CrossProduct(&v5, &v35, &v15);
    VectorNormalize(&v15);
    v1 = v17 * v36;
    v1 += v18 * v37;
    v1 += v19 * v38;
    VectorScale(v0, v1, &v11);
    v8 = v17 - v12;
    v9 = v18 - v13;
    v10 = v19 - v14;
    CrossProduct(v0, &v15, &v5);
    VectorMA(&v8, -v1, &v5, &pmove->field_5c);
    if (!v4)
    {
        return -v1;
    }
    else if (0.0 < v1)
    {
        VectorMA(&pmove->field_5c, 200.0f, v0, &pmove->field_5c);
        return -v1;
    }
    else
    {
        return -v1;
    }
}

