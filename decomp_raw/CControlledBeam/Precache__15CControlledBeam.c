// Precache__15CControlledBeam @0xa74b0 size=65
typedef struct st_4a74b0_0 {
    unsigned int field_0;
} st_4a74b0_0;

extern st_4a74b0_0 *g_engfuncs.pfnPrecacheSound;

int Precache__15CControlledBeam(void)
{
    g_engfuncs.pfnPrecacheSound("weapons/beamhead.wav");
    return g_engfuncs.pfnPrecacheSound("weapons/beamfire.wav");
}

