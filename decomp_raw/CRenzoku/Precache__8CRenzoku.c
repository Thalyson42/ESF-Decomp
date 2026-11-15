// Precache__8CRenzoku @0x10e1c0 size=154
typedef struct st_50e1c0_0 {
    unsigned int field_0;
} st_50e1c0_0;

extern st_50e1c0_0 *g_engfuncs;
extern st_50e1c0_0 *g_6167c4;

int Precache__8CRenzoku(unsigned short *a0)
{
    a0[0xee] = g_engfuncs("sprites/kiblasta.spr");
    a0[239] = g_engfuncs("sprites/kiblastb.spr");
    a0[240] = g_engfuncs("sprites/kiblasttrail.spr");
    g_6167c4("weapons/kiblast.wav");
    g_6167c4("weapons/kiplosion.wav");
    return g_6167c4("vegeta/renzoku.wav");
}

