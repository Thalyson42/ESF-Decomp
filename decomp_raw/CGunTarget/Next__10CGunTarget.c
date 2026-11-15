// Next__10CGunTarget @0xee080 size=293
typedef struct st_4ee080_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4ee080_0;

extern char Wait__10CGunTarget;

int Next__10CGunTarget(float idx)
{
    unsigned int v11;  // esi
    st_4ee080_0 **v12;  // esi
    unsigned int index;  // ecx
    unsigned int idx1;  // edx
    unsigned int idx2;  // eax
    double v17;  // mm5
    double v18;  // mm5
    unsigned int *v19;  // edx
    float v0;  // [bp-0x64]
    float v1;  // [bp-0x60]
    float v2;  // [bp-0x5c]
    float v3;  // [bp-0x44]
    float v4;  // [bp-0x40]
    float v5;  // [bp-0x3c]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]

    *(unsigned int *)(*(unsigned int *)&idx + 12) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 16) = 0;
    v11 = *(unsigned int *)&idx + 272;
    sub_48d960(v11, (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 172))(idx));
    v12 = sub_488810(v11);
    if (v12)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 220) = _INSERT(v12, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 224) = &Wait__10CGunTarget;
        index = *(int *)idx;
        idx1 = index + 220;
        idx2 = index + 232;
        v0 = *(float *)(index + 220) + *(float *)(index + 232);
        v1 = *(float *)(idx1 + 4) + *(float *)(idx2 + 4);
        v2 = *(float *)(idx1 + 8) + *(float *)(idx2 + 8);
        v17 = 0.5 * v0;
        v3 = (float)v17;
        v18 = 0.5 * v1;
        v4 = (float)v18;
        v5 = (float)(0.5 * v2);
        v19 = &*v12->field_8;
        v6 = (float)(*v12->field_8 - v17);
        v7 = (float)(*(float *)&v19[1] - v18);
        v8 = *(float *)&v19[2] - v5;
        return sub_488220(idx, &v6, *(float *)(index + 504));
    }
    return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 308))(idx);
}

