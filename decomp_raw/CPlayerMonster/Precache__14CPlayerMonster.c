// Precache__14CPlayerMonster @0x10cb90 size=46
typedef struct st_50cb90_0 {
    unsigned int field_0;
} st_50cb90_0;

extern st_50cb90_0 *g_engfuncs;

int Precache__14CPlayerMonster(void)
{
    return g_engfuncs("models/player.mdl");
}

