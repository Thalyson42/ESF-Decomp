// SaveTouch__12CTriggerSaveP11CBaseEntity @0x12ece0 size=129
typedef struct st_52ece0_1 {
    char padding_0[160];
    struct st_52ece0_2 *field_a0;
} st_52ece0_1;

typedef struct st_52ece0_0 {
    char padding_0[20];
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[228];
    int field_100;
} st_52ece0_0;

typedef struct st_52ece0_2 {
    unsigned int field_0;
} st_52ece0_2;

typedef struct st_52ece0_3 {
    char padding_0[96];
    struct st_52ece0_1 *field_60;
} st_52ece0_3;

extern st_52ece0_2 *g_engfuncs.pfnServerCommand;

unsigned int SaveTouch__12CTriggerSaveP11CBaseEntity(st_52ece0_0 *a0, st_52ece0_3 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    v0 = UTIL_IsMasterTriggered(a0->field_100, a1);
    if (!v0)
        return v0;
    v1 = a1->field_60->field_a0(a1);
    if (!v1)
        return v1;
    a0->field_14 = 0;
    a0->field_18 = 0;
    UTIL_Remove(a0);
    return g_engfuncs.pfnServerCommand("autosave\n");
}

