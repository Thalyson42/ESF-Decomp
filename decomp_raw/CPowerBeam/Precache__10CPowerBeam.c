// Precache__10CPowerBeam @0x10cdc0 size=225
typedef struct st_50cdc0_0 {
    unsigned int field_0;
} st_50cdc0_0;

extern st_50cdc0_0 *g_engfuncs;
extern st_50cdc0_0 *g_6167c4;

int Precache__10CPowerBeam(unsigned short *a0)
{
    a0[103] = g_engfuncs("sprites/masenkoa.spr");
    a0[104] = g_engfuncs("sprites/masenkob.spr");
    a0[105] = g_engfuncs("sprites/masenkoastart.spr");
    a0[106] = g_engfuncs("sprites/masenkobstart.spr");
    g_engfuncs("sprites/masenkocharge.spr");
    g_6167c4("gohan/powerbeam.wav");
    g_6167c4("gohan/powerbeamha.wav");
    g_6167c4("weapons/mase_charge.wav");
    a0[0x66] = g_engfuncs("sprites/masenkotrail.spr");
    return sub_488bb0(a0);
}

