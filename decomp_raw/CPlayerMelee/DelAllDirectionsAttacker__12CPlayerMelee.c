// DelAllDirectionsAttacker__12CPlayerMelee @0x105ef0 size=97
typedef struct st_505ef0_0 {
    char padding_0[28];
    unsigned int field_1c;
} st_505ef0_0;

typedef struct st_505ef0_1 {
    char padding_0[200];
    unsigned int field_c8;
    char padding_cc[124];
    struct st_505ef0_0 *field_148;
} st_505ef0_1;

unsigned int DelAllDirectionsAttacker__12CPlayerMelee(st_505ef0_1 *a0)
{
    st_505ef0_0 *v0;  // edx
    unsigned int v1;  // eax

    if (a0->field_148)
    {
        do
        {
            v0 = a0->field_148;
            a0->field_148 = v0->field_1c;
            v1 = __builtin_delete(v0);
        } while (a0->field_148);
    }
    a0->field_c8 = 0;
    a0->field_148 = NULL;
    return v1;
}

