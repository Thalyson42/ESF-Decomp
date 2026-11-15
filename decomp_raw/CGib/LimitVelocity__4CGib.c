// LimitVelocity__4CGib @0xa3430 size=305
typedef struct st_4a3430_0 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
} st_4a3430_0;

double LimitVelocity__4CGib(st_4a3430_0 **a0)
{
    unsigned int *v7;  // edx
    double v8;  // mm7
    double v9;  // mm6
    float *v10;  // edi
    unsigned int *v11;  // esi
    double v12;  // mm7
    double v13;  // mm6
    double v14;  // mm7
    float v0;  // [bp-0x48]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]
    float v3;  // [bp-0x1c]
    double v4;  // [bp-0x18], Other Possible Types: float
    float v5;  // [bp-0x14]
    float v6;  // [bp-0x10]

    v7 = &*a0->field_20;
    v8 = *a0->field_20 * *a0->field_20 + *(float *)&v7[1] * *(float *)&v7[1] + *(float *)&v7[2] * *(float *)&v7[2];
    v9 = sqrt(v8);
    if (isnan(v9))
        sub_487dc0(*(unsigned int *)&v8);
    else
        v8 = v9;
    v4 = (float)v8;
    if (v4 <= 1500.0f)
        return v4;
    v10 = *a0;
    v11 = v10 + 8;
    v12 = v10[8] * v10[8] + *(float *)&v11[1] * *(float *)&v11[1] + *(float *)&v11[2] * *(float *)&v11[2];
    v13 = sqrt(v12);
    if (isnan(v13))
        sub_487dc0(*(unsigned int *)&v12);
    else
        v12 = v13;
    v0 = (float)v12;
    if (v0 == 0.0f)
    {
        v4 = 0.0f;
        v5 = 0.0f;
        v6 = 1.0;
    }
    else
    {
        v14 = 1.0 / v0;
        v4 = (float)(v14 * *(float *)v11);
        v5 = (float)(v14 * *(float *)&v11[1]);
        v6 = (float)(v14 * *(float *)&v11[2]);
    }
    v1 = (float)(1500.0 * v4);
    v2 = (float)(1500.0 * v5);
    v3 = (float)(1500.0 * v6);
    v10[8] = v1;
    v10[9] = v2;
    v10[10] = v3;
    return 1500.0 * v6;
}

