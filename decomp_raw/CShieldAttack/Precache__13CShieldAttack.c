// Precache__13CShieldAttack @0x119630 size=115
typedef struct st_519630_0 {
    unsigned int field_0;
} st_519630_0;

extern st_519630_0 *g_engfuncs;
extern st_519630_0 *g_engfuncs.pfnPrecacheSound;

int Precache__13CShieldAttack(void)
{
    g_engfuncs("sprites/shieldattack.spr");
    g_engfuncs.pfnPrecacheSound("weapons/shield.wav");
    g_engfuncs.pfnPrecacheSound("weapons/shieldha.wav");
    g_engfuncs.pfnPrecacheSound("gohan/shield.wav");
    return g_engfuncs.pfnPrecacheSound("gohan/shield_charge.wav");
}

