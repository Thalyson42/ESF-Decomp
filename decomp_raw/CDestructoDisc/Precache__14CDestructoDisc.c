// Precache__14CDestructoDisc @0xaa250 size=162
typedef struct st_4aa250_0 {
    unsigned int field_0;
} st_4aa250_0;

extern st_4aa250_0 *g_engfuncs;
extern st_4aa250_0 *g_engfuncs.pfnPrecacheSound;

int Precache__14CDestructoDisc(void)
{
    g_engfuncs("sprites/null.spr");
    g_engfuncs("models/w_destructodisc.mdl");
    g_engfuncs.pfnPrecacheSound("krillin/destructodisc.wav");
    g_engfuncs.pfnPrecacheSound("krillin/destructodisc_charge.wav");
    g_engfuncs.pfnPrecacheSound("weapons/rotating.wav");
    g_engfuncs.pfnPrecacheSound("weapons/destructodisc_charge.wav");
    g_engfuncs.pfnPrecacheSound("weapons/disc_fire.wav");
    return g_engfuncs.pfnPrecacheSound("weapons/disckill.wav");
}

