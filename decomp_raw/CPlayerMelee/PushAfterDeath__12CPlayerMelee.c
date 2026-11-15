// PushAfterDeath__12CPlayerMelee @0x1041a0 size=238
typedef struct st_5041a0_0 {
    char padding_0[140];
    struct st_5041a0_1 *field_8c;
} st_5041a0_0;

typedef struct st_5041a0_4 {
    char padding_0[272];
    float field_110;
    float field_114;
    float field_118;
    char padding_11c[12];
    struct st_5041a0_2 *field_128;
    char padding_12c[20];
    unsigned int field_140;
} st_5041a0_4;

typedef struct st_5041a0_1 {
    unsigned int field_0;
} st_5041a0_1;

typedef struct st_5041a0_3 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
} st_5041a0_3;

typedef struct st_5041a0_2 {
    struct st_5041a0_3 *field_0;
    char padding_4[92];
    struct st_5041a0_0 *field_60;
} st_5041a0_2;

float PushAfterDeath__12CPlayerMelee(st_5041a0_4 *a0)
{
    float v6;  // eax
    unsigned int *v7;  // edx
    double v8;  // mm5
    float v9;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v6 = __int_as_float(a0->field_128->field_60->field_8c(a0->field_128));
    if (__float_as_int(v6))
        return v6;
    if (a0->field_140)
    {
        v7 = a0->field_128->field_0;
        v8 = -a0->field_110;
        v0 = (float)v8;
        v1 = -a0->field_114;
        v2 = -a0->field_118;
        v3 = (float)(v8 * 400.0);
        v4 = (float)(400.0 * v1);
        v5 = (float)(400.0 * v2);
        *(float *)&v7[8] = v3;
        *(float *)&v7[9] = v4;
        v9 = v5;
    }
    else
    {
        v7 = a0->field_128->field_0;
        v0 = (float)(400.0 * a0->field_110);
        v1 = (float)(400.0 * a0->field_114);
        v2 = (float)(400.0 * a0->field_118);
        *(float *)&v7[8] = v0;
        *(float *)&v7[9] = v1;
        v9 = v2;
    }
    *(float *)&v7[10] = v9;
    return v9;
}

