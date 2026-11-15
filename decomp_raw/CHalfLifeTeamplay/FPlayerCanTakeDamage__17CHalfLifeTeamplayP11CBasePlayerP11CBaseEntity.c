// FPlayerCanTakeDamage__17CHalfLifeTeamplayP11CBasePlayerP11CBaseEntity @0x128790 size=120
typedef struct st_528790_0 {
    char padding_0[200];
    struct st_528790_1 *field_c8;
} st_528790_0;

typedef struct st_528790_1 {
    unsigned int field_0;
} st_528790_1;

typedef struct st_528790_2 {
    char padding_0[68];
    struct st_528790_0 *field_44;
} st_528790_2;

extern float friendlyfire+12;

unsigned int FPlayerCanTakeDamage__17CHalfLifeTeamplayP11CBasePlayerP11CBaseEntity(st_528790_2 *a0, int a1, int a2)
{
    if (a2 && a0->field_44->field_c8(a0, a1, a2) == 1 && friendlyfire+12 == 0.0f && a2 != a1)
        return 0;
    return CHalfLifeMultiplay::FPlayerCanTakeDamage(a0, a1, a2);
}

