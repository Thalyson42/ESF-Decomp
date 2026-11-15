// PM_VecToAngles @0x18e1c0 size=389
typedef struct st_58e1c0_0 {
    float field_0;
    unsigned int field_4;
    unsigned int field_8;
} st_58e1c0_0;

float PM_VecToAngles(float *a0, st_58e1c0_0 *a1)
{
    double v6;  // mm7
    double v7;  // mm7
    double v8;  // mm7
    double v9;  // mm6
    float v0;  // [bp-0x40]
    int v1;  // [bp-0x3c]
    unsigned short v2;  // [bp-0x38]
    unsigned short v3;  // [bp-0x36]
    double v4;  // [bp-0x34]
    float v5;  // [bp-0x8]

    if (a0[1] == 0.0f && *a0 == 0.0f)
    {
        v0 = 0.0f;
        v6 = (0.0 < a0[2] ? 90.0 : 270.0);
    }
    else
    {
        if (*a0 != 0.0f)
        {
            v4 = atan2f(a0[1], *a0);
            v3 = __fnstcw();
            v2 = v3 | 0xc00;
            v1 = (int)(v4 * 180.0 / 3.141592653589793);
            v7 = (double)v1;
        }
        else
        {
            v7 = (0.0 < a0[1] ? 90.0 : -90.0);
        }
        v0 = (float)v7;
        if (0.0 > v0)
            v0 = (float)(v0 + 360.0);
        v8 = *a0 * *a0 + a0[1] * a0[1];
        v9 = sqrt(v8);
        if (isnan(v9))
            sub_487dc0(*(unsigned int *)&v8);
        else
            v8 = v9;
        v5 = (float)v8;
        v4 = atan2f(a0[2], v5);
        v3 = __fnstcw();
        v2 = v3 | 0xc00;
        v1 = (int)(v4 * 180.0 / 3.141592653589793);
        v6 = (double)v1;
        if (0.0 > v6)
            v6 += 360.0;
    }
    a1->field_0 = (float)-v6;
    *(float *)&a1->field_4 = v0;
    a1->field_8 = 0;
    return v0;
}

