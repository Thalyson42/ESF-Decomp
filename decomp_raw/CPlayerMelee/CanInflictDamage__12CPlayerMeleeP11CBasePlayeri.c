// CanInflictDamage__12CPlayerMeleeP11CBasePlayeri @0x103390 size=57

unsigned int CanInflictDamage__12CPlayerMeleeP11CBasePlayeri(unsigned int *a0, unsigned int a1, unsigned int a2)
{
    if ((a0[15] || a0[67]) && a1 != a0[72] && a2 & 0x800000)
        return 0;
    return 1;
}

