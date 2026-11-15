// UpdateTrain__16CFuncTrackChangeR6Vector @0xed3c0 size=513
typedef struct st_4ed3c0_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[48];
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[152];
    float field_100;
} st_4ed3c0_1;

typedef struct st_4ed3c0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[36];
    float field_50;
    float field_54;
    float field_58;
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[152];
    float field_100;
    float field_104;
} st_4ed3c0_0;

typedef struct st_4ed3c0_2 {
    struct st_4ed3c0_0 *field_0;
    char padding_4[296];
    struct st_4ed3c0_3 *field_12c;
} st_4ed3c0_2;

typedef struct st_4ed3c0_3 {
    struct st_4ed3c0_1 *field_0;
} st_4ed3c0_3;

typedef struct st_4ed3c0_4 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    float field_34;
    float field_38;
    float field_3c;
    float field_40;
    float field_44;
    float field_48;
} st_4ed3c0_4;

extern st_4ed3c0_4 *gpGlobals;

double UpdateTrain__16CFuncTrackChangeR6Vector(st_4ed3c0_2 *a0, float *a1)
{
    st_4ed3c0_0 *v17;  // edx
    st_4ed3c0_1 *v18;  // ecx
    float v27;  // 112
    float v28;  // 120
    unsigned int *v29;  // edx
    unsigned int *v30;  // edx
    st_4ed3c0_1 *v31;  // ecx
    float v32;  // 128
    unsigned int *v33;  // edx
    st_4ed3c0_1 *v19;  // ecx
    st_4ed3c0_0 *v20;  // edx
    unsigned int *v21;  // esi
    st_4ed3c0_0 *v22;  // eax
    unsigned int *v23;  // edx
    unsigned int *v24;  // edx
    unsigned int *v25;  // edx
    float v26;  // 128
    float v0;  // [bp-0x98]
    float v1;  // [bp-0x88]
    float v2;  // [bp-0x84]
    float v3;  // [bp-0x80]
    double v4;  // [bp-0x7c], Other Possible Types: float
    float v5;  // [bp-0x78]
    float v6;  // [bp-0x74]
    float v7;  // [bp-0x70]
    float v8;  // [bp-0x64]
    float v9;  // [bp-0x60]
    float v10;  // [bp-0x5c]
    float v11;  // [bp-0x44]
    float v12;  // [bp-0x40]
    float v13;  // [bp-0x3c]
    float v14;  // [bp-0x24]
    float v15;  // [bp-0x20]
    float v16;  // [bp-0x1c]

    v17 = a0->field_0;
    v0 = v17->field_104 - v17->field_100;
    v18 = *(int *)a0->field_12c;
    v18->field_20 = v17->field_20;
    v18->field_24 = v17->field_24;
    v18->field_28 = v17->field_28;
    v19 = *(int *)a0->field_12c;
    v20 = a0->field_0;
    v19->field_5c = v20->field_5c;
    v19->field_60 = v20->field_60;
    v19->field_64 = v20->field_64;
    CFuncTrackTrain::NextThink(a0->field_12c, v0 + *(float *)(*(int *)a0->field_12c + 0x100), 0);
    if (0.0 >= v0)
        return 0.0;
    v21 = *(int *)a0->field_12c + 8;
    v22 = a0->field_0;
    v23 = &v22->field_8;
    v14 = *(float *)(*(int *)a0->field_12c + 8) - v22->field_8;
    v15 = *(float *)&v21[1] - *(float *)&v23[1];
    v16 = *(float *)&v21[2] - *(float *)&v23[2];
    v24 = &v22->field_50;
    v11 = *a1 - v22->field_50;
    v12 = a1[1] - *(float *)&v24[1];
    v13 = a1[2] - *(float *)&v24[2];
    UTIL_MakeInvVectors(&v11, gpGlobals);
    v25 = &gpGlobals->field_28;
    v26 = v14;
    v27 = v15;
    v28 = v16;
    v8 = v26 * gpGlobals->field_28 + v27 * *(float *)&v25[1] + v28 * *(float *)&v25[2];
    v29 = &gpGlobals->field_40;
    v9 = v26 * gpGlobals->field_40 + v27 * *(float *)&v29[1] + v28 * *(float *)&v29[2];
    v30 = &gpGlobals->field_34;
    v10 = v26 * gpGlobals->field_34 + v27 * *(float *)&v30[1] + v28 * *(float *)&v30[2];
    v2 = v8 - v14;
    v3 = v9 - v15;
    v4 = v10 - v16;
    v8 = v2;
    v9 = v3;
    v10 = v4;
    v31 = *(int *)a0->field_12c;
    v1 = (float)(1.0 / v0);
    v32 = v1;
    v5 = v32 * v8;
    v6 = v32 * v9;
    v7 = v32 * v10;
    v33 = &a0->field_0->field_20;
    v2 = v5 + a0->field_0->field_20;
    v3 = v6 + *(float *)&v33[1];
    v4 = *(float *)&v33[2] + v7;
    v31->field_20 = v2;
    v31->field_24 = v3;
    *(double *)&v31->field_28 = v4;
    return v4;
}

