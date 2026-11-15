// RemoveOnFire__15CGameTeamMaster @0xd11a0 size=25
typedef struct st_4d11a0_0 {
    char padding_0[416];
    char field_1a0;
} st_4d11a0_0;

int RemoveOnFire__15CGameTeamMaster(st_4d11a0_0 **a0)
{
    return *a0->field_1a0 & 1;
}

