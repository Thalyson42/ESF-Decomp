// Activate__10CGunTarget @0xedf60 size=214
typedef struct st_4edf60_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4edf60_0;

st_4edf60_0 ** Activate__10CGunTarget(float a0)
{
    st_4edf60_0 **v10;  // edi
    unsigned int idx;  // ecx
    unsigned int index;  // edx
    unsigned int idx1;  // eax
    double v14;  // mm5
    double v15;  // mm5
    unsigned int *v16;  // edx
    float v0;  // [bp-0x64]
    float v1;  // [bp-0x60]
    float v2;  // [bp-0x5c]
    float v3;  // [bp-0x44]
    float v4;  // [bp-0x40]
    float v5;  // [bp-0x3c]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]

    v10 = (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 172))(a0);
    if (!v10)
        return v10;
    sub_48d960(*(unsigned int *)&a0 + 272, v10);
    idx = *(int *)a0;
    index = idx + 220;
    idx1 = idx + 232;
    v0 = *(float *)(idx + 220) + *(float *)(idx + 232);
    v1 = *(float *)(index + 4) + *(float *)(idx1 + 4);
    v2 = *(float *)(index + 8) + *(float *)(idx1 + 8);
    v14 = 0.5 * v0;
    v3 = (float)v14;
    v15 = 0.5 * v1;
    v4 = (float)v15;
    v5 = (float)(0.5 * v2);
    v16 = &*v10->field_8;
    v6 = (float)(*v10->field_8 - v14);
    v7 = (float)(*(float *)&v16[1] - v15);
    v8 = *(float *)&v16[2] - v5;
    return sub_48db50(idx, &v6);
}

