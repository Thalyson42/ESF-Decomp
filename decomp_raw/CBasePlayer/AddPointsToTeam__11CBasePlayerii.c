// AddPointsToTeam__11CBasePlayerii @0xf8e50 size=175
typedef struct st_4f8e50_0 {
    char padding_0[144];
    unsigned int field_90;
} st_4f8e50_0;

typedef struct st_4f8e50_2 {
    unsigned int field_0;
} st_4f8e50_2;

typedef struct st_4f8e50_1 {
    char padding_0[520];
    unsigned int field_208;
} st_4f8e50_1;

typedef struct st_4f8e50_3 {
    char padding_0[88];
    struct st_4f8e50_2 *field_58;
} st_4f8e50_3;

typedef struct st_4f8e50_4 {
    char padding_0[96];
    struct st_4f8e50_3 *field_60;
} st_4f8e50_4;

typedef struct st_4f8e50_5 {
    char padding_0[200];
    struct st_4f8e50_2 *field_c8;
} st_4f8e50_5;

typedef struct st_4f8e50_6 {
    char padding_0[68];
    struct st_4f8e50_5 *field_44;
} st_4f8e50_6;

extern st_4f8e50_6 *g_pGameRules;
extern st_4f8e50_2 *g_6168dc;
extern st_4f8e50_0 *gpGlobals;

st_4f8e50_0 * AddPointsToTeam__11CBasePlayerii(st_4f8e50_1 **a0, unsigned int a1, unsigned int a2)
{
    int iter;  // edi
    st_4f8e50_4 *v2;  // esi
    int v0;  // [bp-0x8]

    v0 = g_6168dc(*a0->field_208);
    iter = 1;
    while (iter <= (int)gpGlobals->field_90)
    {
        v2 = sub_48a500(iter);
        if (!v2)
        {
            iter += 1;
        }
        else if (iter == v0)
        {
            iter += 1;
        }
        else if (g_pGameRules->field_44->field_c8(g_pGameRules, a0, v2) == 1)
        {
            v2->field_60->field_58(v2, a1, a2);
            iter += 1;
        }
        else
        {
            iter += 1;
        }
    }
    return gpGlobals;
}

