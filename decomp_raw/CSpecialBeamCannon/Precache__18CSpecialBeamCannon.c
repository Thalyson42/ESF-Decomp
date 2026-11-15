// Precache__18CSpecialBeamCannon @0x11fa60 size=287
typedef struct st_51fa60_0 {
    unsigned int field_0;
} st_51fa60_0;

extern st_51fa60_0 *g_engfuncs;
extern st_51fa60_0 *g_engfuncs.pfnPrecacheSound;

unsigned int Precache__18CSpecialBeamCannon(unsigned short *a0)
{
    unsigned int v0;  // eax

    g_engfuncs.pfnPrecacheSound("piccolo/specialbeamcannon.wav");
    g_engfuncs.pfnPrecacheSound("cell/specialbeamcannon.wav");
    g_engfuncs.pfnPrecacheSound("cell2/specialbeamcannon.wav");
    g_engfuncs.pfnPrecacheSound("weapons/sbc_fire.wav");
    g_engfuncs.pfnPrecacheSound("weapons/sbc_charge.wav");
    g_engfuncs("sprites/sbccharge.spr");
    g_engfuncs("sprites/null.spr");
    a0[236] = g_engfuncs("sprites/sbctrail.spr");
    a0[237] = g_engfuncs("sprites/sbcorbittrail.spr");
    a0[0xee] = g_engfuncs("sprites/sbca.spr");
    a0[239] = g_engfuncs("sprites/sbcb.spr");
    a0[240] = g_engfuncs("sprites/sbcorbita.spr");
    v0 = g_engfuncs("sprites/sbcorbitb.spr");
    a0[241] = v0;
    return v0;
}

