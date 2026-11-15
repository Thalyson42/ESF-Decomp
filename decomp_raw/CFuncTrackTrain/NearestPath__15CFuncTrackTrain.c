// NearestPath__15CFuncTrackTrain @0xec1f0 size=741
typedef struct st_4ec1f0_7 {
    char padding_0[12];
    unsigned int field_c;
    unsigned int field_10;
} st_4ec1f0_7;

typedef struct st_4ec1f0_4 {
    struct st_4ec1f0_1 *field_0;
} st_4ec1f0_4;

typedef struct st_4ec1f0_8 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[400];
    char field_19c;
    char padding_19d[39];
    unsigned int field_1c4;
} st_4ec1f0_8;

typedef struct st_4ec1f0_0 {
    unsigned int field_0;
    char padding_4[4];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[400];
    char field_1a4;
    char padding_1a5[39];
    unsigned int field_1cc;
} st_4ec1f0_0;

typedef struct st_4ec1f0_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[400];
    char field_1a4;
    char padding_1a5[39];
    unsigned int field_1cc;
} st_4ec1f0_1;

typedef struct st_4ec1f0_3 {
    char padding_0[256];
    unsigned int field_100;
    char padding_104[244];
    unsigned int field_1f8;
} st_4ec1f0_3;

typedef struct st_4ec1f0_2 {
    struct st_4ec1f0_3 *field_0;
    char padding_4[96];
    struct st_4ec1f0_4 *field_64;
} st_4ec1f0_2;

typedef struct st_4ec1f0_5 {
    char padding_0[152];
    unsigned int field_98;
} st_4ec1f0_5;

typedef struct st_4ec1f0_6 {
    unsigned int field_0;
} st_4ec1f0_6;

extern char Next__10CFuncTrain;
extern st_4ec1f0_6 *g_6168b4;
extern st_4ec1f0_5 *gpGlobals;

double NearestPath__15CFuncTrackTrain(float a0)
{
    st_4ec1f0_0 **v14;  // edi
    unsigned int idx;  // esi
    unsigned int index;  // esi
    st_4ec1f0_8 *v25;  // edx
    float v26;  // 112
    float v27;  // 112
    float v28;  // 112
    double v29;  // mm7
    double v30;  // mm6
    unsigned int idx1;  // esi
    st_4ec1f0_8 *v32;  // edx
    float v33;  // 112
    st_4ec1f0_8 *v16;  // edx
    float v34;  // 112
    float v35;  // 112
    double v36;  // mm7
    double v37;  // mm6
    st_4ec1f0_2 *v38;  // edx
    st_4ec1f0_7 *v40;  // ecx
    float v17;  // 112
    float v18;  // 112
    float v19;  // 112
    double v20;  // mm7
    double v21;  // mm6
    unsigned int *v22;  // ecx
    st_4ec1f0_0 **v23;  // edi
    float v0;  // [bp-0x60]
    float v1;  // [bp-0x5c]
    st_4ec1f0_0 **v2;  // [bp-0x58]
    float v3;  // [bp-0x48]
    float v4;  // [bp-0x44]
    float v5;  // [bp-0x40]
    float v6;  // [bp-0x3c]
    float v7;  // [bp-0x38]
    float v8;  // [bp-0x34]
    float v9;  // [bp-0x30]
    float v10;  // [bp-0x24]
    float v11;  // [bp-0x20]
    float v12;  // [bp-0x1c]

    v14 = NULL;
    v2 = NULL;
    v1 = 1024.0f;
    while (1)
    {
        v14 = sub_48bba0(v14, *(int *)a0 + 8, 1024.0f);
        if (!v14)
            break;
        if (!(*v14->field_1a4 & 40) && !sub_488af0(*v14->field_0 + gpGlobals->field_98, "path_track"))
        {
            idx = *(int *)a0 + 8;
            v16 = &*v14->field_8;
            v17 = *(float *)(*(int *)a0 + 8) - *v14->field_8;
            v10 = v17;
            v18 = *(float *)(idx + 4) - *(float *)&v16->field_4;
            v11 = v18;
            v19 = *(float *)(idx + 8) - *(float *)&v16->field_8;
            v12 = v19;
            v20 = v17 * v17 + v18 * v18 + v19 * v19;
            v21 = sqrt(v20);
            if (isnan(v21))
                sub_487dc0(*(unsigned int *)&v20);
            else
                v20 = v21;
            v7 = (float)v20;
            if (v7 < v1)
            {
                v1 = v7;
                v2 = v14;
            }
        }
    }
    if (!v2)
    {
        g_6168b4(1, "Can't find a nearby track !!!\n");
        v22 = (unsigned int *)a0;
        v22[3] = 0;
        v22[4] = 0;
        return 1024.0;
    }
    g_6168b4(2, "TRAIN: %s, Nearest track is %s\n", *(int *)(*(int *)a0 + 460) + gpGlobals->field_98, *v2->field_1cc + gpGlobals->field_98);
    v23 = sub_48d550(v2);
    if (v23)
    {
        index = *(int *)a0 + 8;
        v25 = &*v23->field_8;
        v26 = *(float *)(*(int *)a0 + 8) - *v23->field_8;
        v4 = v26;
        v27 = *(float *)(index + 4) - *(float *)&v25->field_4;
        v5 = v27;
        v28 = *(float *)(index + 8) - *(float *)&v25->field_8;
        v6 = v28;
        v29 = v26 * v26 + v27 * v27 + v28 * v28;
        v30 = sqrt(v29);
        if (isnan(v30))
            sub_487dc0(*(unsigned int *)&v29);
        else
            v29 = v30;
        v0 = (float)v29;
        idx1 = *(int *)a0 + 8;
        v32 = &*v2->field_8;
        v33 = *(float *)(*(int *)a0 + 8) - *v2->field_8;
        v7 = v33;
        v34 = *(float *)(idx1 + 4) - *(float *)&v32->field_4;
        v8 = v34;
        v35 = *(float *)(idx1 + 8) - *(float *)&v32->field_8;
        v9 = v35;
        v36 = v33 * v33 + v34 * v34 + v35 * v35;
        v37 = sqrt(v36);
        if (isnan(v37))
            sub_487dc0(*(unsigned int *)&v36);
        else
            v36 = v37;
        v11 = (float)v36;
        if (v11 > v0)
            v2 = v23;
    }
    v38 = (st_4ec1f0_2 *)a0;
    v38->field_64 = v2;
    if (*(float *)&v38->field_0->field_1f8 == 0.0f)
        return *(float *)&v38->field_0->field_1f8;
    v3 = (float)(0.1 + *(float *)&v38->field_0->field_100);
    v40 = (st_4ec1f0_7 *)a0;
    v40->field_c = _INSERT(sub_4885e0(v38, v3, 0), 0, 0) | 0xffff0000;
    v40->field_10 = &Next__10CFuncTrain;
    return v3;
}

