// Precache__12CFingerLaser @0xbdb10 size=64
typedef struct st_4bdb10_0 {
    unsigned int field_0;
} st_4bdb10_0;

extern st_4bdb10_0 *g_engfuncs;
extern st_4bdb10_0 *g_6167c4;

int Precache__12CFingerLaser(void)
{
    g_6167c4("weapons/fingerlaser.wav");
    return g_engfuncs("sprites/fingerlaserbeam.spr");
}

