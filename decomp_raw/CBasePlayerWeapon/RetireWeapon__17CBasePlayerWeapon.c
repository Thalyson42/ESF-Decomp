// RetireWeapon__17CBasePlayerWeapon @0x138ff0 size=98
typedef struct st_538ff0_1 {
    char padding_0[128];
    struct st_538ff0_2 *field_80;
} st_538ff0_1;

typedef struct st_538ff0_0 {
    char padding_0[188];
    unsigned int field_bc;
    unsigned int field_c0;
} st_538ff0_0;

typedef struct st_538ff0_2 {
    struct st_538ff0_0 *field_0;
} st_538ff0_2;

typedef struct st_538ff0_4 {
    unsigned int field_0;
} st_538ff0_4;

typedef struct st_538ff0_3 {
    char padding_0[20];
    struct st_538ff0_4 *field_14;
} st_538ff0_3;

typedef struct st_538ff0_5 {
    char padding_0[68];
    struct st_538ff0_3 *field_44;
} st_538ff0_5;

extern st_538ff0_5 *g_pGameRules;

int RetireWeapon__17CBasePlayerWeapon(st_538ff0_1 *a0)
{
    *(unsigned int *)(*(int *)a0->field_80 + 188) = 0;
    *(unsigned int *)(*(int *)a0->field_80 + 192) = 0;
    return g_pGameRules->field_44->field_14(g_pGameRules, a0->field_80, a0);
}

