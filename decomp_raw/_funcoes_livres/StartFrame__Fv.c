// StartFrame__Fv @0xa10c0 size=160
typedef struct st_4a10c0_1 {
    unsigned int field_0;
} st_4a10c0_1;

typedef struct st_4a10c0_2 {
    char padding_0[68];
    struct st_4a10c0_0 *field_44;
} st_4a10c0_2;

typedef struct st_4a10c0_0 {
    char padding_0[8];
    struct st_4a10c0_1 *field_8;
} st_4a10c0_0;

typedef struct st_4a10c0_3 {
    char padding_0[28];
    float field_1c;
} st_4a10c0_3;

extern st_4a10c0_2 *g_pGameRules;
extern unsigned int g_ulFrameCount;
extern unsigned int g_fGameOver;
extern st_4a10c0_1 *g_engfuncs.pfnCVarGetFloat;
extern st_4a10c0_3 *gpGlobals;
extern int BotManager;

double StartFrame__Fv(void)
{
    double v3;  // mm7
    double v4;  // mm7
    unsigned short v0;  // [bp-0x8]
    unsigned short v1;  // [bp-0x6]

    CBotManager::Think(&BotManager);
    if (g_pGameRules)
        g_pGameRules->field_44->field_8(g_pGameRules);
    if (g_fGameOver)
        return v4;
    g_engfuncs.pfnCVarGetFloat("mp_gamemode");
    v1 = __fnstcw();
    v0 = v1 | 0xc00;
    gpGlobals->field_1c = (float)(int)v3;
    g_ulFrameCount = g_ulFrameCount + 1;
    return (double)(int)v3;
}

