// ShootSpiritBomb__17CSpiritBombAttackG6Vectori @0x1204d0 size=363
typedef struct st_5204d0_0 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[168];
    unsigned int field_104;
    char padding_108[4];
    unsigned int field_10c;
    char padding_110[52];
    float field_144;
    char padding_148[152];
    float field_1e0;
} st_5204d0_0;

typedef struct st_5204d0_1 {
    struct st_5204d0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[652];
    float field_2a8;
} st_5204d0_1;

typedef struct st_5204d0_2 {
    float field_0;
} st_5204d0_2;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char NormalThink__12CMagicAttack;
extern st_5204d0_2 *gpGlobals;

short ShootSpiritBomb__17CSpiritBombAttackG6Vectori(st_5204d0_1 *a0, float *a1, unsigned int a2)
{
    st_5204d0_1 *v12;  // edx
    st_5204d0_0 *v13;  // edx
    st_5204d0_1 *v22;  // ecx
    double v14;  // mm7
    double v15;  // mm6
    st_5204d0_1 *v16;  // edx
    st_5204d0_0 *v17;  // esi
    double v18;  // mm7
    double v19;  // mm7
    unsigned int v21;  // eax
    int v0;  // [bp-0x3c]
    unsigned short v1;  // [bp-0x38]
    unsigned short v2;  // [bp-0x36]
    unsigned int v3;  // [bp-0x24]
    float v4;  // [bp-0x24]
    unsigned int v5;  // [bp-0x20]
    float v6;  // [bp-0x20]
    float v7;  // [bp-0x1c]
    unsigned int v8;  // [bp-0x1c]
    float v9;  // [bp-0x18]
    float v10;  // [bp-0x14]
    float v11;  // [bp-0x10]

    v12 = a0;
    v12->field_0->field_10c = 1;
    if ((int)a2 > 9999)
        a2 = 9999;
    v3 = a2;
    v12->field_0->field_1e0 = (float)(int)v3;
    v13 = a0->field_0;
    *(float *)&v13->field_20 = *a1;
    *(float *)&v13->field_24 = a1[1];
    *(float *)&v13->field_28 = a1[2];
    v14 = *a1 * *a1 + a1[1] * a1[1] + a1[2] * a1[2];
    v15 = sqrt(v14);
    if (isnan(v15))
        sqrt(*(unsigned int *)&v14);
    else
        v14 = v15;
    v16 = a0;
    v16->field_2a8 = (float)v14;
    v17 = v16->field_0;
    UTIL_VecToAngles(&v3, &v17->field_20);
    v17->field_50 = v3;
    v17->field_54 = v5;
    v17->field_58 = v8;
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)(256.0 * a0->field_0->field_144 * 0.5);
    v18 = (double)v0;
    v4 = (float)v18;
    v6 = (float)v18;
    v7 = (float)v18;
    v0 = -v0;
    v19 = (double)v0;
    v9 = (float)v19;
    v10 = (float)v19;
    v11 = (float)v19;
    v21 = _INSERT(UTIL_SetSize(a0->field_0, &v9, &v4), 0, 0) | 0xffff0000;
    v22 = a0;
    v22->field_14 = v21;
    v22->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    v22->field_c = _INSERT(v21, 0, 0) | 0xffff0000;
    v22->field_10 = &NormalThink__12CMagicAttack;
    *(float *)&v22->field_0->field_104 = *(float *)gpGlobals;
    return (unsigned short)gpGlobals;
}

