// Precache__16CExplodingAttack @0xbaa50 size=75
typedef struct st_4baa50_0 {
    unsigned int field_0;
} st_4baa50_0;

extern unsigned short g_sRockGibs;
extern st_4baa50_0 *g_engfuncs;
extern st_4baa50_0 *g_engfuncs.pfnPrecacheSound;

unsigned int Precache__16CExplodingAttack(void)
{
    unsigned int v1;  // eax

    g_engfuncs.pfnPrecacheSound("weapons/explosion.wav");
    v1 = g_engfuncs("models/rockgibs.mdl");
    g_sRockGibs = v1;
    return v1;
}

