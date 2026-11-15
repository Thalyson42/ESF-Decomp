// TeamMatch__15CGameTeamMasterP11CBaseEntity @0xd0300 size=110
typedef struct st_4d0300_1 {
    char padding_0[168];
    struct st_4d0300_2 *field_a8;
} st_4d0300_1;

typedef struct st_4d0300_2 {
    unsigned int field_0;
} st_4d0300_2;

typedef struct st_4d0300_0 {
    char padding_0[416];
    char field_1a0;
} st_4d0300_0;

typedef struct st_4d0300_4 {
    char padding_0[96];
    struct st_4d0300_1 *field_60;
} st_4d0300_4;

typedef struct st_4d0300_3 {
    struct st_4d0300_0 *field_0;
    char padding_4[92];
    struct st_4d0300_1 *field_60;
    char padding_64[4];
    int field_68;
} st_4d0300_3;

unsigned int TeamMatch__15CGameTeamMasterP11CBaseEntity(st_4d0300_3 *a0, st_4d0300_4 *a1)
{
    unsigned int v0;  // [bp-0x38]

    if (a0->field_68 < 0 && a0->field_0->field_1a0 & 2)
        return 1;
    if (!a1)
        return 0;
    v0 = a0->field_60->field_a8(a0);
    return sub_48c400(a1->field_60->field_a8(a1));
}

