// Touch__10CPlayerBagP11CBaseEntity @0xefa70 size=81
typedef struct st_4efa70_0 {
    char padding_0[160];
    struct st_4efa70_1 *field_a0;
} st_4efa70_0;

typedef struct st_4efa70_1 {
    unsigned int field_0;
} st_4efa70_1;

typedef struct st_4efa70_2 {
    char padding_0[96];
    struct st_4efa70_0 *field_60;
} st_4efa70_2;

typedef struct st_4efa70_3 {
    char padding_0[100];
    int field_64;
} st_4efa70_3;

unsigned int Touch__10CPlayerBagP11CBaseEntity(st_4efa70_3 *a0, st_4efa70_2 *a1)
{
    unsigned int v0;  // eax

    v0 = a1->field_60->field_a0(a1);
    if (!v0)
        return v0;
    CBasePlayer::GiveBean(a1, a0->field_64);
    return UTIL_Remove(a0);
}

