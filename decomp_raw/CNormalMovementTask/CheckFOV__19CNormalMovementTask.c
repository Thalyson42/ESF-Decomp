// CheckFOV__19CNormalMovementTask @0x171ea0 size=975
typedef struct st_571ea0_2 {
    char padding_0[8];
    struct st_571ea0_0 *field_8;
    struct st_571ea0_1 *field_c;
} st_571ea0_2;

typedef struct st_571ea0_0 {
    char padding_0[2796];
    float field_aec;
    char padding_af0[664];
    float field_d88;
    char padding_d8c[4];
    float field_d90;
    char padding_d94[336];
    char field_ee4;
    char padding_ee5[235];
    float field_fd0;
} st_571ea0_0;

typedef struct st_571ea0_1 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
    char padding_94[96];
    char field_f4;
    char padding_f5[167];
    float field_19c;
    char padding_1a0[96];
    char field_200;
    char padding_201[36];
    char field_225;
    char padding_226[26];
    unsigned int field_240;
    char padding_244[68];
    int field_288;
} st_571ea0_1;

typedef struct st_571ea0_3 {
    unsigned int field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_571ea0_3;

extern st_571ea0_3 *gpGlobals;

unsigned int * CheckFOV__19CNormalMovementTask(float a0)
{
    st_571ea0_2 *v24;  // esi
    st_571ea0_0 *v25;  // edx
    unsigned int *v34;  // eax
    unsigned int *v35;  // edx
    double v36;  // mm5
    double v37;  // mm5
    st_571ea0_1 *v26;  // ecx
    st_571ea0_1 *v27;  // ecx
    unsigned int *v28;  // eax
    unsigned int *v29;  // edx
    double v30;  // mm5
    double v31;  // mm5
    st_571ea0_1 *v32;  // edx
    st_571ea0_1 *v33;  // ecx
    float v0;  // [bp-0xd4]
    float v1;  // [bp-0xd0]
    float v2;  // [bp-0xcc]
    float v3;  // [bp-0xc8]
    float v4;  // [bp-0xc4]
    float v5;  // [bp-0xc0]
    float v6;  // [bp-0xb4]
    float v7;  // [bp-0xb0]
    float v8;  // [bp-0xac]
    float v9;  // [bp-0x84]
    float v10;  // [bp-0x80]
    float v11;  // [bp-0x7c]
    float v12;  // [bp-0x78]
    float v13;  // [bp-0x74]
    float v14;  // [bp-0x70]
    float v15;  // [bp-0x6c]
    float v16;  // [bp-0x68]
    float v17;  // [bp-0x64]
    float v18;  // [bp-0x60]
    float v19;  // [bp-0x5c]
    float v20;  // [bp-0x58]
    char v21;  // [bp-0x44]
    float v22;  // [bp-0x34]

    v24 = (st_571ea0_2 *)a0;
    v25 = v24->field_8;
    if (v25->field_d88 > *(float *)&gpGlobals->field_0)
        return gpGlobals;
    if (70.0 > v25->field_d90 && 70.0 > v25->field_fd0)
    {
        if (70.0 <= *(float *)&v25->padding_d94[316])
            goto LABEL_5720d0;
        v26 = v24->field_c;
        if (0.1 < v26->field_19c && v26->field_240 != 3 && 45.0 > *(float *)&v25->padding_d94[316] && !(v26->field_225 & 2))
        {
            UTIL_MakeVectors(&v26->field_f4);
            v0 = 0;
            v1 = 0;
            v2 = 200.0f;
            v27 = v24->field_c;
            v28 = &v27->field_88;
            v6 = v27->field_88 + v0;
            v7 = *(float *)&v28[1] + v1;
            v8 = *(float *)&v28[2] + v2;
            v17 = v6;
            v18 = v7;
            v19 = v8;
            v29 = &gpGlobals->field_28;
            v30 = 80.0 * gpGlobals->field_28;
            v3 = (float)v30;
            v31 = 80.0 * *(float *)&v29[1];
            v4 = (float)v31;
            v5 = (float)(80.0 * *(float *)&v29[2]);
            v0 = (float)(v30 + v17);
            v1 = (float)(v31 + v18);
            v2 = v19 + v5;
            v9 = v0;
            v10 = v1;
            v11 = v2;
            UTIL_TraceHull(&v17, &v9, 1, 1, v27->field_288, &v21);
            if (1.0 <= v22)
                goto LABEL_57221a;
        }
        CBot::TurnAround(v24->field_8);
        v24->field_8->field_d88 = (float)(1.0 + *(float *)&gpGlobals->field_0);
        v24->field_8->field_d88 = (float)(1.0 + *(float *)&gpGlobals->field_0);
    }
    else
    {
LABEL_5720d0:
        if (70.0f > *(float *)&v24->field_8->padding_d94[316])
        {
            v32 = v24->field_c;
            if (0.1 < v32->field_19c && v32->field_240 != 3 && !(v32->field_225 & 2))
            {
                UTIL_MakeVectors(&v32->field_f4);
                v18 = 0;
                v19 = 0;
                v20 = 200.0f;
                v33 = v24->field_c;
                v34 = &v33->field_88;
                v15 = v33->field_88 + v18;
                v16 = *(float *)&v34[1] + v19;
                v17 = *(float *)&v34[2] + v20;
                v9 = v15;
                v10 = v16;
                v11 = v17;
                v35 = &gpGlobals->field_28;
                v36 = 40.0 * gpGlobals->field_28;
                v18 = (float)v36;
                v37 = 40.0 * *(float *)&v35[1];
                v19 = (float)v37;
                v20 = (float)(40.0 * *(float *)&v35[2]);
                v15 = (float)(v36 + v9);
                v16 = (float)(v37 + v10);
                v17 = v11 + v20;
                v12 = v15;
                v13 = v16;
                v14 = v17;
                UTIL_TraceHull(&v9, &v12, 1, 1, v33->field_288, &v0);
                if (1.0 > v4)
                    goto LABEL_572226;
LABEL_57221a:
                v24->field_c->field_200 = v24->field_c->field_200 | 2;
            }
            else
            {
LABEL_572226:
                CNormalMovementTask::BotTurnAtWall(v24, &v24->field_8->field_ee4);
                v24->field_8->field_d88 = (float)(1.0 + *(float *)&gpGlobals->field_0);
                v24->field_8->field_aec = (float)(1.5 + v24->field_8->field_aec);
            }
        }
    }
    return gpGlobals;
}

