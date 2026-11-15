// ClientDisconnected__18CHalfLifeMultiplayP7edict_s @0xdc6e0 size=642
typedef struct st_4dc6e0_1 {
    char padding_0[124];
    struct st_4dc6e0_0 *field_7c;
} st_4dc6e0_1;

typedef struct st_4dc6e0_0 {
    struct st_4dc6e0_0 *field_0;
    char padding_4[460];
    unsigned int field_1d0;
    char padding_1d4[52];
    unsigned int field_208;
    char padding_20c[56];
    unsigned int field_244;
} st_4dc6e0_0;

typedef struct st_4dc6e0_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4dc6e0_3;

typedef struct st_4dc6e0_2 {
    unsigned int field_0;
} st_4dc6e0_2;

extern unsigned int g_teamplay;
extern unsigned int gmsgSpectator;
extern st_4dc6e0_2 *g_engfuncs.pfnMessageBegin;
extern st_4dc6e0_2 *g_engfuncs.pfnMessageEnd;
extern st_4dc6e0_2 *g_engfuncs.pfnWriteByte;
extern st_4dc6e0_2 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_4dc6e0_2 *g_engfuncs.pfnIndexOfEdict;
extern st_4dc6e0_2 *g_engfuncs.pfnGetInfoKeyBuffer;
extern st_4dc6e0_2 *g_engfuncs.pfnInfoKeyValue;
extern st_4dc6e0_2 *g_engfuncs.pfnGetPlayerUserId;
extern st_4dc6e0_2 *g_engfuncs.pfnSequenceGet;
extern st_4dc6e0_3 *gpGlobals;

st_4dc6e0_0 * ClientDisconnected__18CHalfLifeMultiplayP7edict_s(unsigned int a0, st_4dc6e0_1 *a1)
{
    unsigned int v7;  // eax
    int v8;  // eax
    unsigned int v9;  // eax
    st_4dc6e0_0 *v10;  // esi
    unsigned int *v11;  // eax
    unsigned int v12;  // edi
    unsigned int v13;  // edi
    st_4dc6e0_0 *v14;  // eax
    unsigned int v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x54]
    unsigned int v2;  // [bp-0x50]
    unsigned int v3;  // [bp-0x4c]
    unsigned int v4;  // [bp-0x44]
    unsigned int v5;  // [bp-0xc]
    st_4dc6e0_0 *v6;  // [bp-0x8]

    if (!a1)
        return v14;
    v6 = a1->field_7c;
    if (!v6)
        return v6;
    FireTargets("game_playerleave", v6, v6, 3, 0);
    if (g_teamplay)
    {
        v4 = "model";
        v7 = g_engfuncs.pfnGetInfoKeyBuffer(v6->field_0->field_208);
        v3 = g_engfuncs.pfnInfoKeyValue(v7);
        v2 = g_engfuncs.pfnSequenceGet(v6->field_0->field_208);
        v1 = g_engfuncs.pfnGetPlayerUserId(v6->field_0->field_208);
        v0 = v6->field_0->field_1d0 + gpGlobals->field_98;
        v8 = "\"%s<%i><%s><%s>\" disconnected\n";
    }
    else
    {
        v3 = g_engfuncs.pfnGetPlayerUserId(v6->field_0->field_208);
        v2 = g_engfuncs.pfnSequenceGet(v6->field_0->field_208);
        v1 = g_engfuncs.pfnGetPlayerUserId(v6->field_0->field_208);
        v0 = v6->field_0->field_1d0 + gpGlobals->field_98;
        v8 = "\"%s<%i><%s><%i>\" disconnected\n";
    }
    UTIL_LogPrintf(v8);
    CBasePlayer::RemoveAllItems(v6, 1);
    g_engfuncs.pfnMessageBegin(2, gmsgSpectator, 0, 0);
    v9 = g_engfuncs.pfnIndexOfEdict(a1);
    g_engfuncs.pfnWriteByte(v9);
    g_engfuncs.pfnWriteByte(0);
    g_engfuncs.pfnMessageEnd();
    v10 = NULL;
    while (1)
    {
        v10 = UTIL_FindEntityByClassname(v10, "player");
        if (!v10)
            return v10;
        v11 = v10->field_0;
        v12 = 0;
        if (!v11[130] || (v11 = g_engfuncs.pfnEntOffsetOfPEntity(v11[130]), !v11))
            v12 = 1;
        if (v12)
        {
            return v11;
        }
        else if (v10->field_0 && v10 != v6)
        {
            v13 = &v10[3].padding_4[172];
            if (EHANDLE::__opP11CBaseEntity(v13) == v6)
            {
                v5 = v10->field_0->field_244;
                v10->field_0->field_244 = 0;
                EHANDLE::__as(v13, 0);
                CBasePlayer::Spectator_SetMode(v10, v5);
            }
        }
    }
}

