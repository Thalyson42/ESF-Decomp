// Precache__5CBean @0x1176a0 size=64
typedef struct st_5176a0_0 {
    unsigned int field_0;
} st_5176a0_0;

extern st_5176a0_0 *g_engfuncs;
extern st_5176a0_0 *g_engfuncs.pfnPrecacheSound;

int Precache__5CBean(void)
{
    g_engfuncs("models/w_sensubean.mdl");
    return g_engfuncs.pfnPrecacheSound("weapons/sensu.wav");
}

