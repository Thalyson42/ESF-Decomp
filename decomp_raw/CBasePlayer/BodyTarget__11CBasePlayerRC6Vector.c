// BodyTarget__11CBasePlayerRC6Vector @0xfecf0 size=168
typedef struct st_4fecf0_0 {
    char padding_0[204];
    struct st_4fecf0_1 *field_cc;
} st_4fecf0_0;

typedef struct st_4fecf0_3 {
    char padding_0[372];
    float field_174;
    float field_178;
    float field_17c;
} st_4fecf0_3;

typedef struct st_4fecf0_1 {
    unsigned int field_0;
} st_4fecf0_1;

typedef struct st_4fecf0_2 {
    struct st_4fecf0_3 *field_0;
    char padding_4[92];
    struct st_4fecf0_0 *field_60;
} st_4fecf0_2;

typedef struct st_4fecf0_4 {
    float field_0;
    float field_4;
    unsigned int field_8;
} st_4fecf0_4;

extern st_4fecf0_1 *g_engfuncs.pfnRandomFloat;

st_4fecf0_4 * BodyTarget__11CBasePlayerRC6Vector(void)
{
    float *v7;  // eax
    double v8;  // mm5
    float v0;  // [bp-0x3c]
    char v1;  // [bp-0x24]
    float v2;  // [bp-0x24]
    float v3;  // [bp-0x20]
    float v4;  // [bp-0x1c]
    st_4fecf0_4 *idx;  // [bp+0x4]
    st_4fecf0_2 *v6;  // [bp+0x8]

    v6->field_60->field_cc(&v1, v6);
    g_engfuncs.pfnRandomFloat(0.5f, 1.100000023841858f);
    v7 = v6->field_0;
    v8 = 0.5 * v7[94];
    v0 = (float)(0.5 * v7[95]);
    idx->field_0 = (float)(0.5 * v7[93] + v2);
    idx->field_4 = (float)(v8 + v3);
    *(float *)&idx->field_8 = v4 + v0;
    return idx;
}

