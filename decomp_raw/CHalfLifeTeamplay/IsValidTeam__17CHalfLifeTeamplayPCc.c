// IsValidTeam__17CHalfLifeTeamplayPCc @0x128ab0 size=76
typedef struct st_528ab0_0 {
    char padding_0[204];
    struct st_528ab0_1 *field_cc;
} st_528ab0_0;

typedef struct st_528ab0_1 {
    unsigned int field_0;
} st_528ab0_1;

typedef struct st_528ab0_2 {
    char padding_0[68];
    struct st_528ab0_0 *field_44;
    char padding_48[24];
    unsigned int field_60;
} st_528ab0_2;

unsigned int IsValidTeam__17CHalfLifeTeamplayPCc(st_528ab0_2 *a0, unsigned int a1)
{
    return (!a0->field_60 ? 1 : a0->field_44->field_cc(a0, a1) != 0xffffffff);
}

