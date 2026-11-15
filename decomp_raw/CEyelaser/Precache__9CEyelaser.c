// Precache__9CEyelaser @0xbc640 size=82
typedef struct st_4bc640_0 {
    unsigned int field_0;
} st_4bc640_0;

extern st_4bc640_0 *g_engfuncs;
extern st_4bc640_0 *g_engfuncs.pfnPrecacheSound;

int Precache__9CEyelaser(void)
{
    g_engfuncs("sprites/eyelaser.spr");
    g_engfuncs.pfnPrecacheSound("weapons/melt.wav");
    return g_engfuncs.pfnPrecacheSound("weapons/eyebeam_fire.wav");
}

