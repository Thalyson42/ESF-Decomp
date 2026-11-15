// Precache__8CKiBlast @0xcc9f0 size=139
typedef struct st_4cc9f0_0 {
    unsigned int field_0;
} st_4cc9f0_0;

extern st_4cc9f0_0 *g_engfuncs;
extern st_4cc9f0_0 *g_engfuncs.pfnPrecacheSound;

int Precache__8CKiBlast(unsigned short *a0)
{
    a0[100] = g_engfuncs("sprites/kiblasta.spr");
    a0[101] = g_engfuncs("sprites/kiblastb.spr");
    a0[0x66] = g_engfuncs("sprites/kiblasttrail.spr");
    g_engfuncs.pfnPrecacheSound("weapons/kiblast.wav");
    return g_engfuncs.pfnPrecacheSound("weapons/kiplosion.wav");
}

