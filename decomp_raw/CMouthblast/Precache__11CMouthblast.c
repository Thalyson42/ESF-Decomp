// Precache__11CMouthblast @0xdb1a0 size=243
typedef struct st_4db1a0_0 {
    unsigned int field_0;
} st_4db1a0_0;

extern st_4db1a0_0 *g_engfuncs;
extern st_4db1a0_0 *g_engfuncs.pfnPrecacheSound;

int Precache__11CMouthblast(unsigned short *a0)
{
    a0[103] = g_engfuncs("sprites/mouthblasta.spr");
    a0[104] = g_engfuncs("sprites/mouthblastb.spr");
    a0[105] = g_engfuncs("sprites/mouthblastastart.spr");
    a0[106] = g_engfuncs("sprites/mouthblastbstart.spr");
    a0[0x66] = g_engfuncs("sprites/mouthblasttrail.spr");
    g_engfuncs("sprites/mouthblastcharge.spr");
    g_engfuncs.pfnPrecacheSound("buu/mouthbeam.wav");
    g_engfuncs.pfnPrecacheSound("fatbuu/mouthbeam.wav");
    g_engfuncs.pfnPrecacheSound("buu/mouthbeam_charge.wav");
    g_engfuncs.pfnPrecacheSound("fatbuu/mouthbeam_charge.wav");
    return CControlledBeam::Precache(a0);
}

