// CheckForObsticales__12CPlayerMelee @0x101910 size=1362
typedef struct st_501910_4 {
    char padding_0[124];
    struct st_501910_3 *field_7c;
} st_501910_4;

typedef struct st_501910_1 {
    char padding_0[140];
    struct st_501910_2 *field_8c;
    char padding_90[16];
    struct st_501910_2 *field_a0;
} st_501910_1;

typedef struct st_501910_5 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[28];
    struct st_501910_3 *field_28;
    char padding_2c[184];
    struct st_501910_2 *field_e4;
} st_501910_5;

typedef struct st_501910_0 {
    char padding_0[268];
    unsigned int field_10c;
} st_501910_0;

typedef struct st_501910_2 {
    unsigned int field_0;
} st_501910_2;

typedef struct st_501910_3 {
    struct st_501910_0 *field_0;
    char padding_4[92];
    struct st_501910_1 *field_60;
    char padding_64[796];
    char field_380;
    char padding_381[39];
    unsigned int field_3a8;
} st_501910_3;

extern st_501910_2 *g_6168d4;

unsigned int CheckForObsticales__12CPlayerMelee(float idx)
{
    unsigned int *v24;  // ecx
    st_501910_5 *v25;  // eax
    double v34;  // mm7
    float v35;  // 128
    float v36;  // 128
    float v37;  // 128
    st_501910_5 *v38;  // eax
    double v26;  // mm5
    double v27;  // mm5
    unsigned int v28;  // edx
    st_501910_4 *v29;  // eax
    st_501910_3 *v30;  // eax
    st_501910_3 *v31;  // esi
    double v32;  // mm5
    float v33;  // 128
    float v0;  // [bp-0xbc]
    float v1;  // [bp-0xb8]
    float v2;  // [bp-0xa8]
    float v3;  // [bp-0xa8]
    float v4;  // [bp-0xa4], Other Possible Types: unsigned int
    float v5;  // [bp-0xa0], Other Possible Types: unsigned int
    float v6;  // [bp-0x9c], Other Possible Types: unsigned int
    float v7;  // [bp-0x98]
    float v8;  // [bp-0x94]
    float v9;  // [bp-0x90]
    float v10;  // [bp-0x84]
    float v11;  // [bp-0x80]
    float v12;  // [bp-0x7c]
    char v13;  // [bp-0x44]
    float v14;  // [bp-0x34]
    unsigned int v15;  // [bp-0x30]
    unsigned int v16;  // [bp-0x2c]
    unsigned int v17;  // [bp-0x28]
    char v18;  // [bp-0x20]
    float v19;  // [bp-0x20]
    float v20;  // [bp-0x1c]
    float v21;  // [bp-0x18]
    st_501910_4 *v22;  // [bp-0x14]

    v24 = *(int *)(*(unsigned int *)&idx + 292);
    v25 = *(unsigned int *)&idx + 64;
    v26 = 32.0 * *(float *)(*(unsigned int *)&idx + 64);
    v4 = (float)v26;
    v27 = 32.0 * *(float *)&v25->field_4;
    v5 = (float)v27;
    v6 = (float)(32.0 * *(float *)&v25->field_8);
    v28 = *v24 + 8;
    v10 = (float)(v26 + *(float *)(*v24 + 8));
    v11 = (float)(v27 + *(float *)(v28 + 4));
    v12 = *(float *)(v28 + 8) + v6;
    sub_488460(*v24 + 8, &v10, 0, 1, *(int *)(*v24 + 520), &v13);
    if (1.0 <= v14)
        return 0;
    v29 = v22;
    if (v29 || (v29 = g_6168d4(0), v29))
        v30 = v29->field_7c;
    else
        v30 = NULL;
    v31 = v30;
    if (v31->field_0->field_10c == 4)
    {
        sub_488860(&v4, &v18);
        v1 = v4;
        v32 = -v19;
        v4 = (float)v32;
        v5 = -v20;
        v6 = -v21;
        v0 = (float)(v32 * *(float *)(*(unsigned int *)&idx + 64) + *(float *)(*(unsigned int *)&idx + 0x44) * v5 + *(float *)(*(unsigned int *)&idx + 72) * v6);
        v33 = v1;
        if (v33 < -180.0f)
        {
            v34 = v33 + 360.0;
            goto LABEL_501a99;
        }
        else
        {
            v35 = v1;
            if (v35 > 180.0f)
            {
                v34 = v35 - 360.0;
LABEL_501a99:
                v1 = (float)v34;
            }
        }
        if (!*(int *)(*(unsigned int *)&idx + 44))
        {
            sub_48d400(idx);
        }
        else
        {
            sub_48a130(idx);
            if (v0 > 0.8)
            {
                v36 = v1;
                if (v36 < 115.0f && v36 > 65.0f)
                {
                    sub_48a690(idx);
                    sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520), 1, "weapons/wallhit.wav", 0x3f800000, 0.800000011920929f, 0, 100);
                    if (sub_48d060(idx, 1))
                    {
                        if (*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 384) & 2 && sub_48c980(*(int *)(*(unsigned int *)&idx + 292), 100))
                        {
                            sub_489920(idx);
                            goto LABEL_501ab2;
                        }
                        else
                        {
                            sub_48ba10(idx);
                            goto LABEL_501ab2;
                        }
                    }
                }
            }
            if (v0 > 0.699999988079071f)
            {
                v37 = v1;
                if (v37 < 45.0f && v37 > -45.0f)
                {
                    sub_48a690(idx);
                    sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520), 1, "weapons/wallhit.wav", 0x3f800000, 0.800000011920929f, 0, 100);
                    v4 = v15;
                    v5 = v16;
                    v6 = v17;
                    v7 = (float)(125.0 * v19);
                    v8 = (float)(125.0 * v20);
                    v9 = (float)(125.0 * v21);
                    sub_48a6f0(idx, &v4, &v7, 50.0f, 20, 20);
                    if (sub_48d060(idx, 1))
                    {
                        v4 = v15;
                        v5 = v16;
                        v6 = v17;
                        v7 = v19;
                        v8 = v20;
                        v9 = v21;
                        sub_488210(idx, &v4, &v7);
                        goto LABEL_501ab2;
                    }
                }
            }
            if (sub_48d060(idx, 0))
                sub_48c960(idx);
        }
LABEL_501ab2:
        return 1;
    }
    else if (v31->field_60->field_a0(v31) && v31->field_60->field_8c(v31) && v31 != *(int *)(*(unsigned int *)&idx + 104) && !v31->field_3a8 && sub_4897e0(*(int *)(*(unsigned int *)&idx + 104), v31))
    {
        sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520), 1, "weapons/wallhit.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        v38 = *(unsigned int *)&idx + 64;
        *(float *)&v4 = *(float *)(*(unsigned int *)&idx + 64);
        *(float *)&v5 = *(float *)&v38->field_4;
        *(float *)&v6 = *(float *)&v38->field_8;
        v2 = (float)(0.85 * *(float *)(*(unsigned int *)&idx + 16));
        v3 = (float)(1.15 * *(float *)(*(unsigned int *)&idx + 8));
        sub_48c240(&v31->field_380, *(int *)(*(unsigned int *)&idx + 104), 1, &v4, v3, *(float *)(*(unsigned int *)&idx + 12), v2, 1.5f);
    }
    return 0;
}

