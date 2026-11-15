// Precache__6CWorld @0x13a2e0 size=1684
typedef struct st_53a2e0_6 {
    struct st_53a2e0_5 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_53a2e0_6;

typedef struct st_53a2e0_0 {
    unsigned int field_0;
} st_53a2e0_0;

typedef struct st_53a2e0_5 {
    char padding_0[260];
    float field_104;
    char padding_108[152];
    unsigned int field_1a0;
    char padding_1a4[48];
    unsigned int field_1d4;
} st_53a2e0_5;

typedef struct st_53a2e0_4 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[47];
    unsigned int field_1d0;
    char padding_1d4[36];
    float field_1f8;
} st_53a2e0_4;

typedef struct st_53a2e0_2 {
    char padding_0[96];
    struct st_53a2e0_1 *field_60;
} st_53a2e0_2;

typedef struct st_53a2e0_1 {
    char padding_0[8];
    struct st_53a2e0_0 *field_8;
} st_53a2e0_1;

typedef struct st_53a2e0_3 {
    float field_0;
    char padding_4[8];
    unsigned int field_c;
    char padding_10[136];
    unsigned int field_98;
} st_53a2e0_3;

extern char SUB_CallUseToggle__11CBaseEntity;
extern int g_pGameRules;
extern unsigned int gDecals[4];
extern unsigned int gDecals+4;
extern int g_vecZero;
extern unsigned int g_Language;
extern unsigned int gDisplayTitle;
extern st_53a2e0_0 *g_engfuncs;
extern st_53a2e0_0 *g_engfuncs.pfnPrecacheSound;
extern st_53a2e0_0 *g_engfuncs.pfnLightStyle;
extern st_53a2e0_0 *g_engfuncs.pfnDecalIndex;
extern st_53a2e0_0 *g_engfuncs.pfnCVarGetFloat;
extern st_53a2e0_0 *g_engfuncs.pfnCVarSetFloat;
extern st_53a2e0_0 *g_engfuncs.pfnCVarSetString;
extern st_53a2e0_0 *g_engfuncs.pfnAlertMessage;
extern st_53a2e0_3 *gpGlobals;
extern int WorldGraph;
extern unsigned int g_pLastSpawn;
extern st_53a2e0_2 *pSoundEnt;

