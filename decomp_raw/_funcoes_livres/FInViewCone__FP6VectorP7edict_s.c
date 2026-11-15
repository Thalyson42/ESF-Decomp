// FInViewCone__FP6VectorP7edict_s @0x17ed10 size=300
typedef struct st_57ed10_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
} st_57ed10_0;

extern st_57ed10_0 *gpGlobals;

char FInViewCone__FP6VectorP7edict_s(float *a0, float *a1)
{
    unsigned int *v14;  // eax
    double v15;  // mm7
    double v16;  // mm6
    double v17;  // mm7
    double v18;  // mm7
    float v0;  // [bp-0x5c]
    float v1;  // [bp-0x58]
    float v2;  // [bp-0x54]
    float v3;  // [bp-0x50]
    float v4;  // [bp-0x4c]
    float v5;  // [bp-0x48]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    float v9;  // [bp-0x38]
    float v10;  // [bp-0x24]
    float v11;  // [bp-0x20]
    float v12;  // [bp-0x1c]
    float v13;  // [bp-0x18]

    UTIL_MakeVectors(a1 + 52);
    v14 = a1 + 0x22;
    v10 = *a0 - a1[0x22];
    v11 = a0[1] - *(float *)&v14[1];
    v12 = a0[2] - *(float *)&v14[2];
    v8 = v10;
    v9 = v11;
    v6 = v8;
    v7 = v9;
    v15 = v6 * v6 + v7 * v7;
    v16 = sqrt(v15);
    if (isnan(v16))
        sqrt(*(unsigned int *)&v15);
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
    return v6 * v0 + v7 * v1 > 0.5f;
}

