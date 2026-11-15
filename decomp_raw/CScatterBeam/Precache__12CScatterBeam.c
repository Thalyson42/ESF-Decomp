// Precache__12CScatterBeam @0x1103a0 size=154
typedef struct st_5103a0_0 {
    unsigned int field_0;
} st_5103a0_0;

extern st_5103a0_0 *g_engfuncs;
extern st_5103a0_0 *g_engfuncs.pfnPrecacheSound;

int Precache__12CScatterBeam(unsigned short *a0)
{
    a0[235] = g_engfuncs("sprites/scatterbeama.spr");
    a0[236] = g_engfuncs("sprites/scatterbeamb.spr");
    a0[234] = g_engfuncs("sprites/scatterbeamtrail.spr");
    g_engfuncs.pfnPrecacheSound("krillin/scatterbeamha.wav");
    g_engfuncs.pfnPrecacheSound("krillin/scatterbeamha_charge.wav");
    return g_engfuncs.pfnPrecacheSound("weapons/scatterbeam.wav");
}

