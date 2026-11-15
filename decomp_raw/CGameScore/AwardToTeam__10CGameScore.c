// AwardToTeam__10CGameScore @0xd10c0 size=21
typedef struct st_4d10c0_0 {
    char padding_0[416];
    unsigned int field_1a0;
} st_4d10c0_0;

unsigned int AwardToTeam__10CGameScore(st_4d10c0_0 **a0)
{
    return *a0->field_1a0 & 2;
}

