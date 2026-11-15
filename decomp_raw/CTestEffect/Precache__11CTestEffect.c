// Precache__11CTestEffect @0xb4df0 size=46
typedef struct st_4b4df0_0 {
    unsigned int field_0;
} st_4b4df0_0;

extern st_4b4df0_0 *g_engfuncs;

int Precache__11CTestEffect(void)
{
    return g_engfuncs("sprites/lgtning.spr");
}

