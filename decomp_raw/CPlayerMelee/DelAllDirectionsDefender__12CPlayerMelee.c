// DelAllDirectionsDefender__12CPlayerMelee @0x105f60 size=97
typedef struct st_505f60_0 {
    char padding_0[28];
    unsigned int field_1c;
} st_505f60_0;

typedef struct st_505f60_1 {
    char padding_0[204];
    unsigned int field_cc;
    char padding_d0[124];
    struct st_505f60_0 *field_14c;
} st_505f60_1;

unsigned int DelAllDirectionsDefender__12CPlayerMelee(st_505f60_1 *a0)
{
    st_505f60_0 *v0;  // edx
    unsigned int v1;  // eax

    if (a0->field_14c)
    {
        do
        {
            v0 = a0->field_14c;
            a0->field_14c = v0->field_1c;
            v1 = sub_48d4e0(v0);
        } while (a0->field_14c);
    }
    a0->field_cc = 0;
    a0->field_14c = NULL;
    return v1;
}

