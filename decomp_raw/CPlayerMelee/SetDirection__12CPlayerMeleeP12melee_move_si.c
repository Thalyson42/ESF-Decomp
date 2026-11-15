// SetDirection__12CPlayerMeleeP12melee_move_si @0x105a40 size=54
typedef struct st_505a40_0 {
    char padding_0[4];
    int field_4;
} st_505a40_0;

st_505a40_0 * SetDirection__12CPlayerMeleeP12melee_move_si(int a0, st_505a40_0 *a1, int a2)
{
    st_505a40_0 *v0;  // eax

    v0 = a1;
    if (v0)
    {
        v0->field_4 = a2;
        v0 = sub_489c10(a0, 6, a2);
    }
    return v0;
}

