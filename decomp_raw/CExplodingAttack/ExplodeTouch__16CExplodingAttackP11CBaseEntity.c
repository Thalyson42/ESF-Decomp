// ExplodeTouch__16CExplodingAttackP11CBaseEntity @0xbb7c0 size=1564
typedef struct st_4bb7c0_2 {
    char padding_0[40];
    struct st_4bb7c0_3 *field_28;
    char padding_2c[116];
    struct st_4bb7c0_3 *field_a0;
} st_4bb7c0_2;

typedef struct st_4bb7c0_10 {
    struct st_4bb7c0_1 *field_0;
    char padding_4[92];
    struct st_4bb7c0_2 *field_60;
    char padding_64[584];
    unsigned int field_2ac;
    unsigned int field_2b0;
    char padding_2b4[24];
    unsigned int field_2cc;
    char padding_2d0[136];
    unsigned int field_358;
    char padding_35c[360];
    unsigned int field_4c4;
    char padding_4c8[616];
    unsigned int field_730;
    char padding_734[76];
    struct st_4bb7c0_9 *field_780;
} st_4bb7c0_10;

typedef struct st_4bb7c0_4 {
    char padding_0[264];
    unsigned int field_108;
} st_4bb7c0_4;

typedef struct st_4bb7c0_6 {
    struct st_4bb7c0_4 *field_0;
} st_4bb7c0_6;

typedef struct st_4bb7c0_3 {
    unsigned int field_0;
} st_4bb7c0_3;

typedef struct st_4bb7c0_13 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[216];
    unsigned int field_e4;
    char padding_e8[144];
    struct st_4bb7c0_5 *field_178;
    char padding_17c[68];
    unsigned int field_1c0;
    char padding_1c4[36];
    unsigned int field_1e8;
} st_4bb7c0_13;

typedef struct st_4bb7c0_8 {
    char padding_0[504];
    struct st_4bb7c0_3 *field_1f8;
    char padding_1fc[4];
    struct st_4bb7c0_3 *field_200;
} st_4bb7c0_8;

typedef struct st_4bb7c0_7 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[24];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[216];
    unsigned int field_104;
    char padding_108[144];
    struct st_4bb7c0_5 *field_198;
    char padding_19c[68];
    unsigned int field_1e0;
    char padding_1e4[36];
    unsigned int field_208;
} st_4bb7c0_7;

typedef struct st_4bb7c0_11 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[24];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[216];
    float field_104;
    char padding_108[144];
    struct st_4bb7c0_5 *field_198;
    char padding_19c[68];
    float field_1e0;
    char padding_1e4[36];
    unsigned int field_208;
} st_4bb7c0_11;

typedef struct st_4bb7c0_1 {
    unsigned int field_0;
    char padding_4[260];
    unsigned int field_108;
    char padding_10c[140];
    struct st_4bb7c0_0 *field_198;
    char padding_19c[68];
    unsigned int field_1e0;
    char padding_1e4[36];
    unsigned int field_208;
} st_4bb7c0_1;

typedef struct st_4bb7c0_0 {
    char padding_0[128];
    unsigned int field_80;
    char padding_84[260];
    unsigned int field_188;
    char padding_18c[140];
    struct st_4bb7c0_0 *field_218;
    char padding_21c[68];
    unsigned int field_260;
    char padding_264[36];
    unsigned int field_288;
} st_4bb7c0_0;

typedef struct st_4bb7c0_5 {
    char padding_0[124];
    struct st_4bb7c0_6 *field_7c;
    unsigned int field_80;
    char padding_84[260];
    unsigned int field_188;
    char padding_18c[140];
    struct st_4bb7c0_0 *field_218;
    char padding_21c[68];
    unsigned int field_260;
    char padding_264[36];
    unsigned int field_288;
} st_4bb7c0_5;

typedef struct st_4bb7c0_9 {
    struct st_4bb7c0_7 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[76];
    struct st_4bb7c0_8 *field_60;
    char padding_64[584];
    unsigned int field_2ac;
    unsigned int field_2b0;
    char padding_2b4[8];
    struct st_4bb7c0_10 *field_2bc;
    char padding_2c0[12];
    unsigned int field_2cc;
    char padding_2d0[8];
    unsigned int field_2d8;
} st_4bb7c0_9;

