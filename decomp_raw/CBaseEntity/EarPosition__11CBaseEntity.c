// EarPosition__11CBaseEntity @0x9e480 size=59
typedef struct st_49e480_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[352];
    float field_174;
    float field_178;
    float field_17c;
} st_49e480_0;

typedef struct st_49e480_1 {
    unsigned int field_0;
    float field_4;
    float field_8;
} st_49e480_1;

st_49e480_1 * EarPosition__11CBaseEntity(void)
{
    float *v2;  // eax
    unsigned int *v3;  // edx
    float v4;  // 120
    float v5;  // 112
    st_49e480_1 *idx;  // [bp+0x4]
    st_49e480_0 **v1;  // [bp+0x8]

    v2 = *v1;
    v3 = v2 + 2;
    v4 = *(float *)&v3[1] + v2[94];
    v5 = *(float *)&v3[2] + v2[95];
    *(float *)&idx->field_0 = v2[2] + v2[93];
    idx->field_4 = v4;
    idx->field_8 = v5;
    return idx;
}

