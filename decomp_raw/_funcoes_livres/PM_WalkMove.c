// PM_WalkMove @0x18fca0 size=1246
typedef struct st_58fca0_3 {
    char padding_0[16];
    unsigned int field_10;
    char field_14;
    char padding_15[7];
    unsigned int field_1c;
    char field_20;
    char padding_21[7];
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
    unsigned int field_34;
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    char padding_44[24];
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[12];
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[76];
    unsigned int field_cc;
    char padding_d0[16];
    unsigned int field_e0;
    unsigned int field_e4;
    char padding_e8[268];
    unsigned int field_1f4;
    char padding_1f8[283248];
    unsigned int field_45468;
    unsigned int field_4546c;
    char padding_45470[41088];
    struct st_58fca0_4 *field_4f4f0;
    char padding_4f4f4[140];
    struct st_58fca0_2 *field_4f580;
} st_58fca0_3;

typedef struct st_58fca0_0 {
    char padding_0[16];
    float field_10;
    char field_14;
    char padding_15[7];
    unsigned int field_1c;
    char field_20;
    char padding_21[7];
    unsigned int field_28;
    float field_2c;
    float field_30;
    unsigned int field_34;
    float field_38;
    float field_3c;
    unsigned int field_40;
    char padding_44[24];
    float field_5c;
    float field_60;
    float field_64;
    char padding_68[12];
    float field_74;
    float field_78;
    float field_7c;
    char padding_80[76];
    float field_cc;
    char padding_d0[16];
    unsigned int field_e0;
    unsigned int field_e4;
    char padding_e8[268];
    float field_1f4;
    char padding_1f8[283248];
    float field_45468;
    float field_4546c;
    char padding_45470[41088];
    struct st_58fca0_1 *field_4f4f0;
    char padding_4f4f4[140];
    struct st_58fca0_2 *field_4f580;
} st_58fca0_0;

typedef struct st_58fca0_2 {
    unsigned int field_0;
} st_58fca0_2;

typedef struct st_58fca0_1 {
    char padding_0[16];
    float field_10;
    char padding_14[28];
    float field_30;
} st_58fca0_1;

typedef struct st_58fca0_4 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[28];
    unsigned int field_30;
} st_58fca0_4;

extern st_58fca0_0 *pmove;

