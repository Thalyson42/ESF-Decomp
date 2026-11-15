// StickyTouch__15CBodyPartAttackP11CBaseEntity @0x93e70 size=494
typedef struct st_493e70_3 {
    char padding_0[160];
    struct st_493e70_4 *field_a0;
} st_493e70_3;

typedef struct st_493e70_7 {
    char padding_0[8];
    struct st_493e70_4 *field_8;
    char padding_c[232];
    struct st_493e70_4 *field_f4;
} st_493e70_7;

typedef struct st_493e70_4 {
    unsigned int field_0;
} st_493e70_4;

typedef struct st_493e70_1 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[216];
    float field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[24];
    int field_128;
    unsigned int field_12c;
    unsigned int field_130;
    char padding_134[96];
    unsigned int field_194;
    struct st_493e70_0 *field_198;
    char padding_19c[108];
    unsigned int field_208;
} st_493e70_1;

typedef struct st_493e70_2 {
    char padding_0[520];
    unsigned int field_208;
} st_493e70_2;

typedef struct st_493e70_0 {
    char padding_0[648];
    unsigned int field_288;
} st_493e70_0;

typedef struct st_493e70_6 {
    struct st_493e70_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[656];
    struct st_493e70_5 *field_2ac;
} st_493e70_6;

typedef struct st_493e70_5 {
    struct st_493e70_2 *field_0;
    char padding_4[92];
    struct st_493e70_3 *field_60;
    char padding_64[712];
    unsigned int field_32c;
    char padding_330[36];
    unsigned int field_354;
    unsigned int field_358;
    char padding_35c[4];
    unsigned int field_360;
} st_493e70_5;

typedef struct st_493e70_8 {
    float field_0;
} st_493e70_8;

extern char StrangleThink__15CBodyPartAttack;
extern st_493e70_7 g_engfuncs;
extern st_493e70_8 *gpGlobals;

float StickyTouch__15CBodyPartAttackP11CBaseEntity(st_493e70_6 *a0, st_493e70_5 *a1)
{
    st_493e70_2 *v4;  // eax
    unsigned int v5;  // eax
    unsigned long long v14;  // mm7
    unsigned long long v15;  // mm7
    double v7;  // mm6
    unsigned long long v8;  // mm7
    unsigned long long v9;  // mm7
    unsigned long long v10;  // mm7
    unsigned long long v11;  // mm7
    unsigned long long v12;  // mm7
    st_493e70_1 *v13;  // edx
    st_493e70_7 *v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]

    if (a0->field_0->field_198 && a0->field_0->field_198)
        v4 = &a0->field_0->field_198->padding_0[128];
    else
        v4 = NULL;
    if (v4 == a1->field_0)
    {
        return v15;
    }
    else if (a1->field_60->field_a0(a1))
    {
        v0 = &g_engfuncs.padding_0[0];
        v0->field_f4(1, "You have been strangled\n");
        if (a1->field_32c)
        {
            return v12;
        }
        else if (a1->field_354)
        {
            return v11;
        }
        else if (a1->field_358)
        {
            return v10;
        }
        else if (!a1->field_360)
        {
            v0->field_8(a0->field_0->field_208, "models/bodypart_medium.mdl");
            a0->field_0->field_10c = 0;
            a0->field_0->field_194 = a1->field_0->field_208;
            a0->field_0->field_108 = 12;
            a0->field_2ac = a1;
            a0->field_14 = 0;
            a0->field_18 = 0;
            a0->field_0->field_12c = 0;
            a0->field_0->field_130 = 0;
            v5 = CBaseAnimating::LookupSequence(a0, "wrap");
            a0->field_0->field_128 = v5;
            a0->field_c = _INSERT(CBaseAnimating::ResetSequenceInfo(a0), 0, 0) | 0xffff0000;
            a0->field_10 = &StrangleThink__15CBodyPartAttack;
            CBaseAnimating::GetAnimTime(a0, a0->field_0->field_128);
            a0->field_0->field_104 = (float)(v7 + *(float *)gpGlobals);
            return v8;
        }
        else
        {
            return v9;
        }
    }
    else
    {
        memset(&a0->field_0->field_128, 0, 12);
        CBaseAnimating::ResetSequenceInfo(a0);
        v13 = a0->field_0;
        v1 = 0;
        v2 = 0;
        v3 = 0;
        v13->field_20 = v1;
        v13->field_24 = v2;
        v13->field_28 = v3;
        CBaseEntity::SUB_StartFadeOut(a0);
        return v14;
    }
}

