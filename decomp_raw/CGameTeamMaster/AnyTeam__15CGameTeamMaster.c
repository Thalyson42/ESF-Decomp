// AnyTeam__15CGameTeamMaster @0xd11c0 size=23
typedef struct st_4d11c0_0 {
    char padding_0[416];
    unsigned int field_1a0;
} st_4d11c0_0;

unsigned int AnyTeam__15CGameTeamMaster(st_4d11c0_0 **a0)
{
    return *a0->field_1a0 >> 1 & 1;
}

