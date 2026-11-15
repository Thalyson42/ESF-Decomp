// ShouldFadeOnDeath__12CBaseMonster @0xda6b0 size=95
typedef struct st_4da6b0_0 {
    char padding_0[408];
    unsigned int field_198;
    char padding_19c[5];
    char field_1a1;
} st_4da6b0_0;

typedef struct st_4da6b0_1 {
    unsigned int field_0;
} st_4da6b0_1;

extern st_4da6b0_1 *g_engfuncs.pfnEntOffsetOfPEntity;

unsigned int ShouldFadeOnDeath__12CBaseMonster(st_4da6b0_0 **a0)
{
    unsigned int v0;  // esi

    if (!(*a0->field_1a1 & 2))
    {
        v0 = 0;
        if (!*a0->field_198 || !g_engfuncs.pfnEntOffsetOfPEntity(*a0->field_198))
            v0 = 1;
        if (v0)
            return 0;
    }
    return 1;
}

