// Center__11CBaseEntity @0x9e3c0 size=121
typedef struct st_49e3c0_0 {
    char padding_0[196];
    float field_c4;
    float field_c8;
    float field_cc;
    float field_d0;
    float field_d4;
    float field_d8;
} st_49e3c0_0;

float * Center__11CBaseEntity(void)
{
    float *v5;  // eax
    unsigned int *v6;  // ecx
    unsigned int *v7;  // edx
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]
    float *idx;  // [bp+0x4]
    st_49e3c0_0 **v4;  // [bp+0x8]

    v5 = *v4;
    v6 = v5 + 52;
    v7 = v5 + 49;
    v0 = v5[52] + v5[49];
    v1 = *(float *)&v6[1] + *(float *)&v7[1];
    v2 = *(float *)&v6[2] + *(float *)&v7[2];
    *idx = (float)(0.5 * v0);
    idx[1] = (float)(0.5 * v1);
    idx[2] = (float)(0.5 * v2);
    return idx;
}

