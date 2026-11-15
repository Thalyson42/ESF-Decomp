// Touch__19CTriggerMonsterJumpP11CBaseEntity @0x12bfb0 size=154
typedef struct st_52bfb0_3 {
    struct st_52bfb0_2 *field_0;
    char padding_4[204];
    float field_d0;
} st_52bfb0_3;

typedef struct st_52bfb0_1 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[376];
    char field_1a4;
    char field_1a5;
} st_52bfb0_1;

typedef struct st_52bfb0_0 {
    char padding_0[16];
    float field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    float field_28;
    char padding_2c[376];
    char field_1a4;
    char field_1a5;
} st_52bfb0_0;

typedef struct st_52bfb0_5 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[180];
    struct st_52bfb0_1 *field_c0;
    char padding_c4[240];
    unsigned int field_1b4;
} st_52bfb0_5;

typedef struct st_52bfb0_2 {
    char padding_0[68];
    float field_44;
    float field_48;
    float field_4c;
    char padding_50[180];
    struct st_52bfb0_1 *field_104;
    char padding_108[240];
    float field_1f8;
} st_52bfb0_2;

typedef struct st_52bfb0_4 {
    struct st_52bfb0_1 *field_0;
} st_52bfb0_4;

extern st_52bfb0_4 *gpGlobals;

st_52bfb0_0 ** Touch__19CTriggerMonsterJumpP11CBaseEntity(st_52bfb0_3 *a0, st_52bfb0_0 **a1)
{
    st_52bfb0_0 *v3;  // ecx
    st_52bfb0_2 *v4;  // eax
    float v5;  // 128
    st_52bfb0_5 *v6;  // edx
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    v3 = *a1;
    if (!(v3->field_1a4 & 32))
        return a1;
    v3->field_10 = (float)(1.0 + v3->field_10);
    if (v3->field_1a5 & 2)
        v3->field_1a5 = v3->field_1a5 & 253;
    v4 = a0->field_0;
    v5 = v4->field_1f8;
    v6 = &v4->field_44;
    v0 = v5 * v4->field_44;
    v1 = v5 * *(float *)&v6->field_4;
    v2 = v5 * *(float *)&v6->field_8;
    *(float *)&v3->field_20 = v0;
    *(float *)&v3->field_24 = v1;
    v3->field_28 = v2;
    v3->field_28 = v3->field_28 + a0->field_d0;
    *(float *)&a0->field_0->field_104 = *(float *)gpGlobals;
    return gpGlobals;
}

