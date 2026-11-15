// ShootShield__10CShieldAtkP9entvars_sG6VectorT2i @0x1187b0 size=674
typedef struct st_5187b0_2 {
    unsigned int field_0;
} st_5187b0_2;

typedef struct st_5187b0_0 {
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
    char padding_110[52];
    unsigned int field_144;
    char padding_148[80];
    unsigned int field_198;
    char padding_19c[68];
    float field_1e0;
    char padding_1e4[36];
    unsigned int field_208;
} st_5187b0_0;

typedef struct st_5187b0_4 {
    char padding_0[520];
    unsigned int field_208;
} st_5187b0_4;

typedef struct st_5187b0_3 {
    struct st_5187b0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_5187b0_1 *field_60;
    char padding_64[580];
    float field_2a8;
    char padding_2ac[36];
    unsigned int field_2d0;
    unsigned int field_2d4;
} st_5187b0_3;

typedef struct st_5187b0_1 {
    char padding_0[8];
    struct st_5187b0_2 *field_8;
} st_5187b0_1;

typedef struct st_5187b0_5 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_5187b0_5;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char NormalThink__12CMagicAttack;
extern st_5187b0_2 *g_6167c8;
extern st_5187b0_5 *gpGlobals;

short ShootShield__10CShieldAtkP9entvars_sG6VectorT2i(st_5187b0_4 *a0, float *a1, float *a2, unsigned int a3)
{
    st_5187b0_3 *v14;  // edi
    unsigned int v15;  // eax
    float *v24;  // ecx
    double v25;  // mm7
    unsigned int v27;  // eax
    st_5187b0_0 *v16;  // edx
    float *v17;  // ecx
    double v18;  // mm7
    double v19;  // mm6
    st_5187b0_0 *v20;  // esi
    double v21;  // mm7
    double v22;  // mm6
    double v23;  // mm7
    float v0;  // [bp-0x5c]
    float v1;  // [bp-0x48]
    float v2;  // [bp-0x44]
    float v3;  // [bp-0x40]
    int v4;  // [bp-0x28]
    unsigned int v5;  // [bp-0x24]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    unsigned int v8;  // [bp-0x20]
    float v9;  // [bp-0x1c]
    unsigned int v10;  // [bp-0x1c]
    float v11;  // [bp-0x18]
    float v12;  // [bp-0x14]
    float v13;  // [bp-0x10]

    v14 = sub_489d90(0);
    v14->field_60->field_8(v14);
    v14->field_0->field_108 = 5;
    v14->field_0->field_10c = 1;
    g_6167c8(v14->field_0->field_208, "sprites/shieldattack.spr");
    v14->field_2d4 = 4;
    v14->field_2d0 = 4;
    v15 = a3;
    if ((int)v15 > 9999)
        v15 = 9999;
    v5 = v15;
    v14->field_0->field_1e0 = (float)(int)v5;
    v16 = v14->field_0;
    v17 = a2;
    *(float *)&v16->field_20 = *v17;
    *(float *)&v16->field_24 = v17[1];
    *(float *)&v16->field_28 = v17[2];
    v18 = *v17 * *v17 + v17[1] * v17[1] + v17[2] * v17[2];
    v19 = sqrt(v18);
    if (isnan(v19))
        sub_487dc0(*(unsigned int *)&v18);
    else
        v18 = v19;
    v14->field_2a8 = (float)v18;
    v20 = v14->field_0;
    sub_488860(&v5, &v20->field_20);
    v20->field_50 = v5;
    v20->field_54 = v8;
    v20->field_58 = v10;
    v14->field_0->field_198 = a0->field_208;
    v14->field_0->field_0 = -1 * gpGlobals->field_98 + 5930774;
    v14->field_0->field_144 = 0x3f800000;
    v21 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v22 = sqrt(v21);
    if (isnan(v22))
        sub_487dc0(*(unsigned int *)&v21);
    else
        v21 = v22;
    v0 = (float)v21;
    if (v0 == 0.0f)
    {
        v1 = 0.0f;
        v2 = 0.0f;
        v3 = 1.0;
    }
    else
    {
        v23 = 1.0 / v0;
        v24 = a2;
        v1 = (float)(v23 * *v24);
        v2 = (float)(v23 * v24[1]);
        v3 = (float)(v23 * v24[2]);
    }
    v11 = 16.0f * v1;
    v12 = 16.0f * v2;
    v13 = 16.0f * v3;
    v6 = *a1 + v11;
    v7 = a1[1] + v12;
    v9 = a1[2] + v13;
    sub_48db50(v14->field_0, &v6);
    v5 = 5.42932517e-315;
    v8 = 5.42932517e-315;
    v10 = 5.42932517e-315;
    v4 = -0x11;
    v25 = (double)v4;
    v11 = (float)v25;
    v12 = (float)v25;
    v13 = (float)v25;
    v27 = _INSERT(sub_48a0d0(v14->field_0, &v11, &v5), 0, 0) | 0xffff0000;
    v14->field_14 = v27;
    v14->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    v14->field_c = _INSERT(v27, 0, 0) | 0xffff0000;
    v14->field_10 = &NormalThink__12CMagicAttack;
    *(float *)&v14->field_0->field_104 = gpGlobals->field_0;
    return (unsigned short)v14;
}

