// EnemyIsInMeleeRange__4CBotP11CBasePlayer @0x154a40 size=294
typedef struct st_554a40_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_554a40_0;

typedef struct st_554a40_1 {
    char padding_0[40];
    float field_28;
    float field_2c;
} st_554a40_1;

extern st_554a40_1 *gpGlobals;

float EnemyIsInMeleeRange__4CBotP11CBasePlayer(st_554a40_0 **a0, st_554a40_0 **a1)
{
    unsigned int *v14;  // esi
    unsigned int *v15;  // edx
    double v16;  // mm7
    double v17;  // mm6
    double v18;  // mm7
    double v19;  // mm7
    float v0;  // [bp-0x5c]
    float v1;  // [bp-0x58]
    float v2;  // [bp-0x54]
    float v3;  // [bp-0x50]
    float v4;  // [bp-0x4c]
    float v5;  // [bp-0x48]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    float v9;  // [bp-0x38]
    float v10;  // [bp-0x24]
    float v11;  // [bp-0x20]
    float v12;  // [bp-0x1c]
    float v13;  // [bp-0x18]

    sub_48a800(*a0 + 4);
    v14 = &*a1->field_8;
    v15 = &*a0->field_8;
    v10 = *a1->field_8 - *a0->field_8;
    v11 = *(float *)&v14[1] - *(float *)&v15[1];
    v12 = *(float *)&v14[2] - *(float *)&v15[2];
    v8 = v10;
    v9 = v11;
    v6 = v8;
    v7 = v9;
    v16 = v6 * v6 + v7 * v7;
    v17 = sqrt(v16);
    if (isnan(v17))
        sub_487dc0(*(unsigned int *)&v16);
    else
        v16 = v17;
    v13 = (float)v16;
    if (v13 == 0.0f)
    {
        v18 = 0.0;
        v4 = 0.0f;
    }
    else
    {
        v19 = 1.0 / v13;
        v18 = v19 * v7;
        v4 = (float)(v19 * v6);
    }
    v5 = (float)v18;
    v6 = v4;
    v7 = v5;
    v2 = gpGlobals->field_28;
    v3 = gpGlobals->field_2c;
    v0 = v2;
    v1 = v3;
    return v6 * v0 + v7 * v1;
}

