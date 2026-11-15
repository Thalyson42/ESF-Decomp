// CheckEnemy__12CBaseMonsterP11CBaseEntity @0xd5390 size=1224
typedef struct st_4d5390_4 {
    char padding_0[76];
    struct st_4d5390_1 *field_4c;
    char padding_50[60];
    struct st_4d5390_1 *field_8c;
} st_4d5390_4;

typedef struct st_4d5390_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_4d5390_3;

typedef struct st_4d5390_6 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[208];
    float field_fc;
} st_4d5390_6;

typedef struct st_4d5390_7 {
    char padding_0[280];
    struct st_4d5390_1 *field_118;
} st_4d5390_7;

typedef struct st_4d5390_1 {
    unsigned int field_0;
} st_4d5390_1;

typedef struct st_4d5390_0 {
    char padding_0[224];
    struct st_4d5390_1 *field_e0;
    char padding_e4[184];
    struct st_4d5390_1 *field_19c;
} st_4d5390_0;

typedef struct st_4d5390_2 {
    struct st_4d5390_3 *field_0;
    char padding_4[92];
    struct st_4d5390_0 *field_60;
    char padding_64[160];
    char field_104;
    char padding_105[1];
    char field_106;
    char padding_107[1];
    char field_108;
    char padding_109[267];
    unsigned int field_214;
    int field_218;
    char padding_21c[52];
    unsigned int field_250;
    unsigned int field_254;
    unsigned int field_258;
    char padding_25c[40];
    float field_284;
} st_4d5390_2;

typedef struct st_4d5390_8 {
    char padding_0[96];
    struct st_4d5390_7 *field_60;
} st_4d5390_8;

typedef struct st_4d5390_5 {
    struct st_4d5390_6 *field_0;
    char padding_4[92];
    struct st_4d5390_4 *field_60;
} st_4d5390_5;

extern st_4d5390_1 *g_61692c;

