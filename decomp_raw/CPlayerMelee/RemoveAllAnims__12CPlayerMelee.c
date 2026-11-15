// RemoveAllAnims__12CPlayerMelee @0x1009a0 size=100
typedef struct st_5009a0_1 {
    char padding_0[132];
    struct st_5009a0_0 *field_84;
    char padding_88[156];
    struct st_5009a0_2 *field_124;
} st_5009a0_1;

typedef struct st_5009a0_0 {
    char padding_0[368];
    unsigned int field_170;
} st_5009a0_0;

typedef struct st_5009a0_2 {
    struct st_5009a0_0 *field_0;
} st_5009a0_2;

st_5009a0_0 * RemoveAllAnims__12CPlayerMelee(st_5009a0_1 *a0)
{
    st_5009a0_1 *v0;  // esi
    st_5009a0_0 *i;  // eax

    v0 = a0;
    if (v0->field_124 && *(int *)(*(int *)v0->field_124 + 368) == 1)
        return *(int *)v0->field_124;
    i = v0->field_84;
    if (i)
    {
        v0 = v0;
        do
        {
            i = sub_48b460(v0, i);
        } while (i);
    }
    v0->field_84 = NULL;
    return i;
}

