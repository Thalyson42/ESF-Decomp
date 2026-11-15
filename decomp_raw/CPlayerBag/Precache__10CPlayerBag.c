// Precache__10CPlayerBag @0xef9a0 size=46
typedef struct st_4ef9a0_0 {
    unsigned int field_0;
} st_4ef9a0_0;

extern st_4ef9a0_0 *g_engfuncs;

int Precache__10CPlayerBag(void)
{
    return g_engfuncs("models/w_sensubeanbag.mdl");
}

