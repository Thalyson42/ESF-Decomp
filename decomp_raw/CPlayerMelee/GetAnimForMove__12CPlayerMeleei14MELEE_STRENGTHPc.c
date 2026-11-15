// GetAnimForMove__12CPlayerMeleei14MELEE_STRENGTHPc @0x100560 size=250
unsigned int GetAnimForMove__12CPlayerMeleei14MELEE_STRENGTHPc(unsigned int a0, unsigned int a1, int a2, char *a3)
{
    int v0;  // eax
    unsigned int v1;  // eax
    int v2;  // eax

    *a3 = 0;
    if (a1 & 8)
    {
        v0 = "top_";
    }
    else if (a1 & 16)
    {
        v0 = "bottom_";
    }
    else if ((char)a1 < 0)
    {
        v0 = "left_";
    }
    else
    {
        if (!(a1 & 0x100))
        {
            v1 = _INSERT(a1, 0, 0);
            *a3 = 0;
            return v1;
        }
        v0 = "right_";
    }
    sub_48c150(a3, v0);
    if (a2 == 1)
    {
        v2 = "medium_";
    }
    else if (a2 <= 1 && !a2)
    {
        v2 = "weak_";
    }
    else
    {
        v2 = "strong_";
    }
    sub_48c150(a3, v2);
    return (!(a1 & 0x800) ? sub_48c150(a3, "attack1") : sub_48c150(a3, "attack2"));
}

