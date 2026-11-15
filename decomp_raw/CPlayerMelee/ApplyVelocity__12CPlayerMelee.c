// ApplyVelocity__12CPlayerMelee @0x101840 size=82
typedef struct st_501840_3 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[216];
    struct st_501840_2 *field_e4;
} st_501840_3;

typedef struct st_501840_1 {
    char padding_0[8];
    float field_8;
    char padding_c[52];
    float field_40;
    float field_44;
    float field_48;
    char padding_4c[216];
    struct st_501840_2 *field_124;
} st_501840_1;

typedef struct st_501840_2 {
    struct st_501840_0 *field_0;
} st_501840_2;

typedef struct st_501840_0 {
    char padding_0[648];
    unsigned int field_288;
    unsigned int field_28c;
    unsigned int field_290;
} st_501840_0;

float ApplyVelocity__12CPlayerMelee(st_501840_1 *a0)
{
    unsigned int *v3;  // ecx
    float v4;  // 128
    st_501840_3 *v5;  // edx
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    v3 = *(int *)a0->field_124;
    v4 = a0->field_8;
    v5 = &a0->field_40;
    v0 = v4 * a0->field_40;
    v1 = v4 * *(float *)&v5->field_4;
    v2 = v4 * *(float *)&v5->field_8;
    *(float *)&v3[162] = v0;
    *(float *)&v3[163] = v1;
    *(float *)&v3[164] = v2;
    return v2;
}

