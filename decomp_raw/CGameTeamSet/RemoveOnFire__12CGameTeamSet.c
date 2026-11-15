// RemoveOnFire__12CGameTeamSet @0xd11e0 size=25
typedef struct st_4d11e0_0 {
    char padding_0[416];
    char field_1a0;
} st_4d11e0_0;

int RemoveOnFire__12CGameTeamSet(st_4d11e0_0 **a0)
{
    return *a0->field_1a0 & 1;
}

