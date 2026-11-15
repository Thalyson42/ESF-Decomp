// TargetTeamName__15CGamePlayerTeamPCc @0xd0ee0 size=130
typedef struct st_4d0ee0_0 {
    char padding_0[168];
    struct st_4d0ee0_1 *field_a8;
} st_4d0ee0_0;

typedef struct st_4d0ee0_1 {
    unsigned int field_0;
} st_4d0ee0_1;

typedef struct st_4d0ee0_2 {
    struct st_4d0ee0_1 *field_0;
    char padding_4[92];
    struct st_4d0ee0_0 *field_60;
} st_4d0ee0_2;

typedef struct st_4d0ee0_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4d0ee0_3;

extern st_4d0ee0_3 *gpGlobals;

unsigned int TargetTeamName__15CGamePlayerTeamPCc(unsigned int a0, int a1)
{
    st_4d0ee0_2 *v0;  // edi

    v0 = NULL;
    while (1)
    {
        v0 = UTIL_FindEntityByTargetname(v0, a1);
        if (!v0)
        {
            return 0;
        }
        else if (!strcmp@GLIBC_2.0(*(int *)v0->field_0 + gpGlobals->field_98, "game_team_master"))
        {
            return v0->field_60->field_a8(v0);
        }
    }
}

