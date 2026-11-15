// Precache__11CFinalFlash @0xbd430 size=243
typedef struct st_4bd430_0 {
    unsigned int field_0;
} st_4bd430_0;

extern st_4bd430_0 *g_engfuncs;
extern st_4bd430_0 *g_6167c4;

int Precache__11CFinalFlash(unsigned short *a0)
{
    a0[103] = g_engfuncs("sprites/finalflasha.spr");
    a0[104] = g_engfuncs("sprites/finalflashb.spr");
    a0[105] = g_engfuncs("sprites/finalflashastart.spr");
    a0[106] = g_engfuncs("sprites/finalflashbstart.spr");
    g_engfuncs("sprites/finalflashcharge.spr");
    g_6167c4("vegeta/finalflash.wav");
    g_6167c4("vegeta/finalflash_charge.wav");
    g_6167c4("weapons/finalflash.wav");
    g_6167c4("weapons/finalflash_charge.wav");
    a0[0x66] = g_engfuncs("sprites/finalflashtrail.spr");
    return sub_488bb0(a0);
}

