// ItemTouch__5CItemP11CBaseEntity @0xc8c10 size=270
typedef struct st_4c8c10_0 {
    char padding_0[160];
    struct st_4c8c10_1 *field_a0;
} st_4c8c10_0;

typedef struct st_4c8c10_5 {
    char padding_0[192];
    struct st_4c8c10_1 *field_c0;
    char padding_c4[36];
    struct st_4c8c10_1 *field_e8;
} st_4c8c10_5;

typedef struct st_4c8c10_1 {
    unsigned int field_0;
} st_4c8c10_1;

typedef struct st_4c8c10_2 {
    char padding_0[96];
    struct st_4c8c10_0 *field_60;
} st_4c8c10_2;

typedef struct st_4c8c10_6 {
    char padding_0[20];
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_4c8c10_5 *field_60;
} st_4c8c10_6;

typedef struct st_4c8c10_3 {
    char padding_0[140];
    struct st_4c8c10_1 *field_8c;
    struct st_4c8c10_1 *field_90;
    struct st_4c8c10_1 *field_94;
} st_4c8c10_3;

typedef struct st_4c8c10_4 {
    char padding_0[68];
    struct st_4c8c10_3 *field_44;
} st_4c8c10_4;

extern st_4c8c10_4 *g_pGameRules;
extern unsigned int gEvilImpulse101;

unsigned int * ItemTouch__5CItemP11CBaseEntity(st_4c8c10_6 *a0, st_4c8c10_2 *a1)
{
    unsigned int *v0;  // eax
    unsigned int *v1;  // eax

    v0 = a1->field_60->field_a0(a1);
    if (!v0)
        return v0;
    v1 = g_pGameRules->field_44->field_8c(g_pGameRules, a1, a0);
    if (!v1)
    {
        return v1;
    }
    else if (a0->field_60->field_e8(a0, a1))
    {
        CBaseEntity::SUB_UseTargets(a0, a1, 3, 0);
        a0->field_14 = 0;
        a0->field_18 = 0;
        g_pGameRules->field_44->field_90(g_pGameRules, a1, a0);
        return (g_pGameRules->field_44->field_94(g_pGameRules, a0) == 5 ? a0->field_60->field_c0(a0) : UTIL_Remove(a0));
    }
    else
    {
        if (!gEvilImpulse101)
            return &gEvilImpulse101;
        UTIL_Remove(a0);
        return &gEvilImpulse101;
    }
}

