// Precache__12CCandyAttack @0x9a5f0 size=81
typedef struct st_49a5f0_0 {
    unsigned int field_0;
} st_49a5f0_0;

extern st_49a5f0_0 *g_engfuncs;
extern st_49a5f0_0 *g_6167c4;

int Precache__12CCandyAttack(void)
{
    g_engfuncs("sprites/candystart.spr");
    g_engfuncs("sprites/candytrail.spr");
    return g_6167c4("weapons/candyattack.wav");
}

