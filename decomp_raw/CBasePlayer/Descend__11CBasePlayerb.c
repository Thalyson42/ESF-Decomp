// Descend__11CBasePlayerb @0xf16d0 size=1041
typedef struct st_4f16d0_7 {
    float field_0;
    float field_4;
    float field_8;
    unsigned int field_c;
} st_4f16d0_7;

typedef struct st_4f16d0_4 {
    struct st_4f16d0_0 *field_0;
    char padding_4[584];
    int field_24c;
    char padding_250[224];
    unsigned int field_330;
    char padding_334[8];
    unsigned int field_33c;
    char padding_340[48];
    float field_370;
    char padding_374[4];
    unsigned int field_378;
    char padding_37c[848];
    unsigned int field_6cc;
    char padding_6d0[116];
    int field_744;
    int field_748;
    unsigned int field_74c;
    char padding_750[20];
    struct st_4f16d0_3 *field_764;
    char padding_768[4];
    int field_76c;
    unsigned int field_770;
} st_4f16d0_4;

typedef struct st_4f16d0_2 {
    unsigned int field_0;
} st_4f16d0_2;

typedef struct st_4f16d0_0 {
    char padding_0[352];
    unsigned int field_160;
    char padding_164[164];
    int field_208;
} st_4f16d0_0;

typedef struct st_4f16d0_1 {
    char padding_0[12];
    struct st_4f16d0_2 *field_c;
    struct st_4f16d0_2 *field_10;
    char padding_14[12];
    struct st_4f16d0_2 *field_20;
    struct st_4f16d0_2 *field_24;
    struct st_4f16d0_2 *field_28;
    struct st_4f16d0_2 *field_2c;
    struct st_4f16d0_2 *field_30;
    char padding_34[4];
    struct st_4f16d0_2 *field_38;
} st_4f16d0_1;

typedef struct st_4f16d0_3 {
    char padding_0[4];
    struct st_4f16d0_1 *field_4;
} st_4f16d0_3;

typedef struct st_4f16d0_5 {
    char padding_0[240];
    struct st_4f16d0_2 *field_f0;
} st_4f16d0_5;

typedef struct st_4f16d0_6 {
    char padding_0[68];
    struct st_4f16d0_5 *field_44;
} st_4f16d0_6;

extern st_4f16d0_6 *g_pGameRules;
extern unsigned int gmsgPowerupFX;
extern unsigned int gmsgTransform;
extern st_4f16d0_7 g_vecAuraColor;
extern st_4f16d0_2 *g_engfuncs.pfnMessageBegin;
extern st_4f16d0_2 *g_engfuncs.pfnMessageEnd;
extern st_4f16d0_2 *g_engfuncs.pfnWriteByte;
extern st_4f16d0_2 *g_engfuncs.pfnWriteLong;
extern st_4f16d0_2 *g_engfuncs.pfnIndexOfEdict;

st_4f16d0_3 * Descend__11CBasePlayerb(st_4f16d0_4 *a0, char a1)
{
    st_4f16d0_3 *v8;  // eax
    st_4f16d0_3 *v9;  // esi
    st_4f16d0_3 *v10;  // eax
    double v11;  // mm0
    int v12;  // eax
    unsigned int v13;  // eax
    st_4f16d0_7 *v14;  // edx
    unsigned int v15;  // eax
    float v0;  // [bp-0x34]
    st_4f16d0_3 *v1;  // [bp-0x30]
    float v2;  // [bp-0x2c]
    float v3;  // [bp-0x28]
    float v4;  // [bp-0x24]
    unsigned short v5;  // [bp-0xc]
    unsigned short v6;  // [bp-0xa]
    int v7;  // [bp-0x8]

    if (a0->field_770)
    {
        v8 = CBasePlayer::StopAscending(a0);
        if (a0->field_6cc != 1)
            return v8;
        a0->field_6cc = 0;
        return v8;
    }
    else
    {
        v9 = a0->field_764->field_4->field_24(a0->field_764);
        if (!v9)
            return v9;
        v10 = a0->field_764->field_4->field_20(a0->field_764);
        if (!v10 && !a0->field_770)
            return v10;
        v1 = a0->field_764;
        a0->field_764 = v9;
        if (a1)
        {
            if (a0->field_33c)
            {
                a0->field_378 = 1;
            }
            else
            {
                CBasePlayer::RemoveAllWeapons(a0, 0);
                a0->field_764->field_4->field_30(a0->field_764);
                CBasePlayer::SelectLastItem(a0);
            }
        }
        CBaseClass::SetModel(a0->field_764);
        v1->field_4->field_2c(v1);
        v6 = __fnstcw();
        v5 = v6 | 0xc00;
        v7 = (int)((double)a0->field_748 / v11);
        CBasePlayer::SetMaxPowerLevel(a0, v7);
        if (5.0 < *(float *)&a0->field_0->field_160 || a0->field_744 > v7)
            CBasePlayer::SetPowerLevel(a0, v7);
        v1->field_4->field_2c(v1);
        a0->field_370 = (float)(a0->field_370 / 5.0);
        v0 = (float)(*(float *)&a0->field_0->field_160 / (double)a0->field_24c);
        v12 = a0->field_764->field_4->field_10(a0->field_764);
        a0->field_24c = v12;
        CBasePlayer::SetMaxHealth(a0, v12);
        v6 = __fnstcw();
        v5 = v6 | 0xc00;
        v7 = (int)((double)a0->field_24c * v0);
        if (v7 <= 0)
            a0->field_0->field_160 = 0x3f800000;
        else
            *(float *)&a0->field_0->field_160 = (float)v7;
        a0->field_74c = a0->field_764->field_4->field_c(a0->field_764);
        g_pGameRules->field_44->field_f0(g_pGameRules);
        g_engfuncs.pfnMessageBegin(1, gmsgTransform, 0, a0->field_0->field_208);
        g_engfuncs.pfnWriteByte(0);
        v13 = a0->field_764->field_4->field_28(a0->field_764);
        g_engfuncs.pfnWriteLong(v13);
        g_engfuncs.pfnMessageEnd();
        EMIT_SOUND_DYN(a0->field_0->field_208, 1, "weapons/descend.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        if (a0->field_76c)
            CAura::SetColor(a0->field_76c);
        if (!a0->field_330)
            return __builtin_delete(v1);
        v14 = &(&g_vecAuraColor.field_0)[3 * a0->field_764->field_4->field_38(a0->field_764)];
        v2 = v14->field_0;
        v3 = v14->field_4;
        v4 = v14->field_8;
        g_engfuncs.pfnMessageBegin(4, gmsgPowerupFX, &a0->field_0->padding_0[8], 0);
        v15 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
        g_engfuncs.pfnWriteByte(v15);
        v6 = __fnstcw();
        v5 = v6 | 0xc00;
        v7 = (int)v2;
        g_engfuncs.pfnWriteByte(v7);
        v6 = __fnstcw();
        v5 = v6 | 0xc00;
        v7 = (int)v3;
        g_engfuncs.pfnWriteByte(v7);
        v6 = __fnstcw();
        v5 = v6 | 0xc00;
        v7 = (int)v4;
        g_engfuncs.pfnWriteByte(v7);
        g_engfuncs.pfnMessageEnd();
        return __builtin_delete(v1);
    }
}

