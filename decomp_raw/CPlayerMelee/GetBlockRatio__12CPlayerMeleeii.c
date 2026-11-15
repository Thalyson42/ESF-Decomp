// GetBlockRatio__12CPlayerMeleeii @0x104b10 size=62
double GetBlockRatio__12CPlayerMeleeii(unsigned int a0, int a1, int a2)
{
    double v0;  // mm7

    v0 = (double)a1 / (double)a2;
    if (v0 < 0.2)
        v0 = 0.20000000298023224;
    return v0;
}

