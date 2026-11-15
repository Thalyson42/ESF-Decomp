// Precache__12CScatterShot @0x111140 size=139
typedef struct st_511140_0 {
    unsigned int field_0;
} st_511140_0;

extern st_511140_0 *g_engfuncs;
extern st_511140_0 *g_engfuncs.pfnPrecacheSound;

int Precache__12CScatterShot(unsigned short *a0)
{
    a0[116] = g_engfuncs("sprites/kiblasta.spr");
    a0[117] = g_engfuncs("sprites/kiblastb.spr");
    a0[118] = g_engfuncs("sprites/kiblasttrail.spr");
    g_engfuncs.pfnPrecacheSound("weapons/kiblast.wav");
    return g_engfuncs.pfnPrecacheSound("weapons/kiplosion.wav");
}

