// UTIL_DotPoints__FRC6VectorN20 @0x135080 size=242
float UTIL_DotPoints__FRC6VectorN20(float *a0, float *a1, float *a2)
{
    double v14;  // mm7
    double v15;  // mm6
    double v16;  // mm7
    double v17;  // mm7
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

    v10 = *a1 - *a0;
    v11 = a1[1] - a0[1];
    v12 = a1[2] - a0[2];
    v8 = v10;
    v9 = v11;
    v6 = v8;
    v7 = v9;
    v14 = v6 * v6 + v7 * v7;
    v15 = sqrt(v14);
    if (isnan(v15))
        sqrt(*(unsigned int *)&v14);
    else
        v14 = v15;
    v13 = (float)v14;
    if (v13 == 0.0f)
    {
        v16 = 0.0;
        v4 = 0.0f;
    }
    else
    {
        v17 = 1.0 / v13;
        v16 = v17 * v7;
        v4 = (float)(v17 * v6);
    }
    v5 = (float)v16;
    v6 = v4;
    v7 = v5;
    v2 = *a2;
    v3 = a2[1];
    v0 = v2;
    v1 = v3;
    return v6 * v0 + v7 * v1;
}

