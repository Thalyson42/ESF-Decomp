// ShootAbsorbHealthBeams__17CAbsorbHealthTask @0x14fd40 size=805
typedef struct st_54fd40_4 {
    char padding_0[8];
    struct st_54fd40_2 *field_8;
    struct st_54fd40_3 *field_c;
} st_54fd40_4;

typedef struct st_54fd40_1 {
    struct st_54fd40_0 *field_0;
    char padding_4[1856];
    unsigned int field_744;
} st_54fd40_1;

typedef struct st_54fd40_2 {
    char padding_0[588];
    int field_24c;
    char padding_250[1268];
    unsigned int field_744;
    char padding_748[728];
    char field_a20;
    char padding_a21[3];
    struct st_54fd40_1 *field_a24;
    char padding_a28[132];
    char field_aac;
    char padding_aad[263];
    float field_bb4;
} st_54fd40_2;

typedef struct st_54fd40_0 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[384];
    unsigned int field_1ac;
} st_54fd40_0;

typedef struct st_54fd40_3 {
    char padding_0[480];
    float field_1e0;
    char padding_1e4[72];
    unsigned int field_22c;
} st_54fd40_3;

typedef struct st_54fd40_5 {
    unsigned int field_0;
} st_54fd40_5;

extern unsigned int g_teamplay;
extern st_54fd40_5 *gpGlobals;

char ShootAbsorbHealthBeams__17CAbsorbHealthTask(st_54fd40_4 *a0)
{
    st_54fd40_2 *v15;  // edx
    unsigned int *v16;  // edi
    double v25;  // mm7
    double v26;  // mm6
    float v27;  // 128
    unsigned int index;  // edx
    int v17;  // eax
    double v18;  // mm7
    unsigned int v19;  // edx
    unsigned int v20;  // esi
    double v21;  // mm7
    double v22;  // mm6
    double v23;  // mm7
    unsigned int v24;  // edx
    unsigned int idx1;  // [bp-0xa4]
    float v1;  // [bp-0xa0]
    unsigned int idx;  // [bp-0x9c]
    char v3;  // [bp-0x95]
    float v4;  // [bp-0x88]
    float v5;  // [bp-0x74]
    float v6;  // [bp-0x70]
    float v7;  // [bp-0x6c]
    float v8;  // [bp-0x54]
    float v9;  // [bp-0x50]
    float v10;  // [bp-0x4c]
    float v11;  // [bp-0x34]
    float v12;  // [bp-0x30]
    float v13;  // [bp-0x2c]
    int v14;  // [bp-0x8]

    if (!a0->field_8->field_a20)
        sub_48bf40(a0->field_8);
    if (!a0->field_8->field_aac)
        return 0;
    v3 = 0;
    v15 = a0->field_8;
    idx = 0;
    if (a0->field_8->field_aac)
    {
        do
        {
            v16 = (&v15->field_a24)[idx];
            if (g_teamplay && a0->field_c->field_22c == *(int *)(*v16 + 428) || !(char)sub_48bf70(a0->field_8, v16))
                continue;
            strncpy(&v1, "33s?", 4);
            v17 = a0->field_8->field_744 - v16[465];
            if (v17 > 0)
            {
                v14 = v17;
                v1 = (float)((double)v14 / 10000000.0);
            }
            if (v1 < 0.05)
            {
                v18 = 0.05000000074505806;
                goto LABEL_54fe76;
            }
            else
            {
                v18 = 0.949999988079071;
                if (0.949999988079071 < v1)
                {
LABEL_54fe76:
                    v1 = (float)v18;
                    goto LABEL_54fe80;
                }
                else
                {
LABEL_54fe80:
                    v19 = *v16;
                    idx1 = v19;
                    v20 = v19 + 32;
                    v21 = *(float *)(v19 + 32) * *(float *)(v19 + 32) + *(float *)(v20 + 4) * *(float *)(v20 + 4) + *(float *)(v20 + 8) * *(float *)(v20 + 8);
                    v22 = sqrt(v21);
                    if (isnan(v22))
                        sub_487dc0(*(unsigned int *)&v21);
                    else
                        v21 = v22;
                    v4 = (float)v21;
                    if (v4 == 0.0f)
                    {
                        v5 = 0.0f;
                        v6 = 0.0f;
                        v7 = 1.0;
                    }
                    else
                    {
                        v23 = 1.0 / v4;
                        v5 = (float)(v23 * *(float *)v20);
                        v6 = (float)(v23 * *(float *)(v20 + 4));
                        v7 = (float)(v23 * *(float *)(v20 + 8));
                    }
                    v24 = *v16 + 32;
                    v25 = *(float *)(*v16 + 32) * *(float *)(*v16 + 32) + *(float *)(v24 + 4) * *(float *)(v24 + 4) + *(float *)(v24 + 8) * *(float *)(v24 + 8);
                    v26 = sqrt(v25);
                    if (isnan(v26))
                        sub_487dc0(*(unsigned int *)&v25);
                    else
                        v25 = v26;
                    v4 = (float)v25;
                    v27 = v4 * v1;
                    v8 = v27 * v5;
                    v9 = v27 * v6;
                    v10 = v27 * v7;
                    index = *v16 + 32;
                    v11 = *(float *)(*v16 + 32) - v8;
                    v12 = *(float *)(index + 4) - v9;
                    v13 = *(float *)(index + 8) - v10;
                    *(float *)(idx1 + 32) = v11;
                    *(float *)(idx1 + 36) = v12;
                    *(float *)(idx1 + 40) = v13;
                    sub_4888e0(a0->field_8, v16);
                    if (!v3)
                        v3 = 1;
                    if ((double)a0->field_8->field_24c <= a0->field_c->field_1e0)
                        return 0;
                }
            }
        } while ((idx += 1, v15 = a0->field_8, (int)idx < a0->field_8->field_aac));
    }
    if (a0->field_8->field_bb4 > *(float *)gpGlobals)
        return v3;
    a0->field_8->field_bb4 = (float)(0.19 + *(float *)gpGlobals);
    return v3;
}

