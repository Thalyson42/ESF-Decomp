// GetMoveCount__12CPlayerMeleeP12melee_move_s @0x106130 size=75
typedef struct st_506130_0 {
    char padding_0[4];
    int field_4;
    char padding_8[20];
    struct st_506130_0 *field_1c;
} st_506130_0;

unsigned int GetMoveCount__12CPlayerMeleeP12melee_move_s(int a0, st_506130_0 *a1)
{
    unsigned int v0;  // edi
    st_506130_0 *v1;  // esi
    st_506130_0 *v2;  // esi

    v0 = 0;
    v1 = a1;
    if (!v1)
        return 0;
    do
    {
        v2 = v1;
        if (!CPlayerMelee::IsDirectionless(a0, v2->field_4))
            v0 += 1;
    } while ((v1 = v2->field_1c, v2->field_1c));
    return v0;
}

