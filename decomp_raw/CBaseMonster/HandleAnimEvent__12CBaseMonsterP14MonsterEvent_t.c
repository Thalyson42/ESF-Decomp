// HandleAnimEvent__12CBaseMonsterP14MonsterEvent_t @0xd87e0 size=824
typedef struct st_4d87e0_0 {
    unsigned int field_0;
    char padding_4[348];
    unsigned int field_160;
    char padding_164[12];
    unsigned int field_170;
    char padding_174[49];
    char field_1a5;
    char padding_1a6[10];
    unsigned int field_1b0;
    char padding_1b4[84];
    unsigned int field_208;
} st_4d87e0_0;

typedef struct st_4d87e0_2 {
    struct st_4d87e0_0 *field_0;
    char padding_4[380];
    unsigned int field_180;
    char padding_184[288];
    int field_2a4;
} st_4d87e0_2;

typedef struct st_4d87e0_1 {
    struct st_4d87e0_0 *field_0;
    int field_4;
} st_4d87e0_1;

typedef struct st_4d87e0_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4d87e0_4;

typedef struct st_4d87e0_3 {
    unsigned int field_0;
} st_4d87e0_3;

extern st_4d87e0_3 *g_engfuncs.pfnAlertMessage;
extern st_4d87e0_3 *g_engfuncs.pfnRandomLong;
extern st_4d87e0_4 *gpGlobals;

st_4d87e0_0 * HandleAnimEvent__12CBaseMonsterP14MonsterEvent_t(st_4d87e0_2 *a0, st_4d87e0_1 *a1)
{
    st_4d87e0_0 *v6;  // eax
    st_4d87e0_0 *v7;  // eax
    st_4d87e0_0 *v11;  // eax
    int v12;  // eax
    unsigned int v0;  // [bp-0x38]
    int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    float v3;  // [bp-0x2c]
    unsigned int v4;  // [bp-0x28]
    unsigned int v5;  // [bp-0x24]

    v6 = a1->field_0;
    switch (v6)
    {
    case 1005:
        return SENTENCEG_PlayRndSz(a0->field_0->field_208, a1->field_4, 0x3f800000, 2.0f, 0, 100);
    default:
        if (v6 <= 0x3ed)
        {
            if (v6 != 0x3ea)
            {
                if (v6 <= 0x3ea)
                {
                    if (v6 == 0x3e8)
                    {
                        if (a0->field_180 != 6)
                            return v7;
                        a0->field_0->field_170 = 1;
                        v7 = a0->field_0;
                        v7->field_160 = 0;
                        return v7;
                    }
                    else if (v6 == 0x3e9)
                    {
                        if (a0->field_2a4)
                        {
                            v4 = 0;
                            return CCineMonster::AllowInterrupt(a0->field_2a4);
                        }
                        return v6;
                    }
                }
                else
                {
                    if (v6 == 0x3eb)
                    {
                        return FireTargets(a1->field_4, a0, a0, 3, 0);
                    }
                    else if (v6 == 0x3ec)
                    {
                        v5 = 100;
                        v4 = 0;
                        v3 = 2.0f;
                        v2 = 0x3f800000;
                        v1 = a1->field_4;
                        v0 = 4;
                        return EMIT_SOUND_DYN(a0->field_0->field_208);
                    }
                }
            }
            else
            {
                if (a0->field_2a4)
                {
                    v4 = 1;
                    return CCineMonster::AllowInterrupt(a0->field_2a4);
                }
                return v6;
            }
        }
        else
        {
            if (v6 == 0x3f2)
            {
                if (a0->field_180 != 6)
                    return v6;
                a0->field_0->field_170 = 0;
                *(float *)&a0->field_0->field_160 = *(float *)&a0->field_0->field_1b0;
                return v6;
            }
            else if (v6 <= 0x3f2)
            {
                if (v6 == 0x3f0)
                {
                    v5 = 100;
                    v4 = 0;
                    v3 = 2.0f;
                    v2 = 0x3f800000;
                    v1 = a1->field_4;
                    v0 = 2;
                    return EMIT_SOUND_DYN(a0->field_0->field_208);
                }
                else if (v6 == 0x3f1)
                {
                    v11 = g_engfuncs.pfnRandomLong(0, 2);
                    if (!v11)
                        return v11;
                    return SENTENCEG_PlayRndSz(a0->field_0->field_208, a1->field_4, 0x3f800000, 2.0f, 0, 100);
                }
            }
            else
            {
                if (v6 != 0x7d2)
                {
                    if (v6 <= 0x7d2)
                    {
                        if (v6 == 0x7d1)
                        {
                            if (!(a0->field_0->field_1a5 & 2))
                            {
                                return a0->field_0;
                            }
                            else if (!g_engfuncs.pfnRandomLong(0, 1))
                            {
                                v5 = 100;
                                v4 = 0;
                                v3 = 0.800000011920929f;
                                v2 = 0x3f800000;
                                v1 = "common/bodydrop3.wav";
                                v0 = 4;
                                return EMIT_SOUND_DYN(a0->field_0->field_208);
                            }
                            else
                            {
                                v5 = 100;
                                v4 = 0;
                                v3 = 0.800000011920929f;
                                v2 = 0x3f800000;
                                v1 = "common/bodydrop4.wav";
                                v0 = 4;
                                return EMIT_SOUND_DYN(a0->field_0->field_208);
                            }
                        }
                    }
                    else
                    {
                        if (v6 == 0x7da)
                        {
                            v5 = 100;
                            v4 = 0;
                            v3 = 0.800000011920929f;
                            v2 = 0x3f800000;
                            v1 = "zombie/claw_miss2.wav";
                            v0 = 4;
                            return EMIT_SOUND_DYN(a0->field_0->field_208);
                        }
                    }
                }
                else
                {
                    if (a0->field_0->field_1a5 & 2)
                    {
                        if (!g_engfuncs.pfnRandomLong(0, 1))
                        {
                            v5 = 90;
                            v4 = 0;
                            v3 = 0.800000011920929f;
                            v2 = 0x3f800000;
                            v12 = "common/bodydrop3.wav";
                        }
                        else
                        {
                            v5 = 90;
                            v4 = 0;
                            v3 = 0.800000011920929f;
                            v2 = 0x3f800000;
                            v12 = "common/bodydrop4.wav";
                        }
                        return EMIT_SOUND_DYN(a0->field_0->field_208, 4, v12);
                    }
                    else
                    {
                        return a0->field_0;
                    }
                }
            }
        }
        return g_engfuncs.pfnAlertMessage(2, "Unhandled animation event %d for %s\n", a1->field_0, a0->field_0->field_0 + gpGlobals->field_98);
    }
}

