// GetDamageDelay__12CPlayerMeleeP12melee_move_s @0x1047c0 size=145
double GetDamageDelay__12CPlayerMeleeP12melee_move_s(int a0, char *a1)
{
    int v0;  // eax
    int v1;  // eax

    if (a1[4] & 1)
    {
        v0 = CPlayerMelee::GetMeleeStrength(a0, a1);
        if (v0 == 1)
            return 0.15000000596046448;
        if (v0 <= 1)
        {
            if (!v0)
                return 0.10000000149011612;
        }
        else
        {
            if (v0 == 2)
                return 0.25;
        }
    }
    else if (a1[5] & 8)
    {
        v1 = CPlayerMelee::GetMeleeStrength(a0, a1);
        if (v1 == 1)
        {
            return 0.25;
        }
        else if (v1 <= 1)
        {
            if (!v1)
                return 0.15000000596046448;
        }
        else
        {
            if (v1 == 2)
                return 0.3499999940395355;
        }
    }
    return 0.0;
}

