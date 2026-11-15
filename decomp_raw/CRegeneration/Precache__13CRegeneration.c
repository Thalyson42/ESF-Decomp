// Precache__13CRegeneration @0x10dd00 size=47
typedef struct st_50dd00_0 {
    unsigned int field_0;
} st_50dd00_0;

extern st_50dd00_0 *g_engfuncs.pfnPrecacheSound;

int Precache__13CRegeneration(void)
{
    return g_engfuncs.pfnPrecacheSound("weapons/regen.wav");
}

