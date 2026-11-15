// HurtTouch__12CBaseTriggerP11CBaseEntity @0x12caa0 size=649
typedef struct st_52caa0_1 {
    char padding_0[52];
    struct st_52caa0_2 *field_34;
    struct st_52caa0_2 *field_38;
    char padding_3c[100];
    struct st_52caa0_2 *field_a0;
} st_52caa0_1;

typedef struct st_52caa0_5 {
    struct st_52caa0_4 *field_0;
    char padding_4[248];
    unsigned int field_fc;
} st_52caa0_5;

typedef struct st_52caa0_2 {
    unsigned int field_0;
} st_52caa0_2;

typedef struct st_52caa0_4 {
    char padding_0[388];
    unsigned int field_184;
    char padding_188[24];
    char field_1a0;
    char padding_1a1[39];
    unsigned int field_1c8;
    char padding_1cc[20];
    float field_1e0;
    float field_1e4;
    char padding_1e8[24];
    float field_200;
} st_52caa0_4;

typedef struct st_52caa0_6 {
    char padding_0[388];
    unsigned int field_184;
    char padding_188[24];
    char field_1a0;
    char padding_1a1[39];
    unsigned int field_1c8;
    char padding_1cc[20];
    unsigned int field_1e0;
    unsigned int field_1e4;
    char padding_1e8[24];
    unsigned int field_200;
} st_52caa0_6;

typedef struct st_52caa0_0 {
    char padding_0[364];
    float field_16c;
    char padding_170[152];
    unsigned int field_208;
} st_52caa0_0;

typedef struct st_52caa0_3 {
    struct st_52caa0_0 *field_0;
    char padding_4[92];
    struct st_52caa0_1 *field_60;
} st_52caa0_3;

typedef struct st_52caa0_7 {
    char padding_0[24];
    struct st_52caa0_2 *field_18;
} st_52caa0_7;

typedef struct st_52caa0_8 {
    char padding_0[68];
    struct st_52caa0_7 *field_44;
} st_52caa0_8;

extern st_52caa0_8 *g_pGameRules;
extern st_52caa0_2 *g_engfuncs.pfnIndexOfEdict;
extern st_52caa0_2 *gpGlobals;

st_52caa0_6 * HurtTouch__12CBaseTriggerP11CBaseEntity(st_52caa0_5 *a0, st_52caa0_3 *a1)
{
    st_52caa0_6 *v1;  // eax
    st_52caa0_6 *v2;  // eax
    unsigned int v3;  // eax
    st_52caa0_4 *v4;  // edx
    st_52caa0_6 *v5;  // eax
    st_52caa0_6 *v6;  // eax
    char v7;  // al
    st_52caa0_6 *v8;  // eax
    st_52caa0_6 *v9;  // eax
    st_52caa0_4 *v10;  // eax
    float v0;  // [bp-0x8]

    if (a1->field_0->field_16c == 0.0f)
        return v10;
    if (a0->field_0->field_1a0 & 32 && !a1->field_60->field_a0(a1))
        return v1;
    if (a0->field_0->field_1a0 & 8 && a1->field_60->field_a0(a1))
        return v2;
    if (g_pGameRules->field_44->field_18(g_pGameRules))
    {
        if (a0->field_0->field_1e4 <= *(float *)gpGlobals)
        {
            a0->field_0->field_184 = 0;
            if (a1->field_60->field_a0(a1))
            {
                v7 = g_engfuncs.pfnIndexOfEdict(a1->field_0->field_208);
                a0->field_0->field_184 = a0->field_0->field_184 | 1 << (v7 - 1 & 31);
            }
        }
        else if (a0->field_0->field_200 != *(float *)gpGlobals)
        {
            if (a1->field_60->field_a0(a1))
            {
                v3 = 1 << ((char)((g_engfuncs.pfnIndexOfEdict(a1->field_0->field_208) & 0xff) - 1) & 31);
                v4 = a0->field_0;
                if (v3 & v4->field_184)
                    return v5;
                v4->field_184 = v4->field_184 | v3;
            }
            else
            {
                return v6;
            }
        }
    }
    else
    {
        if (a0->field_0->field_1e4 > *(float *)gpGlobals && a0->field_0->field_200 != *(float *)gpGlobals)
            return v8;
    }
    v0 = (float)(0.5 * a0->field_0->field_1e0);
    if (0.0 > v0)
        a1->field_60->field_38(a1, -v0, a0->field_fc);
    else
        a1->field_60->field_34(a1, a0->field_0, a0->field_0, v0, a0->field_fc);
    a0->field_0->field_200 = *(float *)gpGlobals;
    a0->field_0->field_1e4 = (float)(0.5 + *(float *)gpGlobals);
    if (!a0->field_0->field_1c8)
        return v10;
    if (a0->field_0->field_1a0 & 16 && !a1->field_60->field_a0(a1))
        return v9;
    CBaseDelay::SUB_UseTargets(a0, a1, 3, 0);
    v10 = a0->field_0;
    if (!(v10->field_1a0 & 1))
        return v10;
    v10->field_1c8 = 0;
    return v10;
}

