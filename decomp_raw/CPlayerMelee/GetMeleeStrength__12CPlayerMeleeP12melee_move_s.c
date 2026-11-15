// GetMeleeStrength__12CPlayerMeleeP12melee_move_s @0x1046f0 size=68
unsigned int GetMeleeStrength__12CPlayerMeleeP12melee_move_s(int a0, int a1)
{
    int v0;  // 128

    if (a1)
    {
        CPlayerMelee::GetCmbTime(a0, a1);
        return CPlayerMelee::GetMeleeStrength(a0, v0);
    }
    return 0;
}

