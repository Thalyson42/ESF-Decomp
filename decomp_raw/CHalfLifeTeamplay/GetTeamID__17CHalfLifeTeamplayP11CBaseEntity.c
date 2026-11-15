// GetTeamID__17CHalfLifeTeamplayP11CBaseEntity @0x1289c0 size=61
typedef struct st_5289c0_0 {
    char padding_0[168];
    struct st_5289c0_1 *field_a8;
} st_5289c0_0;

typedef struct st_5289c0_1 {
    unsigned int field_0;
} st_5289c0_1;

typedef struct st_5289c0_2 {
    unsigned int field_0;
    char padding_4[92];
    struct st_5289c0_0 *field_60;
} st_5289c0_2;

extern char g_5a9a9c;

int GetTeamID__17CHalfLifeTeamplayP11CBaseEntity(unsigned int a0, st_5289c0_2 *a1)
{
    if (a1 && a1->field_0)
        return a1->field_60->field_a8(a1);
    return &g_5a9a9c;
}

