// CheckAttacks__12CBaseMonsterP11CBaseEntityf @0xd5180 size=469
typedef struct st_4d5180_4 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4d5180_4;

typedef struct st_4d5180_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_4d5180_3;

typedef struct st_4d5180_0 {
    char padding_0[312];
    struct st_4d5180_1 *field_138;
    struct st_4d5180_1 *field_13c;
    struct st_4d5180_1 *field_140;
    struct st_4d5180_1 *field_144;
} st_4d5180_0;

typedef struct st_4d5180_1 {
    unsigned int field_0;
} st_4d5180_1;

typedef struct st_4d5180_2 {
    struct st_4d5180_3 *field_0;
    char padding_4[92];
    struct st_4d5180_0 *field_60;
    char padding_64[161];
    char field_105;
    char padding_106[347];
    char field_261;
} st_4d5180_2;

typedef struct st_4d5180_5 {
    char padding_0[40];
    unsigned int field_28;
    float field_2c;
} st_4d5180_5;

extern st_4d5180_5 *gpGlobals;

float CheckAttacks__12CBaseMonsterP11CBaseEntityf(st_4d5180_2 *a0, st_4d5180_4 **a1, unsigned int a2)
{
    unsigned int *v18;  // esi
    unsigned int *v19;  // edx
    double v20;  // mm7
    double v21;  // mm6
    double v22;  // mm7
    double v23;  // mm7
    unsigned int v24;  // eax
    float v25;  // eax
    char *v0;  // [bp-0x54]
    float v1;  // [bp-0x50]
    unsigned int v2;  // [bp-0x4c]
    float v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x44]
    float v5;  // [bp-0x40]
    char v6;  // [bp-0x3c]
    double v7;  // [bp-0x3c]
    float v8;  // [bp-0x38]
    unsigned int v9;  // [bp-0x34]
    float v10;  // [bp-0x34]
    float v11;  // [bp-0x30]
    float v12;  // [bp-0x2c]
    float v13;  // [bp-0x28]
    float v14;  // [bp-0x24]
    float v15;  // [bp-0x20]
    float v16;  // [bp-0x1c]
    float v17;  // [bp-0x18]

    sub_48a800(a0->field_0 + 4);
    v18 = &*a1->field_8;
    v19 = &a0->field_0->field_8;
    v14 = *a1->field_8 - *(float *)&a0->field_0->field_8;
    v15 = *(float *)&v18[1] - *(float *)&v19[1];
    v16 = *(float *)&v18[2] - *(float *)&v19[2];
    v12 = v14;
    v13 = v15;
    v10 = v12;
    v11 = v13;
    v0 = &v6;
    v20 = v10 * v10 + v11 * v11;
    v21 = sqrt(v20);
    if (isnan(v21))
        sub_487dc0(*(unsigned int *)&v20);
    else
        v20 = v21;
    v17 = (float)v20;
    if (v17 == 0.0f)
    {
        v22 = 0.0;
        v7 = (double)_INSERT(v6, 0, 0.0f);
    }
    else
    {
        v23 = 1.0 / v17;
        v22 = v23 * v11;
        v7 = (double)_INSERT(v6, 0, (float)(v23 * v10));
    }
    v8 = (float)v22;
    v9 = *(unsigned int *)&v7;
    *(unsigned int *)&v11 = *(unsigned int *)((void*)&v7 + 4);
    *(float *)&v4 = *(float *)&gpGlobals->field_28;
    v5 = gpGlobals->field_2c;
    v24 = v4;
    v2 = v24;
    v3 = v5;
    v1 = *(float *)&v9 * *(float *)&v2 + v11 * v3;
    a0->field_105 = a0->field_105 & 195;
    if (a0->field_261 & 8)
    {
        v24 = a0->field_60->field_138(a0, v1, a2);
        if (v24)
            a0->field_105 = a0->field_105 | 4;
    }
    if (a0->field_261 & 16)
    {
        v24 = a0->field_60->field_13c(a0, v1, a2);
        if (v24)
            a0->field_105 = a0->field_105 | 16;
    }
    if (a0->field_261 & 32)
    {
        v24 = a0->field_60->field_140(a0, v1, a2);
        if (v24)
            a0->field_105 = a0->field_105 | 8;
    }
    if (!(a0->field_261 & 64))
        return v24;
    v25 = __int_as_float(a0->field_60->field_144(a0, v1, a2));
    if (!__float_as_int(v25))
        return v25;
    a0->field_105 = a0->field_105 | 32;
    return v25;
}

