// InitHUD__18CHalfLifeMultiplayP11CBasePlayer @0xdbf90 size=1867
typedef struct st_4dbf90_8 {
    char padding_0[124];
    struct st_4dbf90_9 *field_7c;
} st_4dbf90_8;

typedef struct st_4dbf90_2 {
    char padding_0[164];
    struct st_4dbf90_3 *field_a4;
} st_4dbf90_2;

typedef struct st_4dbf90_6 {
    char padding_0[56];
    struct st_4dbf90_3 *field_38;
    char padding_3c[144];
    struct st_4dbf90_3 *field_cc;
} st_4dbf90_6;

typedef struct st_4dbf90_13 {
    struct st_4dbf90_12 *field_0;
    char padding_4[1844];
    unsigned int field_738;
    char padding_73c[584];
    unsigned int field_984;
} st_4dbf90_13;

typedef struct st_4dbf90_3 {
    unsigned int field_0;
} st_4dbf90_3;

typedef struct st_4dbf90_10 {
    char padding_0[520];
    struct st_4dbf90_8 *field_208;
} st_4dbf90_10;

typedef struct st_4dbf90_0 {
    char padding_0[421];
    char field_1a5;
    char padding_1a6[42];
    struct st_4dbf90_1 *field_1d0;
    char padding_1d4[52];
    int field_208;
} st_4dbf90_0;

typedef struct st_4dbf90_12 {
    char padding_0[356];
    float field_164;
    char padding_168[160];
    unsigned int field_208;
    unsigned int field_20c;
    char padding_210[52];
    unsigned int field_244;
} st_4dbf90_12;

typedef struct st_4dbf90_7 {
    char padding_0[68];
    struct st_4dbf90_6 *field_44;
} st_4dbf90_7;

typedef struct st_4dbf90_4 {
    struct st_4dbf90_0 *field_0;
    char padding_4[92];
    struct st_4dbf90_2 *field_60;
    char padding_64[784];
    unsigned int field_374;
} st_4dbf90_4;

typedef struct st_4dbf90_1 {
    char field_0;
} st_4dbf90_1;

typedef struct st_4dbf90_11 {
    char padding_0[100];
    unsigned int field_64;
    unsigned int field_68;
    unsigned int field_6c;
    float field_70;
    float field_74;
} st_4dbf90_11;

typedef struct st_4dbf90_9 {
    char padding_0[100];
    unsigned int field_64;
    unsigned int field_68;
    unsigned int field_6c;
    unsigned int field_70;
    unsigned int field_74;
} st_4dbf90_9;

typedef struct st_4dbf90_5 {
    char padding_0[144];
    int field_90;
    char padding_94[4];
    unsigned int field_98;
} st_4dbf90_5;

extern float allowspectator+12;
extern unsigned int g_teamplay;
extern unsigned int gmsgScoreInfo;
extern unsigned int gmsgVGUIMenu;
extern unsigned int gmsgPowerLevel;
extern unsigned int gmsgAllowSpec;
extern unsigned int gmsgSpectator;
extern unsigned int gmsgFog;
extern unsigned int g_fGameOver;
extern st_4dbf90_3 *g_engfuncs.pfnFindEntityByString;
extern st_4dbf90_3 *g_engfuncs.pfnMessageBegin;
extern st_4dbf90_3 *g_engfuncs.pfnMessageEnd;
extern st_4dbf90_3 *g_engfuncs.pfnWriteByte;
extern st_4dbf90_3 *g_engfuncs.pfnWriteShort;
extern st_4dbf90_3 *g_engfuncs.pfnWriteLong;
extern st_4dbf90_3 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4dbf90_3 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_4dbf90_3 *g_engfuncs.pfnIndexOfEdict;
extern st_4dbf90_3 *g_engfuncs.pfnGetInfoKeyBuffer;
extern st_4dbf90_3 *g_engfuncs.pfnInfoKeyValue;
extern st_4dbf90_3 *g_engfuncs.pfnGetPlayerUserId;
extern st_4dbf90_3 *g_engfuncs.pfnSequenceGet;
extern st_4dbf90_5 *gpGlobals;

