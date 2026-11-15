// GetGunPosition__11CBasePlayer @0xf2eb0 size=121
typedef struct st_4f2eb0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[352];
    float field_174;
    float field_178;
    float field_17c;
} st_4f2eb0_0;

typedef struct st_4f2eb0_1 {
    unsigned int field_0;
    unsigned int field_4;
    float field_8;
} st_4f2eb0_1;

st_4f2eb0_1 * GetGunPosition__11CBasePlayer(void)
{
    float *v8;  // eax
    unsigned int *v9;  // edx
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]
    st_4f2eb0_1 *idx;  // [bp+0x4]
    st_4f2eb0_0 **v7;  // [bp+0x8]

    v8 = *v7;
    v9 = v8 + 2;
    v0 = v8[2] + v8[93];
    v1 = *(float *)&v9[1] + v8[94];
    v2 = *(float *)&v9[2] + v8[95];
    v3 = v0;
    v4 = v1;
    v5 = v2;
    *(float *)&idx->field_0 = v3;
    *(float *)&idx->field_4 = v4;
    idx->field_8 = (float)(v5 - 3.0);
    return idx;
}

