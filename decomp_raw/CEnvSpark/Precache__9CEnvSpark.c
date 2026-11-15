// Precache__9CEnvSpark @0x989d0 size=131
typedef struct st_4989d0_0 {
    unsigned int field_0;
} st_4989d0_0;

extern st_4989d0_0 *g_engfuncs.pfnPrecacheSound;

int Precache__9CEnvSpark(void)
{
    g_engfuncs.pfnPrecacheSound("buttons/spark1.wav");
    g_engfuncs.pfnPrecacheSound("buttons/spark2.wav");
    g_engfuncs.pfnPrecacheSound("buttons/spark3.wav");
    g_engfuncs.pfnPrecacheSound("buttons/spark4.wav");
    g_engfuncs.pfnPrecacheSound("buttons/spark5.wav");
    return g_engfuncs.pfnPrecacheSound("buttons/spark6.wav");
}

