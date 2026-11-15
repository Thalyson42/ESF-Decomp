// __nw__11CBaseEntityUiP9entvars_s @0x9e0b0 size=57
typedef struct st_49e0b0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_49e0b0_0;

typedef struct st_49e0b0_1 {
    unsigned int field_0;
} st_49e0b0_1;

extern st_49e0b0_1 *g_engfuncs.pfnPvAllocEntPrivateData;

int __nw__11CBaseEntityUiP9entvars_s(unsigned int a0, st_49e0b0_0 *a1)
{
    return g_engfuncs.pfnPvAllocEntPrivateData(a1->field_208, a0);
}

