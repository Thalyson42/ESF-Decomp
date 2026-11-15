// RotMove__12CFuncPlatRotR6Vectorf @0xe9900 size=166
typedef struct st_4e9900_2 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    struct st_4e9900_1 *field_14;
    char padding_18[152];
    unsigned int field_b0;
    unsigned int field_b4;
} st_4e9900_2;

typedef struct st_4e9900_1 {
    char padding_0[80];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    unsigned int field_5c;
    unsigned int field_60;
    struct st_4e9900_1 *field_64;
    char padding_68[152];
    unsigned int field_100;
    unsigned int field_104;
} st_4e9900_1;

typedef struct st_4e9900_0 {
    char padding_0[80];
    float field_50;
    float field_54;
    float field_58;
    unsigned int field_5c;
    unsigned int field_60;
    struct st_4e9900_0 *field_64;
    char padding_68[152];
    float field_100;
    float field_104;
} st_4e9900_0;

st_4e9900_1 * RotMove__12CFuncPlatRotR6Vectorf(st_4e9900_0 **a0, float *a1, float a2)
{
    st_4e9900_0 *v6;  // ecx
    st_4e9900_2 *v7;  // edx
    float v8;  // 104
    float v9;  // 104
    st_4e9900_1 *v10;  // 104
    float v11;  // 104
    st_4e9900_0 *v12;  // edx
    st_4e9900_0 *v13;  // eax
    float v0;  // [bp-0x54]
    float v1;  // [bp-0x50]
    st_4e9900_1 *v2;  // [bp-0x4c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    st_4e9900_1 *v5;  // [bp-0x1c]

    v6 = *a0;
    v7 = &v6->field_50;
    v8 = *a1 - v6->field_50;
    v3 = v8;
    v9 = a1[1] - *(float *)&v7->field_4;
    v4 = v9;
    v10 = (st_4e9900_1 *)(a1[2] - *(float *)&v7->field_8);
    v5 = v10;
    v11 = a2;
    if (a2 < 0.1)
    {
        v12 = *a0;
        *(float *)&v12->field_5c = v3;
        *(float *)&v12->field_60 = v4;
        v12->field_64 = v5;
        v13 = *a0;
        v13->field_104 = (float)(1.0 + v13->field_100);
        return v13;
    }
    v0 = v8 / v11;
    v1 = v9 / v11;
    v2 = v10 / v11;
    *(float *)&v6->field_5c = v0;
    *(float *)&v6->field_60 = v1;
    v6->field_64 = v2;
    return v2;
}

