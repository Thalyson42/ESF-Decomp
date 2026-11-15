// InstallGameRules__Fv @0xc4de0 size=378
typedef struct st_4c4de0_0 {
    unsigned int field_0;
} st_4c4de0_0;

extern unsigned int g_teamplay;
extern st_4c4de0_0 *g_engfuncs.pfnServerCommand;
extern st_4c4de0_0 *g_engfuncs.pfnServerExecute;
extern st_4c4de0_0 *g_engfuncs.pfnCVarGetFloat;

int InstallGameRules__Fv(double a0)
{
    double v5;  // mm7
    unsigned int v0;  // [bp-0x2c]
    int v1;  // [bp-0xc]
    unsigned short v2;  // [bp-0x8]
    unsigned short v3;  // [bp-0x6]

    v0 = "exec game.cfg\n";
    g_engfuncs.pfnServerCommand(v0);
    g_engfuncs.pfnServerExecute(v0);
    g_engfuncs.pfnCVarGetFloat("mp_gamemode");
    v3 = __fnstcw();
    v2 = v3 | 0xc00;
    v1 = (int)v5;
    if (v1 == 1)
    {
        g_teamplay = 1;
        return __17CHalfLifeTeamplay(__builtin_new(612));
    }
    else if (v1 == 2)
    {
        g_teamplay = 1;
        return __30CHalfLifeCaptureTheDragonBalls(__builtin_new(668));
    }
    else
    {
        g_teamplay = 0;
        return __18CHalfLifeMultiplay(__builtin_new(88));
    }
}

