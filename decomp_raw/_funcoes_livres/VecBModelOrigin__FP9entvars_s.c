// VecBModelOrigin__FP9entvars_s @0x90f00 size=114
typedef struct st_490f00_0 {
    float field_0;
    float field_4;
    unsigned int field_8;
} st_490f00_0;

st_490f00_0 * VecBModelOrigin__FP9entvars_s(void)
{
    float *v3;  // eax
    unsigned int *v4;  // edx
    double v5;  // mm5
    unsigned int *v6;  // edx
    float v7;  // 112
    float v8;  // 112
    float v0;  // [bp-0x1c]
    st_490f00_0 *idx;  // [bp+0x4]
    float *v2;  // [bp+0x8]

    v3 = v2;
    v4 = v3 + 61;
    v5 = 0.5 * *(float *)&v4[1];
    v0 = (float)(0.5 * *(float *)&v4[2]);
    v6 = v3 + 49;
    v7 = *(float *)&v6[1];
    v8 = *(float *)&v6[2] + v0;
    idx->field_0 = (float)(0.5 * v3[61] + v3[49]);
    idx->field_4 = (float)(v5 + v7);
    *(float *)&idx->field_8 = v8;
    return idx;
}

