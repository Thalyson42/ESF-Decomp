// SwatAway__12CMagicAttackP11CBasePlayeri @0xce810 size=817
typedef struct st_4ce810_4 {
    struct st_4ce810_2 *field_0;
    char padding_4[92];
    struct st_4ce810_3 *field_60;
    char padding_64[1824];
    unsigned int field_784;
} st_4ce810_4;

typedef struct st_4ce810_5 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[140];
    unsigned int field_e8;
    char padding_ec[24];
    float field_104;
    char padding_108[144];
    int field_198;
} st_4ce810_5;

typedef struct st_4ce810_0 {
    unsigned int field_0;
} st_4ce810_0;

typedef struct st_4ce810_3 {
    char padding_0[480];
    struct st_4ce810_0 *field_1e0;
} st_4ce810_3;

typedef struct st_4ce810_2 {
    char padding_0[520];
    int field_208;
} st_4ce810_2;

typedef struct st_4ce810_6 {
    struct st_4ce810_5 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[660];
    unsigned int field_2a8;
} st_4ce810_6;

typedef struct st_4ce810_1 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[12];
    float field_40;
    float field_44;
    float field_48;
} st_4ce810_1;

extern char NormalThink__12CMagicAttack;
extern st_4ce810_0 *g_engfuncs.pfnRandomFloat;
extern st_4ce810_1 *gpGlobals;

float SwatAway__12CMagicAttackP11CBasePlayeri(st_4ce810_6 *a0, st_4ce810_4 *a1, unsigned int a2)
{
    unsigned int *v23;  // edx
    double v24;  // mm5
    unsigned int *v33;  // edx
    double v34;  // mm5
    double v35;  // mm5
    st_4ce810_5 *v36;  // eax
    st_4ce810_5 *v38;  // edx
    unsigned int v39;  // 128
    st_4ce810_5 *v40;  // esi
    unsigned int *v25;  // edx
    double v26;  // mm5
    float v27;  // 112
    float v28;  // 112
    double v29;  // mm7
    double v30;  // mm6
    double v31;  // mm7
    double v32;  // mm7
    st_4ce810_4 *v0;  // [bp-0xdc]
    int v1;  // [bp-0xd8]
    float v2;  // [bp-0xb8]
    float v3;  // [bp-0xa4]
    float v4;  // [bp-0xa0]
    float v5;  // [bp-0x9c]
    float v6;  // [bp-0x98]
    float v7;  // [bp-0x94]
    float v8;  // [bp-0x90]
    float v9;  // [bp-0x8c]
    float v10;  // [bp-0x88]
    float v11;  // [bp-0x84]
    float v12;  // [bp-0x80]
    float v13;  // [bp-0x7c]
    float v14;  // [bp-0x64]
    float v15;  // [bp-0x60]
    float v16;  // [bp-0x5c]
    float v17;  // [bp-0x44]
    float v18;  // [bp-0x40]
    float v19;  // [bp-0x3c]
    float v20;  // [bp-0x24]
    float v21;  // [bp-0x20]
    float v22;  // [bp-0x1c]

    UTIL_MakeVectors(&a1->field_0->padding_0[116]);
    if (a2)
    {
        g_engfuncs.pfnRandomFloat(-1.0f, 0x3f800000);
        v2 = -1.0f;
        v23 = &gpGlobals->field_40;
        v24 = -1.0 * gpGlobals->field_40;
        v17 = (float)v24;
        v18 = v2 * *(float *)&v23[1];
        v19 = v2 * *(float *)&v23[2];
        v25 = &gpGlobals->field_28;
        v26 = v24 + gpGlobals->field_28;
        v11 = (float)v26;
        v27 = v18 + *(float *)&v25[1];
        v12 = v27;
        v28 = v19 + *(float *)&v25[2];
        v13 = v28;
        v29 = v26 * v26 + v27 * v27 + v28 * v28;
        v30 = sqrt(v29);
        if (isnan(v30))
            sqrt(*(unsigned int *)&v29);
        else
            v29 = v30;
        v6 = (float)v29;
        if (v6 == 0.0f)
        {
            v14 = 0.0f;
            v15 = 0.0f;
            v16 = 1.0;
        }
        else
        {
            v31 = 1.0 / v6;
            v14 = (float)(v31 * v11);
            v15 = (float)(v31 * v12);
            v16 = (float)(v31 * v13);
        }
        v20 = v14;
        v21 = v15;
        v22 = v16;
        EMIT_SOUND_DYN(a1->field_0->field_208, 1, "weapons/reflect.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        if (0.0 > v2)
        {
            v1 = 7;
            v0 = a1;
        }
        else
        {
            v1 = 8;
            v0 = a1;
        }
    }
    else
    {
        v20 = gpGlobals->field_28;
        v21 = gpGlobals->field_2c;
        v22 = gpGlobals->field_30;
        v1 = 9;
        v0 = a1;
    }
    CBasePlayer::SetAnimation(v0, v1);
    a1->field_60->field_1e0(&v6, a1);
    v32 = *(float *)&a0->field_0->field_e8 + 10.0;
    v33 = &gpGlobals->field_28;
    v34 = v32 * gpGlobals->field_28;
    v9 = (float)v34;
    v35 = v32 * *(float *)&v33[1];
    v10 = (float)v35;
    v11 = (float)(v32 * *(float *)&v33[2]);
    v3 = (float)(v34 + v6);
    v4 = (float)(v35 + v7);
    v5 = v8 + v11;
    UTIL_SetOrigin(a0->field_0, &v3);
    v36 = a0->field_0;
    v36->field_198 = a1->field_0->field_208;
    a0->field_c = _INSERT(v36, 0, 0) | 0xffff0000;
    a0->field_10 = &NormalThink__12CMagicAttack;
    a0->field_0->field_104 = (float)(0.5 + gpGlobals->field_0);
    a1->field_784 = 1;
    v38 = a0->field_0;
    v39 = *&a0->field_2a8;
    v3 = __int_as_float(v39) * v20;
    v4 = __int_as_float(v39) * v21;
    v5 = __int_as_float(v39) * v22;
    *(float *)&v38->field_20 = v3;
    *(float *)&v38->field_24 = v4;
    *(float *)&v38->field_28 = v5;
    v40 = a0->field_0;
    UTIL_VecToAngles(&v3, &v40->field_20);
    *(float *)&v40->field_50 = v3;
    *(float *)&v40->field_54 = v4;
    *(float *)&v40->field_58 = v5;
    return __int_as_float(v39) * v22;
}

