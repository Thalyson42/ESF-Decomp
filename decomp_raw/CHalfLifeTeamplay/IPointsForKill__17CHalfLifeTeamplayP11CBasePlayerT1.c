// IPointsForKill__17CHalfLifeTeamplayP11CBasePlayerT1 @0x128960 size=94
typedef struct st_528960_0 {
    char padding_0[200];
    struct st_528960_1 *field_c8;
} st_528960_0;

typedef struct st_528960_1 {
    unsigned int field_0;
} st_528960_1;

typedef struct st_528960_2 {
    char padding_0[68];
    struct st_528960_0 *field_44;
} st_528960_2;

unsigned int IPointsForKill__17CHalfLifeTeamplayP11CBasePlayerT1(st_528960_2 *a0, unsigned int a1, unsigned int a2)
{
    if (!a2)
        return 0;
    if (!a1 || a1 == a2 || a0->field_44->field_c8(a0, a1, a2) != 1)
        return 1;
    return 0xffffffff;
    return 1;
}

