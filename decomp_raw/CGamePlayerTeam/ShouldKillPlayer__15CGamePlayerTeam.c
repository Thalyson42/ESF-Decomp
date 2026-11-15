// ShouldKillPlayer__15CGamePlayerTeam @0xd1460 size=23
typedef struct st_4d1460_0 {
    char padding_0[416];
    unsigned int field_1a0;
} st_4d1460_0;

unsigned int ShouldKillPlayer__15CGamePlayerTeam(st_4d1460_0 **a0)
{
    return *a0->field_1a0 >> 1 & 1;
}