typedef struct st_4bb7c0_12 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4bb7c0_12;

extern char BlockStruggleThink__16CExplodingAttack;
extern unsigned int gmsgBlockStruggle;
extern st_4bb7c0_3 *g_engfuncs.pfnMessageBegin;
extern st_4bb7c0_3 *g_engfuncs.pfnMessageEnd;
extern st_4bb7c0_3 *g_engfuncs.pfnWriteByte;
extern st_4bb7c0_3 *g_engfuncs.pfnWriteShort;
extern st_4bb7c0_3 *g_engfuncs.pfnWriteLong;
extern st_4bb7c0_3 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4bb7c0_3 *g_engfuncs.pfnIndexOfEdict;
extern st_4bb7c0_12 *gpGlobals;

unsigned int ExplodeTouch__16CExplodingAttackP11CBaseEntity(st_4bb7c0_9 *a0, st_4bb7c0_10 *a1)
{
    unsigned int v5;  // eax
    st_4bb7c0_1 *v6;  // edx
    st_4bb7c0_9 *v15;  // ecx
    st_4bb7c0_11 *v16;  // edx
    st_4bb7c0_13 *v17;  // eax
    unsigned int v18;  // eax
    unsigned int v19;  // eax
    unsigned int v20;  // eax
    st_4bb7c0_1 *v7;  // eax
    st_4bb7c0_9 *v8;  // edx
    st_4bb7c0_5 *v9;  // eax
    st_4bb7c0_4 **v10;  // esi
    st_4bb7c0_9 *v11;  // edx
    st_4bb7c0_9 *v12;  // edx
    st_4bb7c0_1 *v13;  // eax
    unsigned int v0;  // [bp-0x6c]
    float v1;  // [bp-0x38]
    float v2;  // [bp-0x34]
    float v3;  // [bp-0x30]
    int v4;  // [bp-0x18]

    if (a1->field_60->field_28(a1) == 16)
        return v5;
    if (a0->field_2ac && strcmp@GLIBC_2.0(a0->field_0->field_4 + gpGlobals->field_98, "magic_attack") && a1->field_60->field_28(a1) != 15)
    {
        v5 = a0->field_60->field_200(a0);
        return v5;
    }
    if (a0->field_0->field_198 && a0->field_0->field_198)
        v6 = &a0->field_0->field_198->field_80;
    else
        v6 = NULL;
    if (a1->field_0->field_198 && a1->field_0->field_198)
        v7 = &a1->field_0->field_198->field_80;
    else
        v7 = NULL;
    if (v6 == a1->field_0)
        return v5;
    if (v7 == v6 && v6)
        return v5;
    if (a1 == a0->field_2bc && a0->field_2b0)
        return v5;
    if (!strcmp@GLIBC_2.0(a1->field_0->field_0 + gpGlobals->field_98, "rock"))
        return v5;
    if (!strcmp@GLIBC_2.0(a1->field_0->field_0 + gpGlobals->field_98, "kiblast") || !strcmp@GLIBC_2.0(a1->field_0->field_0 + gpGlobals->field_98, "scattershot"))
    {
        if (!strcmp@GLIBC_2.0(a0->field_0->field_0 + gpGlobals->field_98, "kiblast"))
        {
            return v5;
        }
        else if (!strcmp@GLIBC_2.0(a0->field_0->field_0 + gpGlobals->field_98, "scattershot"))
        {
            return v5;
        }
    }
    if (a1->field_60->field_28(a1) == 1)
    {
        v8 = a0;
        if (v8->field_2ac)
            return v5;
        if (!v8->field_2b0)
        {
            if (!a1->field_2cc)
            {
                if (!v8->field_2cc)
                {
                    if (*(float *)&a1->field_0->field_1e0 / *(float *)&v8->field_0->field_1e0 < 0.2)
                    {
                        if (!a1->field_2ac)
                        {
                            if (!a1->field_2b0)
                            {
                                CExplodingAttack::Vaporize(a1);
                                return v5;
                            }
                            return v5;
                        }
                        else
                        {
                            return v5;
                        }
                    }
                    else
                    {
                        if (*(float *)&a0->field_0->field_1e0 / *(float *)&a1->field_0->field_1e0 < 0.2)
                        {
                            CExplodingAttack::Vaporize(a0);
                            return v5;
                        }
                        if (strcmp@GLIBC_2.0(a1->field_0->field_0 + gpGlobals->field_98, "scattershot"))
                        {
                            if (strcmp@GLIBC_2.0(a0->field_0->field_0 + gpGlobals->field_98, "scattershot"))
                            {
                                if (!a1->field_2b0)
                                {
                                    CExplodingAttack::StartPowerStruggle(a0, a1);
                                    return v5;
                                }
                                return v5;
                            }
                            else
                            {
                                return v5;
                            }
                        }
                        else
                        {
                            return v5;
                        }
                    }
                }
                else
                {
                    return v5;
                }
            }
            else
            {
                return v5;
            }
        }
        else
        {
            return v5;
        }
    }
    else if (!a0->field_2b0)
    {
        if (a1->field_60->field_a0(a1) && !a0->field_2ac)
        {
            if (a1->field_4c4)
                CExplodingAttack::Vaporize(a0);
            v9 = a0->field_0->field_198;
            if (a0->field_0->field_198 || (v9 = g_engfuncs.pfnPEntityOfEntOffset(0), v9))
                v10 = v9->field_7c;
            else
                v10 = NULL;
            if (CMagicAttack::BlocksAttack(a0, a1) && !a1->field_358 && v10 && *v10->field_108 != 15)
            {
                v4 = CBasePlayer::GetPowerLevel(a1);
                v11 = a0;
                if (0.0 <= *(float *)&v11->field_0->field_1e0)
                {
                    v12 = a0;
                    v12->field_2b0 = 1;
                    v12->field_2bc = a1;
                    v13 = a1->field_0;
                    v13->field_108 = 15;
                    a1->field_358 = 1;
                    a1->field_730 = 0;
                    a1->field_780 = v12;
                    v12->field_2d8 = 0;
                    v15 = a0;
                    v15->field_c = _INSERT(v13, 0, 0) | 0xffff0000;
                    v15->field_10 = &BlockStruggleThink__16CExplodingAttack;
                    v16 = v15->field_0;
                    v17 = &v16->field_20;
                    v1 = (float)(0.10000000149011612 * *(float *)&v16->field_20);
                    v2 = (float)(0.10000000149011612 * *(float *)&v17->field_4);
                    v3 = (float)(0.10000000149011612 * *(float *)&v17->field_8);
                    *(float *)&v16->field_20 = v1;
                    *(float *)&v16->field_24 = v2;
                    *(float *)&v16->field_28 = v3;
                    *(float *)&v15->field_0->field_104 = (float)(0.1 + gpGlobals->field_0);
                    g_engfuncs.pfnMessageBegin(2, gmsgBlockStruggle, 0, 0);
                    v18 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
                    g_engfuncs.pfnWriteShort(v18);
                    v0 = g_engfuncs.pfnIndexOfEdict(a1->field_0->field_208);
                    g_engfuncs.pfnWriteShort(v0);
                    g_engfuncs.pfnMessageEnd(v0);
                    g_engfuncs.pfnMessageBegin(9, 0x33, 0, 0);
                    g_engfuncs.pfnWriteByte(9);
                    g_engfuncs.pfnWriteByte(3);
                    v19 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
                    g_engfuncs.pfnWriteShort(v19);
                    v20 = g_engfuncs.pfnIndexOfEdict(a1->field_0->field_208);
                    g_engfuncs.pfnWriteShort(v20);
                    g_engfuncs.pfnWriteLong(6);
                    g_engfuncs.pfnMessageEnd();
                    return v5;
                }
                v11->field_60->field_1f8(v11, a1, 1);
                return v5;
            }
        }
        a0->field_60->field_200(a0);
        return v5;
    }
    else
    {
        return v5;
    }
}

