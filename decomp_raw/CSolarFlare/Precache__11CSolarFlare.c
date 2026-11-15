// Precache__11CSolarFlare @0x11a2f0 size=116
typedef struct st_51a2f0_0 {
    unsigned int field_0;
} st_51a2f0_0;

extern st_51a2f0_0 *g_engfuncs.pfnPrecacheSound;

int Precache__11CSolarFlare(void)
{
    g_engfuncs.pfnPrecacheSound("goku/solarflare.wav");
    g_engfuncs.pfnPrecacheSound("cell/solarflare.wav");
    g_engfuncs.pfnPrecacheSound("cell2/solarflare.wav");
    g_engfuncs.pfnPrecacheSound("krillin/solarflare.wav");
    return g_engfuncs.pfnPrecacheSound("weapons/solarflare.wav");
}

