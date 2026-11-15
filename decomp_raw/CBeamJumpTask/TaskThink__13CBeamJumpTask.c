// TaskThink__13CBeamJumpTask @0x185bf0 size=936
typedef struct st_585bf0_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_585bf0_0;

typedef struct st_585bf0_1 {
    struct st_585bf0_0 *field_0;
    char padding_4[816];
    unsigned int field_334;
    char padding_338[4];
    unsigned int field_33c;
    char padding_340[912];
    unsigned int field_6d0;
    char padding_6d4[1104];
    unsigned int field_b24;
    unsigned int field_b28;
    unsigned int field_b2c;
    char padding_b30[60];
    struct st_585bf0_2 *field_b6c;
    char padding_b70[160];
    unsigned int field_c10;
    unsigned int field_c14;
    unsigned int field_c18;
} st_585bf0_1;

typedef struct st_585bf0_4 {
    char padding_0[4];
    unsigned int field_4;
    struct st_585bf0_1 *field_8;
    struct st_585bf0_3 *field_c;
    char padding_10[8];
    unsigned int field_18;
    float field_1c;
    unsigned int field_20;
} st_585bf0_4;

typedef struct st_585bf0_2 {
    struct st_585bf0_0 *field_0;
} st_585bf0_2;

typedef struct st_585bf0_6 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[460];
    float field_1e0;
} st_585bf0_6;

typedef struct st_585bf0_3 {
    char padding_0[392];
    unsigned int field_188;
    char padding_18c[116];
    char field_200;
} st_585bf0_3;

typedef struct st_585bf0_5 {
    unsigned int field_0;
} st_585bf0_5;

extern st_585bf0_5 *gpGlobals;

