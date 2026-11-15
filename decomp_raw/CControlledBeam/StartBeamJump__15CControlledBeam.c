// StartBeamJump__15CControlledBeam @0xa7750 size=488
typedef struct st_4a7750_1 {
    struct st_4a7750_2 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4a7750_1;

typedef struct st_4a7750_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_4a7750_2;

typedef struct st_4a7750_4 {
    struct st_4a7750_0 *field_0;
} st_4a7750_4;

typedef struct st_4a7750_3 {
    char padding_0[128];
    struct st_4a7750_4 *field_80;
    char padding_84[68];
    struct st_4a7750_1 *field_c8;
    char padding_cc[308];
    unsigned int field_200;
    char padding_204[4];
    unsigned int field_208;
} st_4a7750_3;

typedef struct st_4a7750_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[244];
    unsigned int field_108;
    char padding_10c[252];
    unsigned int field_208;
    char padding_20c[124];
    unsigned int field_288;
    unsigned int field_28c;
    unsigned int field_290;
} st_4a7750_0;

typedef struct st_4a7750_5 {
    unsigned int field_0;
} st_4a7750_5;

extern st_4a7750_5 *g_engfuncs.pfnIndexOfEdict;

int StartBeamJump__15CControlledBeam(st_4a7750_3 *a0)
{
    st_4a7750_1 *v15;  // eax
    st_4a7750_0 **v16;  // edi
    double v25;  // mm7
    double v26;  // mm7
    unsigned int *v17;  // esi
    unsigned int *v18;  // edx
    float v19;  // 112
    float v20;  // 112
    float v21;  // 112
    unsigned int *v22;  // esi
    double v23;  // mm7
    double v24;  // mm6
    char *v0;  // [bp-0xbc]
    int v1;  // [bp-0x88]
    char v2;  // [bp-0x84]
    float v3;  // [bp-0x78]
    float v4;  // [bp-0x74]
    float v5;  // [bp-0x70]
    float v6;  // [bp-0x64]
    float v7;  // [bp-0x60]
    float v8;  // [bp-0x5c]
    float v9;  // [bp-0x44]
    float v10;  // [bp-0x40]
    float v11;  // [bp-0x3c]
    float v12;  // [bp-0x24]
    float v13;  // [bp-0x20]
    float v14;  // [bp-0x1c]

    a0->field_200 = *(int *)(*(int *)a0->field_80 + 264);
    v15 = a0->field_c8;
    v15->field_c = 0;
    v15->field_10 = 0;
    *(unsigned int *)(*(int *)a0->field_80 + 264) = 15;
    *(float *)&a0->field_80[469] = 5.0f;
    v16 = a0->field_80;
    v17 = &*v16->field_8;
    v18 = &a0->field_c8->field_0->field_8;
    v19 = *(float *)&*v16->field_8 - *(float *)&a0->field_c8->field_0->field_8;
    v12 = v19;
    v20 = *(float *)&v17[1] - *(float *)&v18[1];
    v13 = v20;
    v21 = *(float *)&v17[2] - *(float *)&v18[2];
    v14 = v21;
    v22 = *v16;
    v23 = v19 * v19 + v20 * v20 + v21 * v21;
    v24 = sqrt(v23);
    if (isnan(v24))
        sqrt(*(unsigned int *)&v23);
    else
        v23 = v24;
    v3 = (float)v23;
    if (v3 == 0.0f)
    {
        v6 = 0.0f;
        v7 = 0.0f;
        v8 = 1.0;
    }
    else
    {
        v25 = 1.0 / v3;
        v6 = (float)(v25 * v12);
        v7 = (float)(v25 * v13);
        v8 = (float)(v25 * v14);
    }
    v1 = CBasePlayer::GetMaxSpeed(a0->field_80);
    v26 = (double)v1;
    v9 = (float)(v26 * v6);
    v10 = (float)(v26 * v7);
    v11 = (float)(v26 * v8);
    *(float *)&v22[162] = v9;
    *(float *)&v22[163] = v10;
    *(float *)&v22[164] = v11;
    a0->field_208 = 1;
    v3 = -v12;
    v4 = -v13;
    v5 = -v14;
    UTIL_VecToAngles(&v2, &v3);
    v0 = &v2;
    return UTIL_Model_FixAngles(g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)a0->field_80 + 520)));
}

