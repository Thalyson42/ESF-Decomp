// __as__7EHANDLEP11CBaseEntity @0x9cdc0 size=54
typedef struct st_49cdc0_1 {
    char padding_0[520];
    struct st_49cdc0_0 *field_208;
} st_49cdc0_1;

typedef struct st_49cdc0_0 {
    char padding_0[4];
    unsigned int field_4;
} st_49cdc0_0;

typedef struct st_49cdc0_2 {
    struct st_49cdc0_0 *field_0;
    unsigned int field_4;
} st_49cdc0_2;

st_49cdc0_1 ** __as__7EHANDLEP11CBaseEntity(st_49cdc0_2 *a0, st_49cdc0_1 **a1)
{
    st_49cdc0_0 *v0;  // eax

    if (!a1)
    {
        a0->field_0 = NULL;
        a0->field_4 = 0;
        return a1;
    }
    v0 = *a1->field_208;
    a0->field_0 = v0;
    if (!v0)
        return a1;
    a0->field_4 = v0->field_4;
    return a1;
}

