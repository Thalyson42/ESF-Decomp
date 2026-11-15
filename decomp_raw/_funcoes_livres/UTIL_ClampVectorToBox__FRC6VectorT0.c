// UTIL_ClampVectorToBox__FRC6VectorT0 @0x134220 size=344
typedef struct st_534220_0 {
    char padding_0[8];
    unsigned int field_8;
} st_534220_0;

st_534220_0 * UTIL_ClampVectorToBox__FRC6VectorT0(void)
{
    float *v7;  // eax
    unsigned int *v8;  // edx
    double v9;  // mm7
    double v10;  // mm6
    double v11;  // mm7
    float v0;  // [bp-0x38]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]
    float v3;  // [bp-0x1c]
    st_534220_0 *idx;  // [bp+0x4]
    float *v5;  // [bp+0x8]
    unsigned int *v6;  // [bp+0xc]

    v7 = v5;
    v8 = v6;
    v1 = *v7;
    v2 = v7[1];
    v3 = v7[2];
    *(unsigned int *)&v1 = (v1 > *(float *)v8 ? __float_as_int(v1 - *(float *)v8) : -*(float *)v8 > v1 ? __float_as_int(v1 + *(float *)v8) : 0);
    *(unsigned int *)&v2 = (v2 > *(float *)&v8[1] ? __float_as_int(v2 - *(float *)&v8[1]) : -*(float *)&v8[1] > v2 ? __float_as_int(v2 + *(float *)&v8[1]) : 0);
    *(unsigned int *)&v3 = (v3 > *(float *)&v8[2] ? __float_as_int(v3 - *(float *)&v8[2]) : -*(float *)&v8[2] > v3 ? __float_as_int(v3 + *(float *)&v8[2]) : 0);
    v9 = v1 * v1 + v2 * v2 + v3 * v3;
    v10 = sqrt(v9);
    if (isnan(v10))
        sqrt(*(unsigned int *)&v9);
    else
        v9 = v10;
    v0 = (float)v9;
    if (v0 != 0.0f)
    {
        v11 = 1.0 / v0;
        *(float *)&idx->padding_0[0] = (float)(v11 * v1);
        *(float *)&idx->padding_0[4] = (float)(v11 * v2);
        *(float *)&idx->field_8 = (float)(v11 * v3);
        return idx;
    }
    *(float *)&idx->padding_0[0] = 0.0f;
    *(float *)&idx->padding_0[4] = 0.0f;
    idx->field_8 = 0x3f800000;
    return idx;
}

