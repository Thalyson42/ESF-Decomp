// Precache__12CScatterBeam @0x1103a0 size=154
typedef struct st_5103a0_0 {
    unsigned int field_0;
} st_5103a0_0;

extern st_5103a0_0 *g_engfuncs;
extern st_5103a0_0 *g_6167c4;

int Precache__12CScatterBeam(unsigned short *a0)
{
    a0[235] = g_engfuncs("sprites/scatterbeama.spr");
    a0[236] = g_engfuncs("sprites/scatterbeamb.spr");
    a0[234] = g_engfuncs("sprites/scatterbeamtrail.spr");
    g_6167c4("krillin/scatterbeamha.wav");
    g_6167c4("krillin/scatterbeamha_charge.wav");
    return g_6167c4("weapons/scatterbeam.wav");
}

