// DefaultTouch__15CBasePlayerItemP11CBaseEntity @0x138300 size=175
typedef struct st_538300_0 {
    char padding_0[96];
    struct st_538300_1 *field_60;
    char padding_64[60];
    struct st_538300_1 *field_a0;
} st_538300_0;

typedef struct st_538300_1 {
    unsigned int field_0;
} st_538300_1;

typedef struct st_538300_2 {
    char padding_0[96];
    struct st_538300_0 *field_60;
} st_538300_2;

typedef struct st_538300_3 {
    char padding_0[116];
    struct st_538300_1 *field_74;
} st_538300_3;

typedef struct st_538300_4 {
    char padding_0[68];
    struct st_538300_3 *field_44;
} st_538300_4;

extern st_538300_4 *g_pGameRules;
extern unsigned int gEvilImpulse101;

unsigned int * DefaultTouch__15CBasePlayerItemP11CBaseEntity(st_538300_2 *a0, st_538300_2 *a1)
{
    unsigned int *v0;  // eax

    v0 = a1->field_60->field_a0(a1);
    if (!v0)
    {
        return v0;
    }
    else if (g_pGameRules->field_44->field_74(g_pGameRules, a1, a0))
    {
        if (!a1->field_60->field_60(a1, a0))
            return CBaseDelay::SUB_UseTargets(a0, a1, 3, 0);
        (*(int *)&a0->field_60[1].padding_64[20])(a0, a1);
        return CBaseDelay::SUB_UseTargets(a0, a1, 3, 0);
    }
    else if (gEvilImpulse101)
    {
        return UTIL_Remove(a0);
    }
    else
    {
        return &gEvilImpulse101;
    }
}

