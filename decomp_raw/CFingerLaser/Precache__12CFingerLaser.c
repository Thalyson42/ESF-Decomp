// Precache__12CFingerLaser @0xbdb10 size=64
typedef struct st_4bdb10_0 {
    unsigned int field_0;
} st_4bdb10_0;

extern st_4bdb10_0 *g_engfuncs;
extern st_4bdb10_0 *g_engfuncs.pfnPrecacheSound;

int Precache__12CFingerLaser(void)
{
    g_engfuncs.pfnPrecacheSound("weapons/fingerlaser.wav");
    return g_engfuncs("sprites/fingerlaserbeam.spr");
}

