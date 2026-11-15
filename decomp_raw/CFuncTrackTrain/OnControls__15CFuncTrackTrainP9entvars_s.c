// OnControls__15CFuncTrackTrainP9entvars_s @0xebed0 size=316
typedef struct st_4ebed0_1 {
    struct st_4ebed0_0 *field_0;
    char padding_4[120];
    float field_7c;
    float field_80;
    float field_84;
    float field_88;
    float field_8c;
    float field_90;
} st_4ebed0_1;

typedef struct st_4ebed0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[60];
    char field_50;
    char padding_51[335];
    char field_1a0;
} st_4ebed0_0;

typedef struct st_4ebed0_2 {
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
} st_4ebed0_2;

extern st_4ebed0_2 *gpGlobals;

unsigned int OnControls__15CFuncTrackTrainP9entvars_s(st_4ebed0_1 *a0, float *a1)
{
    unsigned int *v6;  // esi
    st_4ebed0_0 *v7;  // eax
    double v16;  // mm5
    unsigned int *v8;  // edx
    unsigned int *v9;  // edx
    float v10;  // 128
    float v11;  // 112
    float v12;  // 120
    unsigned int *v13;  // edx
    double v14;  // mm3
    unsigned int *v15;  // edx
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v6 = a1 + 2;
    v7 = a0->field_0;
    v8 = &v7->field_8;
    v3 = a1[2] - v7->field_8;
    v4 = *(float *)&v6[1] - *(float *)&v8[1];
    v5 = *(float *)&v6[2] - *(float *)&v8[2];
    if (v7->field_1a0 & 2)
        return 0;
    sub_48a800(&a0->field_0->field_50);
    v9 = &gpGlobals->field_28;
    v10 = v3;
    v11 = v4;
    v12 = v5;
    v0 = v10 * gpGlobals->field_28 + v11 * *(float *)&v9[1] + v12 * *(float *)&v9[2];
    v13 = &gpGlobals->field_40;
    v14 = -(v10 * gpGlobals->field_40 + v11 * *(float *)&v13[1] + v12 * *(float *)&v13[2]);
    v1 = (float)v14;
    v15 = &gpGlobals->field_34;
    v2 = v10 * gpGlobals->field_34 + v11 * *(float *)&v15[1] + v12 * *(float *)&v15[2];
    if (v0 >= a0->field_7c && !(v16 = v14, v16 < a0->field_80 || v2 < a0->field_84))
    {
        if (v0 > a0->field_88)
            goto LABEL_4ebff8;
        if (v16 > a0->field_8c)
            goto LABEL_4ebff8;
        if (v2 <= a0->field_90)
            return 1;
    }
    else
    {
LABEL_4ebff8:
    }
    return 0;
}

