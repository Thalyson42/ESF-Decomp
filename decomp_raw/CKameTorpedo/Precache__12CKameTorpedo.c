// Precache__12CKameTorpedo @0xca540 size=121
typedef struct st_4ca540_0 {
    unsigned int field_0;
} st_4ca540_0;

extern st_4ca540_0 *g_engfuncs;
extern st_4ca540_0 *g_engfuncs.pfnPrecacheSound;

int Precache__12CKameTorpedo(unsigned short *a0)
{
    a0[246] = g_engfuncs("sprites/kamehamehaa.spr");
    a0[247] = g_engfuncs("sprites/kamehamehab.spr");
    a0[248] = g_engfuncs("sprites/kamehamehatrail.spr");
    return g_engfuncs.pfnPrecacheSound("weapons/kame_charge.wav");
}