double TaskThink__13CBeamJumpTask(st_585bf0_4 *a0)
{
    double v22;  // mm7
    st_585bf0_1 *v23;  // esi
    double v32;  // mm6
    unsigned int *v33;  // edx
    unsigned int *v34;  // edx
    float v35;  // 112
    float v36;  // 112
    float v37;  // 112
    double v38;  // mm7
    double v39;  // mm6
    unsigned int *v40;  // edx
    unsigned int *v41;  // edx
    st_585bf0_6 **v24;  // esi
    float v42;  // 112
    float v43;  // 112
    float v44;  // 112
    double v45;  // mm7
    double v46;  // mm6
    double v47;  // 128
    st_585bf0_1 *v25;  // ecx
    unsigned int *v26;  // edx
    unsigned int *v27;  // edx
    float v28;  // 112
    float v29;  // 112
    float v30;  // 112
    double v31;  // mm7
    float v0;  // [bp-0x80]
    float v1;  // [bp-0x7c]
    char v2;  // [bp-0x75]
    unsigned int v3;  // [bp-0x64]
    float v4;  // [bp-0x64]
    float v5;  // [bp-0x60], Other Possible Types: unsigned int
    float v6;  // [bp-0x5c], Other Possible Types: unsigned int
    float v7;  // [bp-0x58]
    float v8;  // [bp-0x54]
    float v9;  // [bp-0x50]
    float v10;  // [bp-0x4c]
    char v11;  // [bp-0x44], Other Possible Types: unsigned int
    unsigned int v12;  // [bp-0x40]
    unsigned int v13;  // [bp-0x3c]
    float v14;  // [bp-0x38]
    float v15;  // [bp-0x34]
    float v16;  // [bp-0x30]
    float v17;  // [bp-0x2c]
    float v18;  // [bp-0x28]
    float v19;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v20;  // [bp-0x20]
    unsigned int v21;  // [bp-0x1c]

    a0->field_c->field_200 = a0->field_c->field_200 | 2;
    v22 = *(float *)&a0->field_18;
    if (v22 > *(float *)gpGlobals)
    {
        v2 = 0;
        if (a0->field_8->field_33c)
            v2 = a0->field_c->field_188 == 15;
        if (!a0->field_8->field_334)
        {
            if (v2)
                goto LABEL_585d05;
            if (a0->field_8->field_33c)
                goto LABEL_585c73;
        }
        else
        {
LABEL_585c73:
            if (!v2)
            {
                v23 = a0->field_8;
                *(float *)&v19 = *(float *)&v23->field_b24;
                *(float *)&v20 = *(float *)&v23->field_b28;
                *(float *)&v21 = *(float *)&v23->field_b2c;
                *(float *)&v3 = *(float *)&v23->field_b24;
                *(float *)&v5 = *(float *)&v23->field_b28;
                *(float *)&v6 = *(float *)&v23->field_b2c;
                CBot::GetAimAngles(&v11, v23, &v3);
                v23->field_c10 = v11;
                v23->field_c14 = v12;
                v23->field_c18 = v13;
                if (a0->field_8->field_6d0 && *(float *)&a0->field_20 + 0.20000000298023224 >= *(float *)gpGlobals)
                    a0->field_c->field_200 = a0->field_c->field_200 | 1;
            }
LABEL_585d05:
            v24 = UTIL_GetLastAttackFromPlayer(a0->field_8);
            if (!(char)IsNull(v24) || !(v22 = *(float *)&a0->field_18, *(float *)gpGlobals + 0.4 > v22))
            {
                v25 = a0->field_8;
                if (v25->field_33c && a0->field_c->field_188 == 15 && v25->field_b6c)
                {
                    v26 = *(int *)v25->field_b6c + 8;
                    *(float *)&v3 = *(float *)(*(int *)v25->field_b6c + 8);
                    *(float *)&v5 = *(float *)&v26[1];
                    *(float *)&v6 = *(float *)&v26[2];
                    v27 = &v25->field_0->field_8;
                    v28 = *(float *)&v3 - *(float *)&v25->field_0->field_8;
                    v14 = v28;
                    v29 = *(float *)&v5 - *(float *)&v27[1];
                    v15 = v29;
                    v30 = *(float *)&v6 - *(float *)&v27[2];
                    v16 = v30;
                    v31 = v28 * v28 + v29 * v29 + v30 * v30;
                    v32 = sqrt(v31);
                    if (isnan(v32))
                        sqrt(*(unsigned int *)&v31);
                    else
                        v31 = v32;
                    v1 = (float)v31;
                    v33 = *(int *)a0->field_8->field_b6c + 8;
                    *(float *)&v3 = *(float *)(*(int *)a0->field_8->field_b6c + 8);
                    *(float *)&v5 = *(float *)&v33[1];
                    *(float *)&v6 = *(float *)&v33[2];
                    v34 = &*v24->field_8;
                    v7 = *v24->field_8;
                    v8 = *(float *)&v34[1];
                    v9 = *(float *)&v34[2];
                    v35 = v7 - *(float *)&v3;
                    v17 = v35;
                    v36 = v8 - *(float *)&v5;
                    v18 = v36;
                    v37 = v9 - *(float *)&v6;
                    v19 = v37;
                    v38 = v35 * v35 + v36 * v36 + v37 * v37;
                    v39 = sqrt(v38);
                    if (isnan(v39))
                        sqrt(*(unsigned int *)&v38);
                    else
                        v38 = v39;
                    v0 = (float)v38;
                    v40 = &*v24->field_8;
                    v4 = *v24->field_8;
                    v5 = *(float *)&v40[1];
                    v6 = *(float *)&v40[2];
                    v41 = &a0->field_8->field_0->field_8;
                    v42 = v4 - *(float *)&a0->field_8->field_0->field_8;
                    v14 = v42;
                    v43 = v5 - *(float *)&v41[1];
                    v15 = v43;
                    v44 = v6 - *(float *)&v41[2];
                    v16 = v44;
                    v45 = v42 * v42 + v43 * v43 + v44 * v44;
                    v46 = sqrt(v45);
                    if (isnan(v46))
                        sqrt(*(unsigned int *)&v45);
                    else
                        v45 = v46;
                    v10 = (float)v45;
                    v22 = v10;
                    if (v1 > 950.0f)
                    {
                        if (*v24->field_1e0 * 9.0 <= v0)
                            goto LABEL_585f36;
                        if (*v24->field_1e0 * 11.0 >= v22)
                            goto LABEL_585f3c;
                    }
                    else
                    {
LABEL_585f36:
                        goto LABEL_585f3c;
                    }
                }
                else
                {
LABEL_585f3c:
                    v47 = a0->field_1c;
                    if (v47 > *(float *)gpGlobals)
                    {
                        return v47;
                    }
                    else if (v2)
                    {
                        a0->field_1c = (float)(0.1 + *(float *)gpGlobals);
                        v22 = 50.0;
                        if (!(char)CheckForCollide(a0->field_c, 8, 50.0f))
                            return 50.0;
                    }
                    else
                    {
                        return v47;
                    }
                }
            }
        }
    }
    a0->field_4 = 2;
    return v22;
}

