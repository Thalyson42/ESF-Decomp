// Shoot__20CDestructoDiscAttackG6VectorT1 @0xa9f30 size=480
typedef struct st_4a9f30_0 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    float field_50;
    float field_54;
    float field_58;
    char padding_5c[168];
    float field_104;
    unsigned int field_108;
    char padding_10c[12];
    char field_118;
    char padding_119[43];
    unsigned int field_144;
    char padding_148[8];
    unsigned int field_150;
    char padding_154[64];
    unsigned int field_194;
    char padding_198[112];
    int field_208;
} st_4a9f30_0;

typedef struct st_4a9f30_1 {
    struct st_4a9f30_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[652];
    float field_2a8;
} st_4a9f30_1;

typedef struct st_4a9f30_2 {
    float field_0;
} st_4a9f30_2;

extern char RandomRotateThink__20CDestructoDiscAttack;
extern char HitTouch__11CDiscAttackP11CBaseEntity;
extern st_4a9f30_2 *gpGlobals;

double Shoot__20CDestructoDiscAttackG6VectorT1(st_4a9f30_1 *a0, int a1, float *a2)
{
    st_4a9f30_0 *v12;  // edx
    unsigned int v13;  // 128
    double v23;  // mm7
    unsigned int v14;  // 128
    st_4a9f30_0 *v15;  // edx
    double v16;  // mm7
    double v17;  // mm6
    st_4a9f30_0 *v18;  // esi
    st_4a9f30_0 *v19;  // eax
    unsigned int v21;  // eax
    float v0;  // [bp-0x84]
    float v1;  // [bp-0x80]
    float v2;  // [bp-0x7c]
    float v3;  // [bp-0x64]
    float v4;  // [bp-0x60]
    float v5;  // [bp-0x5c]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    float v9;  // [bp-0x24]
    float v10;  // [bp-0x20]
    float v11;  // [bp-0x1c]

    a0->field_0->field_108 = 8;
    a0->field_0->field_194 = 0;
    a0->field_0->field_118 = a0->field_0->field_118 | 4;
    sub_48db50(a0->field_0, a1);
    v12 = a0->field_0;
    v13 = *&v12->field_144;
    v6 = 7.0f;
    v7 = 7.0f;
    v8 = 7.0f;
    v9 = __int_as_float(v13) * v6;
    v10 = __int_as_float(v13) * v7;
    v11 = __int_as_float(v13) * v8;
    v14 = *&v12->field_144;
    v0 = -7.0f;
    v1 = -7.0f;
    v2 = -7.0f;
    v3 = __int_as_float(v14) * v0;
    v4 = __int_as_float(v14) * v1;
    v5 = __int_as_float(v14) * v2;
    sub_48a0d0(v12, &v3, &v9);
    v15 = a0->field_0;
    *(float *)&v15->field_20 = *a2;
    *(float *)&v15->field_24 = a2[1];
    *(float *)&v15->field_28 = a2[2];
    v16 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v17 = sqrt(v16);
    if (isnan(v17))
        sub_487dc0(*(unsigned int *)&v16);
    else
        v16 = v17;
    a0->field_2a8 = (float)v16;
    v18 = a0->field_0;
    sub_488860(&v0, &v18->field_20);
    v18->field_50 = v0;
    v18->field_54 = v1;
    v18->field_58 = v2;
    a0->field_0->field_150 = 0;
    v19 = a0->field_0;
    *(float *)&v19->field_144 = *(float *)&v19->field_144 + *(float *)&v19->field_144;
    v21 = _INSERT(v19, 0, 0) | 0xffff0000;
    a0->field_14 = v21;
    a0->field_18 = &HitTouch__11CDiscAttackP11CBaseEntity;
    a0->field_c = _INSERT(v21, 0, 0) | 0xffff0000;
    a0->field_10 = &RandomRotateThink__20CDestructoDiscAttack;
    sub_489390(a0->field_0->field_208, 1, "weapons/rotating.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    v23 = 0.25 + *(float *)gpGlobals;
    a0->field_0->field_104 = (float)v23;
    return v23;
}

