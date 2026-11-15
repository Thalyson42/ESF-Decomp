// PickupTouch__11CDragonBallP11CBaseEntity @0xae130 size=645
typedef struct st_4ae130_4 {
    char padding_0[140];
    struct st_4ae130_5 *field_8c;
    char padding_90[16];
    struct st_4ae130_5 *field_a0;
} st_4ae130_4;

typedef struct st_4ae130_6 {
    struct st_4ae130_1 *field_0;
    char padding_4[92];
    struct st_4ae130_4 *field_60;
    char padding_64[712];
    unsigned int field_32c;
    unsigned int field_330;
    unsigned int field_334;
    char padding_338[4];
    unsigned int field_33c;
    char padding_340[16];
    unsigned int field_350;
    char padding_354[16];
    unsigned int field_364;
    char padding_368[856];
    float field_6c0;
    char padding_6c4[156];
    unsigned int field_760;
    char padding_764[12];
    unsigned int field_770;
} st_4ae130_6;

typedef struct st_4ae130_5 {
    unsigned int field_0;
} st_4ae130_5;

typedef struct st_4ae130_10 {
    unsigned int field_0;
    unsigned int field_4;
    struct st_4ae130_1 *field_8;
    char padding_c[364];
    struct st_4ae130_0 *field_178;
    char padding_17c[108];
    unsigned int field_1e8;
} st_4ae130_10;

typedef struct st_4ae130_1 {
    unsigned int field_0;
    char padding_4[404];
    struct st_4ae130_0 *field_198;
    char padding_19c[108];
    unsigned int field_208;
} st_4ae130_1;

typedef struct st_4ae130_2 {
    char padding_0[32];
    float field_20;
    float field_24;
    struct st_4ae130_1 *field_28;
    char padding_2c[364];
    struct st_4ae130_0 *field_198;
    char padding_19c[108];
    int field_208;
} st_4ae130_2;

typedef struct st_4ae130_0 {
    char padding_0[128];
    unsigned int field_80;
    char padding_84[404];
    struct st_4ae130_0 *field_218;
    char padding_21c[108];
    unsigned int field_288;
} st_4ae130_0;

typedef struct st_4ae130_3 {
    struct st_4ae130_2 *field_0;
    char padding_4[96];
    unsigned int field_64;
    float field_68;
    unsigned int field_6c;
} st_4ae130_3;

typedef struct st_4ae130_8 {
    char padding_0[244];
    struct st_4ae130_5 *field_f4;
} st_4ae130_8;

typedef struct st_4ae130_7 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4ae130_7;

typedef struct st_4ae130_9 {
    char padding_0[68];
    struct st_4ae130_8 *field_44;
} st_4ae130_9;

extern st_4ae130_9 *g_pGameRules;
extern st_4ae130_5 *g_engfuncs.pfnIndexOfEdict;
extern st_4ae130_7 *gpGlobals;

st_4ae130_1 * PickupTouch__11CDragonBallP11CBaseEntity(st_4ae130_3 *a0, st_4ae130_6 *a1)
{
    st_4ae130_1 *v3;  // edx
    st_4ae130_1 *v4;  // eax
    st_4ae130_6 *v5;  // ecx
    st_4ae130_6 *v6;  // ecx
    unsigned int v7;  // eax
    st_4ae130_1 *v8;  // eax
    st_4ae130_2 *v9;  // edx
    st_4ae130_10 *v10;  // eax
    float v0;  // [bp-0x34]
    float v1;  // [bp-0x30]
    st_4ae130_1 *v2;  // [bp-0x2c]

    if (a0->field_64)
        return a0;
    if (a0->field_68 + 0.5 < gpGlobals->field_0)
        a0->field_0->field_198 = NULL;
    if (a0->field_0->field_198 && a0->field_0->field_198)
        v3 = &a0->field_0->field_198->field_80;
    else
        v3 = NULL;
    if (a1->field_0->field_198 && a1->field_0->field_198)
        v4 = &a1->field_0->field_198->field_80;
    else
        v4 = NULL;
    if (v3 == a1->field_0)
        return v4;
    if (v4 == v3 && v3)
        return v4;
    if (a1->field_60->field_a0(a1))
    {
        v5 = a1;
        if (!v5->field_364 && !v5->field_760 && !v5->field_334 && !v5->field_33c && !v5->field_330 && !v5->field_32c && !v5->field_770 && v5->field_60->field_8c(v5) && !a1->field_350)
        {
            EMIT_SOUND_DYN(a0->field_0->field_208, 4, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
            UTIL_Remove(a0);
            v6 = a1;
            v6->field_760 = a0->field_6c;
            v6->field_6c0 = (float)(1.0 + gpGlobals->field_0);
            CBasePlayer::GiveNamedItem(v6, "weapon_dragonball");
            CBasePlayer::SelectItem(a1, "weapon_dragonball");
            v7 = g_engfuncs.pfnIndexOfEdict(a1->field_0->field_208);
            return g_pGameRules->field_44->field_f4(g_pGameRules, a0->field_6c, v7);
        }
    }
    v8 = strcmp@GLIBC_2.0(a1->field_0->field_0 + gpGlobals->field_98, "dragonball");
    if (!v8)
        return v8;
    v9 = a0->field_0;
    v10 = &v9->field_20;
    v0 = (float)(0.5 * v9->field_20);
    v1 = (float)(0.5 * *(float *)&v10->field_4);
    v2 = (st_4ae130_1 *)(float)(0.5 * *(float *)&v10->field_8);
    v9->field_20 = v0;
    v9->field_24 = v1;
    v9->field_28 = v2;
    return v2;
}

