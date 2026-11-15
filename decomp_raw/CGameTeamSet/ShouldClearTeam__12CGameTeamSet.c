// ShouldClearTeam__12CGameTeamSet @0xd1200 size=23
typedef struct st_4d1200_0 {
    char padding_0[416];
    unsigned int field_1a0;
} st_4d1200_0;

unsigned int ShouldClearTeam__12CGameTeamSet(st_4d1200_0 **a0)
{
    return *a0->field_1a0 >> 1 & 1;
}

