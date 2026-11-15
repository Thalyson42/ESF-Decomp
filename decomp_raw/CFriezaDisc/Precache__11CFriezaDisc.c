// Precache__11CFriezaDisc @0xc0c20 size=115
typedef struct st_4c0c20_0 {
    unsigned int field_0;
} st_4c0c20_0;

extern st_4c0c20_0 *g_engfuncs;
extern st_4c0c20_0 *g_6167c4;

int Precache__11CFriezaDisc(void)
{
    g_engfuncs("models/w_friezadisc.mdl");
    g_6167c4("weapons/rotating.wav");
    g_6167c4("weapons/disc_fire.wav");
    g_6167c4("weapons/miscdisc_charge.wav");
    return g_6167c4("weapons/disckill.wav");
}

