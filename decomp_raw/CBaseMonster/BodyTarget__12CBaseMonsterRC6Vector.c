// BodyTarget__12CBaseMonsterRC6Vector @0xdaa10 size=187
typedef struct st_4daa10_0 {
    char padding_0[204];
    struct st_4daa10_1 *field_cc;
    struct st_4daa10_1 *field_d0;
} st_4daa10_0;

typedef struct st_4daa10_1 {
    unsigned int field_0;
} st_4daa10_1;

typedef struct st_4daa10_2 {
    char padding_0[96];
    struct st_4daa10_0 *field_60;
} st_4daa10_2;

typedef struct st_4daa10_3 {
    float field_0;
    float field_4;
    unsigned int field_8;
} st_4daa10_3;

st_4daa10_3 * BodyTarget__12CBaseMonsterRC6Vector(void)
{
    float v0;  // [bp-0x84]
    char v1;  // [bp-0x84]
    float v2;  // [bp-0x80]
    float v3;  // [bp-0x7c]
    float v4;  // [bp-0x5c]
    char v5;  // [bp-0x44]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    float v9;  // [bp-0x24]
    float v10;  // [bp-0x20]
    float v11;  // [bp-0x1c]
    st_4daa10_3 *idx;  // [bp+0x4]
    st_4daa10_2 *v13;  // [bp+0x8]

    v13->field_60->field_cc(&v5, v13);
    v9 = (float)(0.75 * v6);
    v10 = (float)(0.75 * v7);
    v11 = (float)(0.75 * v8);
    v13->field_60->field_d0(&v1, v13);
    v4 = (float)(0.25 * v3);
    idx->field_0 = (float)(0.25 * v0 + v9);
    idx->field_4 = (float)(0.25 * v2 + v10);
    *(float *)&idx->field_8 = v11 + v4;
    return idx;
}

