// PlaySound__19CMomentaryRotButton @0x98120 size=90
typedef struct st_498120_0 {
    char padding_0[488];
    unsigned int field_1e8;
    char padding_1ec[28];
    int field_208;
} st_498120_0;

typedef struct st_498120_1 {
    char padding_0[152];
    unsigned int field_98;
} st_498120_1;

extern st_498120_1 *gpGlobals;

int PlaySound__19CMomentaryRotButton(st_498120_0 **a0)
{
    return sub_489390(*a0->field_208, 2, *a0->field_1e8 + gpGlobals->field_98, 0x3f800000, 0.800000011920929f, 0, 100);
}

