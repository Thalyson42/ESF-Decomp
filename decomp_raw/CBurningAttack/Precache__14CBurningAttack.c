// Precache__14CBurningAttack @0x94dc0 size=226
typedef struct st_494dc0_0 {
    unsigned int field_0;
} st_494dc0_0;

extern st_494dc0_0 *g_engfuncs;
extern st_494dc0_0 *g_6167c4;

int Precache__14CBurningAttack(unsigned short *a0)
{
    a0[105] = g_engfuncs("sprites/burningattackastart.spr");
    a0[106] = g_engfuncs("sprites/burningattackbstart.spr");
    a0[103] = g_engfuncs("sprites/burningattacka.spr");
    a0[104] = g_engfuncs("sprites/burningattackb.spr");
    g_6167c4("weapons/burning_fire.wav");
    g_6167c4("weapons/burning_charge.wav");
    g_6167c4("trunks/burning_charge.wav");
    g_6167c4("trunks/burning.wav");
    a0[0x66] = g_engfuncs("sprites/burningattacktrail.spr");
    return sub_488bb0(a0);
}

