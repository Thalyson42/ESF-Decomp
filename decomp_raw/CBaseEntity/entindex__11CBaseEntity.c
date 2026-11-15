// entindex__11CBaseEntity @0x9e380 size=55
typedef struct st_49e380_0 {
    char padding_0[520];
    unsigned int field_208;
} st_49e380_0;

typedef struct st_49e380_1 {
    unsigned int field_0;
} st_49e380_1;

extern st_49e380_1 *g_engfuncs.pfnIndexOfEdict;

int entindex__11CBaseEntity(st_49e380_0 **a0)
{
    return g_engfuncs.pfnIndexOfEdict(*a0->field_208);
}

