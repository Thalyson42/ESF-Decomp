// ContinueBlockStun__12CPlayerMeleeRi14MELEE_STRENGTHT2 @0x104df0 size=133
unsigned int ContinueBlockStun__12CPlayerMeleeRi14MELEE_STRENGTHT2(int a0, unsigned int *a1, unsigned int a2, int a3)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    v0 = 1;
    if (a3 != 1)
    {
        if (a3 <= 1)
        {
            if (!a3)
                return 1;
        }
        else
        {
            if (a3 == 2)
                v0 = 0;
        }
LABEL_504e62:
        if (v0)
            return v0;
    }
    else
    {
        if (a2 == 2)
        {
            v1 = CPlayerMelee::GetBlockStunAmt(a0, 2);
            if (*a1 == v1)
            {
                *a1 = 0;
                return 1;
            }
        }
        else if (!(a2 == 1))
        {
            goto LABEL_504e62;
        }
        v0 = 0;
    }
    *a1 = 0;
    return v0;
}