st_58fca0_3 * PM_WalkMove(double a0, double a1, double a2, double a3)
{
    int idx;  // ecx
    float v36;  // 128
    double v37;  // mm0
    double v38;  // mm0
    double v39;  // mm0
    double v40;  // mm0
    float v41;  // 128
    float v42;  // 120
    st_58fca0_0 *v43;  // eax
    float v0;  // [bp-0x17c]
    float v1;  // [bp-0x178]
    char v2;  // [bp-0x164], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0x160]
    float v4;  // [bp-0x154]
    unsigned int v5;  // [bp-0x150]
    unsigned int v6;  // [bp-0x14c]
    unsigned int v7;  // [bp-0x148]
    float v8;  // [bp-0x13c]
    float v9;  // [bp-0x104]
    float v10;  // [bp-0x100]
    float v11;  // [bp-0xfc]
    unsigned int v12;  // [bp-0xe4]
    unsigned int v13;  // [bp-0xe0]
    unsigned int v14;  // [bp-0xdc]
    float v15;  // [bp-0xc4]
    float v16;  // [bp-0xc0]
    float v17;  // [bp-0xbc]
    unsigned int v18;  // [bp-0xa4]
    unsigned int v19;  // [bp-0xa0]
    unsigned int v20;  // [bp-0x9c]
    float v21;  // [bp-0x84]
    float v22;  // [bp-0x80]
    unsigned int v23;  // [bp-0x7c]
    float v24;  // [bp-0x64]
    unsigned int v25;  // [bp-0x64]
    float v26;  // [bp-0x60], Other Possible Types: unsigned int
    unsigned int v27;  // [bp-0x5c], Other Possible Types: float
    unsigned int v28;  // [bp-0x44]
    unsigned int v29;  // [bp-0x40]
    unsigned int v30;  // [bp-0x3c]
    char v31;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v32;  // [bp-0x20]
    unsigned int v33;  // [bp-0x1c]

    v1 = pmove->field_45468;
    v0 = pmove->field_4546c;
    pmove->field_1c = 0;
    pmove->field_28 = 0;
    VectorNormalize(&pmove->field_14);
    VectorNormalize(&pmove->field_20);
    idx = 0;
    do
    {
        *(float *)&(&v31)[idx] = v1 * *(float *)&(&pmove->field_14)[4 * idx] + v0 * *(float *)&(&pmove->field_20)[4 * idx];
        idx += 1;
    } while (idx <= 1);
    v33 = 0;
    v28 = v31;
    v36 = *(float *)&v32;
    *(float *)&v29 = v36;
    v30 = 0;
    VectorNormalize(&v28);
    if (v36 > pmove->field_1f4)
    {
        VectorScale(&v31, pmove->field_1f4 / v36, &v31);
        v36 = pmove->field_1f4;
    }
    pmove->field_64 = 0;
    PM_Accelerate(&v28, v36, pmove->field_4f4f0->field_10);
    pmove->field_64 = 0;
    pmove->field_5c = pmove->field_5c + pmove->field_74;
    pmove->field_60 = pmove->field_60 + pmove->field_78;
    pmove->field_64 = pmove->field_7c + pmove->field_64;
    Length(&pmove->field_5c);
    if (1.0 > a0)
    {
        memset(&pmove->field_5c, 0, 12);
    }
    else
    {
        v37 = pmove->field_5c * pmove->field_10 + pmove->field_38;
        v24 = (float)v37;
        v26 = pmove->field_60 * pmove->field_10 + pmove->field_3c;
        *(float *)&v27 = *(float *)&pmove->field_40;
        v21 = (float)v37;
        v22 = v26;
        *(float *)&v23 = *(float *)&pmove->field_40;
        pmove->field_4f580(&v2, &pmove->field_38, &v24, 0, 0xffffffff);
        if (v4 == 1.0)
        {
            *(unsigned int *)&pmove->field_38 = v5;
            *(unsigned int *)&pmove->field_3c = v6;
            pmove->field_40 = v7;
        }
        else if ((pmove->field_e0 != 0xffffffff || pmove->field_e4) && pmove->field_cc == 0.0)
        {
            *(float *)&v18 = pmove->field_38;
            *(float *)&v19 = pmove->field_3c;
            *(float *)&v20 = *(float *)&pmove->field_40;
            v15 = pmove->field_5c;
            v16 = pmove->field_60;
            v17 = pmove->field_64;
            PM_FlyMove();
            *(float *)&v12 = pmove->field_38;
            *(float *)&v13 = pmove->field_3c;
            *(float *)&v14 = *(float *)&pmove->field_40;
            v9 = pmove->field_5c;
            v10 = pmove->field_60;
            v11 = pmove->field_64;
            v38 = *(float *)&v18;
            pmove->field_38 = (float)v38;
            *(unsigned int *)&pmove->field_3c = v19;
            pmove->field_40 = v20;
            pmove->field_5c = v15;
            pmove->field_60 = v16;
            pmove->field_64 = v17;
            v24 = (float)v38;
            *(float *)&v26 = pmove->field_3c;
            v39 = *(float *)&pmove->field_40;
            v27 = (float)v39;
            v27 = (float)(v39 + pmove->field_4f4f0->field_30);
            pmove->field_4f580(&v2, &pmove->field_38, &v24, 0, 0xffffffff);
            if (!v3 && !v2)
            {
                *(unsigned int *)&pmove->field_38 = v5;
                *(unsigned int *)&pmove->field_3c = v6;
                pmove->field_40 = v7;
            }
            PM_FlyMove();
            *(float *)&v25 = pmove->field_38;
            *(float *)&v26 = pmove->field_3c;
            v40 = *(float *)&pmove->field_40;
            v27 = (float)v40;
            v27 = (float)(v40 - pmove->field_4f4f0->field_30);
            pmove->field_4f580(&v2, &pmove->field_38, &v25, 0, 0xffffffff);
            if (0.7 <= v8)
            {
                if (!v3 && !v2)
                {
                    *(unsigned int *)&pmove->field_38 = v5;
                    *(unsigned int *)&pmove->field_3c = v6;
                    pmove->field_40 = v7;
                }
                pmove->field_2c = pmove->field_38;
                pmove->field_30 = pmove->field_3c;
                *(float *)&pmove->field_34 = *(float *)&pmove->field_40;
                v41 = pmove->field_2c - *(float *)&v18;
                v42 = pmove->field_30 - *(float *)&v19;
                if (v41 * v41 + v42 * v42 < (*(float *)&v12 - *(float *)&v18) * (*(float *)&v12 - *(float *)&v18) + (*(float *)&v13 - *(float *)&v19) * (*(float *)&v13 - *(float *)&v19))
                    goto LABEL_590129;
                v43 = pmove;
            }
            else
            {
LABEL_590129:
                v43 = pmove;
                *(unsigned int *)&pmove->field_38 = v12;
                *(unsigned int *)&pmove->field_3c = v13;
                pmove->field_40 = v14;
                pmove->field_5c = v9;
                pmove->field_60 = v10;
            }
            v43->field_64 = v11;
        }
    }
    return pmove;
}

