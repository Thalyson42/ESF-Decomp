// ClientDisconnect__FP7edict_s @0x9f470 size=416
typedef struct st_49f470_1 {
    unsigned int field_0;
} st_49f470_1;

typedef struct st_49f470_0 {
    char padding_0[516];
    struct st_49f470_1 *field_204;
} st_49f470_0;

typedef struct st_49f470_3 {
    char padding_0[124];
    struct st_49f470_2 *field_7c;
    char field_80;
    char padding_81[7];
    char field_88;
    char padding_89[259];
    unsigned int field_18c;
    char padding_190[92];
    unsigned int field_1ec;
    char padding_1f0[96];
    unsigned int field_250;
} st_49f470_3;

typedef struct st_49f470_2 {
    char padding_0[96];
    struct st_49f470_0 *field_60;
} st_49f470_2;

typedef struct st_49f470_5 {
    char padding_0[52];
    struct st_49f470_1 *field_34;
} st_49f470_5;

typedef struct st_49f470_4 {
    char padding_0[152];
    unsigned int field_98;
} st_49f470_4;

typedef struct st_49f470_6 {
    char padding_0[68];
    struct st_49f470_5 *field_44;
} st_49f470_6;

extern st_49f470_6 *g_pGameRules;
extern unsigned int gmsgSayText;
extern unsigned int g_fGameOver;
extern st_49f470_1 *g_engfuncs.pfnMessageBegin;
extern st_49f470_1 *g_engfuncs.pfnMessageEnd;
extern st_49f470_1 *g_engfuncs.pfnWriteByte;
extern st_49f470_1 *g_engfuncs.pfnWriteString;
extern st_49f470_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_49f470_1 *g_engfuncs.pfnIndexOfEdict;
extern st_49f470_4 *gpGlobals;
extern int BotManager;

unsigned int * ClientDisconnect__FP7edict_s(st_49f470_3 *a0)
{
    st_49f470_3 *v1;  // eax
    st_49f470_2 *v2;  // esi
    unsigned int v3;  // eax
    int v4;  // eax
    st_49f470_3 *v5;  // eax
    char v0;  // [bp-0x104]

    if (g_fGameOver)
        return &g_fGameOver;
    CBotManager::DisconnectPlayer(&BotManager, a0);
    v1 = a0;
    if (v1 || (v1 = g_engfuncs.pfnPEntityOfEntOffset(0), v1))
        v2 = v1->field_7c;
    else
        v2 = NULL;
    CBasePlayer::SetPowerLevel(v2, 0);
    CBasePlayer::SetMaxPowerLevel(v2, 0);
    v2->field_60->field_204(v2);
    CBasePlayer::RemoveSpecialModes(v2);
    sprintf@GLIBC_2.0(&v0, "- %s has left the game\n", a0->field_250 + gpGlobals->field_98);
    g_engfuncs.pfnMessageBegin(2, gmsgSayText, 0, 0);
    v3 = g_engfuncs.pfnIndexOfEdict(a0);
    g_engfuncs.pfnWriteByte(v3);
    g_engfuncs.pfnWriteString(&v0);
    g_engfuncs.pfnMessageEnd();
    v4 = CSoundEnt::SoundPointerForIndex(CSoundEnt::ClientSoundIndex(a0));
    if (v4)
        CSound::Reset(v4);
    v5 = a0;
    v5->field_1ec = 0;
    v5->field_18c = 0;
    UTIL_SetOrigin(&a0->field_80, &v5->field_88);
    return g_pGameRules->field_44->field_34(g_pGameRules, a0);
}

