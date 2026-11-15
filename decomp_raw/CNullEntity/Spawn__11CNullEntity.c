// Spawn__11CNullEntity @0x121f40 size=52
typedef struct st_521f40_0 {
    char padding_0[520];
    unsigned int field_208;
} st_521f40_0;

typedef struct st_521f40_1 {
    unsigned int field_0;
} st_521f40_1;

extern st_521f40_1 *g_engfuncs.pfnRemoveEntity;

int Spawn__11CNullEntity(st_521f40_0 **a0)
{
    return g_engfuncs.pfnRemoveEntity(*a0->field_208);
}

