// Precache__11CFriezaDisc @0xc0c20 size=115
typedef struct st_4c0c20_0 {
    unsigned int field_0;
} st_4c0c20_0;

extern st_4c0c20_0 *g_engfuncs;
extern st_4c0c20_0 *g_engfuncs.pfnPrecacheSound;

int Precache__11CFriezaDisc(void)
{
    g_engfuncs("models/w_friezadisc.mdl");
    g_engfuncs.pfnPrecacheSound("weapons/rotating.wav");
    g_engfuncs.pfnPrecacheSound("weapons/disc_fire.wav");
    g_engfuncs.pfnPrecacheSound("weapons/miscdisc_charge.wav");
    return g_engfuncs.pfnPrecacheSound("weapons/disckill.wav");
}

