// Precache__12CTelekinesis @0x129e40 size=115
typedef struct st_529e40_0 {
    unsigned int field_0;
} st_529e40_0;

extern st_529e40_0 *g_engfuncs;
extern st_529e40_0 *g_engfuncs.pfnPrecacheSound;

int Precache__12CTelekinesis(void)
{
    g_engfuncs("models/rocks.mdl");
    g_engfuncs.pfnPrecacheSound("weapons/telekinesis_charge.wav");
    g_engfuncs.pfnPrecacheSound("weapons/telekinesis_fire.wav");
    g_engfuncs.pfnPrecacheSound("frieza/telekinesis.wav");
    return g_engfuncs.pfnPrecacheSound("frieza/telekinesis_charge.wav");
}

