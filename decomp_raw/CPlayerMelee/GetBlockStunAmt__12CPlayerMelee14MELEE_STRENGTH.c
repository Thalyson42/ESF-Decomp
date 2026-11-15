// GetBlockStunAmt__12CPlayerMelee14MELEE_STRENGTH @0x104db0 size=57
unsigned int GetBlockStunAmt__12CPlayerMelee14MELEE_STRENGTH(unsigned int a0, int a1)
{
    unsigned int v0;  // eax

    v0 = 0;
    if (a1 == 1)
    {
        v0 = 1;
    }
    else if (a1 <= 1)
    {
        if (!a1)
            v0 = 0;
    }
    else
    {
        if (a1 == 2)
            v0 = 2;
    }
    return v0;
}