unsigned int CheckEnemy__12CBaseMonsterP11CBaseEntity(st_4d5390_2 *a0, st_4d5390_5 *a1)
{
    unsigned int *v17;  // edx
    unsigned int *v18;  // edx
    float v27;  // 112
    double v28;  // mm7
    double v29;  // mm6
    double v30;  // mm7
    unsigned int *v31;  // edx
    float v32;  // 112
    float v33;  // 112
    float v34;  // 112
    double v35;  // mm7
    double v36;  // mm6
    float v19;  // 112
    float *v37;  // edx
    st_4d5390_8 *v38;  // edx
    unsigned int *v39;  // edx
    unsigned int v40;  // ecx
    unsigned int *v41;  // edx
    double v42;  // mm5
    double v43;  // mm5
    float v44;  // eax
    float *v45;  // edx
    float v20;  // 112
    int v47;  // esi
    unsigned int v48;  // eax
    unsigned int *v49;  // eax
    float v50;  // 112
    float v51;  // 112
    float v52;  // 112
    double v53;  // mm7
    double v54;  // mm6
    float v21;  // 112
    double v22;  // mm7
    double v23;  // mm6
    unsigned int *v24;  // edx
    float v25;  // 112
    float v26;  // 112
    unsigned int v0;  // [bp-0xa4]
    unsigned int v1;  // [bp-0x7c]
    float v2;  // [bp-0x78]
    unsigned int v3;  // [bp-0x64], Other Possible Types: float
    unsigned int v4;  // [bp-0x60], Other Possible Types: float
    unsigned int v5;  // [bp-0x5c], Other Possible Types: float
    float v6;  // [bp-0x58]
    float v7;  // [bp-0x54]
    float v8;  // [bp-0x50]
    float v9;  // [bp-0x4c]
    float v10;  // [bp-0x48]
    float v11;  // [bp-0x44]
    float v12;  // [bp-0x40]
    float v13;  // [bp-0x3c]
    float v14;  // [bp-0x24]
    float v15;  // [bp-0x20]
    float v16;  // [bp-0x1c]

    v1 = 0;
    a0->field_106 = a0->field_106 & 247;
    if (!a0->field_60->field_e0(a0, a1))
        a0->field_104 = a0->field_104 | 32;
    else
        a0->field_104 = a0->field_104 & 223;
    if (!a1->field_60->field_8c(a1))
    {
        a0->field_106 = a0->field_106 | 16;
        a0->field_104 = a0->field_104 & 207;
        return 0;
    }
    v17 = &a1->field_0->field_8;
    v14 = a1->field_0->field_8;
    v15 = *(float *)&v17[1];
    v16 = *(float *)&v17[2];
    v18 = &a0->field_0->field_8;
    v19 = v14 - *(float *)&a0->field_0->field_8;
    v11 = v19;
    v20 = v15 - *(float *)&v18[1];
    v12 = v20;
    v21 = v16 - *(float *)&v18[2];
    v13 = v21;
    v22 = v19 * v19 + v20 * v20 + v21 * v21;
    v23 = sqrt(v22);
    if (isnan(v23))
        sub_487dc0(*(unsigned int *)&v22);
    else
        v22 = v23;
    v2 = (float)v22;
    v16 = (float)(v16 + 0.5 * a1->field_0->field_fc);
    v24 = &a0->field_0->field_8;
    v25 = v14 - *(float *)&a0->field_0->field_8;
    v3 = v25;
    v26 = v15 - *(float *)&v24[1];
    v4 = v26;
    v27 = v16 - *(float *)&v24[2];
    v5 = v27;
    v28 = v25 * v25 + v26 * v26 + v27 * v27;
    v29 = sqrt(v28);
    if (isnan(v29))
        sub_487dc0(*(unsigned int *)&v28);
    else
        v28 = v29;
    v9 = (float)v28;
    v30 = v9;
    if (v30 >= v2)
    {
        v16 -= a1->field_0->field_fc;
        v31 = &a0->field_0->field_8;
        v32 = v14 - *(float *)&a0->field_0->field_8;
        v3 = v32;
        v33 = v15 - *(float *)&v31[1];
        v4 = v33;
        v34 = v16 - *(float *)&v31[2];
        v5 = v34;
        v35 = v32 * v32 + v33 * v33 + v34 * v34;
        v36 = sqrt(v35);
        if (isnan(v36))
            sub_487dc0(*(unsigned int *)&v35);
        else
            v35 = v36;
        v9 = (float)v35;
        v30 = v9;
        if (v30 < v2)
            goto LABEL_4d5589;
    }
    else
    {
LABEL_4d5589:
        v2 = (float)v30;
    }
    if (a0->field_104 & 16)
    {
        v1 = 1;
        v37 = a1->field_0;
        *(float *)&a0->field_250 = v37[2];
        *(float *)&a0->field_254 = v37[3];
        *(float *)&a0->field_258 = v37[4];
        v38 = a1->field_60->field_4c(a1);
        if (v38)
        {
            if (v38->field_60->field_118(v38, a0))
                a0->field_106 = a0->field_106 | 8;
            else
                a0->field_106 = a0->field_106 & 247;
        }
        v3 = 0;
        v4 = 0;
        v5 = 0;
        v39 = &a1->field_0->field_20;
        v40 = 0;
        if (a1->field_0->field_20 == 0.0f && *(float *)&v39[1] == 0.0f)
            v40 = *(float *)&v39[2] == 0.0f;
        if (v40)
            goto LABEL_4d5722;
        g_61692c(-0.05000000074505806f, 0);
        v41 = &a1->field_0->field_20;
        v42 = -0.05000000074505806 * a1->field_0->field_20;
        v9 = (float)v42;
        v43 = -0.05000000074505806 * *(float *)&v41[1];
        v10 = (float)v43;
        v11 = (float)(-0.05000000074505806 * *(float *)&v41[2]);
        v6 = (float)(*(float *)&a0->field_250 - v42);
        v7 = (float)(*(float *)&a0->field_254 - v43);
        v8 = *(float *)&a0->field_258 - v11;
        *(float *)&a0->field_250 = v6;
        *(float *)&a0->field_254 = v7;
        v44 = v8;
        goto LABEL_4d571c;
    }
    else if (!(a0->field_104 & 48) && v2 <= 256.0f)
    {
        v1 = 1;
        v45 = a1->field_0;
        *(float *)&a0->field_250 = v45[2];
        *(float *)&a0->field_254 = v45[3];
        v44 = v45[4];
LABEL_4d571c:
        *(float *)&a0->field_258 = v44;
    }
LABEL_4d5722:
    if (v2 >= a0->field_284)
        a0->field_104 = a0->field_104 | 128;
    else
        a0->field_104 = a0->field_104 & 127;
    if (a0->field_60->field_19c(a0))
    {
        *(float *)&v0 = v2;
        sub_48a8e0(a0, sub_488810(&a0->field_108));
    }
    if (a0->field_214 != 2)
        return v1;
    v47 = a0->field_218;
    if (a0->field_218 <= 7)
    {
        do
        {
            v48 = v47 * 16;
            if (*(int *)&a0->padding_109[151 + v48] != 130)
                continue;
            v49 = &a0->padding_109[139 + v48];
            v50 = *(float *)v49 - *(float *)&a0->field_250;
            v3 = v50;
            v51 = *(float *)&v49[1] - *(float *)&a0->field_254;
            v4 = v51;
            v52 = *(float *)&v49[2] - *(float *)&a0->field_258;
            v5 = v52;
            v53 = v50 * v50 + v51 * v51 + v52 * v52;
            v54 = sqrt(v53);
            if (isnan(v54))
                sub_487dc0(*(unsigned int *)&v53);
            else
                v53 = v54;
            v9 = (float)v53;
            if (v9 > 80.0f)
            {
                sub_48d390(a0);
                break;
            }
        } while ((v47 += 1, v47 <= 7));
    }
    return v1;
}

