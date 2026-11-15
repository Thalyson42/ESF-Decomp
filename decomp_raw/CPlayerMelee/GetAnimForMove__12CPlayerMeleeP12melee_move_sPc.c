// GetAnimForMove__12CPlayerMeleeP12melee_move_sPc @0x100510 size=65
typedef struct st_500510_0 {
    char padding_0[4];
    int field_4;
} st_500510_0;

int GetAnimForMove__12CPlayerMeleeP12melee_move_sPc(int a0, st_500510_0 *a1, unsigned int a2)
{
    int v1;  // eax
    unsigned int v0;  // [bp-0x20]

    v0 = a2;
    v1 = CPlayerMelee::GetMeleeStrength(a0, a1);
    return CPlayerMelee::GetAnimForMove(a0, a1->field_4, v1);
}

