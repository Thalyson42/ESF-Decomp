// Precache__11CKamehameha @0xc94f0 size=375
typedef struct st_4c94f0_0 {
    unsigned int field_0;
} st_4c94f0_0;

extern st_4c94f0_0 *g_engfuncs;
extern st_4c94f0_0 *g_engfuncs.pfnPrecacheSound;

int Precache__11CKamehameha(unsigned short *a0)
{
    a0[103] = g_engfuncs("sprites/kamehamehaa.spr");
    a0[104] = g_engfuncs("sprites/kamehamehab.spr");
    a0[105] = g_engfuncs("sprites/kamehamehaastart.spr");
    a0[106] = g_engfuncs("sprites/kamehamehabstart.spr");
    g_engfuncs("sprites/kamecharge.spr");
    g_engfuncs.pfnPrecacheSound("goku/kamehame.wav");
    g_engfuncs.pfnPrecacheSound("goku/ha.wav");
    g_engfuncs.pfnPrecacheSound("krillin/kamehame.wav");
    g_engfuncs.pfnPrecacheSound("krillin/ha.wav");
    g_engfuncs.pfnPrecacheSound("gohan/kamehame.wav");
    g_engfuncs.pfnPrecacheSound("gohan/ha.wav");
    g_engfuncs.pfnPrecacheSound("cell/kamehame.wav");
    g_engfuncs.pfnPrecacheSound("cell/ha.wav");
    g_engfuncs.pfnPrecacheSound("cell2/kamehame.wav");
    g_engfuncs.pfnPrecacheSound("cell2/ha.wav");
    g_engfuncs.pfnPrecacheSound("weapons/kame_charge.wav");
    g_engfuncs.pfnPrecacheSound("weapons/kamehameha_fire.wav");
    a0[0x66] = g_engfuncs("sprites/kamehamehatrail.spr");
    return CControlledBeam::Precache(a0);
}

