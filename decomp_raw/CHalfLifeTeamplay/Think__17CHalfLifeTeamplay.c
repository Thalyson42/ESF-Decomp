// Think__17CHalfLifeTeamplay @0x1278c0 size=950
typedef struct st_5278c0_4 {
    char padding_0[164];
    struct st_5278c0_1 *field_a4;
} st_5278c0_4;

typedef struct st_5278c0_1 {
    unsigned int field_0;
} st_5278c0_1;

typedef struct st_5278c0_3 {
    char padding_0[421];
    char field_1a5;
    char padding_1a6[6];
    unsigned int field_1ac;
} st_5278c0_3;

typedef struct st_5278c0_0 {
    char padding_0[68];
    unsigned int field_44;
} st_5278c0_0;

typedef struct st_5278c0_5 {
    struct st_5278c0_3 *field_0;
    char padding_4[92];
    struct st_5278c0_4 *field_60;
} st_5278c0_5;

typedef struct st_5278c0_2 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[136];
    unsigned int field_90;
} st_5278c0_2;

extern char fragsleft;
extern char timeleft;
extern float timeleft+12;
extern float allowspectator+12;
extern float characterlimit+12;
extern float fraglimit+12;
extern unsigned int gmsgAllowSpec;
extern int num_teams;
extern float flLastSBotTeamCheck.1736;
extern char _GLOBAL_OFFSET_TABLE_;
extern unsigned int g_fGameOver;
extern st_5278c0_1 *g_engfuncs.pfnMessageBegin;
extern st_5278c0_1 *g_engfuncs.pfnMessageEnd;
extern st_5278c0_1 *g_engfuncs.pfnWriteByte;
extern st_5278c0_1 *g_engfuncs.pfnCVarGetFloat;
extern st_5278c0_1 *g_engfuncs.pfnForceUnmodified;
extern st_5278c0_2 *gpGlobals;
extern int g_VoiceGameMgr;
extern unsigned int last_frags.1734;
extern int last_time.1735;
extern char BotManager+44;

double Think__17CHalfLifeTeamplay(float idx)
{
    double v10;  // 128
    double v11;  // mm7
    int v13;  // ecx
    int i;  // edx
    st_5278c0_0 *v15;  // esi
    double v16;  // 128
    double v17;  // mm7
    unsigned int v18;  // edi
    st_5278c0_5 *v19;  // esi
    int v0;  // [bp-0x58]
    int v1;  // [bp-0x54]
    st_5278c0_0 *v2;  // [bp-0x4c], Other Possible Types: int
    char v3;  // [bp-0x25]
    int v4;  // [bp-0x24]
    int v5;  // [bp-0x20]
    int v6;  // [bp-0xc]
    unsigned short v7;  // [bp-0x8]
    unsigned short v8;  // [bp-0x6]

    v5 = 0;
    if (*(float *)(*(unsigned int *)&idx + 80) != allowspectator+12)
    {
        g_engfuncs.pfnMessageBegin(2, gmsgAllowSpec, 0, 0);
        v8 = __fnstcw();
        v7 = v8 | 0xc00;
        v6 = (int)allowspectator+12;
        v2 = v6;
        g_engfuncs.pfnWriteByte(v2);
        g_engfuncs.pfnMessageEnd(v2);
        *(float *)(*(unsigned int *)&idx + 80) = allowspectator+12;
    }
    if (*(float *)(*(unsigned int *)&idx + 84) != characterlimit+12)
    {
        (*(int *)(*(int *)(*(unsigned int *)&idx + 0x44) + 56))(idx, 0);
        *(float *)(*(unsigned int *)&idx + 84) = characterlimit+12;
    }
    v10 = *(float *)&gpGlobals->field_4;
    CVoiceGameMgr::Update(&g_VoiceGameMgr, (unsigned int)(v10 >> 0));
    if (g_fGameOver)
    {
        CHalfLifeMultiplay::Think(idx);
        return v10;
    }
    g_engfuncs.pfnCVarGetFloat("mp_timelimit");
    v11 = v10 * 60.0;
    if (v11 != 0.0)
    {
        v8 = __fnstcw();
        v7 = v8 | 0xc00;
        v4 = (int)(v11 - *(float *)&gpGlobals->field_0);
    }
    else
    {
        v4 = 0;
    }
    if (v11 != 0.0 && v11 <= *(float *)&gpGlobals->field_0)
    {
        v2 = (st_5278c0_0 *)idx;
        (*(int *)(*(int *)(*(unsigned int *)&idx + 0x44) + 272))(v2);
        return v11;
    }
    if (fraglimit+12 != 0.0f)
    {
        v13 = 9999;
        i = 0;
        if (0 < num_teams)
        {
            do
            {
                if ((double)*(int *)&(&_GLOBAL_OFFSET_TABLE_)[0xffa4 + 4 * i] >= fraglimit+12)
                {
                    v15 = (st_5278c0_0 *)idx;
                    v2 = v15;
                    (*(int *)(v15->field_44 + 272))(v2);
                    return fraglimit+12;
                }
                v8 = __fnstcw();
                v7 = v8 | 0xc00;
                v6 = (int)(fraglimit+12 - (double)*(int *)&(&_GLOBAL_OFFSET_TABLE_)[0xffa4 + 4 * i]);
                if (v6 < v13)
                    v13 = v6;
                i += 1;
            } while (i < num_teams);
        }
        v5 = v13;
    }
    if (v5 != last_frags.1734)
    {
        v1 = "%i";
        v0 = UTIL_VarArgs(v1, v5);
        g_engfuncs.pfnForceUnmodified(&fragsleft, v0);
    }
    if (timeleft+12 != (double)last_time.1735)
    {
        v1 = "%i";
        v0 = UTIL_VarArgs(v1, v4);
        g_engfuncs.pfnForceUnmodified(&timeleft, v0);
    }
    last_frags.1734 = v5;
    last_time.1735 = v4;
    v16 = flLastSBotTeamCheck.1736;
    if (v16 >= *(float *)&gpGlobals->field_0)
    {
        return v16;
    }
    else if (BotManager+44)
    {
        v17 = *(float *)&gpGlobals->field_0 + 0.75;
        flLastSBotTeamCheck.1736 = (float)v17;
        v18 = 1;
        if ((int)gpGlobals->field_90 <= 0)
            return v17;
        do
        {
            v19 = UTIL_PlayerByIndex((short)v18);
            *(unsigned short *)&v1 = 0;
            *(unsigned short *)&v0 = 1;
            if ((char)UTIL_IsValidPlayer(v19, v0, v1))
            {
                v3 = 0;
                if (!v19->field_60->field_a4(v19))
                    v3 = (v19->field_0->field_1a5 & 32) != 0;
                if (!v3 && v19->field_0->field_1ac == 2)
                    (*(int *)(*(int *)(*(unsigned int *)&idx + 0x44) + 276))(idx, v19, "Good");
            }
        } while ((v18 += 1, (short)v18 <= (int)gpGlobals->field_90));
        return v17;
    }
    else
    {
        return v16;
    }
}

