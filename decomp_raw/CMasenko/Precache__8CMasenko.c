// Precache__8CMasenko @0xd2570 size=225
typedef struct st_4d2570_0 {
    unsigned int field_0;
} st_4d2570_0;

extern st_4d2570_0 *g_engfuncs;
extern st_4d2570_0 *g_6167c4;

int Precache__8CMasenko(unsigned short *a0)
{
    a0[103] = g_engfuncs("sprites/masenkoa.spr");
    a0[104] = g_engfuncs("sprites/masenkob.spr");
    a0[105] = g_engfuncs("sprites/masenkoastart.spr");
    a0[106] = g_engfuncs("sprites/masenkobstart.spr");
    g_engfuncs("sprites/masenkocharge.spr");
    g_6167c4("piccolo/masenko.wav");
    g_6167c4("piccolo/ha.wav");
    g_6167c4("weapons/mase_charge.wav");
    a0[0x66] = g_engfuncs("sprites/masenkotrail.spr");
    return sub_488bb0(a0);
}

