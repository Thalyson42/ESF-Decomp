// Next__10CFuncTrain @0xe9f50 size=906
typedef struct st_4e9f50_6 {
    char padding_0[268];
    unsigned int field_10c;
} st_4e9f50_6;

typedef struct st_4e9f50_1 {
    unsigned int field_0;
} st_4e9f50_1;

typedef struct st_4e9f50_5 {
    char padding_0[220];
    char field_dc;
    char padding_dd[11];
    char field_e8;
    char padding_e9[255];
    unsigned int field_1e8;
    unsigned int field_1ec;
} st_4e9f50_5;

typedef struct st_4e9f50_2 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[436];
    unsigned int field_1c8;
    char padding_1cc[60];
    unsigned int field_208;
} st_4e9f50_2;

typedef struct st_4e9f50_4 {
    struct st_4e9f50_2 *field_0;
    char padding_4[92];
    struct st_4e9f50_3 *field_60;
} st_4e9f50_4;

typedef struct st_4e9f50_3 {
    char padding_0[104];
    struct st_4e9f50_1 *field_68;
} st_4e9f50_3;

typedef struct st_4e9f50_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4e9f50_0;

extern char Wait__10CFuncTrain;
extern st_4e9f50_1 *g_6168b4;
extern st_4e9f50_0 *gpGlobals;

float Next__10CFuncTrain(float idx)
{
    st_4e9f50_5 *v16;  // esi
    st_4e9f50_5 *v17;  // edx
    double v26;  // mm5
    unsigned int *v27;  // edx
    st_4e9f50_5 *v28;  // eax
    st_4e9f50_5 *v29;  // edx
    st_4e9f50_5 *v30;  // eax
    st_4e9f50_5 *v32;  // ecx
    st_4e9f50_6 *v33;  // edx
    unsigned int *v34;  // eax
    double v35;  // mm5
    float v18;  // mm7
    double v36;  // mm5
    unsigned int *v37;  // edx
    st_4e9f50_4 *v19;  // ecx
    double v20;  // mm7
    st_4e9f50_4 *v21;  // edx
    st_4e9f50_5 *v22;  // ecx
    st_4e9f50_6 *v23;  // edx
    unsigned int *v24;  // eax
    double v25;  // mm5
    st_4e9f50_4 *v0;  // [bp-0x78]
    float v1;  // [bp-0x74]
    float v2;  // [bp-0x70]
    float v3;  // [bp-0x6c]
    float v4;  // [bp-0x68]
    float v5;  // [bp-0x64]
    float v6;  // [bp-0x60]
    float v7;  // [bp-0x5c]
    float v8;  // [bp-0x58]
    float v9;  // [bp-0x54]
    float v10;  // [bp-0x50]
    float v11;  // [bp-0x4c]
    float v12;  // [bp-0x34]
    float v13;  // [bp-0x30]
    float v14;  // [bp-0x2c]

    v0 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 172))(idx);
    if (!v0)
    {
        v16 = *(int *)idx;
        if (v16->field_1e8)
            sub_489390(*(int *)&v16[1].padding_0[24], 6, v16->field_1e8 + gpGlobals->field_98, 0, 0, 32, 100);
        v17 = *(int *)idx;
        if (!v17->field_1ec)
            return v18;
        sub_489390(*(int *)&v17[1].padding_0[24], 2, v17->field_1ec + gpGlobals->field_98, *(float *)(*(unsigned int *)&idx + 264), 0.800000011920929f, 0, 100);
        return *(float *)(*(unsigned int *)&idx + 264);
    }
    else
    {
        *(int *)(*(int *)idx + 468) = *(int *)(*(int *)idx + 456);
        v19 = v0;
        *(unsigned int *)(*(int *)idx + 456) = v19->field_0->field_1c8;
        v19->field_60->field_68(v19);
        *(float *)(*(unsigned int *)&idx + 140) = (float)v20;
        if (*(int *)(*(unsigned int *)&idx + 268) && *(float *)(*(int *)(*(unsigned int *)&idx + 268) + 504) != 0.0f)
        {
            *(float *)(*(int *)idx + 504) = *(float *)(*(int *)(*(unsigned int *)&idx + 268) + 504);
            g_6168b4(2, "Train %s speed to %4.2f\n", *(int *)(*(int *)idx + 460) + gpGlobals->field_98, (unsigned int)(*(float *)(*(int *)idx + 504) >> 0));
        }
        v21 = v0;
        *(struct st_4e9f50_2 **)(*(unsigned int *)&idx + 268) = v21->field_0;
        *(unsigned int *)(*(int *)idx + 400) = v21->field_0->field_208;
        if (*(char *)(*(int *)(*(unsigned int *)&idx + 268) + 416) & 2)
        {
            *(char *)(*(int *)idx + 280) = *(char *)(*(int *)idx + 280) | 32;
            v22 = *(int *)idx;
            v23 = &v22->field_dc;
            v24 = &v22->field_e8;
            v1 = *(float *)&v22->field_dc + *(float *)&v22->field_e8;
            v2 = *(float *)&v23->padding_0[4] + *(float *)&v24[1];
            v3 = *(float *)&v23->padding_0[8] + *(float *)&v24[2];
            v25 = 0.5 * v1;
            v9 = (float)v25;
            v26 = 0.5 * v2;
            v10 = (float)v26;
            v11 = (float)(0.5 * v3);
            v27 = &v0->field_0->field_8;
            v12 = (float)(v0->field_0->field_8 - v25);
            v13 = (float)(*(float *)&v27[1] - v26);
            v14 = *(float *)&v27[2] - v11;
            sub_48db50(v22, &v12);
            sub_487be0(idx);
            return v14;
        }
        v28 = *(int *)idx;
        if (v28->field_1e8)
        {
            sub_489390(*(int *)&v28[1].padding_0[24], 6, v28->field_1e8 + gpGlobals->field_98, 0, 0, 32, 100);
            v29 = *(int *)idx;
            if (v29->field_1e8)
                sub_489390(*(int *)&v29[1].padding_0[24], 6, v29->field_1e8 + gpGlobals->field_98, *(float *)(*(unsigned int *)&idx + 264), 0.800000011920929f, 0, 100);
        }
        v30 = *(int *)idx;
        v30->padding_e9[47] = v30->padding_e9[47] & 223;
        *(unsigned int *)(*(unsigned int *)&idx + 220) = _INSERT(v30, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 224) = &Wait__10CFuncTrain;
        v32 = *(int *)idx;
        v33 = &v32->field_dc;
        v34 = &v32->field_e8;
        v7 = *(float *)&v32->field_dc + *(float *)&v32->field_e8;
        v8 = *(float *)&v33->padding_0[4] + *(float *)&v34[1];
        v9 = *(float *)&v33->padding_0[8] + *(float *)&v34[2];
        v35 = 0.5 * v7;
        v4 = (float)v35;
        v36 = 0.5 * v8;
        v5 = (float)v36;
        v6 = (float)(0.5 * v9);
        v37 = &v0->field_0->field_8;
        v1 = (float)(v0->field_0->field_8 - v35);
        v2 = (float)(*(float *)&v37[1] - v36);
        v3 = *(float *)&v37[2] - v6;
        sub_488220(idx, &v1, *(float *)&v32[1].padding_0[8]);
        return *(float *)&v32[1].padding_0[8];
    }
}

