// Killed__11CBasePlayerP9entvars_si @0xf3e40 size=1581
typedef struct st_4f3e40_8 {
    char padding_0[124];
    struct st_4f3e40_6 *field_7c;
} st_4f3e40_8;

typedef struct st_4f3e40_11 {
    char padding_0[184];
    struct st_4f3e40_0 *field_b8;
} st_4f3e40_11;

typedef struct st_4f3e40_5 {
    char padding_0[26];
    unsigned short field_1a;
} st_4f3e40_5;

typedef struct st_4f3e40_6 {
    struct st_4f3e40_3 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[76];
    struct st_4f3e40_4 *field_60;
    char padding_64[744];
    unsigned int field_34c;
    unsigned int field_350;
    char padding_354[44];
    char field_380;
    char padding_381[979];
    unsigned int field_754;
    char padding_758[60];
    unsigned int field_794;
    char padding_798[372];
    char field_90c;
    char padding_90d[27];
    unsigned int field_928;
    char padding_92c[4];
    unsigned int field_930;
    char padding_934[4];
    unsigned int field_938;
    unsigned int field_93c;
    char padding_940[72];
    unsigned int field_988;
    char padding_98c[120];
    struct st_4f3e40_5 *field_a04;
    char padding_a08[840];
    struct st_4f3e40_6 *field_d50;
} st_4f3e40_6;

typedef struct st_4f3e40_0 {
    unsigned int field_0;
} st_4f3e40_0;

typedef struct st_4f3e40_4 {
    char padding_0[40];
    struct st_4f3e40_0 *field_28;
    char padding_2c[116];
    struct st_4f3e40_0 *field_a0;
    struct st_4f3e40_0 *field_a4;
    char padding_a8[296];
    struct st_4f3e40_0 *field_1d0;
    char padding_1d4[16];
    struct st_4f3e40_0 *field_1e4;
} st_4f3e40_4;

typedef struct st_4f3e40_9 {
    char padding_0[408];
    struct st_4f3e40_7 *field_198;
    char padding_19c[108];
    struct st_4f3e40_8 *field_208;
} st_4f3e40_9;

typedef struct st_4f3e40_3 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    char padding_54[4];
    unsigned int field_58;
    char padding_5c[24];
    char field_74;
    char padding_75[143];
    unsigned int field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    char field_118;
    char padding_119[3];
    unsigned int field_11c;
    unsigned int field_120;
    char padding_124[36];
    unsigned int field_148;
    char padding_14c[16];
    unsigned int field_15c;
    unsigned int field_160;
    char padding_164[12];
    unsigned int field_170;
    char padding_174[49];
    char field_1a5;
    char padding_1a6[98];
    unsigned int field_208;
    char padding_20c[8];
    unsigned int field_214;
} st_4f3e40_3;

typedef struct st_4f3e40_7 {
    char padding_0[124];
    struct st_4f3e40_6 *field_7c;
    char padding_80[420];
    char field_224;
} st_4f3e40_7;

typedef struct st_4f3e40_12 {
    char padding_0[96];
    struct st_4f3e40_11 *field_60;
} st_4f3e40_12;

typedef struct st_4f3e40_14 {
    char padding_0[28];
    unsigned int field_1c;
    char padding_20[4];
    unsigned int field_24;
    char padding_28[4];
    unsigned int field_2c;
    unsigned int field_30;
    char padding_34[72];
    unsigned int field_7c;
    char padding_80[120];
    struct st_4f3e40_5 *field_f8;
    char padding_fc[840];
    struct st_4f3e40_6 *field_444;
} st_4f3e40_14;

typedef struct st_4f3e40_1 {
    char padding_0[108];
    struct st_4f3e40_0 *field_6c;
} st_4f3e40_1;

typedef struct st_4f3e40_13 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4f3e40_13;

typedef struct st_4f3e40_2 {
    char padding_0[68];
    struct st_4f3e40_1 *field_44;
} st_4f3e40_2;

extern char PlayerDeathThink__11CBasePlayer;
extern st_4f3e40_2 *g_pGameRules;
extern unsigned int gmsgCurWeapon;
extern unsigned int gmsgHealth;
extern unsigned int gmsgSetFOV;
extern st_4f3e40_0 *g_engfuncs.pfnMessageBegin;
extern st_4f3e40_0 *g_engfuncs.pfnMessageEnd;
extern st_4f3e40_0 *g_engfuncs.pfnWriteByte;
extern st_4f3e40_0 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4f3e40_0 *g_engfuncs.pfnPEntityOfEntIndex;
extern st_4f3e40_0 *g_engfuncs.pfnRandomLong;
extern st_4f3e40_0 *g_engfuncs.pfnRandomFloat;
extern st_4f3e40_13 *gpGlobals;
extern st_4f3e40_9 *g_pevLastInflictor;
extern int ChatClass;

