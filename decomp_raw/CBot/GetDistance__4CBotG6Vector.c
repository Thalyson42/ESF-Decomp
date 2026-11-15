// GetDistance__4CBotG6Vector @0x143ab0 size=125
typedef struct st_543ab0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_543ab0_0;

float GetDistance__4CBotG6Vector(st_543ab0_0 **a0, float *a1)
{
    unsigned int *v4;  // ecx
    float v5;  // 112
    float v6;  // 112
    float v7;  // 112
    double v8;  // mm7
    double v9;  // mm6
    float v0;  // [bp-0x38]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]
    float v3;  // [bp-0x1c]

    v4 = &*a0->field_8;
    v5 = *a1 - *a0->field_8;
    v1 = v5;
    v6 = a1[1] - *(float *)&v4[1];
    v2 = v6;
    v7 = a1[2] - *(float *)&v4[2];
    v3 = v7;
    v8 = v5 * v5 + v6 * v6 + v7 * v7;
    v9 = sqrt(v8);
    if (isnan(v9))
        sub_487dc0(*(unsigned int *)&v8);
    else
        v8 = v9;
    v0 = (float)v8;
    return v0;
}

