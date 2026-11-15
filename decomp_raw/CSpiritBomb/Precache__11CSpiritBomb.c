// Precache__11CSpiritBomb @0x120bb0 size=127
typedef struct st_520bb0_1 {
    char padding_0[220];
    unsigned short field_dc;
} st_520bb0_1;

typedef struct st_520bb0_0 {
    unsigned int field_0;
} st_520bb0_0;

extern st_520bb0_0 *g_engfuncs;
extern st_520bb0_0 *g_engfuncs.pfnPrecacheSound;

int Precache__11CSpiritBomb(st_520bb0_1 *a0)
{
    a0->field_dc = g_engfuncs("sprites/spiritbomb.spr");
    g_engfuncs.pfnPrecacheSound("goku/spiritbomb_shoot.wav");
    g_engfuncs.pfnPrecacheSound("goku/spiritbomb_charge.wav");
    g_engfuncs.pfnPrecacheSound("goku/spiritbomb2_charge.wav");
    return g_engfuncs.pfnPrecacheSound("weapons/spiritbomb_fire.wav");
}

