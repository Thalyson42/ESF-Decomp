// PM_CalcRoll @0x1933f0 size=134
double PM_CalcRoll(int a0, float *a1, float a2, float a3)
{
    float v8;  // 128
    double v9;  // mm5
    double v10;  // mm6
    int v0;  // [bp-0x8c]
    int v1;  // [bp-0x88]
    char v2;  // [bp-0x64]
    char v3;  // [bp-0x44]
    float v4;  // [bp-0x44]
    float v5;  // [bp-0x40]
    float v6;  // [bp-0x3c]
    char v7;  // [bp-0x24]

    sub_4896c0(a0, &v7, &v3, &v2, v0, v1);
    v8 = *a1 * v4 + a1[1] * v5 + a1[2] * v6;
    v9 = fabs(v8);
    v10 = a2;
    if (v9 < a3)
        v10 = v10 * v9 / a3;
    return (0.0 > v8 ? -1.0 : 1.0) * v10;
}

