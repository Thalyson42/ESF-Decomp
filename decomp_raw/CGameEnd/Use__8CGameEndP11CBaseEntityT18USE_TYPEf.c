// Use__8CGameEndP11CBaseEntityT18USE_TYPEf @0xcf310 size=72
typedef struct st_4cf310_1 {
    unsigned int field_0;
} st_4cf310_1;

typedef struct st_4cf310_0 {
    char padding_0[236];
    struct st_4cf310_1 *field_ec;
} st_4cf310_0;

typedef struct st_4cf310_2 {
    char padding_0[68];
    struct st_4cf310_0 *field_44;
} st_4cf310_2;

extern st_4cf310_2 *g_pGameRules;

unsigned int Use__8CGameEndP11CBaseEntityT18USE_TYPEf(int a0, int a1)
{
    unsigned int v0;  // eax

    v0 = sub_48aa30(a0, a1);
    if (!v0)
        return v0;
    return g_pGameRules->field_44->field_ec(g_pGameRules);
}

