// Precache__12CEnvBeverage @0xb69c0 size=64
typedef struct st_4b69c0_0 {
    unsigned int field_0;
} st_4b69c0_0;

extern st_4b69c0_0 *g_engfuncs;
extern st_4b69c0_0 *g_engfuncs.pfnPrecacheSound;

int Precache__12CEnvBeverage(void)
{
    g_engfuncs("models/can.mdl");
    return g_engfuncs.pfnPrecacheSound("weapons/g_bounce3.wav");
}

