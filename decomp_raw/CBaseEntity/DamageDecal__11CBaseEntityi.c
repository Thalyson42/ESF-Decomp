// DamageDecal__11CBaseEntityi @0x9d9a0 size=92
typedef struct st_49d9a0_0 {
    char padding_0[328];
    unsigned int field_148;
} st_49d9a0_0;

typedef struct st_49d9a0_1 {
    unsigned int field_0;
} st_49d9a0_1;

extern st_49d9a0_1 *g_engfuncs.pfnRandomLong;

unsigned int DamageDecal__11CBaseEntityi(st_49d9a0_0 **a0)
{
    return (*a0->field_148 == 4 ? 0xffffffff : !*a0->field_148 ? g_engfuncs.pfnRandomLong(0, 4) : 35);
}

