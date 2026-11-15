// AngularMove__11CBaseToggleG6Vectorf @0x1231d0 size=334
typedef struct st_5231d0_0 {
    struct st_5231d0_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[220];
    unsigned int field_f0;
    unsigned int field_f4;
    unsigned int field_f8;
} st_5231d0_0;

typedef struct st_5231d0_1 {
    char padding_0[80];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[152];
    unsigned int field_100;
    unsigned int field_104;
} st_5231d0_1;

extern char AngularMoveDone__11CBaseToggle;

double AngularMove__11CBaseToggleG6Vectorf(st_5231d0_0 *a0, float *a1, float a2)
{
    unsigned int *v7;  // edx
    unsigned int v8;  // edi
    unsigned int *v17;  // eax
    unsigned int *v19;  // edx
    double v9;  // mm7
    unsigned int *v10;  // edx
    float v11;  // 112
    float v12;  // 112
    float v13;  // 112
    double v14;  // mm7
    double v15;  // mm6
    float v16;  // 128
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x38]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]

    *(float *)&a0->field_f0 = *a1;
    *(float *)&a0->field_f4 = a1[1];
    *(float *)&a0->field_f8 = a1[2];
    v7 = &a0->field_0->field_50;
    v8 = 0;
    v9 = *a1;
    if (*(float *)&a0->field_0->field_50 == v9)
    {
        v9 = a1[1];
        if (*(float *)&v7[1] == v9)
        {
            v9 = a1[2];
            v8 = *(float *)&v7[2] == v9;
        }
    }
    if (v8)
    {
        sub_48b560(a0);
        return v9;
    }
    v10 = &a0->field_0->field_50;
    v11 = *a1 - *(float *)&a0->field_0->field_50;
    v4 = v11;
    v12 = a1[1] - *(float *)&v10[1];
    v5 = v12;
    v13 = a1[2] - *(float *)&v10[2];
    v6 = v13;
    v14 = v11 * v11 + v12 * v12 + v13 * v13;
    v15 = sqrt(v14);
    if (isnan(v15))
        sub_487dc0(*(unsigned int *)&v14);
    else
        v14 = v15;
    v3 = (float)v14;
    v16 = v3 / a2;
    v17 = a0->field_0;
    *(float *)&v17[65] = v16 + *(float *)&v17[64];
    a0->field_c = _INSERT(v17, 0, 0) | 0xffff0000;
    a0->field_10 = &AngularMoveDone__11CBaseToggle;
    v19 = a0->field_0;
    v0 = v4 / v16;
    v1 = v5 / v16;
    v2 = v6 / v16;
    *(float *)&v19[23] = v0;
    *(float *)&v19[24] = v1;
    *(float *)&v19[25] = v2;
    return v6 / v16;
}

