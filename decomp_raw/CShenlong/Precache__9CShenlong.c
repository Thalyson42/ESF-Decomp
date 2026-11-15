// Precache__9CShenlong @0x117fd0 size=96
typedef struct st_517fd0_0 {
    unsigned int field_0;
} st_517fd0_0;

extern st_517fd0_0 *g_engfuncs;
extern st_517fd0_0 *g_6167c4;

int Precache__9CShenlong(void)
{
    g_engfuncs("models/shenlong.mdl");
    g_engfuncs("sprites/shens_eyes.spr");
    g_6167c4("dragon/makewish1.wav");
    return g_6167c4("dragon/grantwish.wav");
}

