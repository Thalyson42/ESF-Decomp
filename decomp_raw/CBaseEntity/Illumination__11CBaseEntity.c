// Illumination__11CBaseEntity @0x9e500 size=52
typedef struct st_49e500_0 {
    char padding_0[520];
    unsigned int field_208;
} st_49e500_0;

typedef struct st_49e500_1 {
    unsigned int field_0;
} st_49e500_1;

extern st_49e500_1 *g_engfuncs.pfnGetEntityIllum;

int Illumination__11CBaseEntity(st_49e500_0 **a0)
{
    return g_engfuncs.pfnGetEntityIllum(*a0->field_208);
}

