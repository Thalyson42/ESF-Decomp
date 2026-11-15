// Precache__14CBurningAttack @0x94dc0 size=226
typedef struct st_494dc0_0 {
    unsigned int field_0;
} st_494dc0_0;

extern st_494dc0_0 *g_engfuncs;
extern st_494dc0_0 *g_engfuncs.pfnPrecacheSound;

int Precache__14CBurningAttack(unsigned short *a0)
{
    a0[105] = g_engfuncs("sprites/burningattackastart.spr");
    a0[106] = g_engfuncs("sprites/burningattackbstart.spr");
    a0[103] = g_engfuncs("sprites/burningattacka.spr");
    a0[104] = g_engfuncs("sprites/burningattackb.spr");
    g_engfuncs.pfnPrecacheSound("weapons/burning_fire.wav");
    g_engfuncs.pfnPrecacheSound("weapons/burning_charge.wav");
    g_engfuncs.pfnPrecacheSound("trunks/burning_charge.wav");
    g_engfuncs.pfnPrecacheSound("trunks/burning.wav");
    a0[0x66] = g_engfuncs("sprites/burningattacktrail.spr");
    return CControlledBeam::Precache(a0);
}