unsigned int Precache__6CWorld(double a0, st_53a2e0_4 **a1)
{
    double v6;  // mm7
    unsigned int idx;  // edi
    unsigned int *v8;  // eax
    st_53a2e0_6 *v9;  // ecx
    unsigned int v0;  // [bp-0x4c]
    float v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0x48]
    unsigned int *v3;  // [bp-0x20]
    unsigned short v4;  // [bp-0x8]
    unsigned short v5;  // [bp-0x6]

    g_pLastSpawn = 0;
    g_engfuncs.pfnCVarSetString("sv_gravity", "800");
    g_engfuncs.pfnCVarSetString("sv_stepsize", "8");
    g_engfuncs.pfnCVarSetString("room_type", "0");
    if (g_pGameRules)
        __builtin_delete(g_pGameRules);
    g_pGameRules = InstallGameRules();
    pSoundEnt = GetClassPtr__H1Z9CSoundEnt_PX01_PX01(0);
    pSoundEnt->field_60->field_8(pSoundEnt);
    if (!pSoundEnt)
        g_engfuncs.pfnAlertMessage(1, "**COULD NOT CREATE SOUNDENT**\n");
    InitBodyQue__Fv();
    SENTENCEG_Init();
    TEXTURETYPE_Init();
    W_Precache();
    ClientPrecache();
    g_engfuncs.pfnPrecacheSound("common/null.wav");
    g_engfuncs.pfnCVarGetFloat("sv_language");
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    g_Language = (int)v6;
    if (g_Language == 1)
    {
        g_engfuncs("models/germangibs.mdl");
    }
    else
    {
        g_engfuncs("models/hgibs.mdl");
        g_engfuncs("models/agibs.mdl");
    }
    g_engfuncs("models/bodyparts/cell/slice.mdl");
    g_engfuncs("models/bodyparts/cell2/slice.mdl");
    g_engfuncs("models/bodyparts/evilbuu/slice.mdl");
    g_engfuncs("models/bodyparts/fatbuu/slice.mdl");
    g_engfuncs("models/bodyparts/frieza/slice.mdl");
    g_engfuncs("models/bodyparts/frieza2/slice.mdl");
    g_engfuncs("models/bodyparts/gohan/slice.mdl");
    g_engfuncs("models/bodyparts/goku/slice.mdl");
    g_engfuncs("models/bodyparts/krillin/slice.mdl");
    g_engfuncs("models/bodyparts/krillin2/slice.mdl");
    g_engfuncs("models/bodyparts/piccolo/slice.mdl");
    g_engfuncs("models/bodyparts/piccolo2/slice.mdl");
    g_engfuncs("models/bodyparts/ssjgohan/slice.mdl");
    g_engfuncs("models/bodyparts/ssjgoku/slice.mdl");
    g_engfuncs("models/bodyparts/ssjtrunks/slice.mdl");
    g_engfuncs("models/bodyparts/ssjvegeta/slice.mdl");
    g_engfuncs("models/bodyparts/trunks/slice.mdl");
    g_engfuncs("models/bodyparts/vegeta/slice.mdl");
    g_engfuncs.pfnLightStyle(0, "m");
    g_engfuncs.pfnLightStyle(1, "mmnmmommommnonmmonqnmmo");
    g_engfuncs.pfnLightStyle(2, "abcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcba");
    g_engfuncs.pfnLightStyle(3, "mmmmmaaaaammmmmaaaaaabcdefgabcdefg");
    g_engfuncs.pfnLightStyle(4, "mamamamamama");
    g_engfuncs.pfnLightStyle(5, "jklmnopqrstuvwxyzyxwvutsrqponmlkj");
    g_engfuncs.pfnLightStyle(6, "nmonqnmomnmomomno");
    g_engfuncs.pfnLightStyle(7, "mmmaaaabcdefgmmmmaaaammmaamm");
    g_engfuncs.pfnLightStyle(8, "mmmaaammmaaammmabcdefaaaammmmabcdefmmmaaaa");
    g_engfuncs.pfnLightStyle(9, "aaaaaaaazzzzzzzz");
    g_engfuncs.pfnLightStyle(10, "mmamammmmammamamaaamammma");
    g_engfuncs.pfnLightStyle(11, "abcdefghijklmnopqrrqponmlkjihgfedcba");
    g_engfuncs.pfnLightStyle(12, "mmnnmmnnnmmnn");
    g_engfuncs.pfnLightStyle(63, "a");
    idx = 0;
    v3 = &gDecals+4;
    do
    {
        v3[2 * idx] = g_engfuncs.pfnDecalIndex(gDecals[2 * idx]);
        idx += 1;
    } while (idx <= 41);
    CGraph::InitGraph(&WorldGraph);
    if (!CGraph::CheckNODFile(&WorldGraph, gpGlobals->field_c + gpGlobals->field_98))
    {
        CGraph::AllocNodes(&WorldGraph);
        goto LABEL_53a79a;
    }
    else if (!CGraph::FLoadGraph(&WorldGraph, gpGlobals->field_c + gpGlobals->field_98))
    {
        g_engfuncs.pfnAlertMessage(1, "*Error opening .NOD file\n");
        CGraph::AllocNodes(&WorldGraph);
    }
    else
    {
        g_engfuncs.pfnAlertMessage(1, "\n*Graph Loaded!\n");
LABEL_53a79a:
    }
    if (0.0 < *a1->field_1f8)
    {
        v1 = *a1->field_1f8;
        v0 = "sv_zmax";
        v8 = g_engfuncs.pfnCVarSetFloat;
    }
    else
    {
        v1 = 4096.0f;
        v0 = "sv_zmax";
        v8 = g_engfuncs.pfnCVarSetFloat;
    }
    v8(v0, v1);
    if (*a1->field_1d0)
    {
        g_engfuncs.pfnAlertMessage(2, "Chapter title: %s\n", *a1->field_1d0 + gpGlobals->field_98);
        v9 = CBaseEntity::Create("env_message", &g_vecZero, &g_vecZero, 0);
        if (v9)
        {
            v9->field_c = _INSERT(v9, 0, 0) | 0xffff0000;
            v9->field_10 = &SUB_CallUseToggle__11CBaseEntity;
            v9->field_0->field_1d4 = *a1->field_1d0;
            *a1->field_1d0 = 0;
            v9->field_0->field_104 = (float)(0.3 + gpGlobals->field_0);
            v9->field_0->field_1a0 = 1;
        }
    }
    if (*a1->field_1a0 & 1)
        v2 = 0x3f800000;
    else
        v2 = 0;
    g_engfuncs.pfnCVarSetFloat("v_dark");
    if (*a1->field_1a0 & 2)
        gDisplayTitle = 1;
    else
        gDisplayTitle = 0;
    return (!(*a1->field_1a0 & 4) ? g_engfuncs.pfnCVarSetFloat("mp_defaultteam", 0) : g_engfuncs.pfnCVarSetFloat("mp_defaultteam", 0x3f800000));
}

