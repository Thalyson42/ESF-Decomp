// Precache__10CDeathBall @0xa9140 size=109
typedef struct st_4a9140_1 {
    char padding_0[472];
    unsigned short field_1d8;
} st_4a9140_1;

typedef struct st_4a9140_0 {
    unsigned int field_0;
} st_4a9140_0;

extern st_4a9140_0 *g_engfuncs;
extern st_4a9140_0 *g_engfuncs.pfnPrecacheSound;

int Precache__10CDeathBall(st_4a9140_1 *a0)
{
    a0->field_1d8 = g_engfuncs("sprites/deathball.spr");
    g_engfuncs.pfnPrecacheSound("weapons/deathball_fire.wav");
    g_engfuncs.pfnPrecacheSound("weapons/deathball_charge.wav");
    return g_engfuncs.pfnPrecacheSound("frieza/deathball.wav");
}

