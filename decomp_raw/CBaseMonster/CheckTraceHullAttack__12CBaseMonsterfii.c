// CheckTraceHullAttack__12CBaseMonsterfii @0xa6650 size=367
typedef struct st_4a6650_7 {
    char padding_0[124];
    struct st_4a6650_6 *field_7c;
} st_4a6650_7;

typedef struct st_4a6650_1 {
    char padding_0[160];
    struct st_4a6650_2 *field_a0;
} st_4a6650_1;

typedef struct st_4a6650_2 {
    unsigned int field_0;
} st_4a6650_2;

typedef struct st_4a6650_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[60];
    char field_50;
    char padding_51[171];
    float field_fc;
    char padding_100[264];
    int field_208;
} st_4a6650_0;

typedef struct st_4a6650_5 {
    char padding_0[52];
    struct st_4a6650_2 *field_34;
} st_4a6650_5;

typedef struct st_4a6650_6 {
    char padding_0[96];
    struct st_4a6650_5 *field_60;
} st_4a6650_6;

typedef struct st_4a6650_3 {
    struct st_4a6650_0 *field_0;
    char padding_4[92];
    struct st_4a6650_1 *field_60;
} st_4a6650_3;

typedef struct st_4a6650_4 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4a6650_4;

extern st_4a6650_2 *g_6168d4;
extern st_4a6650_4 *gpGlobals;

st_4a6650_6 * CheckTraceHullAttack__12CBaseMonsterfii(st_4a6650_3 *a0, float a1, int a2, unsigned int a3)
{
    st_4a6650_0 *v11;  // ecx
    unsigned int *v12;  // eax
    unsigned int *v13;  // edx
    st_4a6650_7 *v14;  // eax
    st_4a6650_6 *v15;  // eax
    float v0;  // [bp-0xb4]
    float v1;  // [bp-0xb0]
    float v2;  // [bp-0xac]
    float v3;  // [bp-0x94]
    float v4;  // [bp-0x90]
    float v5;  // [bp-0x8c]
    float v6;  // [bp-0x64]
    float v7;  // [bp-0x60]
    float v8;  // [bp-0x5c]
    char v9;  // [bp-0x44]
    st_4a6650_7 *v10;  // [bp-0x14]

    if (a0->field_60->field_a0(a0))
        sub_48a800(&a0->field_0->field_50);
    else
        sub_488e40(&a0->field_0->field_50);
    v11 = a0->field_0;
    v12 = &v11->field_8;
    v6 = v11->field_8;
    v7 = *(float *)&v12[1];
    v8 = *(float *)&v12[2];
    v8 = (float)(*(float *)&v12[2] + 0.5 * v11->field_fc);
    v13 = &gpGlobals->field_28;
    v0 = a1 * gpGlobals->field_28;
    v1 = a1 * *(float *)&v13[1];
    v2 = a1 * *(float *)&v13[2];
    v3 = v6 + v0;
    v4 = v7 + v1;
    v5 = v8 + v2;
    sub_488460(&v6, &v3, 0, 3, v11->field_208, &v9);
    if (!v10)
        return NULL;
    v14 = v10;
    if (v14 || (v14 = g_6168d4(0), v14))
        v15 = v14->field_7c;
    else
        v15 = NULL;
    if (a2 <= NULL)
        return v15;
    v15->field_60->field_34(v15, a0->field_0, a0->field_0, (float)a2, a3);
    return v15;
}

