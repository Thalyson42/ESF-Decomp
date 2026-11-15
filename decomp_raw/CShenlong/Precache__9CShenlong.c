// Precache__9CShenlong @0x117fd0 size=96
typedef struct st_517fd0_0 {
    unsigned int field_0;
} st_517fd0_0;

extern st_517fd0_0 *g_engfuncs;
extern st_517fd0_0 *g_engfuncs.pfnPrecacheSound;

int Precache__9CShenlong(void)
{
    g_engfuncs("models/shenlong.mdl");
    g_engfuncs("sprites/shens_eyes.spr");
    g_engfuncs.pfnPrecacheSound("dragon/makewish1.wav");
    return g_engfuncs.pfnPrecacheSound("dragon/grantwish.wav");
}

