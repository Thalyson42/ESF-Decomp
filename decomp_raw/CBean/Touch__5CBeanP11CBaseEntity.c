// Touch__5CBeanP11CBaseEntity @0x1176e0 size=173
typedef struct st_5176e0_1 {
    char padding_0[160];
    struct st_5176e0_2 *field_a0;
} st_5176e0_1;

typedef struct st_5176e0_6 {
    unsigned int field_0;
    unsigned int field_4;
    struct st_5176e0_5 *field_8;
    char padding_c[364];
    unsigned int field_178;
} st_5176e0_6;

typedef struct st_5176e0_4 {
    char padding_0[32];
    float field_20;
    float field_24;
    struct st_5176e0_4 *field_28;
    char padding_2c[364];
    unsigned int field_198;
} st_5176e0_4;

typedef struct st_5176e0_5 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    struct st_5176e0_5 *field_28;
    char padding_2c[364];
    unsigned int field_198;
} st_5176e0_5;

typedef struct st_5176e0_2 {
    unsigned int field_0;
} st_5176e0_2;

typedef struct st_5176e0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_5176e0_0;

typedef struct st_5176e0_3 {
    struct st_5176e0_0 *field_0;
    char padding_4[92];
    struct st_5176e0_1 *field_60;
} st_5176e0_3;

st_5176e0_5 * Touch__5CBeanP11CBaseEntity(st_5176e0_4 **a0, st_5176e0_3 *a1)
{
    st_5176e0_4 *v3;  // edx
    st_5176e0_6 *v4;  // eax
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    st_5176e0_5 *v2;  // [bp-0x1c]

    if (a1->field_0->field_208 == *a0->field_198)
        return *a0;
    if (a1->field_60->field_a0(a1) && sub_4887d0(a1, 1))
        sub_48cc00(a0);
    *a0->field_198 = 0;
    v3 = *a0;
    v4 = &v3->field_20;
    v0 = (float)(0.5 * v3->field_20);
    v1 = (float)(0.5 * *(float *)&v4->field_4);
    v2 = (st_5176e0_5 *)(float)(0.5 * *(float *)&v4->field_8);
    v3->field_20 = v0;
    v3->field_24 = v1;
    v3->field_28 = v2;
    return v2;
}

