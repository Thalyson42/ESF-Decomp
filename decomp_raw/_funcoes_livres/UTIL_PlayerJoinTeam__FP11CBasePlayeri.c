// UTIL_PlayerJoinTeam__FP11CBasePlayeri @0x180010 size=209
typedef struct st_580010_3 {
    struct st_580010_4 *field_0;
    char padding_4[1944];
    unsigned int field_79c;
} st_580010_3;

typedef struct st_580010_4 {
    unsigned int field_0;
    char padding_4[424];
    unsigned int field_1ac;
} st_580010_4;

typedef struct st_580010_1 {
    unsigned int field_0;
} st_580010_1;

typedef struct st_580010_0 {
    char padding_0[32];
    struct st_580010_1 *field_20;
    char padding_24[240];
    struct st_580010_1 *field_114;
} st_580010_0;

typedef struct st_580010_5 {
    float field_0;
    char padding_4[424];
    unsigned int field_1ac;
} st_580010_5;

typedef struct st_580010_2 {
    char padding_0[68];
    struct st_580010_0 *field_44;
} st_580010_2;

extern st_580010_2 *g_pGameRules;
extern st_580010_5 *gpGlobals;

unsigned int * UTIL_PlayerJoinTeam__FP11CBasePlayeri(st_580010_3 *a0, unsigned int a1)
{
    unsigned int *v0;  // eax

    v0 = g_pGameRules->field_44->field_20(g_pGameRules);
    if (!v0)
        return v0;
    if (*(float *)&a0->field_79c + 10.0 >= gpGlobals->field_0 && a0->field_0->field_1ac)
        return a0->field_0;
    if (a1 == 1)
    {
        g_pGameRules->field_44->field_114(g_pGameRules, a0, "Good");
    }
    else if (a1 == 2)
    {
        g_pGameRules->field_44->field_114(g_pGameRules, a0, "Evil");
    }
    *(float *)&a0->field_79c = gpGlobals->field_0;
    return gpGlobals;
}

