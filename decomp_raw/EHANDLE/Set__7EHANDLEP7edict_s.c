// Set__7EHANDLEP7edict_s @0x9cd60 size=27
typedef struct st_49cd60_0 {
    char padding_0[4];
    unsigned int field_4;
} st_49cd60_0;

typedef struct st_49cd60_1 {
    struct st_49cd60_0 *field_0;
    unsigned int field_4;
} st_49cd60_1;

st_49cd60_0 * Set__7EHANDLEP7edict_s(st_49cd60_1 *a0, st_49cd60_0 *a1)
{
    a0->field_0 = a1;
    if (a1)
        a0->field_4 = a1->field_4;
    return a1;
}

