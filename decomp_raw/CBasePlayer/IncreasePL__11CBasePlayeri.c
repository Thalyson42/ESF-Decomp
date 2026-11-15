// IncreasePL__11CBasePlayeri @0xf2c90 size=71
int IncreasePL__11CBasePlayeri(unsigned int *a0, unsigned int a1)
{
    CBasePlayer::SetPowerLevel(a0, a1 + a0[465]);
    return CBasePlayer::SetMaxPowerLevel(a0, a1 + a0[466]);
}

