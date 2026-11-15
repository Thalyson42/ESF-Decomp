// GetMoveCountFinishedOnly__12CPlayerMeleeP12melee_move_s @0x1060d0 size=81
typedef struct st_5060d0_0 {
    char padding_0[4];
    int field_4;
    char padding_8[8];
    unsigned int field_10;
    char padding_14[8];
    struct st_5060d0_0 *field_1c;
} st_5060d0_0;

unsigned int GetMoveCountFinishedOnly__12CPlayerMeleeP12melee_move_s(int a0, st_5060d0_0 *a1)
{
    unsigned int v0;  // edi
    st_5060d0_0 *v1;  // esi
    st_5060d0_0 *v2;  // esi

    v0 = 0;
    v1 = a1;
    if (!v1)
        return 0;
    do
    {
        v2 = v1;
        if (!sub_48cbe0(a0, v2->field_4) && v2->field_10)
            v0 += 1;
    } while ((v1 = v2->field_1c, v2->field_1c));
    return v0;
}

