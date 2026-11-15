// TraceAttack__11CBaseEntityP9entvars_sfG6VectorP11TraceResulti @0xa6bf0 size=269
typedef struct st_4a6bf0_0 {
    char padding_0[364];
    float field_16c;
} st_4a6bf0_0;

typedef struct st_4a6bf0_2 {
    unsigned int field_0;
} st_4a6bf0_2;

typedef struct st_4a6bf0_1 {
    char padding_0[64];
    struct st_4a6bf0_2 *field_40;
    struct st_4a6bf0_2 *field_44;
} st_4a6bf0_1;

typedef struct st_4a6bf0_3 {
    struct st_4a6bf0_0 *field_0;
    char padding_4[92];
    struct st_4a6bf0_1 *field_60;
} st_4a6bf0_3;

unsigned int TraceAttack__11CBaseEntityP9entvars_sfG6VectorP11TraceResulti(st_4a6bf0_3 *a0, int a1, int a2, float *a3, float *a4, int a5)
{
    double v6;  // mm5
    double v7;  // mm5
    unsigned int *v8;  // eax
    int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v6 = 4.0 * *a3;
    v0 = (float)v6;
    v7 = 4.0 * a3[1];
    v1 = (float)v7;
    v2 = (float)(4.0 * a3[2]);
    v8 = a4 + 5;
    v3 = (float)(a4[5] - v6);
    v4 = (float)(*(float *)&v8[1] - v7);
    v5 = *(float *)&v8[2] - v2;
    if (a0->field_0->field_16c == 0.0f)
        return v11;
    sub_48da60(a1, a0, a2, a5);
    v9 = a0->field_60->field_40(a0);
    if (v9 == -0x1 && !((char)a5 & 2))
        return v10;
    v0 = v3;
    v1 = v4;
    v2 = v5;
    sub_489690(&v0, v9, a2);
    v0 = *a3;
    v1 = a3[1];
    v2 = a3[2];
    v11 = a0->field_60->field_44(a0, a2, &v0, a4, a5);
    return v11;
}