double Killed__11CBasePlayerP9entvars_si(st_4f3e40_6 *a0, st_4f3e40_3 *a1, unsigned int a2)
{
    unsigned int v11;  // eax
    st_4f3e40_14 *v12;  // esi
    double v21;  // mm7
    st_4f3e40_3 *v22;  // eax
    st_4f3e40_8 *v23;  // eax
    st_4f3e40_6 *v24;  // eax
    st_4f3e40_6 *v25;  // esi
    st_4f3e40_7 *v26;  // eax
    st_4f3e40_6 *v27;  // eax
    unsigned int v28;  // eax
    st_4f3e40_3 *v29;  // eax
    st_4f3e40_12 *v13;  // edx
    double v31;  // mm7
    int v14;  // eax
    unsigned int *v15;  // esi
    double v16;  // mm7
    double v17;  // mm6
    double v18;  // mm7
    unsigned int *v19;  // edx
    float *v20;  // eax
    st_4f3e40_6 *v0;  // [bp-0x98], Other Possible Types: int
    unsigned int v1;  // [bp-0x90]
    unsigned int v2;  // [bp-0x8c]
    int v3;  // [bp-0x88], Other Possible Types: unsigned int
    char v4;  // [bp-0x5a]
    char v5;  // [bp-0x59]
    st_4f3e40_6 *v6;  // [bp-0x58]
    float v7;  // [bp-0x38]
    float v8;  // [bp-0x24]
    float v9;  // [bp-0x20]
    float v10;  // [bp-0x1c]

    a0->field_34c = 0;
    a0->field_350 = 0;
    a0->field_930 = 9;
    v11 = g_engfuncs.pfnPEntityOfEntIndex(0);
    if (a1 == (!v11 ? 0 : v11 + 128) || a1 == a0->field_0)
        a0->field_794 = 1;
    g_pGameRules->field_44->field_6c(g_pGameRules, a0, a1, g_pevLastInflictor);
    v12 = &a0->field_90c;
    if (EHANDLE::__opi(v12))
    {
        v13 = EHANDLE::__rf(v12);
        v13->field_60->field_b8(v13, a0, a0, 0, 0);
        EHANDLE::__as(v12, 0);
    }
    v14 = CSoundEnt::SoundPointerForIndex(CSoundEnt::ClientSoundIndex(a0->field_0->field_208));
    if (v14)
        CSound::Reset(v14);
    CBasePlayer::RemoveSpecialModes(a0);
    v0 = a0;
    CPlayerMelee::SetAttacker(&a0->field_380, v0);
    UTIL_MakeVectors(&a0->field_0->field_74);
    v15 = &a0->field_0->field_20;
    v16 = *(float *)&a0->field_0->field_20 * *(float *)&a0->field_0->field_20 + *(float *)&v15[1] * *(float *)&v15[1] + *(float *)&v15[2] * *(float *)&v15[2];
    v17 = sqrt(v16);
    if (isnan(v17))
        sqrt(*(unsigned int *)&v16);
    else
        v16 = v17;
    v7 = (float)v16;
    if (v7 == 0.0f)
    {
        v8 = 0.0f;
        v9 = 0.0f;
        v10 = 1.0;
    }
    else
    {
        v18 = 1.0 / v7;
        v8 = (float)(v18 * *(float *)v15);
        v9 = (float)(v18 * *(float *)&v15[1]);
        v10 = (float)(v18 * *(float *)&v15[2]);
    }
    v19 = &gpGlobals->field_28;
    if (0.0 < gpGlobals->field_28 * v8 + *(float *)&v19[1] * v9 + *(float *)&v19[2] * v10)
    {
        v2 = "die_fall_down";
        v1 = 1;
        v20 = &gpGlobals->field_0;
    }
    else
    {
        v2 = "die_fall_up";
        v1 = 1;
        v20 = &gpGlobals->field_0;
    }
    *(unsigned short *)&v0 = 1;
    CPlayerMelee::AddAnimation(&a0->field_380, v0, *v20);
    a0->field_988 = 0;
    a0->field_0->field_170 = 1;
    a0->field_0->field_108 = 6;
    a0->field_0->field_11c = 0x3f800000;
    a0->field_0->field_120 = 0x3f800000;
    a0->field_754 = 0;
    a0->field_0->field_1a5 = a0->field_0->field_1a5 & 253;
    v21 = 10.0;
    if (10.0 > *(float *)&a0->field_0->field_28)
    {
        g_engfuncs.pfnRandomFloat(0, 300.0f);
        v21 = 300.0 + *(float *)&a0->field_0->field_28;
        *(float *)&a0->field_0->field_28 = (float)v21;
    }
    CBasePlayer::SetSuitUpdate(a0, 0, 0, 0);
    a0->field_928 = 0;
    g_engfuncs.pfnMessageBegin(1, gmsgHealth, 0, a0->field_0->field_208);
    v2 = a0->field_928;
    g_engfuncs.pfnWriteByte(v2);
    g_engfuncs.pfnMessageEnd(v2);
    g_engfuncs.pfnMessageBegin(1, gmsgCurWeapon, 0, a0->field_0->field_208);
    g_engfuncs.pfnWriteByte(0);
    g_engfuncs.pfnWriteByte(0xff);
    v2 = 0xff;
    g_engfuncs.pfnWriteByte(v2);
    g_engfuncs.pfnMessageEnd(v2);
    v22 = a0->field_0;
    a0->field_93c = 0;
    a0->field_938 = 0;
    v22->field_214 = 0;
    v3 = gmsgSetFOV;
    g_engfuncs.pfnMessageBegin(1, v3, 0, a0->field_0->field_208);
    v2 = 0;
    g_engfuncs.pfnWriteByte(v2);
    g_engfuncs.pfnMessageEnd(v2);
    if (g_pevLastInflictor)
    {
        v23 = g_pevLastInflictor->field_208;
        if (g_pevLastInflictor->field_208 || (v23 = g_engfuncs.pfnPEntityOfEntOffset(0), v23))
            v24 = v23->field_7c;
        else
            v24 = NULL;
        v25 = v24;
        if (v25->field_60->field_28(v25) == 14)
        {
            a0->field_0->field_10c = 0;
            *(unsigned short *)&v3 = 0;
            CBodySlice::SpawnBodySlices(a0->field_0, v3);
            a0->field_0->field_118 = a0->field_0->field_118 | 128;
            return v21;
        }
        v6 = NULL;
        if (v25->field_60->field_a0(v25))
        {
            v6 = v25;
        }
        else if (!(char)IsNull(g_pevLastInflictor->field_198))
        {
            v26 = g_pevLastInflictor->field_198;
            if (v26->field_224 & 8)
            {
                if (v26 || (v26 = g_engfuncs.pfnPEntityOfEntOffset(0), v26))
                    v27 = v26->field_7c;
                else
                    v27 = NULL;
                v6 = v27;
            }
        }
        if (v6 && v6 != a0)
        {
            v5 = 0;
            if (!v6->field_60->field_a4(v6))
                v5 = (v6->field_0->field_1a5 & 32) != 0;
            if (v5)
            {
                v28 = g_engfuncs.pfnRandomLong(1, 100);
                if ((int)v28 <= v6->field_a04->field_1a)
                    CChatClass::LetBotTaunt(&ChatClass, v6, a0);
            }
            v4 = 0;
            if (!a0->field_60->field_a4(a0))
                v4 = (a0->field_0->field_1a5 & 32) != 0;
            if (v4)
                a0->field_d50 = v6;
        }
    }
    if ((-40.0 <= *(float *)&a0->field_0->field_160 || a2 == 1) && a2 != 2)
    {
        a0->field_60->field_1e4(a0);
        a0->field_0->field_50 = 0;
        a0->field_0->field_58 = 0;
        *(float *)&a0->field_0->padding_14c[0] = 255.0f;
        a0->field_0->field_148 = 2;
        v29 = a0->field_0;
        v29->field_15c = 0;
        a0->field_c = _INSERT(v29, 0, 0) | 0xffff0000;
        a0->field_10 = &PlayerDeathThink__11CBasePlayer;
        v31 = 0.1 + gpGlobals->field_0;
        *(float *)&a0->field_0->field_104 = (float)v31;
        return v31;
    }
    a0->field_0->field_10c = 0;
    a0->field_60->field_1d0(a0);
    a0->field_0->field_118 = a0->field_0->field_118 | 128;
    return -40.0;
}

