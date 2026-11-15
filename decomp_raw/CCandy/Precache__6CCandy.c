// Precache__6CCandy @0x99d10 size=113
typedef struct st_499d10_0 {
    unsigned int field_0;
} st_499d10_0;

extern st_499d10_0 *g_engfuncs;
extern st_499d10_0 *g_engfuncs.pfnPrecacheSound;

int Precache__6CCandy(void)
{
    g_engfuncs("models/chocolate.mdl");
    g_engfuncs("models/cookie.mdl");
    g_engfuncs("models/donut.mdl");
    g_engfuncs.pfnPrecacheSound("buu/candyeat.wav");
    return g_engfuncs.pfnPrecacheSound("fatbuu/candyeat.wav");
}

