// Precache__16CFinishingBuster @0xbebb0 size=154
typedef struct st_4bebb0_0 {
    unsigned int field_0;
} st_4bebb0_0;

extern st_4bebb0_0 *g_engfuncs;
extern st_4bebb0_0 *g_6167c4;

int Precache__16CFinishingBuster(unsigned short *a0)
{
    a0[234] = g_engfuncs("sprites/finishingbustera.spr");
    a0[235] = g_engfuncs("sprites/finishingbusterb.spr");
    a0[236] = g_engfuncs("sprites/finishingbustertrail.spr");
    g_6167c4("weapons/buster_fire.wav");
    g_6167c4("trunks/buster.wav");
    return g_6167c4("trunks/buster_charge.wav");
}

