// Precache__10CGallitGun @0xc4010 size=276
typedef struct st_4c4010_0 {
    unsigned int field_0;
} st_4c4010_0;

extern st_4c4010_0 *g_engfuncs;
extern st_4c4010_0 *g_engfuncs.pfnPrecacheSound;

int Precache__10CGallitGun(unsigned short *a0)
{
    a0[103] = g_engfuncs("sprites/gallitguna.spr");
    a0[104] = g_engfuncs("sprites/gallitgunb.spr");
    a0[105] = g_engfuncs("sprites/gallitgunastart.spr");
    a0[106] = g_engfuncs("sprites/gallitgunbstart.spr");
    g_engfuncs("sprites/ggunaura.spr");
    g_engfuncs.pfnPrecacheSound("cell/gallitgun.wav");
    g_engfuncs.pfnPrecacheSound("cell2/gallitgun.wav");
    g_engfuncs.pfnPrecacheSound("vegeta/gallitgun.wav");
    g_engfuncs.pfnPrecacheSound("cell/gallitgunfire.wav");
    g_engfuncs.pfnPrecacheSound("cell2/gallitgunfire.wav");
    g_engfuncs.pfnPrecacheSound("vegeta/gallitgunfire.wav");
    a0[0x66] = g_engfuncs("sprites/gallitguntrail.spr");
    return CControlledBeam::Precache(a0);
}

