// ShootBodyPart__15CBodyPartAttackP9entvars_sG6VectorT2 @0x94060 size=500
typedef struct st_494060_5 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_494060_5;

typedef struct st_494060_1 {
    unsigned int field_0;
} st_494060_1;

typedef struct st_494060_3 {
    unsigned int field_0;
    char padding_4[28];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[168];
    unsigned int field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[24];
    unsigned int field_128;
    unsigned int field_12c;
    unsigned int field_130;
    char padding_134[20];
    unsigned int field_148;
    char padding_14c[76];
    unsigned int field_198;
    char padding_19c[108];
    unsigned int field_208;
} st_494060_3;

typedef struct st_494060_4 {
    char padding_0[520];
    unsigned int field_208;
} st_494060_4;

typedef struct st_494060_2 {
    struct st_494060_3 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_494060_0 *field_60;
    char padding_64[580];
    float field_2a8;
} st_494060_2;

typedef struct st_494060_0 {
    char padding_0[8];
    struct st_494060_1 *field_8;
} st_494060_0;

extern char StickyTouch__15CBodyPartAttackP11CBaseEntity;
extern char NormalThink__12CMagicAttack;
extern st_494060_1 *g_6167c8;
extern st_494060_5 *gpGlobals;

short ShootBodyPart__15CBodyPartAttackP9entvars_sG6VectorT2(st_494060_4 *a0, int a1, float *a2)
{
    st_494060_2 *v11;  // edi
    unsigned int v12;  // eax
    unsigned int *v13;  // edx
    double v14;  // mm7
    double v15;  // mm6
    unsigned int v17;  // eax
    st_494060_5 **v0;  // [bp-0x2c]
    unsigned int *v1;  // [bp-0x28]
    char v2;  // [bp-0x24], Other Possible Types: unsigned int
    float v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]
    float v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x1c]
    float v7;  // [bp-0x1c]
    float v8;  // [bp-0x18]
    float v9;  // [bp-0x14]
    float v10;  // [bp-0x10]

    v11 = sub_48cb70(0);
    v11->field_60->field_8(v11);
    v11->field_0->field_108 = 6;
    v11->field_0->field_10c = 1;
    *(float *)&v11->field_0->padding_110[12] = 0.20000000298023224f;
    v11->field_0->field_12c = 0;
    v11->field_0->field_130 = 0;
    v12 = sub_48afe0(v11, "bodypart_fly");
    v11->field_0->field_128 = v12;
    sub_488850(v11);
    g_6167c8(v11->field_0->field_208, "models/bodypart.mdl");
    v11->field_0->field_148 = 0;
    v13 = &v11->field_0->field_0;
    *(float *)&v13[8] = *a2;
    *(float *)&v13[9] = a2[1];
    *(float *)&v13[10] = a2[2];
    v14 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v15 = sqrt(v14);
    if (isnan(v15))
        sub_487dc0(*(unsigned int *)&v14);
    else
        v14 = v15;
    v11->field_2a8 = (float)v14;
    v1 = &v11->field_0->field_0;
    sub_488860(&v2, &v11->field_0->field_20);
    v1[20] = v2;
    v1[21] = v4;
    v1[22] = v6;
    v11->field_0->field_198 = a0->field_208;
    v0 = &gpGlobals;
    v11->field_0->field_0 = -1 * gpGlobals->field_98 + 5871754;
    sub_48db50(v11->field_0, a1);
    v3 = 10.0f;
    v5 = 10.0f;
    v7 = 10.0f;
    v8 = -10.0f;
    v9 = -10.0f;
    v10 = -10.0f;
    v17 = _INSERT(sub_48a0d0(v11->field_0, &v8, &v3), 0, 0) | 0xffff0000;
    v11->field_14 = v17;
    v11->field_18 = &StickyTouch__15CBodyPartAttackP11CBaseEntity;
    v11->field_c = _INSERT(v17, 0, 0) | 0xffff0000;
    v11->field_10 = &NormalThink__12CMagicAttack;
    *(float *)&v11->field_0->field_104 = *v0->field_0;
    return (unsigned short)v11;
}

