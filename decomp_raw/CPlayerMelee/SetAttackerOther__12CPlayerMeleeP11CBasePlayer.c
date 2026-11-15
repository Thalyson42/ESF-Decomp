// SetAttackerOther__12CPlayerMeleeP11CBasePlayer @0xffb10 size=46
unsigned int SetAttackerOther__12CPlayerMeleeP11CBasePlayer(unsigned int *a0, unsigned int a1)
{
    a0[75] = a1;
    if (!a1)
    {
        a0[77] = 0;
        return a1;
    }
    a0[77] = a1 + 896;
    return a1 + 896;
}

