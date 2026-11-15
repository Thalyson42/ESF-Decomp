// VectorAngles @0x18e0a0 size=278
typedef struct st_58e0a0_0 {
    float field_0;
    unsigned int field_4;
    unsigned int field_8;
} st_58e0a0_0;

float VectorAngles(float *a0, st_58e0a0_0 *a1)
{
    double v3;  // mm7
    double v4;  // mm7
    double v5;  // mm6
    float v0;  // [bp-0x38]
    double v1;  // [bp-0x34]
    float v2;  // [bp-0x8]

    if (a0[1] == 0.0f && *a0 == 0.0f)
    {
        v0 = 0.0f;
        v3 = (0.0 < a0[2] ? 90.0 : 270.0);
    }
    else
    {
        v1 = atan2f(a0[1], *a0);
        v0 = (float)(v1 * 180.0 / 3.141592653589793);
        if (0.0 > v0)
            v0 = (float)(v0 + 360.0);
        v4 = *a0 * *a0 + a0[1] * a0[1];
        v5 = sqrt(v4);
        if (isnan(v5))
            sub_487dc0(*(unsigned int *)&v4);
        else
            v4 = v5;
        v2 = (float)v4;
        v1 = atan2f(a0[2], v2);
        v2 = (float)(v1 * 180.0 / 3.141592653589793);
        v3 = v2;
        if (0.0 > v3)
            v3 += 360.0;
    }
    a1->field_0 = (float)v3;
    *(float *)&a1->field_4 = v0;
    a1->field_8 = 0;
    return v0;
}

