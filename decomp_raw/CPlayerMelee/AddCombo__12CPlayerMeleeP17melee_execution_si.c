// AddCombo__12CPlayerMeleeP17melee_execution_si @0x105230 size=82
typedef struct st_505230_1 {
    char padding_0[36];
    int field_24;
    char padding_28[816];
    struct st_505230_0 *field_358;
} st_505230_1;

typedef struct st_505230_0 {
    char padding_0[856];
    struct st_505230_0 *field_358;
    struct st_505230_1 *field_35c;
} st_505230_0;

st_505230_0 * AddCombo__12CPlayerMeleeP17melee_execution_si(int a0, st_505230_1 *a1)
{
    st_505230_0 *v0;  // edx
    st_505230_0 *v1;  // eax

    v0 = sub_48d910(a0, a1->field_24);
    if (!v0)
    {
        return v0;
    }
    else if (a1)
    {
        v1 = a1->field_358;
        v0->field_358 = v1;
        a1->field_358 = v0;
        v0->field_35c = a1;
        return v1;
    }
    else
    {
        return v0;
    }
}

