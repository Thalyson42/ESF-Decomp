// Precache__14CDestructoDisc @0xaa250 size=162
typedef struct st_4aa250_0 {
    unsigned int field_0;
} st_4aa250_0;

extern st_4aa250_0 *g_engfuncs;
extern st_4aa250_0 *g_6167c4;

int Precache__14CDestructoDisc(void)
{
    g_engfuncs("sprites/null.spr");
    g_engfuncs("models/w_destructodisc.mdl");
    g_6167c4("krillin/destructodisc.wav");
    g_6167c4("krillin/destructodisc_charge.wav");
    g_6167c4("weapons/rotating.wav");
    g_6167c4("weapons/destructodisc_charge.wav");
    g_6167c4("weapons/disc_fire.wav");
    return g_6167c4("weapons/disckill.wav");
}

