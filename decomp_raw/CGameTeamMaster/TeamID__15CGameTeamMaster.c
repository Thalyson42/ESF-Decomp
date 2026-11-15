// TeamID__15CGameTeamMaster @0xd02b0 size=79
typedef struct st_4d02b0_0 {
    char padding_0[104];
    int field_68;
} st_4d02b0_0;

typedef struct st_4d02b0_2 {
    unsigned int field_0;
} st_4d02b0_2;

typedef struct st_4d02b0_1 {
    char padding_0[208];
    struct st_4d02b0_2 *field_d0;
} st_4d02b0_1;

typedef struct st_4d02b0_3 {
    char padding_0[68];
    struct st_4d02b0_1 *field_44;
} st_4d02b0_3;

extern unsigned int g_5a16a4;
extern st_4d02b0_3 *g_pGameRules;

unsigned int TeamID__15CGameTeamMaster(st_4d02b0_0 *a0)
{
    return (a0->field_68 < 0 ? &g_5a16a4 : g_pGameRules->field_44->field_d0(g_pGameRules, a0->field_68));
}

