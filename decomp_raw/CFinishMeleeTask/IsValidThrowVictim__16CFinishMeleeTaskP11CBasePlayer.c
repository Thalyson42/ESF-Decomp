// IsValidThrowVictim__16CFinishMeleeTaskP11CBasePlayer @0x14aa20 size=284
typedef struct st_54aa20_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_54aa20_1;

typedef struct st_54aa20_3 {
    struct st_54aa20_1 *field_0;
} st_54aa20_3;

typedef struct st_54aa20_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
} st_54aa20_0;

typedef struct st_54aa20_2 {
    char padding_0[8];
    struct st_54aa20_3 *field_8;
} st_54aa20_2;

char IsValidThrowVictim__16CFinishMeleeTaskP11CBasePlayer(st_54aa20_2 *a0, st_54aa20_0 **a1)
{
    unsigned int *v8;  // edx
    double v9;  // mm7
    double v10;  // mm6
    unsigned int *v11;  // edx
    unsigned int *v12;  // edx
    float v13;  // 112
    float v14;  // 112
    float v15;  // 112
    double v16;  // mm7
    double v17;  // mm6
    float v0;  // [bp-0x58]
    float v1;  // [bp-0x44]
    float v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]
    float v7;  // [bp-0x18]

    v8 = &*a1->field_20;
    v9 = *a1->field_20 * *a1->field_20 + *(float *)&v8[1] * *(float *)&v8[1] + *(float *)&v8[2] * *(float *)&v8[2];
    v10 = sqrt(v9);
    if (isnan(v10))
        sub_487dc0(*(unsigned int *)&v9);
    else
        v9 = v10;
    v7 = (float)v9;
    if (v7 > 600.0f)
        return 0;
    v11 = &*a1->field_8;
    v4 = *a1->field_8;
    v5 = *(float *)&v11[1];
    v6 = *(float *)&v11[2];
    v12 = *(int *)a0->field_8 + 8;
    v13 = v4 - *(float *)(*(int *)a0->field_8 + 8);
    v1 = v13;
    v14 = v5 - *(float *)&v12[1];
    v2 = v14;
    v15 = v6 - *(float *)&v12[2];
    v3 = v15;
    v16 = v13 * v13 + v14 * v14 + v15 * v15;
    v17 = sqrt(v16);
    if (isnan(v17))
        sub_487dc0(*(unsigned int *)&v16);
    else
        v16 = v17;
    v0 = (float)v16;
    if (v0 <= 1500.0f)
        return sub_4897e0(a0->field_8, a1) == 1;
    return 0;
}