unsigned int * InitHUD__18CHalfLifeMultiplayP11CBasePlayer(st_4dbf90_7 *a0, st_4dbf90_4 *a1)
{
    int v12;  // eax
    st_4dbf90_13 *v22;  // edi
    unsigned int v23;  // eax
    unsigned int v24;  // eax
    unsigned int v25;  // eax
    unsigned int v14;  // eax
    int v15;  // eax
    unsigned int v16;  // eax
    st_4dbf90_10 *v17;  // esi
    unsigned int v18;  // edi
    st_4dbf90_10 *v19;  // eax
    st_4dbf90_8 *v20;  // eax
    st_4dbf90_11 *v21;  // edi
    unsigned int v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x54]
    unsigned int v2;  // [bp-0x50]
    unsigned int v3;  // [bp-0x4c]
    unsigned int v4;  // [bp-0x44]
    unsigned int v5;  // [bp-0x40]
    unsigned int v6;  // [bp-0x3c], Other Possible Types: int
    unsigned int v7;  // [bp-0x38]
    int iter;  // [bp-0x14]
    char v9;  // [bp-0xd]
    unsigned short v10;  // [bp-0x8]
    unsigned short v11;  // [bp-0x6]

    CBasePlayer::StartObserving(a1);
    g_engfuncs.pfnMessageBegin(1, gmsgAllowSpec, 0, a1->field_0->field_208);
    v11 = __fnstcw();
    v10 = v11 | 0xc00;
    v6 = (int)allowspectator+12;
    g_engfuncs.pfnWriteByte(v6);
    g_engfuncs.pfnMessageEnd(v6);
    if (!g_teamplay)
    {
        g_engfuncs.pfnMessageBegin(1, gmsgVGUIMenu, 0, a1->field_0->field_208);
        v6 = 3;
        g_engfuncs.pfnWriteByte(v6);
        g_engfuncs.pfnMessageEnd(v6);
    }
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v4 = 0;
    if (a1->field_0->field_1d0 && *(char *)&a1->field_0->field_1d0[gpGlobals->field_98])
        v12 = &a1->field_0->field_1d0[gpGlobals->field_98];
    else
        v12 = "unconnected";
    UTIL_ClientPrintAll(1, UTIL_VarArgs("%s has joined the game\n", v12));
    if (g_teamplay)
    {
        v4 = "model";
        v14 = g_engfuncs.pfnGetInfoKeyBuffer(a1->field_0->field_208);
        v3 = g_engfuncs.pfnInfoKeyValue(v14);
        v2 = g_engfuncs.pfnSequenceGet(a1->field_0->field_208);
        v1 = g_engfuncs.pfnGetPlayerUserId(a1->field_0->field_208);
        v0 = &a1->field_0->field_1d0[gpGlobals->field_98];
        v15 = "\"%s<%i><%s><%s>\" entered the game\n";
    }
    else
    {
        v3 = g_engfuncs.pfnGetPlayerUserId(a1->field_0->field_208);
        v2 = g_engfuncs.pfnSequenceGet(a1->field_0->field_208);
        v1 = g_engfuncs.pfnGetPlayerUserId(a1->field_0->field_208);
        v0 = &a1->field_0->field_1d0[gpGlobals->field_98];
        v15 = "\"%s<%i><%s><%i>\" entered the game\n";
    }
    UTIL_LogPrintf(v15);
    a0->field_44->field_38(a0, a1);
    g_engfuncs.pfnMessageBegin(1, gmsgScoreInfo, 0, a1->field_0->field_208);
    v16 = g_engfuncs.pfnIndexOfEdict(a1->field_0->field_208);
    g_engfuncs.pfnWriteByte(v16);
    g_engfuncs.pfnWriteShort(0);
    g_engfuncs.pfnWriteShort(0);
    g_engfuncs.pfnWriteShort(0);
    g_engfuncs.pfnWriteShort(0);
    g_engfuncs.pfnWriteShort(0);
    g_engfuncs.pfnMessageEnd();
    v9 = 0;
    if (!a1->field_60->field_a4(a1))
        v9 = (a1->field_0->field_1a5 & 32) != 0;
    if (!v9)
        CHalfLifeMultiplay::SendMOTDToClient(a0, a1->field_0->field_208);
    v17 = g_engfuncs.pfnFindEntityByString(0, "classname", "fog");
    v18 = 0;
    if (!v17 || !g_engfuncs.pfnEntOffsetOfPEntity(v17))
        v18 = 1;
    if (!v18)
    {
        v19 = (!v17 ? NULL : (struct st_4dbf90_10 *)&v17->padding_0[128]);
        v20 = v19->field_208;
        if (v19->field_208 || (v20 = g_engfuncs.pfnPEntityOfEntOffset(0), v20))
            v21 = v20->field_7c;
        else
            v21 = NULL;
        g_engfuncs.pfnMessageBegin(1, gmsgFog, 0, a1->field_0->field_208);
        g_engfuncs.pfnWriteByte(v21->field_64);
        g_engfuncs.pfnWriteByte(v21->field_68);
        g_engfuncs.pfnWriteByte(v21->field_6c);
        v11 = __fnstcw();
        v10 = v11 | 0xc00;
        v6 = (int)v21->field_70;
        g_engfuncs.pfnWriteShort(v6);
        v11 = __fnstcw();
        v10 = v11 | 0xc00;
        v6 = (int)v21->field_74;
    }
    else
    {
        g_engfuncs.pfnMessageBegin(1, gmsgFog, 0, a1->field_0->field_208);
        g_engfuncs.pfnWriteByte(0);
        g_engfuncs.pfnWriteByte(0);
        g_engfuncs.pfnWriteByte(0);
        g_engfuncs.pfnWriteShort(0xffffffff);
        v6 = 0;
    }
    g_engfuncs.pfnWriteShort(v6);
    g_engfuncs.pfnMessageEnd();
    iter = 1;
    while (iter <= gpGlobals->field_90)
    {
        v22 = UTIL_PlayerByIndex(iter);
        if (v22)
        {
            g_engfuncs.pfnMessageBegin(1, gmsgScoreInfo, 0, a1->field_0->field_208);
            g_engfuncs.pfnWriteByte(iter);
            v11 = __fnstcw();
            v10 = v11 | 0xc00;
            v6 = (int)v22->field_0->field_164;
            g_engfuncs.pfnWriteShort(v6);
            g_engfuncs.pfnWriteShort(v22->field_984);
            g_engfuncs.pfnWriteShort(v22->field_738);
            g_engfuncs.pfnWriteShort(v22->field_0->field_20c);
            v23 = a0->field_44->field_cc(a0, &v22[1].padding_4[16]);
            g_engfuncs.pfnWriteShort(v23 + 1);
            g_engfuncs.pfnMessageEnd();
            g_engfuncs.pfnMessageBegin(1, gmsgPowerLevel, 0, a1->field_0->field_208);
            v24 = g_engfuncs.pfnIndexOfEdict(v22->field_0->field_208);
            g_engfuncs.pfnWriteByte(v24);
            v25 = CBasePlayer::GetPowerLevel(v22);
            g_engfuncs.pfnWriteLong(v25);
            g_engfuncs.pfnMessageEnd();
            g_engfuncs.pfnMessageBegin(1, gmsgSpectator, 0, a1->field_0->field_208);
            g_engfuncs.pfnWriteByte(iter);
            v6 = v22->field_0->field_244 != 0;
            g_engfuncs.pfnWriteByte(v6);
            g_engfuncs.pfnMessageEnd(v6);
            iter += 1;
        }
        else
        {
            iter += 1;
        }
    }
    a1->field_374 = 1;
    if (!g_fGameOver)
        return &g_fGameOver;
    g_engfuncs.pfnMessageBegin(1, 30, 0, a1->field_0->field_208);
    return g_engfuncs.pfnMessageEnd();
}

