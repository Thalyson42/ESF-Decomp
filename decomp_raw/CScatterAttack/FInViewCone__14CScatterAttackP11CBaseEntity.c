// FInViewCone__14CScatterAttackP11CBaseEntity @0x110190 size=310
typedef struct st_510190_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_510190_1;

typedef struct st_510190_0 {
    struct st_510190_1 *field_0;
    char padding_4[356];
    float field_168;
} st_510190_0;

typedef struct st_510190_2 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_510190_2;

extern st_510190_2 *gpGlobals;

int FInViewCone__14CScatterAttackP11CBaseEntity(st_510190_0 *a0, st_510190_1 **a1)
{
    unsigned int *v7;  // esi
    unsigned int *v8;  // edx
    double v9;  // mm7
    double v10;  // mm6
    double v11;  // mm7
    unsigned int *v12;  // edx
    float v0;  // [bp-0x58]
    float v1;  // [bp-0x44]
    float v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]

    sub_48a800(a0->field_0 + 4);
    v7 = &*a1->field_8;
    v8 = &a0->field_0->field_8;
    v1 = *a1->field_8 - a0->field_0->field_8;
    v2 = *(float *)&v7[1] - *(float *)&v8[1];
    v3 = *(float *)&v7[2] - *(float *)&v8[2];
    v4 = v1;
    v5 = v2;
    v6 = v3;
    v9 = v4 * v4 + v5 * v5 + v6 * v6;
    v10 = sqrt(v9);
    if (isnan(v10))
        sub_487dc0(*(unsigned int *)&v9);
    else
        v9 = v10;
    v0 = (float)v9;
    if (v0 == 0.0f)
    {
        v1 = 0.0f;
        v2 = 0.0f;
        v3 = 1.0;
    }
    else
    {
        v11 = 1.0 / v0;
        v1 = (float)(v11 * v4);
        v2 = (float)(v11 * v5);
        v3 = (float)(v11 * v6);
    }
    v4 = v1;
    v5 = v2;
    v6 = v3;
    v12 = &gpGlobals->field_28;
    return v4 * gpGlobals->field_28 + v5 * *(float *)&v12[1] + v6 * *(float *)&v12[2] > a0->field_168;
}

