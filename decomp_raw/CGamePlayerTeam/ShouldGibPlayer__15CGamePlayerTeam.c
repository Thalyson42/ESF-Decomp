// ShouldGibPlayer__15CGamePlayerTeam @0xd1480 size=24
typedef struct st_4d1480_0 {
    char padding_0[416];
    unsigned int field_1a0;
} st_4d1480_0;

unsigned int ShouldGibPlayer__15CGamePlayerTeam(st_4d1480_0 **a0)
{
    return *a0->field_1a0 >> 2 & 1;
}

