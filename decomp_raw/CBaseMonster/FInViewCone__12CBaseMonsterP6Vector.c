// FInViewCone__12CBaseMonsterP6Vector @0xa6900 size=303
typedef struct st_4a6900_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4a6900_1;

typedef struct st_4a6900_0 {
    struct st_4a6900_1 *field_0;
    char padding_4[356];
    float field_168;
} st_4a6900_0;

typedef struct st_4a6900_2 {
    char padding_0[40];
    float field_28;
    float field_2c;
} st_4a6900_2;

extern st_4a6900_2 *gpGlobals;

int FInViewCone__12CBaseMonsterP6Vector(st_4a6900_0 *a0, float *a1)
{
    unsigned int *v14;  // edx
    double v15;  // mm7
    double v16;  // mm6
    double v17;  // mm7
    double v18;  // mm7
    float v0;  // [bp-0x4c]
    float v1;  // [bp-0x48]
    float v2;  // [bp-0x44]
    float v3;  // [bp-0x40]
    float v4;  // [bp-0x3c]
    float v5;  // [bp-0x38]
    float v6;  // [bp-0x34]
    float v7;  // [bp-0x30]
    float v8;  // [bp-0x2c]
    float v9;  // [bp-0x28]
    float v10;  // [bp-0x24]
    float v11;  // [bp-0x20]
    float v12;  // [bp-0x1c]
    float v13;  // [bp-0x18]

    sub_48a800(a0->field_0 + 4);
    v14 = &a0->field_0->field_8;
    v10 = *a1 - a0->field_0->field_8;
    v11 = a1[1] - *(float *)&v14[1];
    v12 = a1[2] - *(float *)&v14[2];
    v8 = v10;
    v9 = v11;
    v6 = v8;
    v7 = v9;
    v15 = v6 * v6 + v7 * v7;
    v16 = sqrt(v15);
    if (isnan(v16))
        sub_487dc0(*(unsigned int *)&v15);
    else
        v15 = v16;
    v13 = (float)v15;
    if (v13 == 0.0f)
    {
        v17 = 0.0;
        v4 = 0.0f;
    }
    else
    {
        v18 = 1.0 / v13;
        v17 = v18 * v7;
        v4 = (float)(v18 * v6);
    }
    v5 = (float)v17;
    v6 = v4;
    v7 = v5;
    v2 = gpGlobals->field_28;
    v3 = gpGlobals->field_2c;
    v0 = v2;
    v1 = v3;
    return v6 * v0 + v7 * v1 > a0->field_168;
}

