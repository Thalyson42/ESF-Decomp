// FEntIsVisible__FP9entvars_sT0 @0x1234b0 size=191
typedef struct st_5234b0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[352];
    float field_174;
    float field_178;
    float field_17c;
    char padding_180[136];
    int field_208;
} st_5234b0_0;

unsigned int FEntIsVisible__FP9entvars_sT0(st_5234b0_0 *a0, float *a1)
{
    unsigned int *v10;  // edx
    unsigned int *v11;  // edx
    char v0;  // [bp-0x84]
    unsigned int v1;  // [bp-0x7c]
    unsigned int v2;  // [bp-0x78]
    float v3;  // [bp-0x74]
    float v4;  // [bp-0x44]
    float v5;  // [bp-0x40]
    float v6;  // [bp-0x3c]
    float v7;  // [bp-0x24]
    float v8;  // [bp-0x20]
    float v9;  // [bp-0x1c]

    v10 = &a0->field_8;
    v7 = a0->field_8 + a0->field_174;
    v8 = *(float *)&v10[1] + a0->field_178;
    v9 = *(float *)&v10[2] + a0->field_17c;
    v11 = a1 + 2;
    v4 = a1[2] + a1[93];
    v5 = *(float *)&v11[1] + a1[94];
    v6 = *(float *)&v11[2] + a1[95];
    sub_487b80(&v7, &v4, 1, a0->field_208, &v0);
    if ((!v1 || !v2) && v3 == 1.0f)
        return 1;
    return 0;
}

