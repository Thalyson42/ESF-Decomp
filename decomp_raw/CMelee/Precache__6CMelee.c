// Precache__6CMelee @0xd2b60 size=347
typedef struct st_4d2b60_0 {
    unsigned int field_0;
} st_4d2b60_0;

extern st_4d2b60_0 *g_engfuncs.pfnPrecacheSound;

int Precache__6CMelee(void)
{
    g_engfuncs.pfnPrecacheSound("weapons/swoophit.wav");
    g_engfuncs.pfnPrecacheSound("weapons/meleeflash.wav");
    g_engfuncs.pfnPrecacheSound("weapons/prepunch1.wav");
    g_engfuncs.pfnPrecacheSound("weapons/weakpunch.wav");
    g_engfuncs.pfnPrecacheSound("weapons/mediumpunch.wav");
    g_engfuncs.pfnPrecacheSound("weapons/strongpunch.wav");
    g_engfuncs.pfnPrecacheSound("weapons/weakkick.wav");
    g_engfuncs.pfnPrecacheSound("weapons/mediumkick.wav");
    g_engfuncs.pfnPrecacheSound("weapons/strongkick.wav");
    g_engfuncs.pfnPrecacheSound("weapons/meleemiss1.wav");
    g_engfuncs.pfnPrecacheSound("weapons/meleemiss2.wav");
    g_engfuncs.pfnPrecacheSound("weapons/meleemiss3.wav");
    g_engfuncs.pfnPrecacheSound("weapons/chainswoop.wav");
    g_engfuncs.pfnPrecacheSound("weapons/throw.wav");
    g_engfuncs.pfnPrecacheSound("weapons/spin.wav");
    g_engfuncs.pfnPrecacheSound("weapons/meleestruggleinit.wav");
    g_engfuncs.pfnPrecacheSound("weapons/meleestruggletie.wav");
    g_engfuncs.pfnPrecacheSound("weapons/swordkill.wav");
    return g_engfuncs.pfnPrecacheSound("weapons/recoverjump.wav");
}

